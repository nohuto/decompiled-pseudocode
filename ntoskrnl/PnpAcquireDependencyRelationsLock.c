/*
 * XREFs of PnpAcquireDependencyRelationsLock @ 0x1406CB90C
 * Callers:
 *     IoResolveDependency @ 0x1403943F0 (IoResolveDependency.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x1406818C0 (PnpNewDeviceNodeDependencyCheck.c)
 *     PipNotifyDeviceDependencyList @ 0x140681934 (PipNotifyDeviceDependencyList.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1406819F4 (PipProcessRebuildPowerRelationsQueue.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x140681C08 (PnpStartedDeviceNodeDependencyCheck.c)
 *     PnpCheckForActiveDependencies @ 0x1406CD3AC (PnpCheckForActiveDependencies.c)
 *     PnpDeleteAllDependencyRelations @ 0x140782F5C (PnpDeleteAllDependencyRelations.c)
 *     IoReserveDependency @ 0x140838750 (IoReserveDependency.c)
 *     PnpProcessDependencyRelations @ 0x14086220C (PnpProcessDependencyRelations.c)
 *     PnpRequestDeviceRemoval @ 0x140862294 (PnpRequestDeviceRemoval.c)
 *     IopSortRelationListForRemove @ 0x140862350 (IopSortRelationListForRemove.c)
 *     PiQueryPowerDependencyRelations @ 0x14086CD28 (PiQueryPowerDependencyRelations.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x14087E214 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x14087E79C (PnpQueuePendingSurpriseRemoval.c)
 *     IoDuplicateDependency @ 0x140951200 (IoDuplicateDependency.c)
 *     IoSetDependency @ 0x140951330 (IoSetDependency.c)
 *     PnpGetDeviceDependencyList @ 0x1409519F8 (PnpGetDeviceDependencyList.c)
 *     PiDeviceDependencyInit @ 0x140B5AB1C (PiDeviceDependencyInit.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x14025D790 (ExAcquireResourceSharedLite.c)
 *     PpDevNodeLockTree @ 0x1406CB944 (PpDevNodeLockTree.c)
 */

BOOLEAN __fastcall PnpAcquireDependencyRelationsLock(char a1)
{
  PpDevNodeLockTree(0LL);
  if ( a1 )
    return ExAcquireResourceExclusiveLite(&PiDependencyRelationsLock, 1u);
  else
    return ExAcquireResourceSharedLite(&PiDependencyRelationsLock, 1u);
}
