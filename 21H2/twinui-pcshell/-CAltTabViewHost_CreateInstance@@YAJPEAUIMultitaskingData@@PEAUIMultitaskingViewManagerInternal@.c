/*
 * XREFs of ?CAltTabViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIMultitaskingViewGestureState@@PEAUIApplicationViewCollection@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@AEBU_GUID@@PEAPEAX@Z @ 0x1800D39B4
 * Callers:
 *     ?_CreateDCompMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x1803F86A8 (-_CreateDCompMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationV.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180043060 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCAltTabViewHost@@V1@AEAPEAUIMultitaskingData@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUIMultitaskingViewVisibilityServiceInternal@@AEAPEAUIMultitaskingViewGestureState@@AEAPEAUIApplicationViewCollection@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@@Details@WRL@Microsoft@@YAJPEAPEAVCAltTabViewHost@@AEAPEAUIMultitaskingData@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUIMultitaskingViewVisibilityServiceInternal@@AEAPEAUIMultitaskingViewGestureState@@AEAPEAUIApplicationViewCollection@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@@Z @ 0x1800D3434 (--$MakeAndInitialize@VCAltTabViewHost@@V1@AEAPEAUIMultitaskingData@@AEAPEAUIMultitaskingViewMana.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VCAltTabViewHost@@@WRL@Microsoft@@IEAAKXZ @ 0x1803818AC (-InternalRelease@-$ComPtr@VCAltTabViewHost@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@V?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@@Details@23@UIAltTabViewHostInternal@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1803FBF30 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$Implem_ea_1803FBF30.c)
 */

__int64 __fastcall CAltTabViewHost_CreateInstance(
        struct IMultitaskingData *a1,
        struct IMultitaskingViewManagerInternal *a2,
        struct IApplicationViewSwitcher *a3,
        struct IImmersiveAppCrusher *a4,
        struct IMultitaskingViewVisibilityServiceInternal *a5,
        struct IMultitaskingViewGestureState *a6,
        struct IApplicationViewCollection *a7,
        struct Windows::Internal::ComposableShell::Tabs::ITabController *a8,
        struct ITabViewManager *a9,
        const struct _GUID *a10,
        void **a11)
{
  void **v11; // rdi
  int v12; // eax
  int CanCastTo; // ebx
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  void **v17; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  struct IMultitaskingData *v20; // [rsp+70h] [rbp+20h] BYREF
  struct IMultitaskingViewManagerInternal *v21; // [rsp+78h] [rbp+28h] BYREF
  struct IApplicationViewSwitcher *v22; // [rsp+80h] [rbp+30h] BYREF
  struct IImmersiveAppCrusher *v23; // [rsp+88h] [rbp+38h] BYREF

  v23 = a4;
  v22 = a3;
  v21 = a2;
  v20 = a1;
  v11 = a11;
  a11 = 0LL;
  *v11 = 0LL;
  Microsoft::WRL::ComPtr<CAltTabViewHost>::InternalRelease(&a11);
  v12 = Microsoft::WRL::Details::MakeAndInitialize<CAltTabViewHost,CAltTabViewHost,IMultitaskingData * &,IMultitaskingViewManagerInternal * &,IApplicationViewSwitcher * &,IImmersiveAppCrusher * &,IMultitaskingViewVisibilityServiceInternal * &,IMultitaskingViewGestureState * &,IApplicationViewCollection * &,Windows::Internal::ComposableShell::Tabs::ITabController * &,ITabViewManager * &>(
          (CAltTabViewHost **)&a11,
          &v20,
          &v21,
          &v22,
          &v23,
          &a5,
          &a6,
          &a7,
          &a8,
          &a9);
  CanCastTo = v12;
  if ( v12 < 0 )
  {
    v14 = (unsigned int)v12;
    v15 = 386LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\alttabviewhost.cpp",
      (const char *)v14);
    goto LABEL_10;
  }
  *v11 = 0LL;
  if ( InlineIsEqualGUID(&GUID_49484dfc_13ca_4d28_aa1b_981c61ed37c9, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v17 = a11;
    *v11 = a11;
    (*((void (__fastcall **)(void **))*v17 + 1))(v17);
    CanCastTo = 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CMultitaskingViewHostBase<IAltTabViewHost>>,IAltTabViewHostInternal>::CanCastTo(
                  a11,
                  v16,
                  v11);
    if ( CanCastTo >= 0 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)*v11 + 8LL))(*v11);
  }
  if ( CanCastTo < 0 )
  {
    v14 = (unsigned int)CanCastTo;
    v15 = 388LL;
    goto LABEL_9;
  }
LABEL_10:
  Microsoft::WRL::ComPtr<CAltTabViewHost>::InternalRelease(&a11);
  return (unsigned int)CanCastTo;
}
