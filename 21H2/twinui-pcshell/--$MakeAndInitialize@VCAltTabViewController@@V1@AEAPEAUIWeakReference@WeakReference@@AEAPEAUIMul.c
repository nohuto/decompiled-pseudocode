/*
 * XREFs of ??$MakeAndInitialize@VCAltTabViewController@@V1@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUIApplicationViewCollection@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@@Details@WRL@Microsoft@@YAJPEAPEAVCAltTabViewController@@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUIApplicationViewCollection@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@@Z @ 0x1800D5494
 * Callers:
 *     ?CAltTabViewController_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIApplicationViewCollection@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@AEBU_GUID@@PEAPEAX@Z @ 0x1800D5594 (-CAltTabViewController_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskingVie.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009536C (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?RuntimeClassInitialize@CAltTabViewController@@QEAAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIApplicationViewCollection@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@@Z @ 0x1800D56C8 (-RuntimeClassInitialize@CAltTabViewController@@QEAAJPEAUIWeakReference@WeakReference@@PEAUIMulti.c)
 *     ??1?$MakeAllocator@VCAppTransitionTargetManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180135BF8 (--1-$MakeAllocator@VCAppTransitionTargetManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0CAltTabViewController@@QEAA@XZ @ 0x180405FCC (--0CAltTabViewController@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCAltTabViewController@@@WRL@Microsoft@@IEAAKXZ @ 0x18040624C (-InternalRelease@-$ComPtr@VCAltTabViewController@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CAltTabViewController,CAltTabViewController,WeakReference::IWeakReference * &,IMultitaskingViewManagerInternal * &,IApplicationViewSwitcher * &,IImmersiveAppCrusher * &,IApplicationViewCollection * &,Windows::Internal::ComposableShell::Tabs::ITabController * &,ITabViewManager * &>(
        CAltTabViewController **a1,
        struct IWeakReference **a2,
        struct IMultitaskingViewManagerInternal **a3,
        struct IApplicationViewSwitcher **a4,
        struct IImmersiveAppCrusher **a5,
        struct IApplicationViewCollection **a6,
        struct Windows::Internal::ComposableShell::Tabs::ITabController **a7,
        struct ITabViewManager **a8)
{
  CAltTabViewController *v12; // rax
  int v13; // edi
  CAltTabViewController *v14; // rbx
  struct IApplicationViewSwitcher *v15; // r9
  struct IMultitaskingViewManagerInternal *v16; // r8
  volatile int *v17; // rdx
  struct ITabViewManager *v19; // [rsp+38h] [rbp-30h]
  CAltTabViewController *v20; // [rsp+40h] [rbp-28h] BYREF
  CAltTabViewController *v21; // [rsp+70h] [rbp+8h] BYREF

  *a1 = 0LL;
  v12 = (CAltTabViewController *)operator new(0x98uLL, (const struct std::nothrow_t *)&std::nothrow);
  v21 = v12;
  if ( v12 )
  {
    v14 = CAltTabViewController::CAltTabViewController(v12);
    v15 = *a4;
    v16 = *a3;
    v21 = 0LL;
    v19 = *a8;
    v20 = v14;
    v13 = CAltTabViewController::RuntimeClassInitialize(v14, *a2, v16, v15, *a5, *a6, *a7, v19);
    if ( v13 >= 0 )
    {
      if ( v14 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference((CAltTabViewController *)((char *)v14 + 132), v17);
      *a1 = v14;
      v13 = 0;
    }
    Microsoft::WRL::ComPtr<CAltTabViewController>::InternalRelease(&v20);
  }
  else
  {
    v13 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CAppTransitionTargetManager>::~MakeAllocator<CAppTransitionTargetManager>(&v21);
  return (unsigned int)v13;
}
