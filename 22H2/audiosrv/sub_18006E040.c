/*
 * XREFs of sub_18006E040 @ 0x18006E040
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall sub_18006E040(__int64 a1)
{
  return !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 412), 1, 1)
      && !(*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 56) + 120LL))(*(_QWORD *)(a1 + 56));
}
