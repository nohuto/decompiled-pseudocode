/*
 * XREFs of IoGetDeviceAttachmentBaseRefWithTag @ 0x140302A88
 * Callers:
 *     PopAllocateIrp @ 0x14028F314 (PopAllocateIrp.c)
 *     FsRtlReleaseFileForModWrite @ 0x1402F4A7C (FsRtlReleaseFileForModWrite.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x140302AF0 (IoGetDeviceAttachmentBaseRef.c)
 *     PoStoreRequester @ 0x14032CD64 (PoStoreRequester.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x140349A9C (FsRtlAcquireFileForModWriteEx.c)
 *     PopCheckAndHandleThermalConditions @ 0x140373610 (PopCheckAndHandleThermalConditions.c)
 *     PopDiagTraceThermalZoneEnumeration @ 0x1403736A4 (PopDiagTraceThermalZoneEnumeration.c)
 *     HalpIommuGetDeviceId @ 0x14038F10C (HalpIommuGetDeviceId.c)
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x140560FA8 (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 *     PoSetSystemWakeDevice @ 0x140583BC0 (PoSetSystemWakeDevice.c)
 *     PopDiagTraceDeviceIdleCheck @ 0x1405929FC (PopDiagTraceDeviceIdleCheck.c)
 *     PopDiagTraceThermalStateChange @ 0x140594CB4 (PopDiagTraceThermalStateChange.c)
 *     PopDiagTraceThermalZoneRundown @ 0x140594DDC (PopDiagTraceThermalZoneRundown.c)
 *     PopDiagTraceThermalZoneThrottleDurationPerfTrack @ 0x140594FD4 (PopDiagTraceThermalZoneThrottleDurationPerfTrack.c)
 *     PopDiagTraceThermalZoneThrottlePerfTrack @ 0x140595108 (PopDiagTraceThermalZoneThrottlePerfTrack.c)
 *     PopTraceThermalRequestActiveActivity @ 0x140595868 (PopTraceThermalRequestActiveActivity.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x140595A88 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopTraceThermalZoneActiveActivity @ 0x140595DDC (PopTraceThermalZoneActiveActivity.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x140595FB0 (PopTraceThermalZonePassiveHistogram.c)
 *     PopTraceZoneCr3Mitigated @ 0x140596138 (PopTraceZoneCr3Mitigated.c)
 *     PopTraceZoneCr3Tripped @ 0x140596260 (PopTraceZoneCr3Tripped.c)
 *     SmKmEtwAppendObjectName @ 0x1405CB2A4 (SmKmEtwAppendObjectName.c)
 *     PopCheckThermalPolicy @ 0x1408024A8 (PopCheckThermalPolicy.c)
 *     PopDiagTraceThermalCoolingMode @ 0x14080262C (PopDiagTraceThermalCoolingMode.c)
 *     IopQueryInterfaceRecurseUp @ 0x14082A320 (IopQueryInterfaceRecurseUp.c)
 *     PopFxRegisterDevice @ 0x14083806C (PopFxRegisterDevice.c)
 *     PoDirectedDripsNotifyPagingDeviceUsage @ 0x140854CF0 (PoDirectedDripsNotifyPagingDeviceUsage.c)
 *     PiControlGetDeviceStack @ 0x140856970 (PiControlGetDeviceStack.c)
 *     PopDiagTraceThermalRequest @ 0x140860C54 (PopDiagTraceThermalRequest.c)
 *     PopDiagTraceCoolingExtension @ 0x1408616BC (PopDiagTraceCoolingExtension.c)
 *     PopDirectedDripsNotifyTransitionFailed @ 0x140983BAC (PopDirectedDripsNotifyTransitionFailed.c)
 *     PoThermalCounterSetCallback @ 0x14098AC90 (PoThermalCounterSetCallback.c)
 *     PopDiagTraceActiveCooling @ 0x14098C348 (PopDiagTraceActiveCooling.c)
 *     PopDiagTracePassiveCooling @ 0x14098FFB0 (PopDiagTracePassiveCooling.c)
 *     PopDiagTraceZoneCriticalTripPointExceeded @ 0x140992288 (PopDiagTraceZoneCriticalTripPointExceeded.c)
 *     PopDiagTraceZoneS4TripPointExceeded @ 0x14099237C (PopDiagTraceZoneS4TripPointExceeded.c)
 *     PopSqmThermalCriticalEvent @ 0x1409A0CF8 (PopSqmThermalCriticalEvent.c)
 *     PopNotifyDevice @ 0x140AA738C (PopNotifyDevice.c)
 *     IopMarkBootPartition @ 0x140B3D4F0 (IopMarkBootPartition.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1402A0640 (KeAcquireQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6890 (ObfReferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x140302810 (KeReleaseQueuedSpinLock.c)
 *     IopGetDeviceAttachmentBase @ 0x140302A1C (IopGetDeviceAttachmentBase.c)
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
