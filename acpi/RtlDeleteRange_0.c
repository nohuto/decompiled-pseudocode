/*
 * XREFs of RtlDeleteRange_0 @ 0x1C0001A9D
 * Callers:
 *     AcpiPortarbBacktrackAllocation @ 0x1C008C1C0 (AcpiPortarbBacktrackAllocation.c)
 *     IrqArbBacktrackAllocation @ 0x1C009CE20 (IrqArbBacktrackAllocation.c)
 *     ArbBacktrackAllocation @ 0x1C00A1050 (ArbBacktrackAllocation.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall RtlDeleteRange_0(PRTL_RANGE_LIST RangeList, ULONGLONG Start, ULONGLONG End, PVOID Owner)
{
  return RtlDeleteRange(RangeList, Start, End, Owner);
}
