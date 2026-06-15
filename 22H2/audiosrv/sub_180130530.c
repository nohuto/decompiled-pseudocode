/*
 * XREFs of sub_180130530 @ 0x180130530
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18012FB78 @ 0x18012FB78 (sub_18012FB78.c)
 */

__int64 __fastcall sub_180130530(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 144) + 24LL))(
             *(_QWORD *)(a1 + 144),
             a2,
             a3);
  if ( (int)result >= 0 )
    _InterlockedExchange((volatile __int32 *)(a1 + 208), 1);
  return result;
}
