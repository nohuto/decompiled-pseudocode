/*
 * XREFs of ?CAltTabViewController_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIApplicationViewCollection@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@AEBU_GUID@@PEAPEAX@Z @ 0x1800D5594
 * Callers:
 *     ?RuntimeClassInitialize@CAltTabViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIMultitaskingViewGestureState@@PEAUIApplicationViewCollection@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@@Z @ 0x1800D3DE8 (-RuntimeClassInitialize@CAltTabViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManage.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180043060 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCAltTabViewController@@V1@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUIApplicationViewCollection@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@@Details@WRL@Microsoft@@YAJPEAPEAVCAltTabViewController@@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUIApplicationViewCollection@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@@Z @ 0x1800D5494 (--$MakeAndInitialize@VCAltTabViewController@@V1@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMul.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIFrameInteractionEvents@@UISwitchItemController@@UIDismissAnimationController@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1804061DC (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIFrameInteractionEvent.c)
 *     ?InternalRelease@?$ComPtr@VCAltTabViewController@@@WRL@Microsoft@@IEAAKXZ @ 0x18040624C (-InternalRelease@-$ComPtr@VCAltTabViewController@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CAltTabViewController_CreateInstance(
        struct IWeakReference *a1,
        struct IMultitaskingViewManagerInternal *a2,
        struct IApplicationViewSwitcher *a3,
        struct IImmersiveAppCrusher *a4,
        struct IApplicationViewCollection *a5,
        struct Windows::Internal::ComposableShell::Tabs::ITabController *a6,
        struct ITabViewManager *a7,
        const struct _GUID *a8,
        void **a9)
{
  void **v9; // rdi
  int v10; // eax
  int CanCastTo; // ebx
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  _DWORD *v14; // rcx
  _DWORD *v15; // r9
  __int64 v16; // rdx
  void **v17; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct IWeakReference *v20; // [rsp+60h] [rbp+20h] BYREF
  struct IMultitaskingViewManagerInternal *v21; // [rsp+68h] [rbp+28h] BYREF
  struct IApplicationViewSwitcher *v22; // [rsp+70h] [rbp+30h] BYREF
  struct IImmersiveAppCrusher *v23; // [rsp+78h] [rbp+38h] BYREF

  v23 = a4;
  v22 = a3;
  v21 = a2;
  v20 = a1;
  v9 = a9;
  a9 = 0LL;
  *v9 = 0LL;
  Microsoft::WRL::ComPtr<CAltTabViewController>::InternalRelease(&a9);
  v10 = Microsoft::WRL::Details::MakeAndInitialize<CAltTabViewController,CAltTabViewController,WeakReference::IWeakReference * &,IMultitaskingViewManagerInternal * &,IApplicationViewSwitcher * &,IImmersiveAppCrusher * &,IApplicationViewCollection * &,Windows::Internal::ComposableShell::Tabs::ITabController * &,ITabViewManager * &>(
          (CAltTabViewController **)&a9,
          &v20,
          &v21,
          &v22,
          &v23,
          &a5,
          &a6,
          &a7);
  CanCastTo = v10;
  if ( v10 < 0 )
  {
    v12 = (unsigned int)v10;
    v13 = 101LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\alttabviewcontroller.cpp",
      (const char *)v12);
    goto LABEL_14;
  }
  *v9 = 0LL;
  if ( InlineIsEqualGUID(&GUID_66ac636f_a9ef_413d_b08e_f926afaa37f9, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v17 = a9;
    *v9 = a9;
    (*((void (__fastcall **)(void **))*v17 + 1))(v17);
    CanCastTo = 0;
    goto LABEL_14;
  }
  if ( InlineIsEqualGUID(v14, v15) )
  {
    CanCastTo = 0;
    *v9 = a9;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IFrameInteractionEvents,ISwitchItemController,IDismissAnimationController>::CanCastTo(
                  a9 + 1,
                  v16,
                  v9);
    if ( CanCastTo == -2147467262 )
      CanCastTo = -2147467262;
  }
  if ( CanCastTo < 0 )
  {
    v12 = (unsigned int)CanCastTo;
    v13 = 102LL;
    goto LABEL_13;
  }
  (*(void (__fastcall **)(void *))(*(_QWORD *)*v9 + 8LL))(*v9);
LABEL_14:
  Microsoft::WRL::ComPtr<CAltTabViewController>::InternalRelease(&a9);
  return (unsigned int)CanCastTo;
}
