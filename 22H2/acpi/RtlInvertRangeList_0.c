/*
 * XREFs of RtlInvertRangeList_0 @ 0x1C0001A55
 * Callers:
 *     ArbInitializeRangeList @ 0x1C00A1FB0 (ArbInitializeRangeList.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall RtlInvertRangeList_0(PRTL_RANGE_LIST InvertedRangeList, PRTL_RANGE_LIST RangeList)
{
  return RtlInvertRangeList(InvertedRangeList, RangeList);
}
