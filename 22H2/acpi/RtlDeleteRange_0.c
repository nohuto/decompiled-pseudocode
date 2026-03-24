/*
 * XREFs of RtlDeleteRange_0 @ 0x1C0031D4D
 * Callers:
 *     AcpiPortarbBacktrackAllocation @ 0x1C00B2050 (AcpiPortarbBacktrackAllocation.c)
 *     IrqArbBacktrackAllocation @ 0x1C00B6F40 (IrqArbBacktrackAllocation.c)
 *     ArbBacktrackAllocation @ 0x1C00B7BC0 (ArbBacktrackAllocation.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall RtlDeleteRange_0(PRTL_RANGE_LIST RangeList, ULONGLONG Start, ULONGLONG End, PVOID Owner)
{
  return RtlDeleteRange(RangeList, Start, End, Owner);
}
