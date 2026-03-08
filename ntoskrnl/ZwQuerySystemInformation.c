/*
 * XREFs of ZwQuerySystemInformation @ 0x1404129D0
 * Callers:
 *     HvlpProcessIommu @ 0x1402FEE8C (HvlpProcessIommu.c)
 *     RtlpInitializeNonVolatileFlush @ 0x1403B0730 (RtlpInitializeNonVolatileFlush.c)
 *     IopLiveDumpIsUnderMemoryPressure @ 0x1405579B4 (IopLiveDumpIsUnderMemoryPressure.c)
 *     SmKmStoreTerminateWorker @ 0x1405C9740 (SmKmStoreTerminateWorker.c)
 *     SmQuerySystemInformation @ 0x1405CB680 (SmQuerySystemInformation.c)
 *     DifZwQuerySystemInformationWrapper @ 0x1405F3510 (DifZwQuerySystemInformationWrapper.c)
 *     ExpInitExpCheckTestSigningInfo @ 0x140609E40 (ExpInitExpCheckTestSigningInfo.c)
 *     sub_1406DC290 @ 0x1406DC290 (sub_1406DC290.c)
 *     RtlQueryModuleInformation @ 0x14076D540 (RtlQueryModuleInformation.c)
 *     SiGetSystemDeviceName @ 0x140784278 (SiGetSystemDeviceName.c)
 *     RtlCreateHeap @ 0x14078AD90 (RtlCreateHeap.c)
 *     EtwpTiQueryCodeIntegrityOptions @ 0x14078FE50 (EtwpTiQueryCodeIntegrityOptions.c)
 *     PfpPrivSourceEnum @ 0x1407E7DC0 (PfpPrivSourceEnum.c)
 *     KsepGetLoadedModulesList @ 0x14080110C (KsepGetLoadedModulesList.c)
 *     PopInitializeHibernateGlobals @ 0x14082ABAC (PopInitializeHibernateGlobals.c)
 *     SiQuerySystemInformationString @ 0x14082BAB8 (SiQuerySystemInformationString.c)
 *     BiGetFirmwareType @ 0x14082D7AC (BiGetFirmwareType.c)
 *     BiGetCurrentBootEntryIdentifier @ 0x1408305A4 (BiGetCurrentBootEntryIdentifier.c)
 *     RtlSystemTimeToLocalTime @ 0x140856360 (RtlSystemTimeToLocalTime.c)
 *     ExpCloudbookHardwareLockedProvider @ 0x140859D80 (ExpCloudbookHardwareLockedProvider.c)
 *     EtwpLogMemInfoWs @ 0x1408A21C4 (EtwpLogMemInfoWs.c)
 *     HalpCheckTestSigningEnabled @ 0x140932170 (HalpCheckTestSigningEnabled.c)
 *     PnpGetStableSystemBootTime @ 0x140955AC4 (PnpGetStableSystemBootTime.c)
 *     PiIsHVCIEnabled @ 0x140956D1C (PiIsHVCIEnabled.c)
 *     PipKsrCallback @ 0x14096A300 (PipKsrCallback.c)
 *     PopCheckTestsigningEnabled @ 0x14097D660 (PopCheckTestsigningEnabled.c)
 *     PopAllocateHiberContext @ 0x140984D38 (PopAllocateHiberContext.c)
 *     PspQueryComPlusRunUnderWoW @ 0x1409AE358 (PspQueryComPlusRunUnderWoW.c)
 *     RtlLocalTimeToSystemTime @ 0x1409B5EE0 (RtlLocalTimeToSystemTime.c)
 *     ExpCloudbookHardwareIDProvider @ 0x1409F6AF0 (ExpCloudbookHardwareIDProvider.c)
 *     ExpFindDiskSignature @ 0x1409F983C (ExpFindDiskSignature.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x140A4CCBC (SdbpCheckMatchingRegistryEntry.c)
 *     AslEnvGetProcessWowInfo @ 0x140A54488 (AslEnvGetProcessWowInfo.c)
 *     IoShutdownSystem @ 0x140A96AB4 (IoShutdownSystem.c)
 *     PopGetHwConfigurationSignature @ 0x140A9FA5C (PopGetHwConfigurationSignature.c)
 *     HdlspAddLogEntry @ 0x140AE6B20 (HdlspAddLogEntry.c)
 *     PopInitPlatformSettings @ 0x140B4743C (PopInitPlatformSettings.c)
 *     MiInitializeCacheFlushing @ 0x140B675DC (MiInitializeCacheFlushing.c)
 *     PopCheckShutdownMarker @ 0x140B6B05C (PopCheckShutdownMarker.c)
 *     SepInitializeDebugOptions @ 0x140B722E4 (SepInitializeDebugOptions.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQuerySystemInformation(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
