/*
 * XREFs of PiEnumerateDependentListEntry @ 0x140838DB4
 * Callers:
 *     PipAttemptDependentsStart @ 0x14068185C (PipAttemptDependentsStart.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x140838960 (PipAddDependentsToRebuildPowerRelationsQueue.c)
 *     PnpRequestDeviceRemovalWorker @ 0x140861CA0 (PnpRequestDeviceRemovalWorker.c)
 *     PnpProcessDependencyRelations @ 0x14086220C (PnpProcessDependencyRelations.c)
 *     PipVisitDeviceObjectListEntry @ 0x140862510 (PipVisitDeviceObjectListEntry.c)
 * Callees:
 *     PiListEntryToDependencyEdge @ 0x140394734 (PiListEntryToDependencyEdge.c)
 */

__int64 __fastcall PiEnumerateDependentListEntry(__int64 a1)
{
  __int64 result; // rax
  _DWORD *v2; // r8
  _QWORD *v3; // r10

  result = PiListEntryToDependencyEdge(a1, 1);
  *v3 = *(_QWORD *)(*(_QWORD *)(result + 40) + 48LL);
  if ( v2 )
  {
    result = *(unsigned int *)(result + 48);
    *v2 = result;
  }
  return result;
}
