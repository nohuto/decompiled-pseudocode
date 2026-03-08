/*
 * XREFs of MmMapIoSpaceEx @ 0x14029AF10
 * Callers:
 *     HalpCheckAndReportGhes @ 0x14029AA2C (HalpCheckAndReportGhes.c)
 *     MmMapIoSpace @ 0x14029AAB0 (MmMapIoSpace.c)
 *     HalpAcpiCheckAndMapTable @ 0x14029AD4C (HalpAcpiCheckAndMapTable.c)
 *     HalpAcpiGetRsdt @ 0x14029C328 (HalpAcpiGetRsdt.c)
 *     HvlEnlightenProcessor @ 0x14037F430 (HvlEnlightenProcessor.c)
 *     BgpFwLibraryEnable @ 0x1403843F4 (BgpFwLibraryEnable.c)
 *     HvlPhase1Initialize @ 0x140384654 (HvlPhase1Initialize.c)
 *     HalInitializeBios @ 0x14039A4D0 (HalInitializeBios.c)
 *     HalpMcaExtendedLogInitialize @ 0x14050110C (HalpMcaExtendedLogInitialize.c)
 *     HalpDmaAllocateNewTranslationBuffer @ 0x14050E378 (HalpDmaAllocateNewTranslationBuffer.c)
 *     HalpSignalRAS @ 0x14051681C (HalpSignalRAS.c)
 *     HalpMmUpdateTiledMemoryMapTargetStub @ 0x1405190D8 (HalpMmUpdateTiledMemoryMapTargetStub.c)
 *     HvlpEnableNextLogicalProcessor @ 0x14053E9B4 (HvlpEnableNextLogicalProcessor.c)
 *     HvlpInitializeHvCrashdump @ 0x140545BF4 (HvlpInitializeHvCrashdump.c)
 *     BgkNotifyDisplayOwnershipLost @ 0x14054CA60 (BgkNotifyDisplayOwnershipLost.c)
 *     WmipFirmwareTableHandler @ 0x1405F9920 (WmipFirmwareTableHandler.c)
 *     MiHugePageOperation @ 0x14061E158 (MiHugePageOperation.c)
 *     BgpFwMapFrameBuffer @ 0x14066F710 (BgpFwMapFrameBuffer.c)
 *     IpmiHwKcsInit @ 0x1406752BC (IpmiHwKcsInit.c)
 *     InbvPortInitialize @ 0x14067701C (InbvPortInitialize.c)
 *     WmipGetSMBiosTableData @ 0x140725AEC (WmipGetSMBiosTableData.c)
 *     ExpGetSystemPlatformBinary @ 0x14085BBF8 (ExpGetSystemPlatformBinary.c)
 *     WmipFindSMBiosStructure @ 0x1409DC91C (WmipFindSMBiosStructure.c)
 *     WmipFindSysIdTable @ 0x1409DCA60 (WmipFindSysIdTable.c)
 *     WmipGetSMBiosEventlog @ 0x1409DCB58 (WmipGetSMBiosEventlog.c)
 *     WmipParseSysIdTable @ 0x1409DD0A0 (WmipParseSysIdTable.c)
 *     WheapClearPoison @ 0x140A05870 (WheapClearPoison.c)
 *     MiMapNewPfns @ 0x140A29C20 (MiMapNewPfns.c)
 *     HalpInitializeGenericErrorSource @ 0x140A880EC (HalpInitializeGenericErrorSource.c)
 *     HalpInitGenericErrorSourceEntry @ 0x140A88304 (HalpInitGenericErrorSourceEntry.c)
 *     HalpInitGenericErrorSourceEntryV2 @ 0x140A93104 (HalpInitGenericErrorSourceEntryV2.c)
 *     HalpMapNvsArea @ 0x140A93E80 (HalpMapNvsArea.c)
 *     PopGetHwConfigurationSignature @ 0x140A9FA5C (PopGetHwConfigurationSignature.c)
 *     VerifierMmMapIoSpace @ 0x140ADFFF0 (VerifierMmMapIoSpace.c)
 *     VerifierMmMapIoSpaceEx @ 0x140AE0120 (VerifierMmMapIoSpaceEx.c)
 *     KiVerifyXcpt15 @ 0x140B14320 (KiVerifyXcpt15.c)
 *     PipInitComputerIds @ 0x140B552F0 (PipInitComputerIds.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140B60FAC (HalpDmaInitializeMasterAdapter.c)
 *     HalpPowerInitFwPerformanceTableMappings @ 0x140B62144 (HalpPowerInitFwPerformanceTableMappings.c)
 *     HalpAuditEnumerateRsdtsInRange @ 0x140B8EF48 (HalpAuditEnumerateRsdtsInRange.c)
 *     HalpAuditGetExtendedBiosDataArea @ 0x140B8F034 (HalpAuditGetExtendedBiosDataArea.c)
 *     HalpAuditQuerySlicAddresses @ 0x140B8F0AC (HalpAuditQuerySlicAddresses.c)
 * Callees:
 *     MiMapContiguousMemory @ 0x14029AF58 (MiMapContiguousMemory.c)
 *     MiMakeProtectionMask @ 0x140320CC0 (MiMakeProtectionMask.c)
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
