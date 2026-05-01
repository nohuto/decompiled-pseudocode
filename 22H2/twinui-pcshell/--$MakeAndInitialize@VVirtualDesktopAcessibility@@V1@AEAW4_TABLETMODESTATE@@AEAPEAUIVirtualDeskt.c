/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopAcessibility@@V1@AEAW4_TABLETMODESTATE@@AEAPEAUIVirtualDesktopNotificationServicePrivate@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopAcessibility@@AEAW4_TABLETMODESTATE@@AEAPEAUIVirtualDesktopNotificationServicePrivate@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x1804B05AC
 * Callers:
 *     ?VirtualDesktopAcessibility_CreateInstance@@YAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopNotificationServicePrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x1804B0EA8 (-VirtualDesktopAcessibility_CreateInstance@@YAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopNotificati.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVTabController@Tabs@ComposableShell@Internal@Windows@@PEAVTabControllerMenuItemsRequestedEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x18028B5C4 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$Impleme.c)
 *     ??0VirtualDesktopAcessibility@@QEAA@XZ @ 0x1804B0750 (--0VirtualDesktopAcessibility@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopAcessibility@@@WRL@Microsoft@@IEAAKXZ @ 0x1804B0A48 (-InternalRelease@-$ComPtr@VVirtualDesktopAcessibility@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@VirtualDesktopAcessibility@@QEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopNotificationServicePrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopLock@@@Z @ 0x1804B0D6C (-RuntimeClassInitialize@VirtualDesktopAcessibility@@QEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesktop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopAcessibility,VirtualDesktopAcessibility,enum _TABLETMODESTATE &,IVirtualDesktopNotificationServicePrivate * &,IVirtualDesktopCollection * &,IVirtualDesktopManagerPrivate * &,IVirtualDesktopLock * &>(
        VirtualDesktopAcessibility **a1,
        unsigned int *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6)
{
  VirtualDesktopAcessibility *v10; // rax
  int v11; // ebx
  VirtualDesktopAcessibility *v12; // rdi
  volatile int *v13; // rdx
  VirtualDesktopAcessibility *v15; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v10 = (VirtualDesktopAcessibility *)operator new(0xF8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v10 )
  {
    v12 = VirtualDesktopAcessibility::VirtualDesktopAcessibility(v10);
    v15 = v12;
    v11 = VirtualDesktopAcessibility::RuntimeClassInitialize(v12, *a2, *a3, *a4, *a5, *a6, 0LL);
    if ( v11 >= 0 )
    {
      if ( v12 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Tabs::TabController *,Windows::Internal::ComposableShell::Tabs::TabControllerMenuItemsRequestedEventArgs *>,Microsoft::WRL::FtmBase>>::InternalAddRef(
          (__int64)v12,
          v13);
      *a1 = v12;
      v11 = 0;
    }
    Microsoft::WRL::ComPtr<VirtualDesktopAcessibility>::InternalRelease(&v15);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v11;
}
