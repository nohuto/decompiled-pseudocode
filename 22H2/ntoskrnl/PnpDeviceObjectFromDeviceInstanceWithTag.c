/*
 * XREFs of PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1406CBF54
 * Callers:
 *     NtReplacePartitionUnit @ 0x140679930 (NtReplacePartitionUnit.c)
 *     PiGetRelatedDevice @ 0x1406C9298 (PiGetRelatedDevice.c)
 *     PipProcessDevNodeTree @ 0x1406CB740 (PipProcessDevNodeTree.c)
 *     PiControlGetSetDeviceStatus @ 0x1406CBDD0 (PiControlGetSetDeviceStatus.c)
 *     PiPnpRtlCmActionCallback @ 0x140789030 (PiPnpRtlCmActionCallback.c)
 *     IopDeviceObjectFromSymbolicName @ 0x140790C94 (IopDeviceObjectFromSymbolicName.c)
 *     PiControlGetPropertyData @ 0x140792C60 (PiControlGetPropertyData.c)
 *     IopProcessSetInterfaceState @ 0x140793BE4 (IopProcessSetInterfaceState.c)
 *     PiProcessNewDeviceNode @ 0x140795C58 (PiProcessNewDeviceNode.c)
 *     PiGetDeviceDepth @ 0x1407D6110 (PiGetDeviceDepth.c)
 *     PnpIsDeviceInstanceEnabled @ 0x1407D8E64 (PnpIsDeviceInstanceEnabled.c)
 *     IopInitializeDeviceInstanceKey @ 0x140814744 (IopInitializeDeviceInstanceKey.c)
 *     PiSwIrpStartCreateWorker @ 0x14081B5CC (PiSwIrpStartCreateWorker.c)
 *     PiSwIrpCleanup @ 0x14081CA34 (PiSwIrpCleanup.c)
 *     IoReportDetectedDevice @ 0x140836920 (IoReportDetectedDevice.c)
 *     PiSwGetChildPdo @ 0x1408495C0 (PiSwGetChildPdo.c)
 *     PiQueryDeviceRelations @ 0x14084EC7C (PiQueryDeviceRelations.c)
 *     PnpDriverLoadingFailed @ 0x140862E64 (PnpDriverLoadingFailed.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x14095B2E0 (PiDcResetChildDeviceContainerCallback.c)
 *     PiSwCloseDevice @ 0x140967170 (PiSwCloseDevice.c)
 *     PiSwProcessRemove @ 0x140967780 (PiSwProcessRemove.c)
 *     PiCMCreateDevice @ 0x1409684E0 (PiCMCreateDevice.c)
 *     PiInitializeDevice @ 0x14096DB94 (PiInitializeDevice.c)
 *     PiQueueDeviceRequest @ 0x14096DF98 (PiQueueDeviceRequest.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14096E100 (PnpQueueQueryAndRemoveEvent.c)
 *     PipAddDevicesToBootDriverWorker @ 0x140B6B094 (PipAddDevicesToBootDriverWorker.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x14022CF30 (RtlLookupElementGenericTableAvl.c)
 *     ExAcquireFastMutex @ 0x140230720 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230860 (ExReleaseFastMutex.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6890 (ObfReferenceObjectWithTag.c)
 */

_QWORD *__fastcall PnpDeviceObjectFromDeviceInstanceWithTag(__int64 a1, ULONG a2)
{
  _QWORD *v2; // rbx
  _QWORD **v4; // rax
  __int64 v5; // rcx
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  Buffer[1] = a1;
  v2 = 0LL;
  Buffer[0] = 0LL;
  ExAcquireFastMutex(&PnpDeviceReferenceTableLock);
  v4 = (_QWORD **)RtlLookupElementGenericTableAvl(&PnpDeviceReferenceTable, Buffer);
  if ( v4 )
  {
    v2 = *v4;
    if ( *v4 )
    {
      if ( *(_WORD *)v2 == 3 && (v5 = *(_QWORD *)(v2[39] + 40LL)) != 0 && *(_QWORD **)(v5 + 32) == v2 )
        ObfReferenceObjectWithTag(v2, a2);
      else
        v2 = 0LL;
    }
  }
  ExReleaseFastMutex(&PnpDeviceReferenceTableLock);
  return v2;
}
