/*
 * XREFs of ZwQueryInformationFile @ 0x1403F9C40
 * Callers:
 *     RtlFileMapMapView @ 0x1403BD264 (RtlFileMapMapView.c)
 *     CmpAdjustFileCFSafety @ 0x1403EFE7C (CmpAdjustFileCFSafety.c)
 *     DbgkCaptureLiveKernelDump @ 0x1404EE598 (DbgkCaptureLiveKernelDump.c)
 *     BiLogFileOwnerProcess @ 0x1405C3AC0 (BiLogFileOwnerProcess.c)
 *     CmpInitHiveFromFile @ 0x1406E9D98 (CmpInitHiveFromFile.c)
 *     CmpOpenHiveFile @ 0x1406EA6B8 (CmpOpenHiveFile.c)
 *     EtwpUpdateFileHeader @ 0x140713648 (EtwpUpdateFileHeader.c)
 *     CmpCmdHiveClose @ 0x14071C1E4 (CmpCmdHiveClose.c)
 *     CmpGetFileSize @ 0x140723950 (CmpGetFileSize.c)
 *     AslFileMappingCreate @ 0x1407581E8 (AslFileMappingCreate.c)
 *     KsepShimDatabaseTime @ 0x14075EAB8 (KsepShimDatabaseTime.c)
 *     PopValidateHiberFileSize @ 0x140773EB8 (PopValidateHiberFileSize.c)
 *     PopCreateHiberFile @ 0x14079BC20 (PopCreateHiberFile.c)
 *     EtwpRealtimeRestoreState @ 0x1407C891C (EtwpRealtimeRestoreState.c)
 *     IopLiveDumpValidateDumpFileHandle @ 0x1408989D8 (IopLiveDumpValidateDumpFileHandle.c)
 *     IopFileUtilClearAttributes @ 0x1408B436C (IopFileUtilClearAttributes.c)
 *     PfpQueryFileExtentsRequest @ 0x1408DFD5C (PfpQueryFileExtentsRequest.c)
 *     PopZeroHiberFile @ 0x1408E7514 (PopZeroHiberFile.c)
 *     SmKmStoreFileCreate @ 0x14092C02C (SmKmStoreFileCreate.c)
 *     SmKmStoreFileWriteHeader @ 0x14092CEC4 (SmKmStoreFileWriteHeader.c)
 *     CMFGetFileSizeEx @ 0x140958E10 (CMFGetFileSizeEx.c)
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
  return KiServiceInternal(FileHandle);
}
