/*
 * XREFs of MmGetPhysicalAddress @ 0x140301020
 * Callers:
 *     MiAllocateContiguousMemory @ 0x1402E808C (MiAllocateContiguousMemory.c)
 *     EtwpFreeTraceBuffer @ 0x140321364 (EtwpFreeTraceBuffer.c)
 *     HalAllocateCommonBufferExV2 @ 0x140380C90 (HalAllocateCommonBufferExV2.c)
 *     PopGetNextTable @ 0x140383750 (PopGetNextTable.c)
 *     PoSetHiberRange @ 0x140387960 (PoSetHiberRange.c)
 *     BgpFwLibraryEnable @ 0x14039C188 (BgpFwLibraryEnable.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x1403A0AF4 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalpInterruptBuildStartupStub @ 0x1403A0E80 (HalpInterruptBuildStartupStub.c)
 *     HvlEnlightenProcessor @ 0x1403A7298 (HvlEnlightenProcessor.c)
 *     HvlpTryConfigureInterface @ 0x1403A9460 (HvlpTryConfigureInterface.c)
 *     HalpHvStartVirtualProcessor @ 0x1404C2BC0 (HalpHvStartVirtualProcessor.c)
 *     HalpDmaAllocateContiguousMemory @ 0x1404C6738 (HalpDmaAllocateContiguousMemory.c)
 *     HalpDmaAllocateMapRegisters @ 0x1404C683C (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaControllerInitializeController @ 0x1404CE6E8 (HalpDmaControllerInitializeController.c)
 *     HalpInterruptMapParkedPage @ 0x1404D1840 (HalpInterruptMapParkedPage.c)
 *     HalpAcpiAccessSecureAddress @ 0x1404D2AB0 (HalpAcpiAccessSecureAddress.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x1404D5080 (ExtEnvAllocatePhysicalMemory.c)
 *     HalpIommuGetDmarptRootAddress @ 0x1404DBB78 (HalpIommuGetDmarptRootAddress.c)
 *     HalpIommuInitializeDmarPageTable @ 0x1404DBBDC (HalpIommuInitializeDmarPageTable.c)
 *     HalpIommuMapLogical @ 0x1404DBD64 (HalpIommuMapLogical.c)
 *     HalpIommuMapLogicalRange @ 0x1404DC14C (HalpIommuMapLogicalRange.c)
 *     HsaGrowPasidTable @ 0x1404E3A50 (HsaGrowPasidTable.c)
 *     HsaUpdateDeviceTableEntry @ 0x1404E4338 (HsaUpdateDeviceTableEntry.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x1404F22E0 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     HvlpAcquireHypercallPage @ 0x1404F24C0 (HvlpAcquireHypercallPage.c)
 *     HvlpSetupCachedHypercallPages @ 0x1404F3CA8 (HvlpSetupCachedHypercallPages.c)
 *     HvlpSetupSchedulerAssist @ 0x1404F3D5C (HvlpSetupSchedulerAssist.c)
 *     HvlpPhase0Enlightenments @ 0x1404FA514 (HvlpPhase0Enlightenments.c)
 *     HvlpSetupPageListIteration @ 0x1404FB44C (HvlpSetupPageListIteration.c)
 *     HvlpStartSecurePageListIteration @ 0x1404FB4F4 (HvlpStartSecurePageListIteration.c)
 *     HvlSetupLiveDumpBuffer @ 0x1404FB630 (HvlSetupLiveDumpBuffer.c)
 *     VslFinalizeLiveDumpInSk @ 0x1404FBED8 (VslFinalizeLiveDumpInSk.c)
 *     VslFinishStartSecureProcessor @ 0x1404FBFF4 (VslFinishStartSecureProcessor.c)
 *     VslpAddLiveDumpBufferChunk @ 0x1404FD8BC (VslpAddLiveDumpBufferChunk.c)
 *     IoFreeDumpRange @ 0x140501FE0 (IoFreeDumpRange.c)
 *     IoSetDumpRange @ 0x140502650 (IoSetDumpRange.c)
 *     IopWriteTriageDumpToFirmware @ 0x140504BD0 (IopWriteTriageDumpToFirmware.c)
 *     PnprCopyReservedMapping @ 0x14050F080 (PnprCopyReservedMapping.c)
 *     PnprRecopyAddress @ 0x14050F700 (PnprRecopyAddress.c)
 *     MiDbgCopyMemory @ 0x1405457E4 (MiDbgCopyMemory.c)
 *     MmStoreLogCorruptionFixed @ 0x140554A40 (MmStoreLogCorruptionFixed.c)
 *     SmEtwLogStoreCorruption @ 0x14059D8FC (SmEtwLogStoreCorruption.c)
 *     SmPrepareForFatalHeapCorruption @ 0x14059FBE0 (SmPrepareForFatalHeapCorruption.c)
 *     SmPrepareForFatalPageError @ 0x14059FCE8 (SmPrepareForFatalPageError.c)
 *     HvlInitializeProcessor @ 0x1407A0160 (HvlInitializeProcessor.c)
 *     VslStartSecureProcessor @ 0x140890348 (VslStartSecureProcessor.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x140897FDC (IopLiveDumpDiscardVirtualAddressRange.c)
 *     EtwpBuildMdlForTraceBuffer @ 0x1409484A4 (EtwpBuildMdlForTraceBuffer.c)
 *     PopWriteHiberPages @ 0x1409916A0 (PopWriteHiberPages.c)
 *     PopRequestWrite @ 0x140994594 (PopRequestWrite.c)
 *     PopBuildMemoryImageHeader @ 0x140996714 (PopBuildMemoryImageHeader.c)
 *     HalpCommitCR3Worker @ 0x1409995DC (HalpCommitCR3Worker.c)
 *     HalpMmBuildTiledMemoryMap @ 0x14099A1AC (HalpMmBuildTiledMemoryMap.c)
 *     HalpMapCR3Ex @ 0x14099A290 (HalpMapCR3Ex.c)
 *     HalpCheckLowMemoryPreSleep @ 0x1409A81DC (HalpCheckLowMemoryPreSleep.c)
 *     IvtInitializeIommu @ 0x1409A9A90 (IvtInitializeIommu.c)
 *     HsaInitializeIommu @ 0x1409AA730 (HsaInitializeIommu.c)
 *     PopHiberReadChecksums @ 0x1409B14B8 (PopHiberReadChecksums.c)
 *     PopRequestRead @ 0x1409B1994 (PopRequestRead.c)
 *     ViAllocateMapRegisterFile @ 0x1409CD5D4 (ViAllocateMapRegisterFile.c)
 *     BgpFwLibraryInitialize @ 0x1409F29E8 (BgpFwLibraryInitialize.c)
 *     sub_140A1CEE4 @ 0x140A1CEE4 (sub_140A1CEE4.c)
 *     IommupHvInitializeLibrary @ 0x140A8D764 (IommupHvInitializeLibrary.c)
 *     VslBindNtIum @ 0x140A8F470 (VslBindNtIum.c)
 *     VslpIumPhase0Initialize @ 0x140A8F5C8 (VslpIumPhase0Initialize.c)
 * Callees:
 *     MiGetPhysicalAddress @ 0x140301054 (MiGetPhysicalAddress.c)
 */

PHYSICAL_ADDRESS __stdcall MmGetPhysicalAddress(PVOID BaseAddress)
{
  int PhysicalAddress; // eax
  int v3; // [rsp+38h] [rbp+10h] BYREF
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  v4 = 0LL;
  PhysicalAddress = MiGetPhysicalAddress(BaseAddress, &v4, &v3);
  return (PHYSICAL_ADDRESS)(v4 & -(__int64)(PhysicalAddress != 0));
}
