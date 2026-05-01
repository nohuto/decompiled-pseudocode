/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopTabletModeNotificationListener@@V1@AEAPEAUIVirtualDesktopTabletModePolicy@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopTabletModeNotificationListener@@AEAPEAUIVirtualDesktopTabletModePolicy@@AEAPEAUIServiceProvider@@@Z @ 0x1804AE134
 * Callers:
 *     ?VirtualDesktopTabletModeNotificationListener_CreateInstance@@YAJPEAUIVirtualDesktopTabletModePolicy@@PEAUIServiceProvider@@AEBU_GUID@@PEAPEAX@Z @ 0x1804AEB90 (-VirtualDesktopTabletModeNotificationListener_CreateInstance@@YAJPEAUIVirtualDesktopTabletModePo.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UITabletModeChangeListener@@@WRL@Microsoft@@QEAA@XZ @ 0x1803FCEA8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UITabletModeChangeListener@@@WRL@Micro.c)
 *     ?RuntimeClassInitialize@VirtualDesktopTabletModeNotificationListener@@QEAAJPEAUIVirtualDesktopTabletModePolicy@@PEAUIServiceProvider@@@Z @ 0x1804AE4DC (-RuntimeClassInitialize@VirtualDesktopTabletModeNotificationListener@@QEAAJPEAUIVirtualDesktopTa.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopTabletModeNotificationListener,VirtualDesktopTabletModeNotificationListener,IVirtualDesktopTabletModePolicy * &,IServiceProvider * &>(
        VirtualDesktopTabletModeNotificationListener **a1,
        struct IVirtualDesktopTabletModePolicy **a2,
        struct IServiceProvider **a3)
{
  VirtualDesktopTabletModeNotificationListener *v6; // rax
  VirtualDesktopTabletModeNotificationListener *v7; // rbx
  int v8; // edi
  VirtualDesktopTabletModeNotificationListener *v10; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v6 = (VirtualDesktopTabletModeNotificationListener *)operator new(
                                                         0x20uLL,
                                                         (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ITabletModeChangeListener>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ITabletModeChangeListener>(v6);
    v10 = v7;
    *(_QWORD *)v7 = &VirtualDesktopTabletModeNotificationListener::`vftable';
    *((_QWORD *)v7 + 2) = 0LL;
    *((_QWORD *)v7 + 3) = 0LL;
    v8 = VirtualDesktopTabletModeNotificationListener::RuntimeClassInitialize(v7, *a2, *a3);
    if ( v8 >= 0 )
    {
      (*(void (__fastcall **)(VirtualDesktopTabletModeNotificationListener *))(*(_QWORD *)v7 + 8LL))(v7);
      v8 = 0;
      *a1 = v7;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v8;
}
