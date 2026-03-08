/*
 * XREFs of ZwQueryInformationFile @ 0x140412530
 * Callers:
 *     RtlFileMapMapView @ 0x1403ABF40 (RtlFileMapMapView.c)
 *     DbgkCaptureLiveKernelDump @ 0x140539CE8 (DbgkCaptureLiveKernelDump.c)
 *     IoWriteCapturedPristineTriageDumpToDedicatedDumpFile @ 0x14054ECE4 (IoWriteCapturedPristineTriageDumpToDedicatedDumpFile.c)
 *     SecureDump_LoadCertAndProvisionKey @ 0x14055BD40 (SecureDump_LoadCertAndProvisionKey.c)
 *     DifZwQueryInformationFileWrapper @ 0x1405F2100 (DifZwQueryInformationFileWrapper.c)
 *     BiLogFileOwnerProcess @ 0x14066EEB0 (BiLogFileOwnerProcess.c)
 *     CmpOpenHiveFile @ 0x1406C05C4 (CmpOpenHiveFile.c)
 *     CmpInitHiveFromFile @ 0x1406C0BF0 (CmpInitHiveFromFile.c)
 *     CmpGetFileSize @ 0x14073078C (CmpGetFileSize.c)
 *     CmpCmdHiveClose @ 0x14074B34C (CmpCmdHiveClose.c)
 *     EtwpUpdateFileHeader @ 0x140772B94 (EtwpUpdateFileHeader.c)
 *     AslFileMappingCreate @ 0x1407A2D8C (AslFileMappingCreate.c)
 *     PopCreateHiberFile @ 0x1407FBF00 (PopCreateHiberFile.c)
 *     KsepShimDatabaseTime @ 0x1408019BC (KsepShimDatabaseTime.c)
 *     EtwpRealtimeRestoreState @ 0x14084FCD8 (EtwpRealtimeRestoreState.c)
 *     IopLiveDumpValidateDumpFileHandle @ 0x14094C2AC (IopLiveDumpValidateDumpFileHandle.c)
 *     IopFileUtilClearAttributes @ 0x14096BE90 (IopFileUtilClearAttributes.c)
 *     PfpQueryFileExtentsRequest @ 0x14097B4F0 (PfpQueryFileExtentsRequest.c)
 *     PopValidateHiberFileSize @ 0x140986270 (PopValidateHiberFileSize.c)
 *     PopZeroHiberFile @ 0x140986490 (PopZeroHiberFile.c)
 *     SmKmStoreFileCreate @ 0x1409D68D4 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileWriteHeader @ 0x1409D7778 (SmKmStoreFileWriteHeader.c)
 *     CMFGetFileSizeEx @ 0x1409FF850 (CMFGetFileSizeEx.c)
 *     EmInitSystem @ 0x140B4CBA8 (EmInitSystem.c)
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
