/*
 * XREFs of PiEnumerateDependentListEntry @ 0x14089D948
 * Callers:
 *     PipAttemptDependentsStart @ 0x1407477D8 (PipAttemptDependentsStart.c)
 *     PipVisitDeviceObjectListEntry @ 0x14074942C (PipVisitDeviceObjectListEntry.c)
 *     PnpProcessDependencyRelations @ 0x140749770 (PnpProcessDependencyRelations.c)
 *     PnpRequestDeviceRemovalWorker @ 0x14074A8A0 (PnpRequestDeviceRemovalWorker.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x1407B6700 (PipAddDependentsToRebuildPowerRelationsQueue.c)
 * Callees:
 *     PiListEntryToDependencyEdge @ 0x14050C438 (PiListEntryToDependencyEdge.c)
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
