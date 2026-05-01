/*
 * XREFs of ??_ECDesktopPositioner@@UEAAPEAXI@Z @ 0x18045A328
 * Callers:
 *     ??_ECDesktopPositioner@@WCI@EAAPEAXI@Z @ 0x180170000 (--_ECDesktopPositioner@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CDesktopPositioner@@UEAA@XZ @ 0x180459860 (--1CDesktopPositioner@@UEAA@XZ.c)
 */

CDesktopPositioner *__fastcall CDesktopPositioner::`vector deleting destructor'(CDesktopPositioner *this, char a2)
{
  CDesktopPositioner::~CDesktopPositioner(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x198);
  return this;
}
