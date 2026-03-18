/*
 * XREFs of ZwQueryInformationFile @ 0x14041B980
 * Callers:
 *     RtlFileMapMapView @ 0x1403CB4C0 (RtlFileMapMapView.c)
 *     DbgkCaptureLiveKernelDump @ 0x140540798 (DbgkCaptureLiveKernelDump.c)
 *     SecureDump_LoadCertAndProvisionKey @ 0x14055E880 (SecureDump_LoadCertAndProvisionKey.c)
 *     DifZwQueryInformationFileWrapper @ 0x1406247D0 (DifZwQueryInformationFileWrapper.c)
 *     BiLogFileOwnerProcess @ 0x14064CD50 (BiLogFileOwnerProcess.c)
 *     CmpCmdHiveClose @ 0x14067C24C (CmpCmdHiveClose.c)
 *     CmpGetFileSize @ 0x140689D3C (CmpGetFileSize.c)
 *     EtwpUpdateFileHeader @ 0x1406F09A8 (EtwpUpdateFileHeader.c)
 *     CmpInitHiveFromFile @ 0x1407122B0 (CmpInitHiveFromFile.c)
 *     CmpOpenHiveFile @ 0x140713F8C (CmpOpenHiveFile.c)
 *     AslFileMappingCreate @ 0x14075E160 (AslFileMappingCreate.c)
 *     KsepShimDatabaseTime @ 0x1407ECB78 (KsepShimDatabaseTime.c)
 *     PopCreateHiberFile @ 0x140801108 (PopCreateHiberFile.c)
 *     PopValidateHiberFileSize @ 0x1408018EC (PopValidateHiberFileSize.c)
 *     EtwpRealtimeRestoreState @ 0x1408570CC (EtwpRealtimeRestoreState.c)
 *     IopLiveDumpValidateDumpFileHandle @ 0x14093D3A4 (IopLiveDumpValidateDumpFileHandle.c)
 *     IopFileUtilClearAttributes @ 0x14095A3E4 (IopFileUtilClearAttributes.c)
 *     PfpQueryFileExtentsRequest @ 0x1409876B8 (PfpQueryFileExtentsRequest.c)
 *     PopZeroHiberFile @ 0x14098FBB0 (PopZeroHiberFile.c)
 *     SmKmStoreFileCreate @ 0x1409D64F8 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileWriteHeader @ 0x1409D7390 (SmKmStoreFileWriteHeader.c)
 *     CMFGetFileSizeEx @ 0x140A04B04 (CMFGetFileSizeEx.c)
 *     EmInitSystem @ 0x140B0B630 (EmInitSystem.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle, IoStatusBlock);
}
