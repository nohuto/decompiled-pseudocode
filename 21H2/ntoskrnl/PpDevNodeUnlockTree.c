/*
 * XREFs of PpDevNodeUnlockTree @ 0x140639BC0
 * Callers:
 *     PnpUnlockDeviceActionQueue @ 0x1402C6F4C (PnpUnlockDeviceActionQueue.c)
 *     PnpLockDeviceActionQueue @ 0x1402C6FF0 (PnpLockDeviceActionQueue.c)
 *     PnpDeviceActionWorker @ 0x1403700A0 (PnpDeviceActionWorker.c)
 *     IoTranslateBusAddress @ 0x14050CD40 (IoTranslateBusAddress.c)
 *     PiControlGetSetDeviceStatus @ 0x140639930 (PiControlGetSetDeviceStatus.c)
 *     IoGetLegacyVetoList @ 0x14067B6B0 (IoGetLegacyVetoList.c)
 *     PiControlGetPropertyData @ 0x1406ADDA0 (PiControlGetPropertyData.c)
 *     PiGetRelatedDevice @ 0x1406AE154 (PiGetRelatedDevice.c)
 *     PnpDeleteAllDependencyRelations @ 0x1406B314C (PnpDeleteAllDependencyRelations.c)
 *     PipForDeviceNodeSubtree @ 0x1406B8550 (PipForDeviceNodeSubtree.c)
 *     PiGetDeviceDepth @ 0x1406BD9E0 (PiGetDeviceDepth.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x1406C0754 (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     PiCMDeleteDevice @ 0x14072B66C (PiCMDeleteDevice.c)
 *     PnpRestartDeviceNode @ 0x140731838 (PnpRestartDeviceNode.c)
 *     PnpDelayedRemoveWorker @ 0x140735EC0 (PnpDelayedRemoveWorker.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x140736198 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpRequestDeviceRemoval @ 0x140736688 (PnpRequestDeviceRemoval.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140736914 (PnpProcessQueryRemoveAndEject.c)
 *     IopSortRelationListForRemove @ 0x14073720C (IopSortRelationListForRemove.c)
 *     PnpProcessDependencyRelations @ 0x140737710 (PnpProcessDependencyRelations.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x140737ADC (PnpQueuePendingSurpriseRemoval.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140737C58 (PnpUnlinkDeviceRemovalRelations.c)
 *     PipProcessDevNodeTree @ 0x140741204 (PipProcessDevNodeTree.c)
 *     PnpCheckForActiveDependencies @ 0x1407418B0 (PnpCheckForActiveDependencies.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x14074B300 (PnpStartedDeviceNodeDependencyCheck.c)
 *     PipNotifyDeviceDependencyList @ 0x14074B4FC (PipNotifyDeviceDependencyList.c)
 *     PnpReleaseDependencyRelationsLock @ 0x14074B6A0 (PnpReleaseDependencyRelationsLock.c)
 *     PiQueryPowerRelations @ 0x14074C3A4 (PiQueryPowerRelations.c)
 *     PiQueryPowerDependencyRelations @ 0x14074CA28 (PiQueryPowerDependencyRelations.c)
 *     IopQueryInterfaceRecurseUp @ 0x140765388 (IopQueryInterfaceRecurseUp.c)
 *     PpDevCfgProcessDevices @ 0x1407A32BC (PpDevCfgProcessDevices.c)
 *     IoReportDetectedDevice @ 0x1407AE910 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x1407C7E60 (IoReportRootDevice.c)
 *     PiPagePathSetState @ 0x1407C9E40 (PiPagePathSetState.c)
 *     IoDuplicateDependency @ 0x14089D670 (IoDuplicateDependency.c)
 *     IoReserveDependency @ 0x14089D7A0 (IoReserveDependency.c)
 *     IoSetDependency @ 0x14089D840 (IoSetDependency.c)
 *     PnpGetDeviceDependencyList @ 0x14089E0D4 (PnpGetDeviceDependencyList.c)
 *     IoLockUnlockPnpDeviceTree @ 0x14089E41C (IoLockUnlockPnpDeviceTree.c)
 *     IopRetryDeviceRemovalForReset @ 0x1408A09D0 (IopRetryDeviceRemovalForReset.c)
 *     PnpDiagRundownRegisterCallback @ 0x1408A1280 (PnpDiagRundownRegisterCallback.c)
 *     PnpProcessCompletedEject @ 0x1408A24B0 (PnpProcessCompletedEject.c)
 *     PnpQueuePendingEject @ 0x1408A2604 (PnpQueuePendingEject.c)
 *     PpResetProblemDevices @ 0x1408A28F0 (PpResetProblemDevices.c)
 *     PiProfileUpdateDeviceTreeWorker @ 0x1408AB130 (PiProfileUpdateDeviceTreeWorker.c)
 *     PiCMCreateDevice @ 0x1408AF440 (PiCMCreateDevice.c)
 *     PiControlQueryConflictList @ 0x1408B3850 (PiControlQueryConflictList.c)
 *     PiInitializeDevice @ 0x1408B3C6C (PiInitializeDevice.c)
 *     PiQueryDeviceRelations @ 0x1408B407C (PiQueryDeviceRelations.c)
 *     IopWarmEjectDevice @ 0x1408B4610 (IopWarmEjectDevice.c)
 * Callees:
 *     ExConvertExclusiveToSharedLite @ 0x1402B21C0 (ExConvertExclusiveToSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x14034B3B0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14034B3F0 (ExReleaseResourceLite.c)
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
