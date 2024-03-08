# Maintainer: Antonio Rojas <arojas@archlinux.org>
# Contributor: Martchus <martchus@gmx.net>

pkgname=qt6ct
pkgver=0.9
pkgrel=5
pkgdesc='Qt 6 Configuration Utility'
arch=(x86_64)
url='https://github.com/trialuser02/qt6ct'
license=(BSD)
depends=(gcc-libs
         glibc
         qt6-base
         qt6-svg)
makedepends=(cmake
             qt6-tools)
source=(https://github.com/trialuser02/qt6ct/releases/download/$pkgver/qt6ct-$pkgver.tar.xz)
sha256sums=('0a9f00db7f9c2003b33fad1715cbf2a483bf50a99079b97bf8e5d0bdbd3392cd')

build() {
  cmake -B build -S $pkgname-$pkgver \
    -DCMAKE_INSTALL_PREFIX=/usr
  cmake --build build
}

package() {
  DESTDIR="$pkgdir" cmake --install build
  install -Dm644 $pkgname-$pkgver/COPYING "$pkgdir"/usr/share/licenses/$pkgname/LICENSE
}
