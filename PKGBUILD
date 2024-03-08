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

build() {
  cd ..
  cmake -B build -DCMAKE_INSTALL_PREFIX=/usr
  cmake --build build
}

package() {
  cd ..
  DESTDIR="$pkgdir" cmake --install build
  install -Dm644 COPYING "$pkgdir"/usr/share/licenses/$pkgname/LICENSE
}
