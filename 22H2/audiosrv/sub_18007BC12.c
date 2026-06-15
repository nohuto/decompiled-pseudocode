/*
 * XREFs of sub_18007BC12 @ 0x18007BC12
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18007BC12(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 56) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a2 + 56) + 8LL))(
                           *(_QWORD *)(a2 + 56),
                           *(_QWORD *)(a2 + 64));
  return 0LL;
}
