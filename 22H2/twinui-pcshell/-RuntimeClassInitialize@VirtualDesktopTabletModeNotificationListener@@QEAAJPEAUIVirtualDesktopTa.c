/*
 * XREFs of ?RuntimeClassInitialize@VirtualDesktopTabletModeNotificationListener@@QEAAJPEAUIVirtualDesktopTabletModePolicy@@PEAUIServiceProvider@@@Z @ 0x1804AE4DC
 * Callers:
 *     ??$MakeAndInitialize@VVirtualDesktopTabletModeNotificationListener@@V1@AEAPEAUIVirtualDesktopTabletModePolicy@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopTabletModeNotificationListener@@AEAPEAUIVirtualDesktopTabletModePolicy@@AEAPEAUIServiceProvider@@@Z @ 0x1804AE134 (--$MakeAndInitialize@VVirtualDesktopTabletModeNotificationListener@@V1@AEAPEAUIVirtualDesktopTab.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180050E98 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VirtualDesktopTabletModeNotificationListener::RuntimeClassInitialize(
        VirtualDesktopTabletModeNotificationListener *this,
        struct IVirtualDesktopTabletModePolicy *a2,
        struct IServiceProvider *a3)
{
  struct IVirtualDesktopTabletModePolicy *v3; // rax
  struct IVirtualDesktopTabletModePolicy *v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = (struct IVirtualDesktopTabletModePolicy *)*((_QWORD *)this + 2);
  if ( v3 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(struct IVirtualDesktopTabletModePolicy *))(*(_QWORD *)a2 + 8LL))(a2);
      v3 = (struct IVirtualDesktopTabletModePolicy *)*((_QWORD *)this + 2);
    }
    v8 = v3;
    *((_QWORD *)this + 2) = a2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  }
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 3, (__int64)a3);
  return 0LL;
}
