/*
 * XREFs of ??$MakeAndInitialize@VCSnapAssistViewController@@V1@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewManager@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@@Details@WRL@Microsoft@@YAJPEAPEAVCSnapAssistViewController@@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewManager@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@@Z @ 0x18040C3B8
 * Callers:
 *     ?CSnapAssistViewController_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskingViewManager@@PEAUIImmersiveAppCrusher@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@AEBU_GUID@@PEAPEAX@Z @ 0x18040C6FC (-CSnapAssistViewController_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskin.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIShellPositionerManager@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@UIShellPositionerActivationHandler@@UIShellPositionerFrameworkViewTypeChangedHandler@@UIShellPositionerPresentationRequestedHandler@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x180219F14 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180219F14.c)
 *     ??0CSnapAssistViewController@@QEAA@XZ @ 0x18040C500 (--0CSnapAssistViewController@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCSnapAssistViewController@@@WRL@Microsoft@@IEAAKXZ @ 0x18040C86C (-InternalRelease@-$ComPtr@VCSnapAssistViewController@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@CSnapAssistViewController@@QEAAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskingViewManager@@PEAUIImmersiveAppCrusher@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@@Z @ 0x18040CAF4 (-RuntimeClassInitialize@CSnapAssistViewController@@QEAAJPEAUIWeakReference@WeakReference@@PEAUIM.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CSnapAssistViewController,CSnapAssistViewController,WeakReference::IWeakReference * &,IMultitaskingViewManager * &,IImmersiveAppCrusher * &,Windows::Internal::ComposableShell::Tabs::ITabController * &,ITabViewManager * &>(
        CSnapAssistViewController **a1,
        struct IWeakReference **a2,
        struct IMultitaskingViewManager **a3,
        struct IImmersiveAppCrusher **a4,
        struct Windows::Internal::ComposableShell::Tabs::ITabController **a5,
        struct ITabViewManager **a6)
{
  CSnapAssistViewController *v10; // rax
  int v11; // ebx
  CSnapAssistViewController *v12; // rdi
  struct IImmersiveAppCrusher *v13; // r9
  struct IMultitaskingViewManager *v14; // r8
  volatile int *v15; // rdx
  CSnapAssistViewController *v17; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v10 = (CSnapAssistViewController *)operator new(0xB8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v10 )
  {
    v12 = CSnapAssistViewController::CSnapAssistViewController(v10);
    v13 = *a4;
    v14 = *a3;
    v17 = v12;
    v11 = CSnapAssistViewController::RuntimeClassInitialize(v12, *a2, v14, v13, *a5, *a6);
    if ( v11 >= 0 )
    {
      if ( v12 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithSite,IShellPositionerManager,IApplicationViewChangeListener,ITabletModeChangeListener,IShellPositionerActivationHandler,IShellPositionerFrameworkViewTypeChangedHandler,IShellPositionerPresentationRequestedHandler>::InternalAddRef(
          (__int64)v12,
          v15);
      *a1 = v12;
      v11 = 0;
    }
    Microsoft::WRL::ComPtr<CSnapAssistViewController>::InternalRelease(&v17);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v11;
}
