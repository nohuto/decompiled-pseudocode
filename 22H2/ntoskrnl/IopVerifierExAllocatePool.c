/*
 * XREFs of IopVerifierExAllocatePool @ 0x14022C350
 * Callers:
 *     IopBuildDeviceIoControlRequest @ 0x14022B300 (IopBuildDeviceIoControlRequest.c)
 *     IoAllocateWorkItem @ 0x14030CC30 (IoAllocateWorkItem.c)
 *     IopBuildAsynchronousFsdRequest @ 0x140358DF0 (IopBuildAsynchronousFsdRequest.c)
 *     IoDeleteDevice @ 0x140360200 (IoDeleteDevice.c)
 *     IoQueryFullDriverPath @ 0x1403A66E0 (IoQueryFullDriverPath.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x140506FD8 (IopAdjustFileObjectKeepAliveCount.c)
 *     IopParseDevice @ 0x14064E680 (IopParseDevice.c)
 *     NtFlushBuffersFileEx @ 0x14067D120 (NtFlushBuffersFileEx.c)
 *     IopBuildFullDriverPath @ 0x14073C7A8 (IopBuildFullDriverPath.c)
 *     IopLoadDriver @ 0x14073CD08 (IopLoadDriver.c)
 *     IopQueryRegistryKeySystemPath @ 0x14073D480 (IopQueryRegistryKeySystemPath.c)
 *     IopGetDriverNameFromKeyNode @ 0x14073EDA0 (IopGetDriverNameFromKeyNode.c)
 *     IopGetRegistryValue @ 0x14073EF38 (IopGetRegistryValue.c)
 *     IopGetRegistryKeyInformation @ 0x140769C04 (IopGetRegistryKeyInformation.c)
 *     IoCreateSystemThread @ 0x14076D4E0 (IoCreateSystemThread.c)
 *     IopCreateArcName @ 0x140780218 (IopCreateArcName.c)
 *     IoCreateDriver @ 0x1407A5330 (IoCreateDriver.c)
 *     IopInitializeBootLogging @ 0x140891768 (IopInitializeBootLogging.c)
 *     IopRaiseHardError @ 0x140891C50 (IopRaiseHardError.c)
 *     IopSafebootDriverLoad @ 0x140891F74 (IopSafebootDriverLoad.c)
 *     IopSendMessageToTrackService @ 0x140892110 (IopSendMessageToTrackService.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1408923FC (IopSetEaOrQuotaInformationFile.c)
 *     IopGetBootDiskInformationLite @ 0x140A45940 (IopGetBootDiskInformationLite.c)
 *     IopCreateUmdfDirectory @ 0x140A5D080 (IopCreateUmdfDirectory.c)
 *     IopStoreArcInformation @ 0x140A5D274 (IopStoreArcInformation.c)
 *     IopInitializeBuiltinDriver @ 0x140A5E618 (IopInitializeBuiltinDriver.c)
 *     IopCreateArcNames @ 0x140A61BAC (IopCreateArcNames.c)
 *     IopCreateArcNamesCd @ 0x140A61E50 (IopCreateArcNamesCd.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x1402BC770 (ExAllocatePoolWithTagPriority.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall IopVerifierExAllocatePool(POOL_TYPE a1, SIZE_T a2)
{
  if ( ViVerifierEnabled
    && ((VfRuleClasses & 0xFFAFFFFF) != 0 || (VfRuleClasses & 0x200000000LL) != 0
                                          || (VfRuleClasses & 0x400000000LL) != 0) )
  {
    return ExAllocatePoolWithTagPriority(a1, a2, 0x20206F49u, (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  }
  else
  {
    return ExAllocatePoolWithTag(a1, a2, 0x20206F49u);
  }
}
