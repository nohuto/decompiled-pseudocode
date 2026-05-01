/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@V?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@@Details@23@UIXamlViewHost@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180384660
 * Callers:
 *     ??$MakeAndInitialize@VXamlSnapAssistViewHost@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180383A7C (--$MakeAndInitialize@VXamlSnapAssistViewHost@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIU.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UIXamlViewHost@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180384C30 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180384C30.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180043060 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIImmersiveMonitorNotification@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18036F90C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIImmersiv_ea_18036F90C.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIXamlViewHost@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180380830 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIXamlViewHost@@@Detail.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CMultitaskingViewHostBase<ISnapAssistViewHost>>,IXamlViewHost>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  BOOL IsEqualGUID; // eax
  _DWORD *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r10
  unsigned int CanCastTo; // r9d
  _DWORD *v7; // r11
  __int64 v8; // r10
  _DWORD *v9; // r11

  IsEqualGUID = InlineIsEqualGUID(a2, &GUID_b63cb15a_d1aa_4a39_bc06_78e9843bf5c4);
  CanCastTo = 0;
  if ( IsEqualGUID || InlineIsEqualGUID(v3, &GUID_49484dfc_13ca_4d28_aa1b_981c61ed37c9) )
  {
    *v4 = v5;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveMonitorNotification>::CanCastTo(
                  v5 + 8,
                  v7);
    if ( CanCastTo == -2147467262 )
      return (unsigned int)Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IXamlViewHost>::CanCastTo(
                             v8 + 120,
                             v9);
  }
  return CanCastTo;
}
