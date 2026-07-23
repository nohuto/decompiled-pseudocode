/*
 * XREFs of PpDevNodeLockTree @ 0x14062EA64
 * Callers:
 *     PnpLockDeviceActionQueue @ 0x140245730 (PnpLockDeviceActionQueue.c)
 *     PnpDeviceActionWorker @ 0x140381DA0 (PnpDeviceActionWorker.c)
 *     IoTranslateBusAddress @ 0x14050CF80 (IoTranslateBusAddress.c)
 *     PiControlGetPropertyData @ 0x14060C640 (PiControlGetPropertyData.c)
 *     PiGetRelatedDevice @ 0x14060C9F4 (PiGetRelatedDevice.c)
 *     PipForDeviceNodeSubtree @ 0x140617970 (PipForDeviceNodeSubtree.c)
 *     PiGetDeviceDepth @ 0x14061CBF0 (PiGetDeviceDepth.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x14061F664 (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     PiControlGetSetDeviceStatus @ 0x14062E740 (PiControlGetSetDeviceStatus.c)
 *     PnpAcquireDependencyRelationsLock @ 0x14062EA2C (PnpAcquireDependencyRelationsLock.c)
 *     IoGetLegacyVetoList @ 0x14066EDF0 (IoGetLegacyVetoList.c)
 *     PiCMDeleteDevice @ 0x14072BB1C (PiCMDeleteDevice.c)
 *     PnpRestartDeviceNode @ 0x1407319F8 (PnpRestartDeviceNode.c)
 *     PnpDelayedRemoveWorker @ 0x140736080 (PnpDelayedRemoveWorker.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140736AD4 (PnpProcessQueryRemoveAndEject.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140737E18 (PnpUnlinkDeviceRemovalRelations.c)
 *     PipProcessDevNodeTree @ 0x1407413C4 (PipProcessDevNodeTree.c)
 *     PiQueryPowerRelations @ 0x14074C564 (PiQueryPowerRelations.c)
 *     IopQueryInterfaceRecurseUp @ 0x140765548 (IopQueryInterfaceRecurseUp.c)
 *     PpDevCfgProcessDevices @ 0x1407A34BC (PpDevCfgProcessDevices.c)
 *     IoReportDetectedDevice @ 0x1407AEB10 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x1407C8180 (IoReportRootDevice.c)
 *     PiPagePathSetState @ 0x1407CA160 (PiPagePathSetState.c)
 *     IoLockUnlockPnpDeviceTree @ 0x14089E57C (IoLockUnlockPnpDeviceTree.c)
 *     IopRetryDeviceRemovalForReset @ 0x1408A0B30 (IopRetryDeviceRemovalForReset.c)
 *     PnpDiagRundownRegisterCallback @ 0x1408A13E0 (PnpDiagRundownRegisterCallback.c)
 *     PnpProcessCompletedEject @ 0x1408A2610 (PnpProcessCompletedEject.c)
 *     PnpQueuePendingEject @ 0x1408A2764 (PnpQueuePendingEject.c)
 *     PpResetProblemDevices @ 0x1408A2A50 (PpResetProblemDevices.c)
 *     PiProfileUpdateDeviceTreeWorker @ 0x1408AB290 (PiProfileUpdateDeviceTreeWorker.c)
 *     PiCMCreateDevice @ 0x1408AF5A0 (PiCMCreateDevice.c)
 *     PiControlQueryConflictList @ 0x1408B39B0 (PiControlQueryConflictList.c)
 *     PiInitializeDevice @ 0x1408B3DCC (PiInitializeDevice.c)
 *     PiQueryDeviceRelations @ 0x1408B41DC (PiQueryDeviceRelations.c)
 *     IopWarmEjectDevice @ 0x1408B4770 (IopWarmEjectDevice.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140356CB0 (ExAcquireResourceSharedLite.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14035ABD0 (ExIsResourceAcquiredSharedLite.c)
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
