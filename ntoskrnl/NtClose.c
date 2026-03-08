/*
 * XREFs of NtClose @ 0x1407C00E0
 * Callers:
 *     SepRmCallLsa @ 0x1402E8690 (SepRmCallLsa.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x14039C3E0 (_RtlpRemovePendingDeleteLanguages.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x14039C4A0 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     RtlQueryValidationRunlevel @ 0x1405AEAA0 (RtlQueryValidationRunlevel.c)
 *     PfSnPopulateReadList @ 0x1406A42B0 (PfSnPopulateReadList.c)
 *     PfSnGetSectionObject @ 0x1406A48D0 (PfSnGetSectionObject.c)
 *     NtQueryInformationToken @ 0x1406D6780 (NtQueryInformationToken.c)
 *     CmOpenKey @ 0x1406E7B60 (CmOpenKey.c)
 *     ObDuplicateObject @ 0x1406ED5C0 (ObDuplicateObject.c)
 *     AlpcpConnectPort @ 0x140712F5C (AlpcpConnectPort.c)
 *     AlpcpAcceptConnectPort @ 0x140713844 (AlpcpAcceptConnectPort.c)
 *     PfSnPrefetchMetadata @ 0x14071E150 (PfSnPrefetchMetadata.c)
 *     PfpVolumeOpenAndVerify @ 0x140766A44 (PfpVolumeOpenAndVerify.c)
 *     PfpFileBuildReadSupport @ 0x140767138 (PfpFileBuildReadSupport.c)
 *     NtSecureConnectPort @ 0x140774850 (NtSecureConnectPort.c)
 *     PfSnOpenVolumesForPrefetch @ 0x14077A964 (PfSnOpenVolumesForPrefetch.c)
 *     PfSnIsVolumeMounted @ 0x14077AECC (PfSnIsVolumeMounted.c)
 *     AlpcpCreateConnectionPort @ 0x14077D738 (AlpcpCreateConnectionPort.c)
 *     NtCreateRegistryTransaction @ 0x1407837C0 (NtCreateRegistryTransaction.c)
 *     PfpReadSupportCleanup @ 0x140785204 (PfpReadSupportCleanup.c)
 *     PnpPrepareDriverLoading @ 0x14079DAE0 (PnpPrepareDriverLoading.c)
 *     NtCopyFileChunk @ 0x1407DEE00 (NtCopyFileChunk.c)
 *     PfSnGetPrefetchInstructions @ 0x1407E1BA4 (PfSnGetPrefetchInstructions.c)
 *     CmpInitializeLazyWriters @ 0x1408176F8 (CmpInitializeLazyWriters.c)
 *     AdtpInitializeDriveLetters @ 0x140841630 (AdtpInitializeDriveLetters.c)
 *     AdtpObjsInitialize @ 0x140841808 (AdtpObjsInitialize.c)
 *     RtlpLoadLanguageConfigList @ 0x140843624 (RtlpLoadLanguageConfigList.c)
 *     PopEtEnergyTrackerCreate @ 0x14084F34C (PopEtEnergyTrackerCreate.c)
 *     IopConnectLinkTrackingPort @ 0x140941890 (IopConnectLinkTrackingPort.c)
 *     PfpPrefetchPrivatePages @ 0x14097B268 (PfpPrefetchPrivatePages.c)
 *     PfpSourceGetPrefetchSupport @ 0x14097BE40 (PfpSourceGetPrefetchSupport.c)
 *     NtCreateProcessStateChange @ 0x1409AD160 (NtCreateProcessStateChange.c)
 *     NtCreateThreadStateChange @ 0x1409AD370 (NtCreateThreadStateChange.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x1409BB470 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpSysVolTakeOwnership @ 0x1409BBBD8 (RtlpSysVolTakeOwnership.c)
 *     EtwpSetCoverageSamplerInformation @ 0x1409F0DFC (EtwpSetCoverageSamplerInformation.c)
 *     ExpWatchLicenseInfoWork @ 0x1409F57C0 (ExpWatchLicenseInfoWork.c)
 *     NtOpenRegistryTransaction @ 0x140A0AC80 (NtOpenRegistryTransaction.c)
 *     sub_140B310C4 @ 0x140B310C4 (sub_140B310C4.c)
 *     ObInitSystem @ 0x140B403CC (ObInitSystem.c)
 *     IopInitializeBuiltinDriver @ 0x140B58C28 (IopInitializeBuiltinDriver.c)
 *     IopInitCrashDumpRegCallback @ 0x140B5E290 (IopInitCrashDumpRegCallback.c)
 *     SepAdtInitializeAuditingOptions @ 0x140B615C0 (SepAdtInitializeAuditingOptions.c)
 *     ExpWatchProductTypeInitialization @ 0x140B64AFC (ExpWatchProductTypeInitialization.c)
 *     FsRtlInitializeSmssEvent @ 0x140B65D30 (FsRtlInitializeSmssEvent.c)
 *     ExpInitializeCallbacks @ 0x140B68930 (ExpInitializeCallbacks.c)
 *     CreateSystemRootLink @ 0x140B6B5C8 (CreateSystemRootLink.c)
 *     IopProtectSystemPartition @ 0x140B70DDC (IopProtectSystemPartition.c)
 *     InitSafeBoot @ 0x140B8D8D4 (InitSafeBoot.c)
 *     IopApplySystemPartitionProt @ 0x140B90CC0 (IopApplySystemPartitionProt.c)
 * Callees:
 *     ObpIsKernelHandle @ 0x1403521C8 (ObpIsKernelHandle.c)
 *     ObpCloseHandle @ 0x1407C2500 (ObpCloseHandle.c)
 *     VfCheckUserHandle @ 0x140AD0CE4 (VfCheckUserHandle.c)
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
