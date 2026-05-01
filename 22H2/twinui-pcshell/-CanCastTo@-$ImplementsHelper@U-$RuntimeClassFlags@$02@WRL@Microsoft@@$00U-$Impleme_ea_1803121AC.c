/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VViewWrapperBase@@@Details@23@UIWeakReferenceSource@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1803121AC
 * Callers:
 *     ??$MakeAndInitialize@VUAPViewWrapper@@UIViewWrapperInternal@@AEAIPEAUIUnknown@@PEBGAEAY0DF@$$CBGPEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAUIViewWrapperInternal@@AEAI$$QEAPEAUIUnknown@@$$QEAPEBGAEAY0DF@$$CBG$$QEAPEAVViewEventDispatcher@@@Z @ 0x18030DA34 (--$MakeAndInitialize@VUAPViewWrapper@@UIViewWrapperInternal@@AEAIPEAUIUnknown@@PEBGAEAY0DF@$$CBG.c)
 *     ??$MakeAndInitialize@VUAPViewWrapper@@UIViewWrapperInternal@@AEAIPEAUIUnknown@@PEBGPEBGAEAPEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAUIViewWrapperInternal@@AEAI$$QEAPEAUIUnknown@@$$QEAPEBG3AEAPEAVViewEventDispatcher@@@Z @ 0x18030DB7C (--$MakeAndInitialize@VUAPViewWrapper@@UIViewWrapperInternal@@AEAIPEAUIUnknown@@PEBGPEBGAEAPEAVVi.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewWrapperBase@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180314760 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_180314760.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180043060 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIViewVisibilityOverride@ViewManagerInterop@Desktop@Shell@Internal@Windows@@UIViewResourcePolicies@5789@UIClientWindowState@5789@UIViewRecoveryState@5789@UIFramedViewWrapper@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180043090 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIViewVisibilityOverrid.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180045A64 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_180045A64.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<ViewWrapperBase>,IWeakReferenceSource,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::CanCastTo(
        __int64 a1,
        int *a2)
{
  BOOL IsEqualGUID; // eax
  _DWORD *v5; // rcx
  _QWORD *v6; // r8
  unsigned int CanCastTo; // r9d
  _DWORD *v8; // rcx
  _QWORD *v9; // r8
  __int64 v10; // r10

  IsEqualGUID = InlineIsEqualGUID(a2, &GUID_6d043cea_6cdf_43a3_b9d0_d755297c11d2);
  CanCastTo = 0;
  if ( IsEqualGUID )
  {
    *v6 = a1;
  }
  else
  {
    if ( InlineIsEqualGUID(v5, &GUID_24d7afb3_7eca_48a5_b2ba_1e21c012e15f)
      || InlineIsEqualGUID(v8, &GUID_f4a53d68_890b_4931_bdbf_71158377eece) )
    {
      *v9 = v10;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewVisibilityOverride,Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies,Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,Windows::Internal::Shell::ViewManagerInterop::IViewRecoveryState,IFramedViewWrapper,Microsoft::WRL::FtmBase>::CanCastTo(
                    v10 + 8,
                    a2,
                    v9);
    }
    if ( CanCastTo == -2147467262 )
      return (unsigned int)Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::CanCastTo(
                             a1 + 520,
                             a2,
                             v9);
  }
  return CanCastTo;
}
