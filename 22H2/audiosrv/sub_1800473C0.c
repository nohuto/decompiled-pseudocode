/*
 * XREFs of sub_1800473C0 @ 0x1800473C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800473C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, __int64))(**(_QWORD **)(a1 + 72) + 376LL))(
           *(_QWORD *)(a1 + 72),
           a2,
           a3,
           0LL,
           a4);
}
