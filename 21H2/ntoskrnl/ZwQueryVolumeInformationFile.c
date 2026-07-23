/*
 * XREFs of ZwQueryVolumeInformationFile @ 0x1403FAEA0
 * Callers:
 *     CmpGetVolumeLogFileSizeCap @ 0x14061A6F8 (CmpGetVolumeLogFileSizeCap.c)
 *     EtwpFinalizeHeader @ 0x1406B6A50 (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x1406B7088 (EtwpUpdateFileHeader.c)
 *     CmpGetVolumeClusterSize @ 0x1406FA368 (CmpGetVolumeClusterSize.c)
 *     PopValidateHiberFileSize @ 0x140776FE8 (PopValidateHiberFileSize.c)
 *     PfpQueryFileExtentsRequest @ 0x1408DFE6C (PfpQueryFileExtentsRequest.c)
 *     SmKmIsVolumeIoPossible @ 0x14092B754 (SmKmIsVolumeIoPossible.c)
 *     SmKmStoreFileCreate @ 0x14092C13C (SmKmStoreFileCreate.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryVolumeInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FsInformation,
        ULONG Length,
        FS_INFORMATION_CLASS FsInformationClass)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
