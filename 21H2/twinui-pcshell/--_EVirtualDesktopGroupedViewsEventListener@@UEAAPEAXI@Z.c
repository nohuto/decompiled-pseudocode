/*
 * XREFs of ??_EVirtualDesktopGroupedViewsEventListener@@UEAAPEAXI@Z @ 0x1804BAE00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800901A4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1VirtualDesktopGroupedViewsEventListener@@UEAA@XZ @ 0x1804BAB60 (--1VirtualDesktopGroupedViewsEventListener@@UEAA@XZ.c)
 */

VirtualDesktopGroupedViewsEventListener *__fastcall VirtualDesktopGroupedViewsEventListener::`vector deleting destructor'(
        VirtualDesktopGroupedViewsEventListener *this,
        char a2)
{
  VirtualDesktopGroupedViewsEventListener::~VirtualDesktopGroupedViewsEventListener(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xA8);
  return this;
}
