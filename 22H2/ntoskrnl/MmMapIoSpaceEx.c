/*
 * XREFs of MmMapIoSpaceEx @ 0x140335810
 * Callers:
 *     HalpCheckAndReportGhes @ 0x14033532C (HalpCheckAndReportGhes.c)
 *     MmMapIoSpace @ 0x1403353B0 (MmMapIoSpace.c)
 *     HalpAcpiCheckAndMapTable @ 0x14033564C (HalpAcpiCheckAndMapTable.c)
 *     HalpAcpiGetRsdt @ 0x140336C28 (HalpAcpiGetRsdt.c)
 *     HvlEnlightenProcessor @ 0x140382F20 (HvlEnlightenProcessor.c)
 *     BgpFwLibraryEnable @ 0x140387044 (BgpFwLibraryEnable.c)
 *     HvlPhase1Initialize @ 0x1403872A4 (HvlPhase1Initialize.c)
 *     HalInitializeBios @ 0x14039ED70 (HalInitializeBios.c)
 *     HalpMcaExtendedLogInitialize @ 0x1405031EC (HalpMcaExtendedLogInitialize.c)
 *     HalpDmaAllocateNewTranslationBuffer @ 0x1405108A8 (HalpDmaAllocateNewTranslationBuffer.c)
 *     HalpSignalRAS @ 0x140518D4C (HalpSignalRAS.c)
 *     HalpMmUpdateTiledMemoryMapTargetStub @ 0x14051B608 (HalpMmUpdateTiledMemoryMapTargetStub.c)
 *     HvlpEnableNextLogicalProcessor @ 0x140540E58 (HvlpEnableNextLogicalProcessor.c)
 *     HvlpInitializeHvCrashdump @ 0x140548094 (HvlpInitializeHvCrashdump.c)
 *     BgkNotifyDisplayOwnershipLost @ 0x14054EF00 (BgkNotifyDisplayOwnershipLost.c)
 *     WmipFirmwareTableHandler @ 0x1405FBDC0 (WmipFirmwareTableHandler.c)
 *     MiHugePageOperation @ 0x140620610 (MiHugePageOperation.c)
 *     BgpFwMapFrameBuffer @ 0x140671D60 (BgpFwMapFrameBuffer.c)
 *     IpmiHwKcsInit @ 0x14067790C (IpmiHwKcsInit.c)
 *     InbvPortInitialize @ 0x14067966C (InbvPortInitialize.c)
 *     WmipGetSMBiosTableData @ 0x1407ABD0C (WmipGetSMBiosTableData.c)
 *     ExpGetSystemPlatformBinary @ 0x14085FAF8 (ExpGetSystemPlatformBinary.c)
 *     WmipFindSMBiosStructure @ 0x1409DF7BC (WmipFindSMBiosStructure.c)
 *     WmipFindSysIdTable @ 0x1409DF900 (WmipFindSysIdTable.c)
 *     WmipGetSMBiosEventlog @ 0x1409DF9F8 (WmipGetSMBiosEventlog.c)
 *     WmipParseSysIdTable @ 0x1409DFF40 (WmipParseSysIdTable.c)
 *     WheapClearPoison @ 0x140A08560 (WheapClearPoison.c)
 *     MiMapNewPfns @ 0x140A2C980 (MiMapNewPfns.c)
 *     HalpInitializeGenericErrorSource @ 0x140A8B6FC (HalpInitializeGenericErrorSource.c)
 *     HalpInitGenericErrorSourceEntry @ 0x140A8B914 (HalpInitGenericErrorSourceEntry.c)
 *     HalpInitGenericErrorSourceEntryV2 @ 0x140A96244 (HalpInitGenericErrorSourceEntryV2.c)
 *     HalpMapNvsArea @ 0x140A96FC0 (HalpMapNvsArea.c)
 *     PopGetHwConfigurationSignature @ 0x140AA2C8C (PopGetHwConfigurationSignature.c)
 *     VerifierMmMapIoSpace @ 0x140AE3FF0 (VerifierMmMapIoSpace.c)
 *     VerifierMmMapIoSpaceEx @ 0x140AE4120 (VerifierMmMapIoSpaceEx.c)
 *     KiVerifyXcpt15 @ 0x140B18320 (KiVerifyXcpt15.c)
 *     PipInitComputerIds @ 0x140B3D92C (PipInitComputerIds.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140B6429C (HalpDmaInitializeMasterAdapter.c)
 *     HalpPowerInitFwPerformanceTableMappings @ 0x140B65A88 (HalpPowerInitFwPerformanceTableMappings.c)
 *     HalpAuditEnumerateRsdtsInRange @ 0x140B93168 (HalpAuditEnumerateRsdtsInRange.c)
 *     HalpAuditGetExtendedBiosDataArea @ 0x140B93254 (HalpAuditGetExtendedBiosDataArea.c)
 *     HalpAuditQuerySlicAddresses @ 0x140B932CC (HalpAuditQuerySlicAddresses.c)
 * Callees:
 *     MiMakeProtectionMask @ 0x140276860 (MiMakeProtectionMask.c)
 *     MiMapContiguousMemory @ 0x140335858 (MiMapContiguousMemory.c)
 */

__int64 __fastcall MmMapIoSpaceEx(__int64 a1, __int64 a2, unsigned int a3)
{
  int ProtectionMask; // eax
  int v4; // r10d
  int v5; // r11d

  ProtectionMask = MiMakeProtectionMask(a3);
  if ( (ProtectionMask & 2) != 0 && (ProtectionMask & 0xFFFFFFF8) == 0x18 && (ProtectionMask & 7) != 0 )
    return 0LL;
  else
    return MiMapContiguousMemory(v4, v5, v5, ProtectionMask, 0);
}
