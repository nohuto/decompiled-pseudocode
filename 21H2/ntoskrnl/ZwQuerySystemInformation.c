/*
 * XREFs of ZwQuerySystemInformation @ 0x1403FAC40
 * Callers:
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x140293144 (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_B.c)
 *     RtlpInitializeNonVolatileFlush @ 0x1403B4810 (RtlpInitializeNonVolatileFlush.c)
 *     HvlpProcessIommu @ 0x1404F9758 (HvlpProcessIommu.c)
 *     ?SmHighMemPriorityWatchdogWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140599580 (-SmHighMemPriorityWatchdogWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmKmStoreTerminateWorker @ 0x14059E410 (SmKmStoreTerminateWorker.c)
 *     ExpInitExpCheckTestSigningInfo @ 0x1405B6F90 (ExpInitExpCheckTestSigningInfo.c)
 *     PspDetectComplusILImage @ 0x14060D484 (PspDetectComplusILImage.c)
 *     SiGetSystemDeviceName @ 0x140613E88 (SiGetSystemDeviceName.c)
 *     PfpPrivSourceEnum @ 0x1406A53B4 (PfpPrivSourceEnum.c)
 *     sub_1406EDA0C @ 0x1406EDA0C (sub_1406EDA0C.c)
 *     AslEnvGetProcessWowInfo @ 0x140754424 (AslEnvGetProcessWowInfo.c)
 *     RtlCreateHeap @ 0x140768D20 (RtlCreateHeap.c)
 *     PopAllocateHiberContext @ 0x140777E04 (PopAllocateHiberContext.c)
 *     BiGetFirmwareType @ 0x140784B9C (BiGetFirmwareType.c)
 *     BiGetCurrentBootEntryIdentifier @ 0x1407860C8 (BiGetCurrentBootEntryIdentifier.c)
 *     SiQuerySystemInformationString @ 0x140786214 (SiQuerySystemInformationString.c)
 *     RtlQueryModuleInformation @ 0x140788350 (RtlQueryModuleInformation.c)
 *     PoInitHiberServices @ 0x140792228 (PoInitHiberServices.c)
 *     KsepGetLoadedModulesList @ 0x1407BDF24 (KsepGetLoadedModulesList.c)
 *     RtlSystemTimeToLocalTime @ 0x1407CDC90 (RtlSystemTimeToLocalTime.c)
 *     ExpCloudbookHardwareLockedProvider @ 0x1407D1600 (ExpCloudbookHardwareLockedProvider.c)
 *     PiIsHVCIEnabled @ 0x1407D4BEC (PiIsHVCIEnabled.c)
 *     PnpGetStableSystemBootTime @ 0x1408A1FE0 (PnpGetStableSystemBootTime.c)
 *     PopCheckTestsigningEnabled @ 0x1408E11FC (PopCheckTestsigningEnabled.c)
 *     RtlLocalTimeToSystemTime @ 0x1409101D0 (RtlLocalTimeToSystemTime.c)
 *     EtwpLogMemInfoWs @ 0x140936BDC (EtwpLogMemInfoWs.c)
 *     EtwpTiQueryCodeIntegrityOptions @ 0x14093C7C8 (EtwpTiQueryCodeIntegrityOptions.c)
 *     ExpCloudbookHardwareIDProvider @ 0x14094D670 (ExpCloudbookHardwareIDProvider.c)
 *     ExpFindDiskSignature @ 0x1409503D0 (ExpFindDiskSignature.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x14096484C (SdbpCheckMatchingRegistryEntry.c)
 *     PopGetHwConfigurationSignature @ 0x140997EE4 (PopGetHwConfigurationSignature.c)
 *     HdlspAddLogEntry @ 0x1409EFAE0 (HdlspAddLogEntry.c)
 *     MiInitializeCacheFlushing @ 0x140A55B0C (MiInitializeCacheFlushing.c)
 *     SepInitializeDebugOptions @ 0x140A717F8 (SepInitializeDebugOptions.c)
 *     PopInitPlatformSettings @ 0x140A72334 (PopInitPlatformSettings.c)
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
