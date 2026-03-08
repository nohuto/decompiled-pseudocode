/*
 * XREFs of IoGetDeviceAttachmentBaseRefWithTag @ 0x140240954
 * Callers:
 *     FsRtlReleaseFileForModWrite @ 0x140212510 (FsRtlReleaseFileForModWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x140212E3C (FsRtlAcquireFileForModWriteEx.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1402409C0 (IoGetDeviceAttachmentBaseRef.c)
 *     PopAllocateIrp @ 0x1402BA774 (PopAllocateIrp.c)
 *     PoStoreRequester @ 0x1402BCF14 (PoStoreRequester.c)
 *     HalpIommuGetDeviceId @ 0x14038CC4C (HalpIommuGetDeviceId.c)
 *     PopCheckAndHandleThermalConditions @ 0x14039CAB4 (PopCheckAndHandleThermalConditions.c)
 *     PopDiagTraceThermalZoneEnumeration @ 0x14039CBDC (PopDiagTraceThermalZoneEnumeration.c)
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x14055EB08 (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 *     PoSetSystemWakeDevice @ 0x140581690 (PoSetSystemWakeDevice.c)
 *     PopDiagTraceDeviceIdleCheck @ 0x1405904E0 (PopDiagTraceDeviceIdleCheck.c)
 *     PopDiagTraceThermalStateChange @ 0x140592798 (PopDiagTraceThermalStateChange.c)
 *     PopDiagTraceThermalZoneRundown @ 0x1405928C0 (PopDiagTraceThermalZoneRundown.c)
 *     PopDiagTraceThermalZoneThrottleDurationPerfTrack @ 0x140592AB8 (PopDiagTraceThermalZoneThrottleDurationPerfTrack.c)
 *     PopDiagTraceThermalZoneThrottlePerfTrack @ 0x140592BEC (PopDiagTraceThermalZoneThrottlePerfTrack.c)
 *     PopTraceThermalRequestActiveActivity @ 0x14059334C (PopTraceThermalRequestActiveActivity.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x14059356C (PopTraceThermalRequestPassiveHistogram.c)
 *     PopTraceThermalZoneActiveActivity @ 0x1405938C0 (PopTraceThermalZoneActiveActivity.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x140593A94 (PopTraceThermalZonePassiveHistogram.c)
 *     PopTraceZoneCr3Mitigated @ 0x140593C1C (PopTraceZoneCr3Mitigated.c)
 *     PopTraceZoneCr3Tripped @ 0x140593D44 (PopTraceZoneCr3Tripped.c)
 *     SmKmEtwAppendObjectName @ 0x1405C8DF4 (SmKmEtwAppendObjectName.c)
 *     IopQueryInterfaceRecurseUp @ 0x1408222B0 (IopQueryInterfaceRecurseUp.c)
 *     PopFxRegisterDevice @ 0x140836FBC (PopFxRegisterDevice.c)
 *     PopCheckThermalPolicy @ 0x140846B78 (PopCheckThermalPolicy.c)
 *     PopDiagTraceThermalCoolingMode @ 0x140846CFC (PopDiagTraceThermalCoolingMode.c)
 *     PoDirectedDripsNotifyPagingDeviceUsage @ 0x140851480 (PoDirectedDripsNotifyPagingDeviceUsage.c)
 *     PiControlGetDeviceStack @ 0x140852740 (PiControlGetDeviceStack.c)
 *     PopDiagTraceThermalRequest @ 0x14085CD54 (PopDiagTraceThermalRequest.c)
 *     PopDiagTraceCoolingExtension @ 0x14085D84C (PopDiagTraceCoolingExtension.c)
 *     PopDirectedDripsNotifyTransitionFailed @ 0x140980AFC (PopDirectedDripsNotifyTransitionFailed.c)
 *     PoThermalCounterSetCallback @ 0x140987BE0 (PoThermalCounterSetCallback.c)
 *     PopDiagTraceActiveCooling @ 0x140989298 (PopDiagTraceActiveCooling.c)
 *     PopDiagTracePassiveCooling @ 0x14098CF00 (PopDiagTracePassiveCooling.c)
 *     PopDiagTraceZoneCriticalTripPointExceeded @ 0x14098F1D8 (PopDiagTraceZoneCriticalTripPointExceeded.c)
 *     PopDiagTraceZoneS4TripPointExceeded @ 0x14098F2CC (PopDiagTraceZoneS4TripPointExceeded.c)
 *     PopSqmThermalCriticalEvent @ 0x14099DC68 (PopSqmThermalCriticalEvent.c)
 *     PopNotifyDevice @ 0x140AA415C (PopNotifyDevice.c)
 *     IopMarkBootPartition @ 0x140B54EB0 (IopMarkBootPartition.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14023FDE0 (KeReleaseQueuedSpinLock.c)
 *     IopGetDeviceAttachmentBase @ 0x140240028 (IopGetDeviceAttachmentBase.c)
 *     KeAcquireQueuedSpinLock @ 0x140336900 (KeAcquireQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
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
