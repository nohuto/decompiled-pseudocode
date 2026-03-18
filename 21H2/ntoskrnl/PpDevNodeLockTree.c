/*
 * XREFs of PpDevNodeLockTree @ 0x14077572C
 * Callers:
 *     PnpLockDeviceActionQueue @ 0x140253E78 (PnpLockDeviceActionQueue.c)
 *     PnpDeviceActionWorker @ 0x1402DD320 (PnpDeviceActionWorker.c)
 *     IoTranslateBusAddress @ 0x1405604A0 (IoTranslateBusAddress.c)
 *     PnpRestartDeviceNode @ 0x14066044C (PnpRestartDeviceNode.c)
 *     PiQueryDeviceRelations @ 0x1406E397C (PiQueryDeviceRelations.c)
 *     IoGetLegacyVetoList @ 0x140762AEC (IoGetLegacyVetoList.c)
 *     PipForDeviceNodeSubtree @ 0x140764CE4 (PipForDeviceNodeSubtree.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1407655BC (PnpProcessQueryRemoveAndEject.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140766258 (PnpUnlinkDeviceRemovalRelations.c)
 *     PiGetDeviceDepth @ 0x140773B10 (PiGetDeviceDepth.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x140773B90 (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     PiControlGetPropertyData @ 0x140775140 (PiControlGetPropertyData.c)
 *     PiGetRelatedDevice @ 0x1407754E4 (PiGetRelatedDevice.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1407756F4 (PnpAcquireDependencyRelationsLock.c)
 *     PipProcessDevNodeTree @ 0x140777578 (PipProcessDevNodeTree.c)
 *     PnpSurpriseFailUnsafeDmaDevices @ 0x140808CB4 (PnpSurpriseFailUnsafeDmaDevices.c)
 *     PiQueryPowerRelations @ 0x14080DBCC (PiQueryPowerRelations.c)
 *     PnpDelayedRemoveWorker @ 0x14080EBD0 (PnpDelayedRemoveWorker.c)
 *     IoReportDetectedDevice @ 0x14081EB20 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x14081F220 (IoReportRootDevice.c)
 *     PpDevCfgProcessDevices @ 0x140827F54 (PpDevCfgProcessDevices.c)
 *     IopQueryInterfaceRecurseUp @ 0x140846760 (IopQueryInterfaceRecurseUp.c)
 *     PiPagePathSetState @ 0x14084BB98 (PiPagePathSetState.c)
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
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14036B680 (ExIsResourceAcquiredSharedLite.c)
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
