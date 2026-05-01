/*
 * XREFs of ?ElementProviderFromPoint@CDragVisualAcc@@UEAAJNNPEAPEAUIRawElementProviderFragment@@@Z @ 0x18049CF10
 * Callers:
 *     <none>
 * Callees:
 *     InlineIsEqualGUID @ 0x180043060 (InlineIsEqualGUID.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIRawElementProviderFragmentRoot@@UIDragProvider@@UIDragVisualAcc@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18049CDE8 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIRawEleme_ea_18049CDE8.c)
 */

__int64 __fastcall CDragVisualAcc::ElementProviderFromPoint(
        CDragVisualAcc *this,
        double a2,
        double a3,
        struct IRawElementProviderFragment **a4)
{
  unsigned __int64 v5; // r14
  int CanCastTo; // ebx
  unsigned __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 (__fastcall ***v10)(_QWORD, GUID *, struct IRawElementProviderFragment **); // rcx
  _DWORD *v11; // rcx
  struct IRawElementProviderFragment *v12; // r8
  _DWORD *v13; // rcx
  struct IRawElementProviderFragment *v14; // r8
  _DWORD *v15; // rdx
  __int64 v17; // [rsp+40h] [rbp+8h]

  *a4 = 0LL;
  v5 = *((_QWORD *)this + 25);
  CanCastTo = -2147220991;
  if ( *((_DWORD *)this + 8) != 2 )
    goto LABEL_8;
  v8 = 0LL;
  do
  {
    if ( v8 >= v5 )
      break;
    v9 = *(_QWORD *)(*((_QWORD *)this + 24) + 8 * v8);
    HIDWORD(v17) = (int)a3;
    LODWORD(v17) = (int)a2;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 32LL))(v9, v17) )
    {
      v10 = *(__int64 (__fastcall ****)(_QWORD, GUID *, struct IRawElementProviderFragment **))(*((_QWORD *)this + 24)
                                                                                              + 8 * v8);
      CanCastTo = (**v10)(v10, &GUID_f7063da8_8359_439c_9297_bbc5299a7d87, a4);
    }
    ++v8;
  }
  while ( CanCastTo < 0 );
  if ( CanCastTo < 0 )
  {
LABEL_8:
    *a4 = 0LL;
    if ( InlineIsEqualGUID(&GUID_f7063da8_8359_439c_9297_bbc5299a7d87, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      *a4 = v12;
      ((void (__fastcall *)(struct IRawElementProviderFragment *))v12->lpVtbl->AddRef)(v12);
      return 0;
    }
    if ( InlineIsEqualGUID(v11, &GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c)
      || InlineIsEqualGUID(v13, &GUID_f7063da8_8359_439c_9297_bbc5299a7d87) )
    {
      *a4 = v14;
      CanCastTo = 0;
LABEL_13:
      ((void (__fastcall *)(_QWORD))(*a4)->lpVtbl->AddRef)(*a4);
      return (unsigned int)CanCastTo;
    }
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IRawElementProviderFragmentRoot,IDragProvider,IDragVisualAcc>::CanCastTo(
                  (__int64)&v14[1],
                  v15);
    if ( CanCastTo >= 0 )
      goto LABEL_13;
  }
  return (unsigned int)CanCastTo;
}
