/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@VSystemCursorShape@@@std@@EEAAXXZ @ 0x180140C40
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B060 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Ref_count_obj<SystemCursorShape>::_Destroy(__int64 a1)
{
  __int64 v2; // rcx
  std::_Ref_count_base *v3; // rcx

  v2 = *(_QWORD *)(a1 + 48);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 48) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  v3 = *(std::_Ref_count_base **)(a1 + 40);
  if ( v3 )
    std::_Ref_count_base::_Decwref(v3);
}
