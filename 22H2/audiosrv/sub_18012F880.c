/*
 * XREFs of sub_18012F880 @ 0x18012F880
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18012FB78 @ 0x18012FB78 (sub_18012FB78.c)
 */

__int64 __fastcall sub_18012F880(__int64 a1)
{
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 176), 2, 1) == 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 152) + 24LL))(*(_QWORD *)(a1 + 152));
  return (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 176), 1, 2);
}
