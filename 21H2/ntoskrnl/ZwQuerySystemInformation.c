/*
 * XREFs of ZwQuerySystemInformation @ 0x1403FAA60
 * Callers:
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x1402E1DF4 (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_B.c)
 *     RtlpInitializeNonVolatileFlush @ 0x1403B46A0 (RtlpInitializeNonVolatileFlush.c)
 *     HvlpProcessIommu @ 0x1404F97D8 (HvlpProcessIommu.c)
 *     ?SmHighMemPriorityWatchdogWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140599350 (-SmHighMemPriorityWatchdogWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmKmStoreTerminateWorker @ 0x14059E1E0 (SmKmStoreTerminateWorker.c)
 *     ExpInitExpCheckTestSigningInfo @ 0x1405B6D60 (ExpInitExpCheckTestSigningInfo.c)
 *     sub_1405FE2AC @ 0x1405FE2AC (sub_1405FE2AC.c)
 *     PspDetectComplusILImage @ 0x1406AEBE4 (PspDetectComplusILImage.c)
 *     SiGetSystemDeviceName @ 0x1406B4A08 (SiGetSystemDeviceName.c)
 *     PfpPrivSourceEnum @ 0x1406CE0D0 (PfpPrivSourceEnum.c)
 *     AslEnvGetProcessWowInfo @ 0x140754264 (AslEnvGetProcessWowInfo.c)
 *     RtlCreateHeap @ 0x140768B60 (RtlCreateHeap.c)
 *     PopAllocateHiberContext @ 0x140777C44 (PopAllocateHiberContext.c)
 *     BiGetFirmwareType @ 0x1407849DC (BiGetFirmwareType.c)
 *     BiGetCurrentBootEntryIdentifier @ 0x140785F08 (BiGetCurrentBootEntryIdentifier.c)
 *     SiQuerySystemInformationString @ 0x140786054 (SiQuerySystemInformationString.c)
 *     RtlQueryModuleInformation @ 0x140788190 (RtlQueryModuleInformation.c)
 *     PoInitHiberServices @ 0x140790C78 (PoInitHiberServices.c)
 *     KsepGetLoadedModulesList @ 0x1407BD794 (KsepGetLoadedModulesList.c)
 *     RtlSystemTimeToLocalTime @ 0x1407CDB20 (RtlSystemTimeToLocalTime.c)
 *     ExpCloudbookHardwareLockedProvider @ 0x1407D1490 (ExpCloudbookHardwareLockedProvider.c)
 *     PiIsHVCIEnabled @ 0x1407D4A7C (PiIsHVCIEnabled.c)
 *     PnpGetStableSystemBootTime @ 0x1408A1E80 (PnpGetStableSystemBootTime.c)
 *     PopCheckTestsigningEnabled @ 0x1408E109C (PopCheckTestsigningEnabled.c)
 *     RtlLocalTimeToSystemTime @ 0x140910070 (RtlLocalTimeToSystemTime.c)
 *     EtwpLogMemInfoWs @ 0x140936A0C (EtwpLogMemInfoWs.c)
 *     EtwpTiQueryCodeIntegrityOptions @ 0x14093C5F8 (EtwpTiQueryCodeIntegrityOptions.c)
 *     ExpCloudbookHardwareIDProvider @ 0x14094D4A0 (ExpCloudbookHardwareIDProvider.c)
 *     ExpFindDiskSignature @ 0x140950200 (ExpFindDiskSignature.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x14096466C (SdbpCheckMatchingRegistryEntry.c)
 *     PopGetHwConfigurationSignature @ 0x140996EE4 (PopGetHwConfigurationSignature.c)
 *     HdlspAddLogEntry @ 0x1409EEAE0 (HdlspAddLogEntry.c)
 *     MiInitializeCacheFlushing @ 0x140A54B0C (MiInitializeCacheFlushing.c)
 *     SepInitializeDebugOptions @ 0x140A707F8 (SepInitializeDebugOptions.c)
 *     PopInitPlatformSettings @ 0x140A71334 (PopInitPlatformSettings.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQuerySystemInformation(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
