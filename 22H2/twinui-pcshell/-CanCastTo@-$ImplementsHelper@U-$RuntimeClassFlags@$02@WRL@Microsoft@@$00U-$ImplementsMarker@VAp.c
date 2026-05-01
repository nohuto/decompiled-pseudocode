/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VAppViewDataSourceAdapterBase@@@Details@23@UIWeakReferenceSource@@UIAppViewDataSourceAdapter@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1803AB9C4
 * Callers:
 *     ??$GetWeakReference@VAppViewDataSourceAdapter@@@details@wil@@YAJPEAVAppViewDataSourceAdapter@@PEAPEAUIWeakReference@@@Z @ 0x1803A8944 (--$GetWeakReference@VAppViewDataSourceAdapter@@@details@wil@@YAJPEAVAppViewDataSourceAdapter@@PE.c)
 *     ?AppViewDataSourceAdapter_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIInspectable@@PEAPEAUIAppViewDataSourceAdapter@@@Z @ 0x1803AB5F0 (-AppViewDataSourceAdapter_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationVie.c)
 *     ?AppViewDataSourceAdapter_CreateInstance@@YAJW4AppViewDataSourceScope@@PEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIInspectable@@44PEAUITabViewManager@@PEAPEAUIAppViewDataSourceAdapter@@@Z @ 0x1803AB7C0 (-AppViewDataSourceAdapter_CreateInstance@@YAJW4AppViewDataSourceScope@@PEAUIApplicationViewColle.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VAppViewDataSourceAdapterBase@@UIAppViewDataSourceAdapter@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1803AE9E0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1803AE9E0.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180043060 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@UIAppViewDataSourceAdapter@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1803ABA30 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_1803ABA30.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<AppViewDataSourceAdapterBase>,IWeakReferenceSource,IAppViewDataSourceAdapter,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  BOOL IsEqualGUID; // eax
  _DWORD *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r10
  unsigned int v6; // r9d
  _QWORD *v7; // r8
  __int64 v8; // r10
  __int64 v9; // r11

  IsEqualGUID = InlineIsEqualGUID(a2, &GUID_727f9e97_76ee_497b_a942_b6371328485c);
  v6 = 0;
  if ( IsEqualGUID )
  {
    *v4 = v5;
  }
  else
  {
    if ( InlineIsEqualGUID(v3, &GUID_4b25b8ee_6129_45e4_b527_f376f89c9c8c) )
      *v7 = v8 + 8;
    else
      v6 = -2147467262;
    if ( v6 == -2147467262 )
      return (unsigned int)Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,IAppViewDataSourceAdapter,Microsoft::WRL::FtmBase>::CanCastTo(
                             v8 + 176,
                             v9);
  }
  return v6;
}
