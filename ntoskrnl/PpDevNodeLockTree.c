/*
 * XREFs of PpDevNodeLockTree @ 0x1406CB944
 * Callers:
 *     PnpDeviceActionWorker @ 0x140203020 (PnpDeviceActionWorker.c)
 *     PnpLockDeviceActionQueue @ 0x1403BDF7C (PnpLockDeviceActionQueue.c)
 *     IoTranslateBusAddress @ 0x14055DF60 (IoTranslateBusAddress.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x1406C3DF4 (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     PiControlGetPropertyData @ 0x1406C44A0 (PiControlGetPropertyData.c)
 *     PiGetRelatedDevice @ 0x1406C8018 (PiGetRelatedDevice.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406CB90C (PnpAcquireDependencyRelationsLock.c)
 *     PipProcessDevNodeTree @ 0x1406CCD80 (PipProcessDevNodeTree.c)
 *     IoGetLegacyVetoList @ 0x1407609A0 (IoGetLegacyVetoList.c)
 *     PipForDeviceNodeSubtree @ 0x1407855F8 (PipForDeviceNodeSubtree.c)
 *     PiGetDeviceDepth @ 0x140786CD0 (PiGetDeviceDepth.c)
 *     IoReportDetectedDevice @ 0x140802A80 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x140802F20 (IoReportRootDevice.c)
 *     PpDevCfgProcessDevices @ 0x14081B964 (PpDevCfgProcessDevices.c)
 *     IopQueryInterfaceRecurseUp @ 0x1408222B0 (IopQueryInterfaceRecurseUp.c)
 *     PiQueryDeviceRelations @ 0x14084B8CC (PiQueryDeviceRelations.c)
 *     PiPagePathSetState @ 0x1408512E8 (PiPagePathSetState.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1408625F0 (PnpProcessQueryRemoveAndEject.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140862FDC (PnpUnlinkDeviceRemovalRelations.c)
 *     PiQueryPowerRelations @ 0x14086CB24 (PiQueryPowerRelations.c)
 *     PnpDelayedRemoveWorker @ 0x14087CDB0 (PnpDelayedRemoveWorker.c)
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
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14025D790 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ExIsResourceAcquiredSharedLite @ 0x140336990 (ExIsResourceAcquiredSharedLite.c)
 */

char __fastcall PpDevNodeLockTree(int a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char v2; // bl
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  ULONG IsResourceAcquiredSharedLite; // edi
  ULONG v8; // esi

  CurrentThread = KeGetCurrentThread();
  v2 = 1;
  --CurrentThread->KernelApcDisable;
  if ( !a1 )
    goto LABEL_2;
  v4 = a1 - 1;
  if ( !v4 )
  {
    ExAcquireResourceExclusiveLite(&PiEngineLock, 1u);
LABEL_2:
    ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
    return v2;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    if ( !ExAcquireResourceExclusiveLite(&PiEngineLock, 0) )
    {
      v2 = 0;
      KeLeaveCriticalRegion();
      return v2;
    }
    goto LABEL_2;
  }
  v6 = v5 - 1;
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      IsResourceAcquiredSharedLite = ExIsResourceAcquiredSharedLite(&IopDeviceTreeLock);
      v8 = IsResourceAcquiredSharedLite;
      if ( IsResourceAcquiredSharedLite )
      {
        do
        {
          ExReleaseResourceLite(&IopDeviceTreeLock);
          --v8;
        }
        while ( v8 );
        do
        {
          ExAcquireResourceExclusiveLite(&IopDeviceTreeLock, 1u);
          --IsResourceAcquiredSharedLite;
        }
        while ( IsResourceAcquiredSharedLite );
      }
    }
  }
  else
  {
    ExAcquireResourceExclusiveLite(&PiEngineLock, 1u);
    ExAcquireResourceExclusiveLite(&IopDeviceTreeLock, 1u);
  }
  return v2;
}
