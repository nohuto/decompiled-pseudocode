/*
 * XREFs of ?get_FragmentRoot@CDragVisualAcc@@UEAAJPEAPEAUIRawElementProviderFragmentRoot@@@Z @ 0x18049E7F0
 * Callers:
 *     <none>
 * Callees:
 *     InlineIsEqualGUID @ 0x180043060 (InlineIsEqualGUID.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIRawElementProviderFragmentRoot@@UIDragProvider@@UIDragVisualAcc@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18049CDE8 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIRawEleme_ea_18049CDE8.c)
 */

__int64 __fastcall CDragVisualAcc::get_FragmentRoot(CDragVisualAcc *this, struct IRawElementProviderFragmentRoot **a2)
{
  _DWORD *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r9
  _DWORD *v5; // rcx
  _QWORD *v6; // r8
  __int64 v7; // r9
  int CanCastTo; // ebx
  __int64 v9; // r10
  _DWORD *v10; // r11

  *a2 = 0LL;
  if ( InlineIsEqualGUID(&GUID_620ce2a5_ab8f_40a9_86cb_de3c75599b58, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    *v3 = v4;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    return 0;
  }
  if ( InlineIsEqualGUID(v2, &GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c) )
  {
    *v6 = v7;
LABEL_4:
    CanCastTo = 0;
LABEL_8:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 8LL))(*v6);
    return (unsigned int)CanCastTo;
  }
  if ( InlineIsEqualGUID(v5, &GUID_f7063da8_8359_439c_9297_bbc5299a7d87) )
  {
    *v6 = v9;
    goto LABEL_4;
  }
  CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IRawElementProviderFragmentRoot,IDragProvider,IDragVisualAcc>::CanCastTo(
                v9 + 8,
                v10);
  if ( CanCastTo >= 0 )
    goto LABEL_8;
  return (unsigned int)CanCastTo;
}
