/*
 * XREFs of ZwClose_0 @ 0x1C0001A67
 * Callers:
 *     ArbAddInaccessibleAllocationRange @ 0x1C00A0770 (ArbAddInaccessibleAllocationRange.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x1C00A0984 (ArbAddMmConfigRangeAsBootReserved.c)
 *     ArbBuildAssignmentOrdering @ 0x1C00A124C (ArbBuildAssignmentOrdering.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall ZwClose_0(HANDLE Handle)
{
  return ZwClose(Handle);
}
