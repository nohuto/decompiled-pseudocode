/*
 * XREFs of RtlFreeRangeList_0 @ 0x1C0001A1F
 * Callers:
 *     ArbBootAllocation @ 0x1C00A1080 (ArbBootAllocation.c)
 *     ArbCommitAllocation @ 0x1C00A17B0 (ArbCommitAllocation.c)
 *     ArbDeleteArbiterInstance @ 0x1C00A17E4 (ArbDeleteArbiterInstance.c)
 *     ArbInitializeRangeList @ 0x1C00A1FA0 (ArbInitializeRangeList.c)
 *     ArbQueryConflict @ 0x1C00A2340 (ArbQueryConflict.c)
 *     ArbRetestAllocation @ 0x1C00A2730 (ArbRetestAllocation.c)
 *     ArbRollbackAllocation @ 0x1C00A2920 (ArbRollbackAllocation.c)
 *     ArbStartArbiter @ 0x1C00A2B90 (ArbStartArbiter.c)
 *     ArbTestAllocation @ 0x1C00A2BE0 (ArbTestAllocation.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall RtlFreeRangeList_0(PRTL_RANGE_LIST RangeList)
{
  RtlFreeRangeList(RangeList);
}
