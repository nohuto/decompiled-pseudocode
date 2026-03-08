/*
 * XREFs of PiPnpRtlEndOperation @ 0x1406CCB7C
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
 *     RtlIsGenericTableEmptyAvl @ 0x140244F30 (RtlIsGenericTableEmptyAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x140244F40 (RtlDeleteElementGenericTableAvl.c)
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14025D790 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     PiPnpRtlObjectEventDispatch @ 0x1406CCCB0 (PiPnpRtlObjectEventDispatch.c)
 *     PiPnpRtlObjectEventRelease @ 0x1406CCCF8 (PiPnpRtlObjectEventRelease.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
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
