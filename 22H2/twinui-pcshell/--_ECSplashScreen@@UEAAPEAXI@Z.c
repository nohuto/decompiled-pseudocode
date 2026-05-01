/*
 * XREFs of ??_ECSplashScreen@@UEAAPEAXI@Z @ 0x1801FAD30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CSplashScreen@@UEAA@XZ @ 0x1801FABEC (--1CSplashScreen@@UEAA@XZ.c)
 */

CSplashScreen *__fastcall CSplashScreen::`vector deleting destructor'(CSplashScreen *this, char a2)
{
  CSplashScreen::~CSplashScreen(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xB0);
  return this;
}
