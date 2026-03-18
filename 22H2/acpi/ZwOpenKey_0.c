/*
 * XREFs of ZwOpenKey_0 @ 0x1C0001AE5
 * Callers:
 *     ArbAddInaccessibleAllocationRange @ 0x1C00A0780 (ArbAddInaccessibleAllocationRange.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x1C00A0994 (ArbAddMmConfigRangeAsBootReserved.c)
 *     ArbBuildAssignmentOrdering @ 0x1C00A125C (ArbBuildAssignmentOrdering.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall ZwOpenKey_0(PHANDLE KeyHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  return ZwOpenKey(KeyHandle, DesiredAccess, ObjectAttributes);
}
