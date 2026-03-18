/*
 * XREFs of PpDevNodeUnlockTree @ 0x140775698
 * Callers:
 *     PnpUnlockDeviceActionQueue @ 0x140253DD4 (PnpUnlockDeviceActionQueue.c)
 *     PnpLockDeviceActionQueue @ 0x140253E78 (PnpLockDeviceActionQueue.c)
 *     PnpDeviceActionWorker @ 0x1402DD320 (PnpDeviceActionWorker.c)
 *     IoTranslateBusAddress @ 0x1405604A0 (IoTranslateBusAddress.c)
 *     PnpRestartDeviceNode @ 0x14066044C (PnpRestartDeviceNode.c)
 *     PiQueryDeviceRelations @ 0x1406E397C (PiQueryDeviceRelations.c)
 *     IoGetLegacyVetoList @ 0x140762AEC (IoGetLegacyVetoList.c)
 *     PipForDeviceNodeSubtree @ 0x140764CE4 (PipForDeviceNodeSubtree.c)
 *     PnpRequestDeviceRemoval @ 0x140765430 (PnpRequestDeviceRemoval.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1407655BC (PnpProcessQueryRemoveAndEject.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140766258 (PnpUnlinkDeviceRemovalRelations.c)
 *     PnpProcessDependencyRelations @ 0x140767CF8 (PnpProcessDependencyRelations.c)
 *     IopSortRelationListForRemove @ 0x140768080 (IopSortRelationListForRemove.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x14076AC70 (PnpStartedDeviceNodeDependencyCheck.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x14076BB10 (PnpNewDeviceNodeDependencyCheck.c)
 *     PipNotifyDeviceDependencyList @ 0x14076BB84 (PipNotifyDeviceDependencyList.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x14076BC20 (PipProcessRebuildPowerRelationsQueue.c)
 *     PiGetDeviceDepth @ 0x140773B10 (PiGetDeviceDepth.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x140773B90 (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     PnpDeleteAllDependencyRelations @ 0x14077503C (PnpDeleteAllDependencyRelations.c)
 *     PiControlGetPropertyData @ 0x140775140 (PiControlGetPropertyData.c)
 *     PiGetRelatedDevice @ 0x1407754E4 (PiGetRelatedDevice.c)
 *     PipProcessDevNodeTree @ 0x140777578 (PipProcessDevNodeTree.c)
 *     PnpCheckForActiveDependencies @ 0x140777C08 (PnpCheckForActiveDependencies.c)
 *     PnpSurpriseFailUnsafeDmaDevices @ 0x140808CB4 (PnpSurpriseFailUnsafeDmaDevices.c)
 *     PiQueryPowerRelations @ 0x14080DBCC (PiQueryPowerRelations.c)
 *     PiQueryPowerDependencyRelations @ 0x14080E218 (PiQueryPowerDependencyRelations.c)
 *     PnpDelayedRemoveWorker @ 0x14080EBD0 (PnpDelayedRemoveWorker.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x14081059C (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x140810CB4 (PnpQueuePendingSurpriseRemoval.c)
 *     IoReportDetectedDevice @ 0x14081EB20 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x14081F220 (IoReportRootDevice.c)
 *     PpDevCfgProcessDevices @ 0x140827F54 (PpDevCfgProcessDevices.c)
 *     PnpReleaseDependencyRelationsLock @ 0x14084428C (PnpReleaseDependencyRelationsLock.c)
 *     IopQueryInterfaceRecurseUp @ 0x140846760 (IopQueryInterfaceRecurseUp.c)
 *     PiPagePathSetState @ 0x14084BB98 (PiPagePathSetState.c)
 *     IoDuplicateDependency @ 0x140942470 (IoDuplicateDependency.c)
 *     IoReserveDependency @ 0x1409425A0 (IoReserveDependency.c)
 *     IoSetDependency @ 0x140942640 (IoSetDependency.c)
 *     PnpGetDeviceDependencyList @ 0x140942E94 (PnpGetDeviceDependencyList.c)
 *     IoLockUnlockPnpDeviceTree @ 0x140943144 (IoLockUnlockPnpDeviceTree.c)
 *     PnpDiagRundownRegisterCallback @ 0x140946400 (PnpDiagRundownRegisterCallback.c)
 *     PnpProcessCompletedEject @ 0x140947450 (PnpProcessCompletedEject.c)
 *     PnpQueuePendingEject @ 0x14094774C (PnpQueuePendingEject.c)
 *     PpResetProblemDevices @ 0x140947C9C (PpResetProblemDevices.c)
 *     PipSetDevNodeStateFlags @ 0x140947D0C (PipSetDevNodeStateFlags.c)
 *     PiProfileUpdateDeviceTreeWorker @ 0x14094F920 (PiProfileUpdateDeviceTreeWorker.c)
 *     PiCMCreateDevice @ 0x140954434 (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x140954E2C (PiCMDeleteDevice.c)
 *     PiControlQueryConflictList @ 0x140959490 (PiControlQueryConflictList.c)
 *     PiInitializeDevice @ 0x14095975C (PiInitializeDevice.c)
 *     IopWarmEjectDevice @ 0x14095A67C (IopWarmEjectDevice.c)
 * Callees:
 *     ExConvertExclusiveToSharedLite @ 0x140239790 (ExConvertExclusiveToSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 */

void __fastcall PpDevNodeUnlockTree(int a1)
{
  struct _ERESOURCE *v1; // rcx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx

  if ( !a1 )
  {
    v1 = &IopDeviceTreeLock;
LABEL_3:
    ExReleaseResourceLite(v1);
    goto LABEL_4;
  }
  v2 = a1 - 1;
  if ( !v2 || (v3 = v2 - 1) == 0 || (v4 = v3 - 1) == 0 )
  {
    ExReleaseResourceLite(&IopDeviceTreeLock);
    v1 = &PiEngineLock;
    goto LABEL_3;
  }
  if ( v4 == 1 )
    ExConvertExclusiveToSharedLite(&IopDeviceTreeLock);
LABEL_4:
  KeLeaveCriticalRegion();
}
