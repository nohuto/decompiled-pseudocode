/*
 * XREFs of ??_EVirtualDesktopDataSource@@UEAAPEAXI@Z @ 0x1803E3AD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1VirtualDesktopDataSource@@UEAA@XZ @ 0x1803E3858 (--1VirtualDesktopDataSource@@UEAA@XZ.c)
 */

VirtualDesktopDataSource *__fastcall VirtualDesktopDataSource::`vector deleting destructor'(
        VirtualDesktopDataSource *this,
        char a2)
{
  VirtualDesktopDataSource::~VirtualDesktopDataSource(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x150);
  return this;
}
