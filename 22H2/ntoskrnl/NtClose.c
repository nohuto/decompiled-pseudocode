/*
 * XREFs of NtClose @ 0x1406E4570
 * Callers:
 *     SepRmCallLsa @ 0x14031C700 (SepRmCallLsa.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x1403A0E90 (_RtlpRemovePendingDeleteLanguages.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x1403A0F50 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     RtlQueryValidationRunlevel @ 0x1405B0F50 (RtlQueryValidationRunlevel.c)
 *     PfpVolumeOpenAndVerify @ 0x1406853AC (PfpVolumeOpenAndVerify.c)
 *     PfSnOpenVolumesForPrefetch @ 0x140686328 (PfSnOpenVolumesForPrefetch.c)
 *     PfSnIsVolumeMounted @ 0x140686890 (PfSnIsVolumeMounted.c)
 *     PnpPrepareDriverLoading @ 0x14068F654 (PnpPrepareDriverLoading.c)
 *     CmOpenKey @ 0x1406E2B10 (CmOpenKey.c)
 *     ObDuplicateObject @ 0x1406FB9A0 (ObDuplicateObject.c)
 *     AlpcpAcceptConnectPort @ 0x1407169EC (AlpcpAcceptConnectPort.c)
 *     AlpcpConnectPort @ 0x1407173E0 (AlpcpConnectPort.c)
 *     NtQueryInformationToken @ 0x140730A90 (NtQueryInformationToken.c)
 *     PfSnGetPrefetchInstructions @ 0x14074D58C (PfSnGetPrefetchInstructions.c)
 *     PfSnPopulateReadList @ 0x14075C890 (PfSnPopulateReadList.c)
 *     PfSnGetSectionObject @ 0x14075CEB0 (PfSnGetSectionObject.c)
 *     PfpReadSupportCleanup @ 0x14075E660 (PfpReadSupportCleanup.c)
 *     PfpFileBuildReadSupport @ 0x14075E6B4 (PfpFileBuildReadSupport.c)
 *     PfSnPrefetchMetadata @ 0x14075EAF4 (PfSnPrefetchMetadata.c)
 *     NtSecureConnectPort @ 0x1407C43C0 (NtSecureConnectPort.c)
 *     AlpcpCreateConnectionPort @ 0x1407CC8A8 (AlpcpCreateConnectionPort.c)
 *     NtCreateRegistryTransaction @ 0x1407D22C0 (NtCreateRegistryTransaction.c)
 *     CmpInitializeLazyWriters @ 0x14080CBAC (CmpInitializeLazyWriters.c)
 *     AdtpInitializeDriveLetters @ 0x140843C80 (AdtpInitializeDriveLetters.c)
 *     AdtpObjsInitialize @ 0x140843E58 (AdtpObjsInitialize.c)
 *     RtlpLoadLanguageConfigList @ 0x140846784 (RtlpLoadLanguageConfigList.c)
 *     PopEtEnergyTrackerCreate @ 0x14085278C (PopEtEnergyTrackerCreate.c)
 *     IopConnectLinkTrackingPort @ 0x1409448B0 (IopConnectLinkTrackingPort.c)
 *     PfpPrefetchPrivatePages @ 0x14097E318 (PfpPrefetchPrivatePages.c)
 *     PfpSourceGetPrefetchSupport @ 0x14097EEF0 (PfpSourceGetPrefetchSupport.c)
 *     NtCreateProcessStateChange @ 0x1409B01B0 (NtCreateProcessStateChange.c)
 *     NtCreateThreadStateChange @ 0x1409B03C0 (NtCreateThreadStateChange.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x1409BE4A0 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpSysVolTakeOwnership @ 0x1409BEC08 (RtlpSysVolTakeOwnership.c)
 *     EtwpSetCoverageSamplerInformation @ 0x1409F3C8C (EtwpSetCoverageSamplerInformation.c)
 *     ExpWatchLicenseInfoWork @ 0x1409F8650 (ExpWatchLicenseInfoWork.c)
 *     NtOpenRegistryTransaction @ 0x140A0D990 (NtOpenRegistryTransaction.c)
 *     sub_140B350C4 @ 0x140B350C4 (sub_140B350C4.c)
 *     ExpWatchProductTypeInitialization @ 0x140B36EB4 (ExpWatchProductTypeInitialization.c)
 *     IopInitializeBuiltinDriver @ 0x140B41264 (IopInitializeBuiltinDriver.c)
 *     ObInitSystem @ 0x140B4E9F8 (ObInitSystem.c)
 *     IopInitCrashDumpRegCallback @ 0x140B60590 (IopInitCrashDumpRegCallback.c)
 *     SepAdtInitializeAuditingOptions @ 0x140B648B0 (SepAdtInitializeAuditingOptions.c)
 *     FsRtlInitializeSmssEvent @ 0x140B6960C (FsRtlInitializeSmssEvent.c)
 *     ExpInitializeCallbacks @ 0x140B6C95C (ExpInitializeCallbacks.c)
 *     CreateSystemRootLink @ 0x140B6F884 (CreateSystemRootLink.c)
 *     IopProtectSystemPartition @ 0x140B74EE0 (IopProtectSystemPartition.c)
 *     InitSafeBoot @ 0x140B91AE8 (InitSafeBoot.c)
 *     IopApplySystemPartitionProt @ 0x140B94EE0 (IopApplySystemPartitionProt.c)
 * Callees:
 *     ObpIsKernelHandle @ 0x1402BEB24 (ObpIsKernelHandle.c)
 *     ObpCloseHandle @ 0x1406E7730 (ObpCloseHandle.c)
 *     VfCheckUserHandle @ 0x140AD4CE4 (VfCheckUserHandle.c)
 */

NTSTATUS __stdcall NtClose(HANDLE Handle)
{
  char PreviousMode; // di
  ULONG_PTR v4; // rcx

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (MmVerifierData & 0x100) != 0 && !PreviousMode && !ObpIsKernelHandle((__int64)Handle, 0) )
    VfCheckUserHandle(v4);
  return ObpCloseHandle((ULONG_PTR)Handle);
}
