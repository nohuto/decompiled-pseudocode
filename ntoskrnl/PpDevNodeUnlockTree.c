/*
 * XREFs of PpDevNodeUnlockTree @ 0x1406CB8B0
 * Callers:
 *     PnpDeviceActionWorker @ 0x140203020 (PnpDeviceActionWorker.c)
 *     PnpLockDeviceActionQueue @ 0x1403BDF7C (PnpLockDeviceActionQueue.c)
 *     PnpUnlockDeviceActionQueue @ 0x1403BDFF4 (PnpUnlockDeviceActionQueue.c)
 *     IoTranslateBusAddress @ 0x14055DF60 (IoTranslateBusAddress.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x1406818C0 (PnpNewDeviceNodeDependencyCheck.c)
 *     PipNotifyDeviceDependencyList @ 0x140681934 (PipNotifyDeviceDependencyList.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1406819F4 (PipProcessRebuildPowerRelationsQueue.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x140681C08 (PnpStartedDeviceNodeDependencyCheck.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x1406C3DF4 (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     PiControlGetPropertyData @ 0x1406C44A0 (PiControlGetPropertyData.c)
 *     PiGetRelatedDevice @ 0x1406C8018 (PiGetRelatedDevice.c)
 *     PipProcessDevNodeTree @ 0x1406CCD80 (PipProcessDevNodeTree.c)
 *     PnpCheckForActiveDependencies @ 0x1406CD3AC (PnpCheckForActiveDependencies.c)
 *     IoGetLegacyVetoList @ 0x1407609A0 (IoGetLegacyVetoList.c)
 *     PnpDeleteAllDependencyRelations @ 0x140782F5C (PnpDeleteAllDependencyRelations.c)
 *     PipForDeviceNodeSubtree @ 0x1407855F8 (PipForDeviceNodeSubtree.c)
 *     PiGetDeviceDepth @ 0x140786CD0 (PiGetDeviceDepth.c)
 *     IoReportDetectedDevice @ 0x140802A80 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x140802F20 (IoReportRootDevice.c)
 *     PpDevCfgProcessDevices @ 0x14081B964 (PpDevCfgProcessDevices.c)
 *     IopQueryInterfaceRecurseUp @ 0x1408222B0 (IopQueryInterfaceRecurseUp.c)
 *     IoReserveDependency @ 0x140838750 (IoReserveDependency.c)
 *     PnpReleaseDependencyRelationsLock @ 0x14083893C (PnpReleaseDependencyRelationsLock.c)
 *     PiQueryDeviceRelations @ 0x14084B8CC (PiQueryDeviceRelations.c)
 *     PiPagePathSetState @ 0x1408512E8 (PiPagePathSetState.c)
 *     PnpProcessDependencyRelations @ 0x14086220C (PnpProcessDependencyRelations.c)
 *     PnpRequestDeviceRemoval @ 0x140862294 (PnpRequestDeviceRemoval.c)
 *     IopSortRelationListForRemove @ 0x140862350 (IopSortRelationListForRemove.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1408625F0 (PnpProcessQueryRemoveAndEject.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140862FDC (PnpUnlinkDeviceRemovalRelations.c)
 *     PiQueryPowerRelations @ 0x14086CB24 (PiQueryPowerRelations.c)
 *     PiQueryPowerDependencyRelations @ 0x14086CD28 (PiQueryPowerDependencyRelations.c)
 *     PnpDelayedRemoveWorker @ 0x14087CDB0 (PnpDelayedRemoveWorker.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x14087E214 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x14087E79C (PnpQueuePendingSurpriseRemoval.c)
 *     IoDuplicateDependency @ 0x140951200 (IoDuplicateDependency.c)
 *     IoSetDependency @ 0x140951330 (IoSetDependency.c)
 *     PnpGetDeviceDependencyList @ 0x1409519F8 (PnpGetDeviceDependencyList.c)
 *     IoLockUnlockPnpDeviceTree @ 0x140951CA0 (IoLockUnlockPnpDeviceTree.c)
 *     PnpDiagRundownRegisterCallback @ 0x140955000 (PnpDiagRundownRegisterCallback.c)
 *     PnpRestartDeviceNode @ 0x140955D4C (PnpRestartDeviceNode.c)
 *     PnpProcessCompletedEject @ 0x140956080 (PnpProcessCompletedEject.c)
 *     PnpQueuePendingEject @ 0x1409562EC (PnpQueuePendingEject.c)
 *     PpResetProblemDevices @ 0x1409568E4 (PpResetProblemDevices.c)
 *     PipSetDevNodeStateFlags @ 0x140956AA8 (PipSetDevNodeStateFlags.c)
 *     PiProfileUpdateDeviceTreeWorker @ 0x1409608A0 (PiProfileUpdateDeviceTreeWorker.c)
 *     PiCMCreateDevice @ 0x1409654C0 (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x140965ED8 (PiCMDeleteDevice.c)
 *     PnpSurpriseFailUnsafeDmaDevices @ 0x140968A40 (PnpSurpriseFailUnsafeDmaDevices.c)
 *     PiInitializeDevice @ 0x14096AB74 (PiInitializeDevice.c)
 *     PnpIommuBlockUnblockDevice @ 0x14096BFE8 (PnpIommuBlockUnblockDevice.c)
 *     IopWarmEjectDevice @ 0x14096C1CC (IopWarmEjectDevice.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ExConvertExclusiveToSharedLite @ 0x1402DCE90 (ExConvertExclusiveToSharedLite.c)
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
