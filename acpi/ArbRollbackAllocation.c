/*
 * XREFs of ArbRollbackAllocation @ 0x1C00A2920
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeRangeList_0 @ 0x1C0001A1F (RtlFreeRangeList_0.c)
 */

__int64 __fastcall ArbRollbackAllocation(__int64 a1)
{
  RtlFreeRangeList_0(*(PRTL_RANGE_LIST *)(a1 + 48));
  return 0LL;
}
