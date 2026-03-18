/*
 * XREFs of PiPnpRtlEndOperation @ 0x140788CDC
 * Callers:
 *     PiDqQueryEvaluateFilter @ 0x140788864 (PiDqQueryEvaluateFilter.c)
 *     PiPnpRtlObjectEventWorker @ 0x1407889E0 (PiPnpRtlObjectEventWorker.c)
 *     PiProcessQueryDeviceState @ 0x14079379C (PiProcessQueryDeviceState.c)
 *     PnpProcessTargetDeviceEvent @ 0x1407948AC (PnpProcessTargetDeviceEvent.c)
 *     PipEnumerateCompleted @ 0x140795910 (PipEnumerateCompleted.c)
 *     PiProcessNewDeviceNode @ 0x140795C58 (PiProcessNewDeviceNode.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x14079BAD0 (PiDcUpdateDeviceContainerMembership.c)
 *     PipProcessStartPhase3 @ 0x14079BED4 (PipProcessStartPhase3.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x14079C720 (PnpNewDeviceNodeDependencyCheck.c)
 *     PiSwPropertySet @ 0x14079CF70 (PiSwPropertySet.c)
 *     PiDcHandleCustomDeviceEvent @ 0x1407DB41C (PiDcHandleCustomDeviceEvent.c)
 *     PiDqActionDataGetRequestedProperties @ 0x1407FA218 (PiDqActionDataGetRequestedProperties.c)
 *     PiDqIrpPropertySet @ 0x140800484 (PiDqIrpPropertySet.c)
 *     PpDevCfgProcessDevices @ 0x140813294 (PpDevCfgProcessDevices.c)
 *     IoReportDetectedDevice @ 0x140836920 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x140836DC0 (IoReportRootDevice.c)
 *     PiDqActionDataGetChangedProperties @ 0x14083BF38 (PiDqActionDataGetChangedProperties.c)
 *     PiProcessAddBootDevices @ 0x140855240 (PiProcessAddBootDevices.c)
 *     IopRegisterDeviceInterface @ 0x140866CCC (IopRegisterDeviceInterface.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140868334 (PnpUnlinkDeviceRemovalRelations.c)
 *     PipClearDevNodeProblem @ 0x14086966C (PipClearDevNodeProblem.c)
 *     PipSetDevNodeProblem @ 0x1408697BC (PipSetDevNodeProblem.c)
 *     IopRemoveDevice @ 0x140869E38 (IopRemoveDevice.c)
 *     PipMergeDependencyEdgeList @ 0x1409547C8 (PipMergeDependencyEdgeList.c)
 *     PiProcessClearDeviceProblem @ 0x140959420 (PiProcessClearDeviceProblem.c)
 *     PiProcessSetDeviceProblem @ 0x1409596E8 (PiProcessSetDeviceProblem.c)
 *     PiPnpRtlEnsureObjectCached @ 0x14095A234 (PiPnpRtlEnsureObjectCached.c)
 *     PiCMCreateDevice @ 0x1409684E0 (PiCMCreateDevice.c)
 *     PiCMDeleteClassKey @ 0x140968DDC (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x140968EF8 (PiCMDeleteDevice.c)
 *     PiCMDeleteObject @ 0x14096958C (PiCMDeleteObject.c)
 *     PiInitializeDevice @ 0x14096DB94 (PiInitializeDevice.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402390C0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14023D660 (ExAcquireResourceSharedLite.c)
 *     RtlIsGenericTableEmptyAvl @ 0x14031E6B0 (RtlIsGenericTableEmptyAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x14031E7F0 (RtlDeleteElementGenericTableAvl.c)
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 *     PiPnpRtlObjectEventDispatch @ 0x140788E10 (PiPnpRtlObjectEventDispatch.c)
 *     PiPnpRtlObjectEventRelease @ 0x140788E58 (PiPnpRtlObjectEventRelease.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall PiPnpRtlEndOperation(PVOID **P)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v4; // rax
  PVOID *v5; // rdx
  PVOID *v6; // rax
  _QWORD **v7; // rdi
  _QWORD *v8; // rcx
  HANDLE *v9; // rcx
  _QWORD *v10; // rax
  HANDLE *Buffer; // [rsp+30h] [rbp+8h] BYREF

  Buffer = 0LL;
  if ( (*((_DWORD *)P + 36))-- == 1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&PiPnpRtlRemoveOperationDispatchLock, 1u);
    v4 = KeGetCurrentThread();
    --v4->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiPnpRtlActiveOperationsLock, 1u);
    v5 = *P;
    if ( (*P)[1] != P || (v6 = P[1], *v6 != P) )
LABEL_16:
      __fastfail(3u);
    *v6 = v5;
    v5[1] = v6;
    ExReleaseResourceLite(&PiPnpRtlActiveOperationsLock);
    KeLeaveCriticalRegion();
    while ( !RtlIsGenericTableEmptyAvl((PRTL_AVL_TABLE)(P + 3)) )
    {
      v9 = (HANDLE *)P[5][4];
      Buffer = v9;
      if ( v9[2] )
      {
        ZwClose(v9[2]);
        Buffer[2] = 0LL;
        v9 = Buffer;
      }
      PiPnpRtlObjectEventDispatch(v9);
      RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(P + 3), &Buffer);
      PiPnpRtlObjectEventRelease(Buffer);
    }
    ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
    KeLeaveCriticalRegion();
    v7 = P + 16;
    while ( 1 )
    {
      v8 = *v7;
      if ( *v7 == v7 )
        break;
      if ( (_QWORD **)v8[1] != v7 )
        goto LABEL_16;
      v10 = (_QWORD *)*v8;
      if ( *(_QWORD **)(*v8 + 8LL) != v8 )
        goto LABEL_16;
      *v7 = v10;
      v10[1] = v7;
      Buffer = (HANDLE *)(v8 - 7);
      PiPnpRtlObjectEventRelease(v8 - 7);
    }
    ExFreePoolWithTag(P, 0x41706E50u);
  }
}
