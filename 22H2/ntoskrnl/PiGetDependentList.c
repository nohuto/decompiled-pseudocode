/*
 * XREFs of PiGetDependentList @ 0x14079C828
 * Callers:
 *     PipAttemptDependentsStart @ 0x14079C6BC (PipAttemptDependentsStart.c)
 *     PipNotifyDeviceDependencyList @ 0x14079C794 (PipNotifyDeviceDependencyList.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x140839A10 (PipAddDependentsToRebuildPowerRelationsQueue.c)
 *     PipVisitDeviceObjectListEntry @ 0x140868E48 (PipVisitDeviceObjectListEntry.c)
 *     PnpProcessDependencyRelations @ 0x14086931C (PnpProcessDependencyRelations.c)
 *     PnpRequestDeviceRemovalWorker @ 0x140869470 (PnpRequestDeviceRemovalWorker.c)
 *     IoDuplicateDependency @ 0x140954220 (IoDuplicateDependency.c)
 *     PnpGetDeviceDependencyList @ 0x140954A18 (PnpGetDeviceDependencyList.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall PiGetDependentList(__int64 a1)
{
  __int64 v1; // rax

  if ( a1 && (v1 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 80LL)) != 0 )
    return (__int64 *)(v1 + 32);
  else
    return &PiDependencyNodeEmptyList;
}
