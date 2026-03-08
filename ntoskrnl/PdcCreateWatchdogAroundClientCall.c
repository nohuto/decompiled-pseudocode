/*
 * XREFs of PdcCreateWatchdogAroundClientCall @ 0x1402992F0
 * Callers:
 *     SymCryptCpuFeaturesNeverPresent @ 0x1402FCE2C (SymCryptCpuFeaturesNeverPresent.c)
 *     _call_matherr @ 0x1403D7D60 (_call_matherr.c)
 *     SymCryptSaveXmm @ 0x14056ADFC (SymCryptSaveXmm.c)
 *     ObpParseSymbolicLinkEx @ 0x14069CAB0 (ObpParseSymbolicLinkEx.c)
 *     MiPageHasRelocations @ 0x14069F28C (MiPageHasRelocations.c)
 *     MiReturnPageTablePageCommitment @ 0x1406B6AF0 (MiReturnPageTablePageCommitment.c)
 *     MiRelocateImagePfn @ 0x1406EBA20 (MiRelocateImagePfn.c)
 *     NtQueryInformationJobObject @ 0x1406F9480 (NtQueryInformationJobObject.c)
 *     PspSelectMachineForProcess @ 0x14070797C (PspSelectMachineForProcess.c)
 *     PspEstimateNewProcessServerSilo @ 0x14070D590 (PspEstimateNewProcessServerSilo.c)
 *     ExpWnfResolveScopeInstance @ 0x14071A508 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfGenerateStateName @ 0x14071BF88 (ExpWnfGenerateStateName.c)
 *     ExpWnfLookupPermanentName @ 0x14071C320 (ExpWnfLookupPermanentName.c)
 *     MiDeleteVadBitmap @ 0x1407266B4 (MiDeleteVadBitmap.c)
 *     MiCommitInitialVadMetadataBits @ 0x1407285AC (MiCommitInitialVadMetadataBits.c)
 *     MiInitializePrivateFixupBitmap @ 0x14072E1E0 (MiInitializePrivateFixupBitmap.c)
 *     MmLoadSystemImageEx @ 0x14072E4EC (MmLoadSystemImageEx.c)
 *     VRegEnabledInJob @ 0x140736F40 (VRegEnabledInJob.c)
 *     PopInvokeWin32Callout @ 0x14073A52C (PopInvokeWin32Callout.c)
 *     ExpWnfEnumerateScopeInstances @ 0x14077972C (ExpWnfEnumerateScopeInstances.c)
 *     NtManageHotPatch @ 0x140784740 (NtManageHotPatch.c)
 *     RtlGetHostNtSystemRoot @ 0x14079C490 (RtlGetHostNtSystemRoot.c)
 *     MiAllocateVirtualMemory @ 0x1407C5270 (MiAllocateVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1407C77B0 (MmProtectVirtualMemory.c)
 *     MiMapViewOfImageSection @ 0x1407D3750 (MiMapViewOfImageSection.c)
 *     MiValidateVadMetadataFlags @ 0x1407D5750 (MiValidateVadMetadataFlags.c)
 *     PspExitThread @ 0x1407D9464 (PspExitThread.c)
 *     MmUnloadSystemImage @ 0x1407F5FA0 (MmUnloadSystemImage.c)
 *     HvlPhase0Initialize @ 0x14080D7C8 (HvlPhase0Initialize.c)
 *     RtlpInitCodePageTables @ 0x14080EA38 (RtlpInitCodePageTables.c)
 *     PsBootPhaseComplete @ 0x140812760 (PsBootPhaseComplete.c)
 *     CmpMountPreloadedHives @ 0x140812EF4 (CmpMountPreloadedHives.c)
 *     CmpSetVersionData @ 0x140815CD8 (CmpSetVersionData.c)
 *     SepRmCommandServerThread @ 0x140825260 (SepRmCommandServerThread.c)
 *     PsStartSiloMonitor @ 0x140848CF0 (PsStartSiloMonitor.c)
 *     ObpSetSiloDeviceMap @ 0x140855394 (ObpSetSiloDeviceMap.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x140858188 (EtwpUpdateFileInfoDriverRegistration.c)
 *     DbgkpRemoveErrorPort @ 0x140937000 (DbgkpRemoveErrorPort.c)
 *     ObShutdownSystem @ 0x140977E00 (ObShutdownSystem.c)
 *     PsUnregisterSiloMonitor @ 0x1409B1070 (PsUnregisterSiloMonitor.c)
 *     Pdcv2pActivationClientCallback @ 0x1409C5AA0 (Pdcv2pActivationClientCallback.c)
 *     ObCreateSiloRootDirectory @ 0x140A70E70 (ObCreateSiloRootDirectory.c)
 * Callees:
 *     <none>
 */

__int64 PdcCreateWatchdogAroundClientCall()
{
  return 0LL;
}
