/*
 * XREFs of ZwQuerySystemInformation @ 0x1403FA0E0
 * Callers:
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x14035335C (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_B.c)
 *     RtlpInitializeNonVolatileFlush @ 0x1403B4040 (RtlpInitializeNonVolatileFlush.c)
 *     HvlpProcessIommu @ 0x1404F9458 (HvlpProcessIommu.c)
 *     ?SmHighMemPriorityWatchdogWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140599290 (-SmHighMemPriorityWatchdogWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmKmStoreTerminateWorker @ 0x14059E120 (SmKmStoreTerminateWorker.c)
 *     ExpInitExpCheckTestSigningInfo @ 0x1405B6CA0 (ExpInitExpCheckTestSigningInfo.c)
 *     sub_1405FE2AC @ 0x1405FE2AC (sub_1405FE2AC.c)
 *     PfpPrivSourceEnum @ 0x14062B8D4 (PfpPrivSourceEnum.c)
 *     PspDetectComplusILImage @ 0x140691B94 (PspDetectComplusILImage.c)
 *     SiGetSystemDeviceName @ 0x1406979C8 (SiGetSystemDeviceName.c)
 *     AslEnvGetProcessWowInfo @ 0x140753A54 (AslEnvGetProcessWowInfo.c)
 *     RtlCreateHeap @ 0x140768180 (RtlCreateHeap.c)
 *     PopAllocateHiberContext @ 0x140777B44 (PopAllocateHiberContext.c)
 *     BiGetFirmwareType @ 0x1407848DC (BiGetFirmwareType.c)
 *     BiGetCurrentBootEntryIdentifier @ 0x140785E08 (BiGetCurrentBootEntryIdentifier.c)
 *     SiQuerySystemInformationString @ 0x140785F54 (SiQuerySystemInformationString.c)
 *     RtlQueryModuleInformation @ 0x140788090 (RtlQueryModuleInformation.c)
 *     PoInitHiberServices @ 0x14079AED8 (PoInitHiberServices.c)
 *     KsepGetLoadedModulesList @ 0x1407BDF54 (KsepGetLoadedModulesList.c)
 *     RtlSystemTimeToLocalTime @ 0x1407CDA40 (RtlSystemTimeToLocalTime.c)
 *     ExpCloudbookHardwareLockedProvider @ 0x1407D13B0 (ExpCloudbookHardwareLockedProvider.c)
 *     PiIsHVCIEnabled @ 0x1407D499C (PiIsHVCIEnabled.c)
 *     PnpGetStableSystemBootTime @ 0x1408A1ED0 (PnpGetStableSystemBootTime.c)
 *     PopCheckTestsigningEnabled @ 0x1408E10EC (PopCheckTestsigningEnabled.c)
 *     RtlLocalTimeToSystemTime @ 0x1409100C0 (RtlLocalTimeToSystemTime.c)
 *     EtwpLogMemInfoWs @ 0x140936A5C (EtwpLogMemInfoWs.c)
 *     EtwpTiQueryCodeIntegrityOptions @ 0x14093C648 (EtwpTiQueryCodeIntegrityOptions.c)
 *     ExpCloudbookHardwareIDProvider @ 0x14094D4F0 (ExpCloudbookHardwareIDProvider.c)
 *     ExpFindDiskSignature @ 0x140950250 (ExpFindDiskSignature.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x1409646BC (SdbpCheckMatchingRegistryEntry.c)
 *     PopGetHwConfigurationSignature @ 0x140996ED4 (PopGetHwConfigurationSignature.c)
 *     HdlspAddLogEntry @ 0x1409EEAE0 (HdlspAddLogEntry.c)
 *     MiInitializeCacheFlushing @ 0x140A54B0C (MiInitializeCacheFlushing.c)
 *     SepInitializeDebugOptions @ 0x140A707F8 (SepInitializeDebugOptions.c)
 *     PopInitPlatformSettings @ 0x140A71334 (PopInitPlatformSettings.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwQuerySystemInformation(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID SystemInformation,
        ULONG SystemInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&SystemInformationClass);
}
