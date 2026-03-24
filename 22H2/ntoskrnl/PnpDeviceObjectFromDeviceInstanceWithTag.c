/*
 * XREFs of PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1406B14B0
 * Callers:
 *     NtReplacePartitionUnit @ 0x1405C9F30 (NtReplacePartitionUnit.c)
 *     PiControlGetPropertyData @ 0x140690D50 (PiControlGetPropertyData.c)
 *     PiGetRelatedDevice @ 0x140691104 (PiGetRelatedDevice.c)
 *     PiGetDeviceDepth @ 0x1406A07F0 (PiGetDeviceDepth.c)
 *     PiPnpRtlCmActionCallback @ 0x1406AE700 (PiPnpRtlCmActionCallback.c)
 *     PiControlGetSetDeviceStatus @ 0x1406B2710 (PiControlGetSetDeviceStatus.c)
 *     PiQueueDeviceRequest @ 0x14072F6CC (PiQueueDeviceRequest.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14072F89C (PnpQueueQueryAndRemoveEvent.c)
 *     PiSwProcessRemove @ 0x140732F28 (PiSwProcessRemove.c)
 *     PiSwCloseDevice @ 0x140734D40 (PiSwCloseDevice.c)
 *     IopDeviceObjectFromSymbolicName @ 0x14073A5E0 (IopDeviceObjectFromSymbolicName.c)
 *     PipProcessDevNodeTree @ 0x14073D6A4 (PipProcessDevNodeTree.c)
 *     PiProcessNewDeviceNode @ 0x140740930 (PiProcessNewDeviceNode.c)
 *     IopProcessSetInterfaceState @ 0x14074557C (IopProcessSetInterfaceState.c)
 *     PiSwIrpStartCreateWorker @ 0x14074CF08 (PiSwIrpStartCreateWorker.c)
 *     IopInitializeDeviceInstanceKey @ 0x14074E544 (IopInitializeDeviceInstanceKey.c)
 *     PnpIsDeviceInstanceEnabled @ 0x14075240C (PnpIsDeviceInstanceEnabled.c)
 *     PiSwGetChildPdo @ 0x1407705FC (PiSwGetChildPdo.c)
 *     PiSwIrpCleanup @ 0x1407734BC (PiSwIrpCleanup.c)
 *     IoReportDetectedDevice @ 0x1407AED50 (IoReportDetectedDevice.c)
 *     PnpDriverLoadingFailed @ 0x1407D2B70 (PnpDriverLoadingFailed.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1408A36C0 (PiDcResetChildDeviceContainerCallback.c)
 *     PiCMCreateDevice @ 0x1408AF490 (PiCMCreateDevice.c)
 *     PiControlQueryConflictList @ 0x1408B38A0 (PiControlQueryConflictList.c)
 *     PiInitializeDevice @ 0x1408B3CBC (PiInitializeDevice.c)
 *     PiQueryDeviceRelations @ 0x1408B40CC (PiQueryDeviceRelations.c)
 *     PipAddDevicesToBootDriverWorker @ 0x140A6C2D0 (PipAddDevicesToBootDriverWorker.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140205660 (ObfReferenceObjectWithTag.c)
 *     KeReleaseGuardedMutex @ 0x1402C9310 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1402CA770 (ExAcquireFastMutex.c)
 *     RtlLookupElementGenericTableAvl @ 0x14032D970 (RtlLookupElementGenericTableAvl.c)
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
      if ( *(_WORD *)v2 == 3 )
      {
        v5 = *(_QWORD *)(v2[39] + 40LL);
        if ( !v5 || *(_QWORD **)(v5 + 32) != v2 )
          v2 = 0LL;
        if ( v2 )
          ObfReferenceObjectWithTag(v2, a2);
      }
      else
      {
        v2 = 0LL;
      }
    }
  }
  KeReleaseGuardedMutex(&PnpDeviceReferenceTableLock);
  return v2;
}
