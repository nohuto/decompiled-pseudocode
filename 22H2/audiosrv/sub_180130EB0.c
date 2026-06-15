/*
 * XREFs of sub_180130EB0 @ 0x180130EB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18012FB78 @ 0x18012FB78 (sub_18012FB78.c)
 */

__int64 __fastcall sub_180130EB0(__int64 a1)
{
  while ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 208), 0, 1) != 1 )
    Sleep(1u);
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 144) + 32LL))(*(_QWORD *)(a1 + 144));
}
