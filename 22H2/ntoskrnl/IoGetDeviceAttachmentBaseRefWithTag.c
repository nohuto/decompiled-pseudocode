/*
 * XREFs of IoGetDeviceAttachmentBaseRefWithTag @ 0x14034C53C
 * Callers:
 *     FsRtlReleaseFileForModWrite @ 0x1402547F4 (FsRtlReleaseFileForModWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x14025522C (FsRtlAcquireFileForModWriteEx.c)
 *     PopScanIdleList @ 0x140349888 (PopScanIdleList.c)
 *     PoStoreRequester @ 0x14034BEB8 (PoStoreRequester.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x14034C520 (IoGetDeviceAttachmentBaseRef.c)
 *     PopThermalTraceRundownEvents @ 0x14034D8C4 (PopThermalTraceRundownEvents.c)
 *     PopAllocateIrp @ 0x1403707A0 (PopAllocateIrp.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x140389D24 (PopTraceThermalZonePassiveHistogram.c)
 *     PopTraceThermalZoneActiveActivity @ 0x140389EB4 (PopTraceThermalZoneActiveActivity.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x14038A188 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopTraceThermalRequestActiveActivity @ 0x14038A374 (PopTraceThermalRequestActiveActivity.c)
 *     PopCheckAndHandleThermalConditions @ 0x1403C4D58 (PopCheckAndHandleThermalConditions.c)
 *     PopDiagTraceThermalZoneEnumeration @ 0x1403C4DFC (PopDiagTraceThermalZoneEnumeration.c)
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x14050CE60 (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 *     PoSetSystemWakeDevice @ 0x140565310 (PoSetSystemWakeDevice.c)
 *     PopDiagTraceThermalStateChange @ 0x14057305C (PopDiagTraceThermalStateChange.c)
 *     PopDiagTraceThermalZoneThrottleDurationPerfTrack @ 0x140573174 (PopDiagTraceThermalZoneThrottleDurationPerfTrack.c)
 *     PopDiagTraceThermalZoneThrottlePerfTrack @ 0x140573294 (PopDiagTraceThermalZoneThrottlePerfTrack.c)
 *     PopTraceZoneCr3Mitigated @ 0x140573A10 (PopTraceZoneCr3Mitigated.c)
 *     PopTraceZoneCr3Tripped @ 0x140573B3C (PopTraceZoneCr3Tripped.c)
 *     SmKmEtwAppendObjectName @ 0x14059DB88 (SmKmEtwAppendObjectName.c)
 *     PopDiagTraceThermalRequest @ 0x1406A46F4 (PopDiagTraceThermalRequest.c)
 *     PopDiagTraceCoolingExtension @ 0x1406A4BE0 (PopDiagTraceCoolingExtension.c)
 *     PiControlGetDeviceStack @ 0x140730018 (PiControlGetDeviceStack.c)
 *     IopQueryInterfaceRecurseUp @ 0x1407649A8 (IopQueryInterfaceRecurseUp.c)
 *     PopFxRegisterDevice @ 0x1407B517C (PopFxRegisterDevice.c)
 *     PopCheckThermalPolicy @ 0x1407C0ED4 (PopCheckThermalPolicy.c)
 *     PopDiagTraceActiveCooling @ 0x1407C10A0 (PopDiagTraceActiveCooling.c)
 *     PopDiagTraceThermalCoolingMode @ 0x1407C1130 (PopDiagTraceThermalCoolingMode.c)
 *     PoDirectedDripsNotifyPagingDeviceUsage @ 0x1407C9E48 (PoDirectedDripsNotifyPagingDeviceUsage.c)
 *     PopDirectedDripsNotifyTransitionFailed @ 0x1408E3760 (PopDirectedDripsNotifyTransitionFailed.c)
 *     PoThermalCounterSetCallback @ 0x1408E7A10 (PoThermalCounterSetCallback.c)
 *     PopDiagTracePassiveCooling @ 0x1408EABD8 (PopDiagTracePassiveCooling.c)
 *     PopDiagTraceZoneCriticalTripPointExceeded @ 0x1408EBE94 (PopDiagTraceZoneCriticalTripPointExceeded.c)
 *     PopDiagTraceZoneS4TripPointExceeded @ 0x1408EBF90 (PopDiagTraceZoneS4TripPointExceeded.c)
 *     PopSqmThermalCriticalEvent @ 0x1408F9BC8 (PopSqmThermalCriticalEvent.c)
 *     PopNotifyDevice @ 0x1409930F0 (PopNotifyDevice.c)
 *     IopMarkBootPartition @ 0x140A61890 (IopMarkBootPartition.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140205660 (ObfReferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x140291250 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402912F0 (KeAcquireQueuedSpinLock.c)
 *     IopGetDeviceAttachmentBase @ 0x14034C63C (IopGetDeviceAttachmentBase.c)
 */

void *__fastcall IoGetDeviceAttachmentBaseRefWithTag(__int64 a1, ULONG a2)
{
  KIRQL v4; // di
  void *DeviceAttachmentBase; // rbx

  v4 = KeAcquireQueuedSpinLock(0xAuLL);
  DeviceAttachmentBase = (void *)IopGetDeviceAttachmentBase(a1);
  ObfReferenceObjectWithTag(DeviceAttachmentBase, a2);
  KeReleaseQueuedSpinLock(0xAuLL, v4);
  return DeviceAttachmentBase;
}
