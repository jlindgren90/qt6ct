/*
 * Copyright (c) 2020-2024, Ilya Kotov <forkotov02@ya.ru>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef QT6CTPROXYSTYLE_H
#define QT6CTPROXYSTYLE_H

#include <QProxyStyle>
#include "qt6ct.h"

class Qt6CTProxyStyle : public QProxyStyle, public Qt6CT::StyleInstance
{
    Q_OBJECT
public:
    explicit Qt6CTProxyStyle();
    void reloadSettings() override;

    virtual ~Qt6CTProxyStyle();

    void drawPrimitive(PrimitiveElement elem, const QStyleOption * option,
                       QPainter * painter, const QWidget * widget) const override;
    int pixelMetric(PixelMetric metric, const QStyleOption *option, const QWidget *widget) const override;
    QIcon standardIcon(StandardPixmap standardIcon, const QStyleOption *option, const QWidget *widget) const override;
    int styleHint(StyleHint hint, const QStyleOption *option, const QWidget *widget, QStyleHintReturn *returnData) const override;

private:
    QString m_style;
    int m_dialogButtonsHaveIcons;
    int m_activateItemOnSingleClick;
    int m_underlineShortcut;

};

#endif // QT6CTPROXYSTYLE_H
