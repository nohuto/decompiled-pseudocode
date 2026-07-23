/*
 * XREFs of ZwQueryInformationFile @ 0x1403FA7A0
 * Callers:
 *     RtlFileMapMapView @ 0x1403BDA34 (RtlFileMapMapView.c)
 *     CmpAdjustFileCFSafety @ 0x1403F06EC (CmpAdjustFileCFSafety.c)
 *     DbgkCaptureLiveKernelDump @ 0x1404EE898 (DbgkCaptureLiveKernelDump.c)
 *     BiLogFileOwnerProcess @ 0x1405C3DB0 (BiLogFileOwnerProcess.c)
 *     CmpCmdHiveClose @ 0x1405E0548 (CmpCmdHiveClose.c)
 *     CmpInitHiveFromFile @ 0x1406A3018 (CmpInitHiveFromFile.c)
 *     CmpOpenHiveFile @ 0x1406A3938 (CmpOpenHiveFile.c)
 *     EtwpUpdateFileHeader @ 0x1406B7088 (EtwpUpdateFileHeader.c)
 *     CmpGetFileSize @ 0x1406FC5AC (CmpGetFileSize.c)
 *     AslFileMappingCreate @ 0x140758BB8 (AslFileMappingCreate.c)
 *     KsepShimDatabaseTime @ 0x14075F488 (KsepShimDatabaseTime.c)
 *     PopValidateHiberFileSize @ 0x140776FE8 (PopValidateHiberFileSize.c)
 *     PopCreateHiberFile @ 0x140792F70 (PopCreateHiberFile.c)
 *     EtwpRealtimeRestoreState @ 0x1407C8D1C (EtwpRealtimeRestoreState.c)
 *     IopLiveDumpValidateDumpFileHandle @ 0x140898AE8 (IopLiveDumpValidateDumpFileHandle.c)
 *     IopFileUtilClearAttributes @ 0x1408B447C (IopFileUtilClearAttributes.c)
 *     PfpQueryFileExtentsRequest @ 0x1408DFE6C (PfpQueryFileExtentsRequest.c)
 *     PopZeroHiberFile @ 0x1408E7624 (PopZeroHiberFile.c)
 *     SmKmStoreFileCreate @ 0x14092C13C (SmKmStoreFileCreate.c)
 *     SmKmStoreFileWriteHeader @ 0x14092CFD4 (SmKmStoreFileWriteHeader.c)
 *     CMFGetFileSizeEx @ 0x140958F90 (CMFGetFileSizeEx.c)
 *     EmInitSystem @ 0x140A4628C (EmInitSystem.c)
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
