/*
 * XREFs of PnpAcquireDependencyRelationsLock @ 0x1406B29FC
 * Callers:
 *     IoResolveDependency @ 0x1403BF100 (IoResolveDependency.c)
 *     PnpDeleteAllDependencyRelations @ 0x14069610C (PnpDeleteAllDependencyRelations.c)
 *     PnpCheckForActiveDependencies @ 0x14073DD50 (PnpCheckForActiveDependencies.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x1407477A0 (PnpStartedDeviceNodeDependencyCheck.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x140747934 (PnpNewDeviceNodeDependencyCheck.c)
 *     PipNotifyDeviceDependencyList @ 0x14074799C (PipNotifyDeviceDependencyList.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x140747A0C (PipProcessRebuildPowerRelationsQueue.c)
 *     PiQueryPowerDependencyRelations @ 0x140748EC8 (PiQueryPowerDependencyRelations.c)
 *     PnpProcessDependencyRelations @ 0x140749770 (PnpProcessDependencyRelations.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x14074A960 (PnpQueuePendingSurpriseRemoval.c)
 *     IopSortRelationListForRemove @ 0x14074BF38 (IopSortRelationListForRemove.c)
 *     PnpRequestDeviceRemoval @ 0x14074C54C (PnpRequestDeviceRemoval.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x14074C7F0 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     IoDuplicateDependency @ 0x14089D6C0 (IoDuplicateDependency.c)
 *     IoReserveDependency @ 0x14089D7F0 (IoReserveDependency.c)
 *     IoSetDependency @ 0x14089D890 (IoSetDependency.c)
 *     PnpGetDeviceDependencyList @ 0x14089E124 (PnpGetDeviceDependencyList.c)
 *     PiDeviceDependencyInit @ 0x140A53ADC (PiDeviceDependencyInit.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402CC2B0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402CC670 (ExAcquireResourceSharedLite.c)
 *     PpDevNodeLockTree @ 0x1406B2A34 (PpDevNodeLockTree.c)
 */

BOOLEAN __fastcall PnpAcquireDependencyRelationsLock(char a1)
{
  PpDevNodeLockTree(0LL);
  if ( a1 )
    return ExAcquireResourceExclusiveLite(&PiDependencyRelationsLock, 1u);
  else
    return ExAcquireResourceSharedLite(&PiDependencyRelationsLock, 1u);
}
