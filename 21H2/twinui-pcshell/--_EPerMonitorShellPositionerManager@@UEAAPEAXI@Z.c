/*
 * XREFs of ??_EPerMonitorShellPositionerManager@@UEAAPEAXI@Z @ 0x180446834
 * Callers:
 *     ??_EPerMonitorShellPositionerManager@@WBI@EAAPEAXI@Z @ 0x18016FD30 (--_EPerMonitorShellPositionerManager@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800901A4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180090E38 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x1801AFD3C (--1CImmersiveShellComponent@@UEAA@XZ.c)
 */

PerMonitorShellPositionerManager *__fastcall PerMonitorShellPositionerManager::`vector deleting destructor'(
        PerMonitorShellPositionerManager *this,
        char a2)
{
  `eh vector destructor iterator'(
    (char *)this + 104,
    8LL,
    10LL,
    (void (*)(void *))Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>);
  *((_DWORD *)this + 25) = -1073741823;
  CImmersiveShellComponent::~CImmersiveShellComponent((PerMonitorShellPositionerManager *)((char *)this + 24));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 2);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xB8);
  return this;
}
