/*
 * XREFs of ArbStartArbiter @ 0x1C00A2B90
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeRangeList_0 @ 0x1C0001A1F (RtlFreeRangeList_0.c)
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ArbStartArbiter(__int64 a1, __int64 a2)
{
  RtlFreeRangeList_0(*(PRTL_RANGE_LIST *)(a1 + 40));
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(a1 + 280))(
           a1,
           *(unsigned int *)(a2 + 16),
           a2 + 20,
           *(_QWORD *)(a1 + 40));
}
