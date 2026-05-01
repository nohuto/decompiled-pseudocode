/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCShrinkButtonElement@@@Details@23@UIMultitaskingViewDragSource@@UISwitchItemThumbnailElement@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1804100D4
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCShrinkButtonElement@@UIMultitaskingViewDragSource@@UISwitchItemThumbnailElement@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1804106A0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1804106A0.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180043060 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CShrinkButtonElement>,IMultitaskingViewDragSource,ISwitchItemThumbnailElement>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  BOOL IsEqualGUID; // eax
  _DWORD *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  _DWORD *v6; // r10
  unsigned int v7; // r11d
  __int64 result; // rax
  _DWORD *v9; // rcx
  _QWORD *v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // r8
  __int64 v13; // r9
  unsigned int v14; // r11d

  IsEqualGUID = InlineIsEqualGUID(a2, &GUID_43dbd2a0_5ebc_4792_9a37_421d455c8861);
  v7 = -2147467262;
  if ( IsEqualGUID || InlineIsEqualGUID(v3, &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d) )
  {
    *v4 = v5;
    result = 0LL;
  }
  else
  {
    result = v7;
  }
  if ( (_DWORD)result == v7 )
    result = v7;
  if ( (_DWORD)result == v7 )
  {
    if ( InlineIsEqualGUID(v6, &GUID_f8242c35_7f82_4b56_b5c8_37345206289d) )
    {
      *v10 = v11;
      return 0LL;
    }
    if ( InlineIsEqualGUID(v9, &GUID_31dacf25_23c9_4be9_a81c_2ac933c44c63) )
    {
      *v12 = v13 + 8;
      return 0LL;
    }
    return v14;
  }
  return result;
}
