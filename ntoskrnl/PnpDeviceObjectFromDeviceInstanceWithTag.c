/*
 * XREFs of PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1406CDF08
 * Callers:
 *     NtReplacePartitionUnit @ 0x1406772E0 (NtReplacePartitionUnit.c)
 *     IopProcessSetInterfaceState @ 0x140683354 (IopProcessSetInterfaceState.c)
 *     PiProcessNewDeviceNode @ 0x140685858 (PiProcessNewDeviceNode.c)
 *     PiControlGetPropertyData @ 0x1406C44A0 (PiControlGetPropertyData.c)
 *     PiGetRelatedDevice @ 0x1406C8018 (PiGetRelatedDevice.c)
 *     PipProcessDevNodeTree @ 0x1406CCD80 (PipProcessDevNodeTree.c)
 *     PiControlGetSetDeviceStatus @ 0x1406CD670 (PiControlGetSetDeviceStatus.c)
 *     PiPnpRtlCmActionCallback @ 0x1406CE2F0 (PiPnpRtlCmActionCallback.c)
 *     IopDeviceObjectFromSymbolicName @ 0x1406F6F58 (IopDeviceObjectFromSymbolicName.c)
 *     PiGetDeviceDepth @ 0x140786CD0 (PiGetDeviceDepth.c)
 *     PnpIsDeviceInstanceEnabled @ 0x14078A304 (PnpIsDeviceInstanceEnabled.c)
 *     IoReportDetectedDevice @ 0x140802A80 (IoReportDetectedDevice.c)
 *     PiSwIrpStartCreateWorker @ 0x140806A2C (PiSwIrpStartCreateWorker.c)
 *     PiSwIrpCleanup @ 0x140807E94 (PiSwIrpCleanup.c)
 *     IopInitializeDeviceInstanceKey @ 0x14081CE14 (IopInitializeDeviceInstanceKey.c)
 *     PiSwGetChildPdo @ 0x140846F50 (PiSwGetChildPdo.c)
 *     PiQueryDeviceRelations @ 0x14084B8CC (PiQueryDeviceRelations.c)
 *     PnpDriverLoadingFailed @ 0x14085EEA4 (PnpDriverLoadingFailed.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1409582C0 (PiDcResetChildDeviceContainerCallback.c)
 *     PiSwCloseDevice @ 0x140964150 (PiSwCloseDevice.c)
 *     PiSwProcessRemove @ 0x140964760 (PiSwProcessRemove.c)
 *     PiCMCreateDevice @ 0x1409654C0 (PiCMCreateDevice.c)
 *     PiInitializeDevice @ 0x14096AB74 (PiInitializeDevice.c)
 *     PiQueueDeviceRequest @ 0x14096AF78 (PiQueueDeviceRequest.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14096B0E0 (PnpQueueQueryAndRemoveEvent.c)
 *     PipAddDevicesToBootDriverWorker @ 0x140B67204 (PipAddDevicesToBootDriverWorker.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x140245A20 (RtlLookupElementGenericTableAvl.c)
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
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
