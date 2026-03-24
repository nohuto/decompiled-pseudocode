/*
 * XREFs of PiPnpRtlBeginOperation @ 0x1406AD460
 * Callers:
 *     PiDqQueryEvaluateFilter @ 0x1406AC504 (PiDqQueryEvaluateFilter.c)
 *     PiDqActionDataGetRequestedProperties @ 0x1406B38DC (PiDqActionDataGetRequestedProperties.c)
 *     PiDcHandleCustomDeviceEvent @ 0x14071B508 (PiDcHandleCustomDeviceEvent.c)
 *     PiDqIrpPropertySet @ 0x14072653C (PiDqIrpPropertySet.c)
 *     PiCMDeleteDevice @ 0x14072C52C (PiCMDeleteDevice.c)
 *     PiProcessSetDeviceProblem @ 0x1407318D4 (PiProcessSetDeviceProblem.c)
 *     PiProcessClearDeviceProblem @ 0x140731AB8 (PiProcessClearDeviceProblem.c)
 *     PipClearDevNodeProblem @ 0x140735BFC (PipClearDevNodeProblem.c)
 *     PiProcessNewDeviceNode @ 0x140740930 (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x140741820 (PipEnumerateCompleted.c)
 *     PiSwPropertySet @ 0x1407447F8 (PiSwPropertySet.c)
 *     IopRegisterDeviceInterface @ 0x140744910 (IopRegisterDeviceInterface.c)
 *     PiProcessQueryDeviceState @ 0x140745EDC (PiProcessQueryDeviceState.c)
 *     PiPnpRtlObjectEventWorker @ 0x1407464B0 (PiPnpRtlObjectEventWorker.c)
 *     PipProcessStartPhase3 @ 0x140747010 (PipProcessStartPhase3.c)
 *     PnpProcessTargetDeviceEvent @ 0x1407475C0 (PnpProcessTargetDeviceEvent.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x140747934 (PnpNewDeviceNodeDependencyCheck.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x14074AADC (PnpUnlinkDeviceRemovalRelations.c)
 *     IopRemoveDevice @ 0x14074B778 (IopRemoveDevice.c)
 *     PipSetDevNodeProblem @ 0x14074C18C (PipSetDevNodeProblem.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x14075875C (PiDcUpdateDeviceContainerMembership.c)
 *     PiDqActionDataGetChangedProperties @ 0x140770E34 (PiDqActionDataGetChangedProperties.c)
 *     PpDevCfgProcessDevices @ 0x1407A36EC (PpDevCfgProcessDevices.c)
 *     IoReportDetectedDevice @ 0x1407AED50 (IoReportDetectedDevice.c)
 *     PiProcessAddBootDevices @ 0x1407C6AC8 (PiProcessAddBootDevices.c)
 *     IoReportRootDevice @ 0x1407C7D80 (IoReportRootDevice.c)
 *     PipMergeDependencyEdgeList @ 0x14089DDC0 (PipMergeDependencyEdgeList.c)
 *     PiPnpRtlEnsureObjectCached @ 0x1408A31CC (PiPnpRtlEnsureObjectCached.c)
 *     PiCMCreateDevice @ 0x1408AF490 (PiCMCreateDevice.c)
 *     PiCMDeleteClassKey @ 0x1408AFDAC (PiCMDeleteClassKey.c)
 *     PiCMDeleteObject @ 0x1408B01F4 (PiCMDeleteObject.c)
 *     PiInitializeDevice @ 0x1408B3CBC (PiInitializeDevice.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x1402CBB00 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402CC2B0 (ExAcquireResourceExclusiveLite.c)
 *     RtlInitializeGenericTableAvl @ 0x14032D560 (RtlInitializeGenericTableAvl.c)
 *     PiPnpRtlGetCurrentOperation @ 0x1406B015C (PiPnpRtlGetCurrentOperation.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiPnpRtlBeginOperation(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  int CurrentOperation; // eax
  unsigned int v4; // ebx
  _DWORD *v5; // rax
  char *PoolWithTag; // rax
  char *v7; // rdi
  struct _KTHREAD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  _DWORD *v12; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  *a1 = 0LL;
  v12 = 0LL;
  CurrentOperation = PiPnpRtlGetCurrentOperation(&v12);
  v4 = CurrentOperation;
  if ( CurrentOperation == -1073741275 )
  {
    v4 = 0;
  }
  else if ( CurrentOperation < 0 )
  {
    return v4;
  }
  v5 = v12;
  if ( v12 )
  {
    ++v12[36];
  }
  else
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x98uLL, 0x41706E50u);
    v12 = PoolWithTag;
    v7 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    *((_DWORD *)PoolWithTag + 36) = 1;
    *((_QWORD *)PoolWithTag + 2) = CurrentThread;
    RtlInitializeGenericTableAvl(
      (PRTL_AVL_TABLE)(PoolWithTag + 24),
      (PRTL_AVL_COMPARE_ROUTINE)PiPnpRtlObjectEventCompareObjects,
      (PRTL_AVL_ALLOCATE_ROUTINE)PiPnpRtlOperationAllocateGenericTableEntry,
      (PRTL_AVL_FREE_ROUTINE)PiPnpRtlOperationFreeGenericTableEntry,
      0LL);
    *((_QWORD *)v7 + 17) = v7 + 128;
    *((_QWORD *)v7 + 16) = v7 + 128;
    v8 = KeGetCurrentThread();
    --v8->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiPnpRtlActiveOperationsLock, 1u);
    v9 = PiPnpRtlActiveOperations;
    if ( *(__int64 **)(PiPnpRtlActiveOperations + 8) != &PiPnpRtlActiveOperations )
      __fastfail(3u);
    v10 = (__int64)v12;
    *(_QWORD *)v12 = PiPnpRtlActiveOperations;
    *(_QWORD *)(v10 + 8) = &PiPnpRtlActiveOperations;
    *(_QWORD *)(v9 + 8) = v10;
    PiPnpRtlActiveOperations = v10;
    ExReleaseResourceLite(&PiPnpRtlActiveOperationsLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v5 = v12;
  }
  *a1 = v5;
  return v4;
}
