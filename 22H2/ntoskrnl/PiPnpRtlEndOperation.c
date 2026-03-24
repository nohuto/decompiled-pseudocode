/*
 * XREFs of PiPnpRtlEndOperation @ 0x1406ACCB8
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
 *     ExAcquireResourceSharedLite @ 0x1402CC670 (ExAcquireResourceSharedLite.c)
 *     RtlIsGenericTableEmptyAvl @ 0x14032D550 (RtlIsGenericTableEmptyAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x14032DA20 (RtlDeleteElementGenericTableAvl.c)
 *     ZwClose @ 0x1403F9C00 (ZwClose.c)
 *     PiPnpRtlObjectEventDispatch @ 0x1406ACC70 (PiPnpRtlObjectEventDispatch.c)
 *     PiPnpRtlObjectEventRelease @ 0x1406ACE28 (PiPnpRtlObjectEventRelease.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
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
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
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
      PiPnpRtlObjectEventDispatch((__int64)v9);
      RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(P + 3), &Buffer);
      PiPnpRtlObjectEventRelease(Buffer);
    }
    ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
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
