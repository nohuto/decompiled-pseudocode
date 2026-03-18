/*
 * XREFs of ZwQuerySystemInformation @ 0x14041BE20
 * Callers:
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x140262938 (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_B.c)
 *     ExpInitExpCheckTestSigningInfo @ 0x140377310 (ExpInitExpCheckTestSigningInfo.c)
 *     RtlpInitializeNonVolatileFlush @ 0x1403DE6E0 (RtlpInitializeNonVolatileFlush.c)
 *     HvlpProcessIommu @ 0x14054B568 (HvlpProcessIommu.c)
 *     ?SmHighMemPriorityWatchdogWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1405F7090 (-SmHighMemPriorityWatchdogWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmKmStoreTerminateWorker @ 0x1405FBC00 (SmKmStoreTerminateWorker.c)
 *     DifZwQuerySystemInformationWrapper @ 0x140625BF0 (DifZwQuerySystemInformationWrapper.c)
 *     RtlQueryModuleInformation @ 0x1406C6410 (RtlQueryModuleInformation.c)
 *     SiGetSystemDeviceName @ 0x1406CE7A8 (SiGetSystemDeviceName.c)
 *     PfpPrivSourceEnum @ 0x140711614 (PfpPrivSourceEnum.c)
 *     sub_1407D0090 @ 0x1407D0090 (sub_1407D0090.c)
 *     RtlCreateHeap @ 0x1407F3B40 (RtlCreateHeap.c)
 *     PspQueryComPlusRunUnderWoW @ 0x1407F8490 (PspQueryComPlusRunUnderWoW.c)
 *     PopAllocateHiberContext @ 0x140802068 (PopAllocateHiberContext.c)
 *     SiQuerySystemInformationString @ 0x140813FE4 (SiQuerySystemInformationString.c)
 *     BiGetFirmwareType @ 0x1408140B4 (BiGetFirmwareType.c)
 *     BiGetCurrentBootEntryIdentifier @ 0x14081413C (BiGetCurrentBootEntryIdentifier.c)
 *     KsepGetLoadedModulesList @ 0x140825DCC (KsepGetLoadedModulesList.c)
 *     PopInitializeHibernateGlobals @ 0x140828AC4 (PopInitializeHibernateGlobals.c)
 *     RtlSystemTimeToLocalTime @ 0x14085CBB0 (RtlSystemTimeToLocalTime.c)
 *     ExpCloudbookHardwareLockedProvider @ 0x14085E010 (ExpCloudbookHardwareLockedProvider.c)
 *     PiIsHVCIEnabled @ 0x1408649BC (PiIsHVCIEnabled.c)
 *     PnpGetStableSystemBootTime @ 0x140946FEC (PnpGetStableSystemBootTime.c)
 *     PopCheckTestsigningEnabled @ 0x140989608 (PopCheckTestsigningEnabled.c)
 *     RtlLocalTimeToSystemTime @ 0x1409B5D40 (RtlLocalTimeToSystemTime.c)
 *     EtwpLogMemInfoWs @ 0x1409E2E90 (EtwpLogMemInfoWs.c)
 *     EtwpTiQueryCodeIntegrityOptions @ 0x1409E8BA0 (EtwpTiQueryCodeIntegrityOptions.c)
 *     ExpCloudbookHardwareIDProvider @ 0x1409F9960 (ExpCloudbookHardwareIDProvider.c)
 *     ExpFindDiskSignature @ 0x1409FC5BC (ExpFindDiskSignature.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x140A10FDC (SdbpCheckMatchingRegistryEntry.c)
 *     AslEnvGetProcessWowInfo @ 0x140A179E0 (AslEnvGetProcessWowInfo.c)
 *     PopGetHwConfigurationSignature @ 0x140A52AD8 (PopGetHwConfigurationSignature.c)
 *     IoShutdownSystem @ 0x140A651B8 (IoShutdownSystem.c)
 *     HdlspAddLogEntry @ 0x140AA8B28 (HdlspAddLogEntry.c)
 *     MiInitializeCacheFlushing @ 0x140B08B40 (MiInitializeCacheFlushing.c)
 *     SepInitializeDebugOptions @ 0x140B2BEEC (SepInitializeDebugOptions.c)
 *     PopInitPlatformSettings @ 0x140B2D708 (PopInitPlatformSettings.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQuerySystemInformation(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
