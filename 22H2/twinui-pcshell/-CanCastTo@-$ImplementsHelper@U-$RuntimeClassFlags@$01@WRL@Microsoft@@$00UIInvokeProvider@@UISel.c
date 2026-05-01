/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIInvokeProvider@@UISelectionProvider@@UISelectionItemProvider@@UIScrollProvider@@UIScrollItemProvider@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180422EF8
 * Callers:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIRawElementProviderFragment@@UIRawElementProviderFragmentRoot@@UIInvokeProvider@@UISelectionProvider@@UISelectionItemProvider@@UIScrollProvider@@UIScrollItemProvider@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180422F58 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIRawElementProviderFra.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180043060 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UISelectionItemProvider@@UIScrollProvider@@UIScrollItemProvider@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180422FB8 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UISelectionItemProvider.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInvokeProvider,ISelectionProvider,ISelectionItemProvider,IScrollProvider,IScrollItemProvider>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  _DWORD *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r10
  _QWORD *v6; // r8
  unsigned int v7; // r9d
  __int64 v8; // r10
  __int64 v9; // r11

  if ( InlineIsEqualGUID(a2, &GUID_54fcb24b_e18e_47a2_b4d3_eccbe77599a2) )
  {
    *v3 = v4;
    return 0LL;
  }
  else
  {
    if ( InlineIsEqualGUID(v2, &GUID_fb8b03af_3bdf_48d4_bd36_1a65793be168) )
      *v6 = v8;
    else
      return (unsigned int)Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ISelectionItemProvider,IScrollProvider,IScrollItemProvider>::CanCastTo(
                             v8 + 8,
                             v9);
    return v7;
  }
}
