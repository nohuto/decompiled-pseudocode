/*
 * XREFs of MmMapIoSpaceEx @ 0x1402E7FA0
 * Callers:
 *     HalpAcpiGetRsdt @ 0x1402E7690 (HalpAcpiGetRsdt.c)
 *     MmMapIoSpace @ 0x1402E7B40 (MmMapIoSpace.c)
 *     HalpAcpiCheckAndMapTable @ 0x1402E7D28 (HalpAcpiCheckAndMapTable.c)
 *     BgpFwLibraryEnable @ 0x14039C188 (BgpFwLibraryEnable.c)
 *     HvlEnlightenProcessor @ 0x1403A7298 (HvlEnlightenProcessor.c)
 *     HalInitializeBios @ 0x1403C4710 (HalInitializeBios.c)
 *     WmipFirmwareTableHandler @ 0x1403CA8D0 (WmipFirmwareTableHandler.c)
 *     HvlPhase1Initialize @ 0x1403CF458 (HvlPhase1Initialize.c)
 *     HalpMcaExtendedLogInitialize @ 0x1404BA3B0 (HalpMcaExtendedLogInitialize.c)
 *     HalpDmaAllocateNewTranslationBuffer @ 0x1404C6F18 (HalpDmaAllocateNewTranslationBuffer.c)
 *     HalpReadGenericErrorInfo @ 0x1404CFA38 (HalpReadGenericErrorInfo.c)
 *     HalpSignalRAS @ 0x1404CFB68 (HalpSignalRAS.c)
 *     HvlpEnableNextLogicalProcessor @ 0x1404F2A84 (HvlpEnableNextLogicalProcessor.c)
 *     HvlpInitializeHvCrashdump @ 0x1404F901C (HvlpInitializeHvCrashdump.c)
 *     BgkNotifyDisplayOwnershipLost @ 0x1404FF4E0 (BgkNotifyDisplayOwnershipLost.c)
 *     MiHugePageOperation @ 0x140532EB8 (MiHugePageOperation.c)
 *     InbvPortInitialize @ 0x1405C9C78 (InbvPortInitialize.c)
 *     WmipGetSMBiosTableData @ 0x14065FBBC (WmipGetSMBiosTableData.c)
 *     ExpGetSystemPlatformBinary @ 0x1407CFE44 (ExpGetSystemPlatformBinary.c)
 *     MiMapNewPfns @ 0x1408C5D24 (MiMapNewPfns.c)
 *     WmipFindSMBiosStructure @ 0x140931848 (WmipFindSMBiosStructure.c)
 *     WmipFindSysIdTable @ 0x14093198C (WmipFindSysIdTable.c)
 *     WmipGetSMBiosEventlog @ 0x140931A84 (WmipGetSMBiosEventlog.c)
 *     WmipParseSysIdTable @ 0x140931F3C (WmipParseSysIdTable.c)
 *     WheapClearPoison @ 0x14095D9A4 (WheapClearPoison.c)
 *     PopGetHwConfigurationSignature @ 0x140996ED4 (PopGetHwConfigurationSignature.c)
 *     HalpMapNvsArea @ 0x140998E18 (HalpMapNvsArea.c)
 *     HalpInitGenericErrorSourceEntry @ 0x1409A7820 (HalpInitGenericErrorSourceEntry.c)
 *     HalpInitGenericErrorSourceEntryV2 @ 0x1409A7AB8 (HalpInitGenericErrorSourceEntryV2.c)
 *     HalpInitializeGenericErrorSource @ 0x1409A7E74 (HalpInitializeGenericErrorSource.c)
 *     VerifierMmMapIoSpace @ 0x1409E69B0 (VerifierMmMapIoSpace.c)
 *     VerifierMmMapIoSpaceEx @ 0x1409E6AC0 (VerifierMmMapIoSpaceEx.c)
 *     KiVerifyXcpt15 @ 0x140A1B320 (KiVerifyXcpt15.c)
 *     PipInitComputerIds @ 0x140A5B730 (PipInitComputerIds.c)
 *     HalpAuditQuerySlicAddresses @ 0x140A654C8 (HalpAuditQuerySlicAddresses.c)
 *     HalpAuditEnumerateRsdtsInRange @ 0x140A656CC (HalpAuditEnumerateRsdtsInRange.c)
 *     HalpAuditGetExtendedBiosDataArea @ 0x140A6586C (HalpAuditGetExtendedBiosDataArea.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140A65B2C (HalpDmaInitializeMasterAdapter.c)
 *     HalpPowerInitFwPerformanceTableMappings @ 0x140A6967C (HalpPowerInitFwPerformanceTableMappings.c)
 * Callees:
 *     MiMakeProtectionMask @ 0x14021A9E0 (MiMakeProtectionMask.c)
 *     MiMapContiguousMemory @ 0x1402E8974 (MiMapContiguousMemory.c)
 */

__int64 __fastcall MmMapIoSpaceEx(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int ProtectionMask; // eax
  __int64 v4; // r10
  __int64 v5; // r11

  ProtectionMask = MiMakeProtectionMask(a3);
  if ( (ProtectionMask & 2) != 0 && (ProtectionMask & 0xFFFFFFF8) == 0x18 && (ProtectionMask & 7) != 0 )
    return 0LL;
  else
    return MiMapContiguousMemory(v4, v5, ProtectionMask, 0LL);
}
