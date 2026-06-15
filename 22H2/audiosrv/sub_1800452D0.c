/*
 * XREFs of sub_1800452D0 @ 0x1800452D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800452D0(volatile signed __int32 *a1)
{
  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 8LL))(a1);
  return (unsigned int)_InterlockedIncrement(a1 + 12);
}
