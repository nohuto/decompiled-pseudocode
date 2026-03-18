/*
 * XREFs of RtlAddRange_0 @ 0x1C0001A43
 * Callers:
 *     ArbAddAllocation @ 0x1C00A0730 (ArbAddAllocation.c)
 *     ArbAddInaccessibleAllocationRange @ 0x1C00A0780 (ArbAddInaccessibleAllocationRange.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x1C00A0994 (ArbAddMmConfigRangeAsBootReserved.c)
 *     ArbInitializeRangeList @ 0x1C00A1FB0 (ArbInitializeRangeList.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall RtlAddRange_0(
        PRTL_RANGE_LIST RangeList,
        ULONGLONG Start,
        ULONGLONG End,
        UCHAR Attributes,
        ULONG Flags,
        PVOID UserData,
        PVOID Owner)
{
  return RtlAddRange(RangeList, Start, End, Attributes, Flags, UserData, Owner);
}
