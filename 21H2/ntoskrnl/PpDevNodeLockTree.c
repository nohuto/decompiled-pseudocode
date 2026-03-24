/*
 * XREFs of PpDevNodeLockTree @ 0x140639C54
 * Callers:
 *     PnpLockDeviceActionQueue @ 0x1402C6FF0 (PnpLockDeviceActionQueue.c)
 *     PnpDeviceActionWorker @ 0x1403700A0 (PnpDeviceActionWorker.c)
 *     IoTranslateBusAddress @ 0x14050CD40 (IoTranslateBusAddress.c)
 *     PiControlGetSetDeviceStatus @ 0x140639930 (PiControlGetSetDeviceStatus.c)
 *     PnpAcquireDependencyRelationsLock @ 0x140639C1C (PnpAcquireDependencyRelationsLock.c)
 *     IoGetLegacyVetoList @ 0x14067B6B0 (IoGetLegacyVetoList.c)
 *     PiControlGetPropertyData @ 0x1406ADDA0 (PiControlGetPropertyData.c)
 *     PiGetRelatedDevice @ 0x1406AE154 (PiGetRelatedDevice.c)
 *     PipForDeviceNodeSubtree @ 0x1406B8550 (PipForDeviceNodeSubtree.c)
 *     PiGetDeviceDepth @ 0x1406BD9E0 (PiGetDeviceDepth.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x1406C0754 (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     PiCMDeleteDevice @ 0x14072B66C (PiCMDeleteDevice.c)
 *     PnpRestartDeviceNode @ 0x140731838 (PnpRestartDeviceNode.c)
 *     PnpDelayedRemoveWorker @ 0x140735EC0 (PnpDelayedRemoveWorker.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140736914 (PnpProcessQueryRemoveAndEject.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140737C58 (PnpUnlinkDeviceRemovalRelations.c)
 *     PipProcessDevNodeTree @ 0x140741204 (PipProcessDevNodeTree.c)
 *     PiQueryPowerRelations @ 0x14074C3A4 (PiQueryPowerRelations.c)
 *     IopQueryInterfaceRecurseUp @ 0x140765388 (IopQueryInterfaceRecurseUp.c)
 *     PpDevCfgProcessDevices @ 0x1407A32BC (PpDevCfgProcessDevices.c)
 *     IoReportDetectedDevice @ 0x1407AE910 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x1407C7E60 (IoReportRootDevice.c)
 *     PiPagePathSetState @ 0x1407C9E40 (PiPagePathSetState.c)
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
 *     KeLeaveCriticalRegion @ 0x14034B3B0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14034B3F0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14034BBA0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x14034BF60 (ExAcquireResourceSharedLite.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14034FE80 (ExIsResourceAcquiredSharedLite.c)
 */

char __fastcall PpDevNodeLockTree(int a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char v2; // bl
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  ULONG IsResourceAcquiredSharedLite; // edi
  ULONG i; // esi

  CurrentThread = KeGetCurrentThread();
  v2 = 1;
  --CurrentThread->KernelApcDisable;
  if ( !a1 )
    goto LABEL_15;
  v3 = a1 - 1;
  if ( !v3 )
  {
    ExAcquireResourceExclusiveLite(&PiEngineLock, 1u);
    goto LABEL_15;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    if ( !ExAcquireResourceExclusiveLite(&PiEngineLock, 0) )
    {
      v2 = 0;
      KeLeaveCriticalRegion();
      return v2;
    }
LABEL_15:
    ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
    return v2;
  }
  v5 = v4 - 1;
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      IsResourceAcquiredSharedLite = ExIsResourceAcquiredSharedLite(&IopDeviceTreeLock);
      for ( i = IsResourceAcquiredSharedLite; i; --i )
        ExReleaseResourceLite(&IopDeviceTreeLock);
      for ( ; IsResourceAcquiredSharedLite; --IsResourceAcquiredSharedLite )
        ExAcquireResourceExclusiveLite(&IopDeviceTreeLock, 1u);
    }
  }
  else
  {
    ExAcquireResourceExclusiveLite(&PiEngineLock, 1u);
    ExAcquireResourceExclusiveLite(&IopDeviceTreeLock, 1u);
  }
  return v2;
}
