/*
 * XREFs of PnpAcquireDependencyRelationsLock @ 0x1406C9A08
 * Callers:
 *     IoResolveDependency @ 0x1403965C0 (IoResolveDependency.c)
 *     PnpCheckForActiveDependencies @ 0x1406CBD6C (PnpCheckForActiveDependencies.c)
 *     PnpDeleteAllDependencyRelations @ 0x14078E96C (PnpDeleteAllDependencyRelations.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x14079C684 (PnpStartedDeviceNodeDependencyCheck.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x14079C720 (PnpNewDeviceNodeDependencyCheck.c)
 *     PipNotifyDeviceDependencyList @ 0x14079C794 (PipNotifyDeviceDependencyList.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x14079C854 (PipProcessRebuildPowerRelationsQueue.c)
 *     IoReserveDependency @ 0x140839800 (IoReserveDependency.c)
 *     PnpRequestDeviceRemoval @ 0x14086788C (PnpRequestDeviceRemoval.c)
 *     IopSortRelationListForRemove @ 0x140868C88 (IopSortRelationListForRemove.c)
 *     PnpProcessDependencyRelations @ 0x14086931C (PnpProcessDependencyRelations.c)
 *     PiQueryPowerDependencyRelations @ 0x14086F248 (PiQueryPowerDependencyRelations.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x140882FB8 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x140883540 (PnpQueuePendingSurpriseRemoval.c)
 *     IoDuplicateDependency @ 0x140954220 (IoDuplicateDependency.c)
 *     IoSetDependency @ 0x140954350 (IoSetDependency.c)
 *     PnpGetDeviceDependencyList @ 0x140954A18 (PnpGetDeviceDependencyList.c)
 *     PiDeviceDependencyInit @ 0x140B43154 (PiDeviceDependencyInit.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402390C0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x14023D660 (ExAcquireResourceSharedLite.c)
 *     PpDevNodeLockTree @ 0x1406C9A40 (PpDevNodeLockTree.c)
 */

BOOLEAN __fastcall PnpAcquireDependencyRelationsLock(char a1)
{
  PpDevNodeLockTree(0LL);
  if ( a1 )
    return ExAcquireResourceExclusiveLite(&PiDependencyRelationsLock, 1u);
  else
    return ExAcquireResourceSharedLite(&PiDependencyRelationsLock, 1u);
}
