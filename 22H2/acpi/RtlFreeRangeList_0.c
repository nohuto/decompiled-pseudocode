/*
 * XREFs of RtlFreeRangeList_0 @ 0x1C0001A1F
 * Callers:
 *     ArbBootAllocation @ 0x1C00A1090 (ArbBootAllocation.c)
 *     ArbCommitAllocation @ 0x1C00A17C0 (ArbCommitAllocation.c)
 *     ArbDeleteArbiterInstance @ 0x1C00A17F4 (ArbDeleteArbiterInstance.c)
 *     ArbInitializeRangeList @ 0x1C00A1FB0 (ArbInitializeRangeList.c)
 *     ArbQueryConflict @ 0x1C00A2350 (ArbQueryConflict.c)
 *     ArbRetestAllocation @ 0x1C00A2740 (ArbRetestAllocation.c)
 *     ArbRollbackAllocation @ 0x1C00A2930 (ArbRollbackAllocation.c)
 *     ArbStartArbiter @ 0x1C00A2BA0 (ArbStartArbiter.c)
 *     ArbTestAllocation @ 0x1C00A2BF0 (ArbTestAllocation.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall RtlFreeRangeList_0(PRTL_RANGE_LIST RangeList)
{
  RtlFreeRangeList(RangeList);
}
