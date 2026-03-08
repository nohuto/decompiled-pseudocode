/*
 * XREFs of PiGetDependentList @ 0x1406819C8
 * Callers:
 *     PipAttemptDependentsStart @ 0x14068185C (PipAttemptDependentsStart.c)
 *     PipNotifyDeviceDependencyList @ 0x140681934 (PipNotifyDeviceDependencyList.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x140838960 (PipAddDependentsToRebuildPowerRelationsQueue.c)
 *     PnpRequestDeviceRemovalWorker @ 0x140861CA0 (PnpRequestDeviceRemovalWorker.c)
 *     PnpProcessDependencyRelations @ 0x14086220C (PnpProcessDependencyRelations.c)
 *     PipVisitDeviceObjectListEntry @ 0x140862510 (PipVisitDeviceObjectListEntry.c)
 *     IoDuplicateDependency @ 0x140951200 (IoDuplicateDependency.c)
 *     PnpGetDeviceDependencyList @ 0x1409519F8 (PnpGetDeviceDependencyList.c)
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
