/*
 * XREFs of PpDevNodeUnlockTree @ 0x1406B29A0
 * Callers:
 *     PnpUnlockDeviceActionQueue @ 0x1403203AC (PnpUnlockDeviceActionQueue.c)
 *     PnpLockDeviceActionQueue @ 0x140320450 (PnpLockDeviceActionQueue.c)
 *     PnpDeviceActionWorker @ 0x14036F9F0 (PnpDeviceActionWorker.c)
 *     IoTranslateBusAddress @ 0x14050CC80 (IoTranslateBusAddress.c)
 *     PiControlGetPropertyData @ 0x140690D50 (PiControlGetPropertyData.c)
 *     PiGetRelatedDevice @ 0x140691104 (PiGetRelatedDevice.c)
 *     PnpDeleteAllDependencyRelations @ 0x14069610C (PnpDeleteAllDependencyRelations.c)
 *     PipForDeviceNodeSubtree @ 0x14069B540 (PipForDeviceNodeSubtree.c)
 *     PiGetDeviceDepth @ 0x1406A07F0 (PiGetDeviceDepth.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x1406A3164 (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     PiControlGetSetDeviceStatus @ 0x1406B2710 (PiControlGetSetDeviceStatus.c)
 *     IoGetLegacyVetoList @ 0x1406F44A0 (IoGetLegacyVetoList.c)
 *     PiCMDeleteDevice @ 0x14072C52C (PiCMDeleteDevice.c)
 *     PnpRestartDeviceNode @ 0x140731B88 (PnpRestartDeviceNode.c)
 *     PipProcessDevNodeTree @ 0x14073D6A4 (PipProcessDevNodeTree.c)
 *     PnpCheckForActiveDependencies @ 0x14073DD50 (PnpCheckForActiveDependencies.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x1407477A0 (PnpStartedDeviceNodeDependencyCheck.c)
 *     PipNotifyDeviceDependencyList @ 0x14074799C (PipNotifyDeviceDependencyList.c)
 *     PnpReleaseDependencyRelationsLock @ 0x140747B40 (PnpReleaseDependencyRelationsLock.c)
 *     PiQueryPowerRelations @ 0x140748844 (PiQueryPowerRelations.c)
 *     PiQueryPowerDependencyRelations @ 0x140748EC8 (PiQueryPowerDependencyRelations.c)
 *     PnpProcessDependencyRelations @ 0x140749770 (PnpProcessDependencyRelations.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140749CC4 (PnpProcessQueryRemoveAndEject.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x14074A960 (PnpQueuePendingSurpriseRemoval.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x14074AADC (PnpUnlinkDeviceRemovalRelations.c)
 *     IopSortRelationListForRemove @ 0x14074BF38 (IopSortRelationListForRemove.c)
 *     PnpRequestDeviceRemoval @ 0x14074C54C (PnpRequestDeviceRemoval.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x14074C7F0 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpDelayedRemoveWorker @ 0x14074CB70 (PnpDelayedRemoveWorker.c)
 *     IopQueryInterfaceRecurseUp @ 0x1407649A8 (IopQueryInterfaceRecurseUp.c)
 *     PpDevCfgProcessDevices @ 0x1407A36EC (PpDevCfgProcessDevices.c)
 *     IoReportDetectedDevice @ 0x1407AED50 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x1407C7D80 (IoReportRootDevice.c)
 *     PiPagePathSetState @ 0x1407C9D60 (PiPagePathSetState.c)
 *     IoDuplicateDependency @ 0x14089D6C0 (IoDuplicateDependency.c)
 *     IoReserveDependency @ 0x14089D7F0 (IoReserveDependency.c)
 *     IoSetDependency @ 0x14089D890 (IoSetDependency.c)
 *     PnpGetDeviceDependencyList @ 0x14089E124 (PnpGetDeviceDependencyList.c)
 *     IoLockUnlockPnpDeviceTree @ 0x14089E46C (IoLockUnlockPnpDeviceTree.c)
 *     IopRetryDeviceRemovalForReset @ 0x1408A0A20 (IopRetryDeviceRemovalForReset.c)
 *     PnpDiagRundownRegisterCallback @ 0x1408A12D0 (PnpDiagRundownRegisterCallback.c)
 *     PnpProcessCompletedEject @ 0x1408A2500 (PnpProcessCompletedEject.c)
 *     PnpQueuePendingEject @ 0x1408A2654 (PnpQueuePendingEject.c)
 *     PpResetProblemDevices @ 0x1408A2940 (PpResetProblemDevices.c)
 *     PiProfileUpdateDeviceTreeWorker @ 0x1408AB180 (PiProfileUpdateDeviceTreeWorker.c)
 *     PiCMCreateDevice @ 0x1408AF490 (PiCMCreateDevice.c)
 *     PiControlQueryConflictList @ 0x1408B38A0 (PiControlQueryConflictList.c)
 *     PiInitializeDevice @ 0x1408B3CBC (PiInitializeDevice.c)
 *     PiQueryDeviceRelations @ 0x1408B40CC (PiQueryDeviceRelations.c)
 *     IopWarmEjectDevice @ 0x1408B4660 (IopWarmEjectDevice.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402CBAC0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402CBB00 (ExReleaseResourceLite.c)
 *     ExConvertExclusiveToSharedLite @ 0x140309910 (ExConvertExclusiveToSharedLite.c)
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
