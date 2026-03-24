/*
 * XREFs of ZwQueryInformationFile @ 0x1403FA5C0
 * Callers:
 *     RtlFileMapMapView @ 0x1403BD8C4 (RtlFileMapMapView.c)
 *     CmpAdjustFileCFSafety @ 0x1403F057C (CmpAdjustFileCFSafety.c)
 *     DbgkCaptureLiveKernelDump @ 0x1404EE658 (DbgkCaptureLiveKernelDump.c)
 *     BiLogFileOwnerProcess @ 0x1405C3B80 (BiLogFileOwnerProcess.c)
 *     CmpInitHiveFromFile @ 0x140670FA8 (CmpInitHiveFromFile.c)
 *     CmpOpenHiveFile @ 0x1406718C8 (CmpOpenHiveFile.c)
 *     EtwpUpdateFileHeader @ 0x1406DFDA8 (EtwpUpdateFileHeader.c)
 *     CmpCmdHiveClose @ 0x14071CE14 (CmpCmdHiveClose.c)
 *     CmpGetFileSize @ 0x140724580 (CmpGetFileSize.c)
 *     AslFileMappingCreate @ 0x1407589F8 (AslFileMappingCreate.c)
 *     KsepShimDatabaseTime @ 0x14075F2C8 (KsepShimDatabaseTime.c)
 *     PopValidateHiberFileSize @ 0x140776E28 (PopValidateHiberFileSize.c)
 *     PopCreateHiberFile @ 0x1407919C0 (PopCreateHiberFile.c)
 *     EtwpRealtimeRestoreState @ 0x1407C89FC (EtwpRealtimeRestoreState.c)
 *     IopLiveDumpValidateDumpFileHandle @ 0x140898988 (IopLiveDumpValidateDumpFileHandle.c)
 *     IopFileUtilClearAttributes @ 0x1408B431C (IopFileUtilClearAttributes.c)
 *     PfpQueryFileExtentsRequest @ 0x1408DFD0C (PfpQueryFileExtentsRequest.c)
 *     PopZeroHiberFile @ 0x1408E74C4 (PopZeroHiberFile.c)
 *     SmKmStoreFileCreate @ 0x14092BFDC (SmKmStoreFileCreate.c)
 *     SmKmStoreFileWriteHeader @ 0x14092CE74 (SmKmStoreFileWriteHeader.c)
 *     CMFGetFileSizeEx @ 0x140958DC0 (CMFGetFileSizeEx.c)
 *     EmInitSystem @ 0x140A4528C (EmInitSystem.c)
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
