/*
 * XREFs of ??_ECVirtualDesktopComponent@@UEAAPEAXI@Z @ 0x18049F3DC
 * Callers:
 *     ??_ECVirtualDesktopComponent@@WCI@EAAPEAXI@Z @ 0x180170FA0 (--_ECVirtualDesktopComponent@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800901A4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CVirtualDesktopComponent@@UEAA@XZ @ 0x18049F304 (--1CVirtualDesktopComponent@@UEAA@XZ.c)
 */

CVirtualDesktopComponent *__fastcall CVirtualDesktopComponent::`vector deleting destructor'(
        CVirtualDesktopComponent *this,
        char a2)
{
  CVirtualDesktopComponent::~CVirtualDesktopComponent(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x108);
  return this;
}
