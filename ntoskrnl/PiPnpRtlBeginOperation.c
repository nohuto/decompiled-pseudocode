/*
 * XREFs of PiPnpRtlBeginOperation @ 0x1406CDF98
 * Callers:
 *     PnpNewDeviceNodeDependencyCheck @ 0x1406818C0 (PnpNewDeviceNodeDependencyCheck.c)
 *     PnpProcessTargetDeviceEvent @ 0x140681D34 (PnpProcessTargetDeviceEvent.c)
 *     PipProcessStartPhase3 @ 0x14068203C (PipProcessStartPhase3.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x1406825AC (PiDcUpdateDeviceContainerMembership.c)
 *     PiProcessQueryDeviceState @ 0x140683054 (PiProcessQueryDeviceState.c)
 *     PipEnumerateCompleted @ 0x140685510 (PipEnumerateCompleted.c)
 *     PiProcessNewDeviceNode @ 0x140685858 (PiProcessNewDeviceNode.c)
 *     PiDcHandleCustomDeviceEvent @ 0x140688AC8 (PiDcHandleCustomDeviceEvent.c)
 *     PiDqQueryEvaluateFilter @ 0x1406CC524 (PiDqQueryEvaluateFilter.c)
 *     PiPnpRtlObjectEventWorker @ 0x1406CC6A0 (PiPnpRtlObjectEventWorker.c)
 *     PiDqActionDataGetRequestedProperties @ 0x140746928 (PiDqActionDataGetRequestedProperties.c)
 *     PiSwPropertySet @ 0x140785B60 (PiSwPropertySet.c)
 *     PiDqIrpPropertySet @ 0x1407FB7F4 (PiDqIrpPropertySet.c)
 *     IoReportDetectedDevice @ 0x140802A80 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x140802F20 (IoReportRootDevice.c)
 *     PpDevCfgProcessDevices @ 0x14081B964 (PpDevCfgProcessDevices.c)
 *     PiDqActionDataGetChangedProperties @ 0x14083AC48 (PiDqActionDataGetChangedProperties.c)
 *     PiProcessAddBootDevices @ 0x1408519D0 (PiProcessAddBootDevices.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140862FDC (PnpUnlinkDeviceRemovalRelations.c)
 *     PipClearDevNodeProblem @ 0x14086666C (PipClearDevNodeProblem.c)
 *     PipSetDevNodeProblem @ 0x1408667BC (PipSetDevNodeProblem.c)
 *     IopRemoveDevice @ 0x140866E38 (IopRemoveDevice.c)
 *     IopRegisterDeviceInterface @ 0x14086A664 (IopRegisterDeviceInterface.c)
 *     PipMergeDependencyEdgeList @ 0x1409517A8 (PipMergeDependencyEdgeList.c)
 *     PiProcessClearDeviceProblem @ 0x140956400 (PiProcessClearDeviceProblem.c)
 *     PiProcessSetDeviceProblem @ 0x1409566C8 (PiProcessSetDeviceProblem.c)
 *     PiPnpRtlEnsureObjectCached @ 0x140957214 (PiPnpRtlEnsureObjectCached.c)
 *     PiCMCreateDevice @ 0x1409654C0 (PiCMCreateDevice.c)
 *     PiCMDeleteClassKey @ 0x140965DBC (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x140965ED8 (PiCMDeleteDevice.c)
 *     PiCMDeleteObject @ 0x14096656C (PiCMDeleteObject.c)
 *     PiInitializeDevice @ 0x14096AB74 (PiInitializeDevice.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x140245560 (RtlInitializeGenericTableAvl.c)
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     PiPnpRtlGetCurrentOperation @ 0x1406D0D80 (PiPnpRtlGetCurrentOperation.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiPnpRtlBeginOperation(__int64 **a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  int CurrentOperation; // eax
  unsigned int v4; // edi
  __int64 *v5; // rbx
  __int64 Pool2; // rax
  __int64 v7; // rbx
  struct _KTHREAD *v8; // rax
  __int64 v9; // rax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  *a1 = 0LL;
  v11 = 0LL;
  CurrentOperation = PiPnpRtlGetCurrentOperation(&v11);
  v4 = CurrentOperation;
  if ( CurrentOperation == -1073741275 )
  {
    v4 = 0;
  }
  else if ( CurrentOperation < 0 )
  {
    return v4;
  }
  v5 = (__int64 *)v11;
  if ( v11 )
  {
    ++*(_DWORD *)(v11 + 144);
  }
  else
  {
    Pool2 = ExAllocatePool2(256LL, 152LL, 1097887312LL);
    v11 = Pool2;
    v7 = Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    *(_DWORD *)(Pool2 + 144) = 1;
    *(_QWORD *)(Pool2 + 16) = CurrentThread;
    RtlInitializeGenericTableAvl(
      (PRTL_AVL_TABLE)(Pool2 + 24),
      PiPnpRtlObjectEventCompareObjects,
      PiPnpRtlOperationAllocateGenericTableEntry,
      PiPnpRtlOperationFreeGenericTableEntry,
      0LL);
    *(_QWORD *)(v7 + 136) = v7 + 128;
    *(_QWORD *)(v7 + 128) = v7 + 128;
    v8 = KeGetCurrentThread();
    --v8->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiPnpRtlActiveOperationsLock, 1u);
    v9 = PiPnpRtlActiveOperations;
    if ( *(__int64 **)(PiPnpRtlActiveOperations + 8) != &PiPnpRtlActiveOperations )
      __fastfail(3u);
    v5 = (__int64 *)v11;
    *(_QWORD *)(v11 + 8) = &PiPnpRtlActiveOperations;
    *v5 = v9;
    *(_QWORD *)(v9 + 8) = v5;
    PiPnpRtlActiveOperations = (__int64)v5;
    ExReleaseResourceLite(&PiPnpRtlActiveOperationsLock);
    KeLeaveCriticalRegion();
  }
  *a1 = v5;
  return v4;
}
