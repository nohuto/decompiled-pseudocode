/*
 * XREFs of ZwQueryVolumeInformationFile @ 0x140412C30
 * Callers:
 *     DifZwQueryVolumeInformationFileWrapper @ 0x1405F37B0 (DifZwQueryVolumeInformationFileWrapper.c)
 *     CmpGetVolumeClusterSize @ 0x14072EFBC (CmpGetVolumeClusterSize.c)
 *     EtwpFinalizeHeader @ 0x140771D34 (EtwpFinalizeHeader.c)
 *     EtwpCreateLogFile @ 0x140772270 (EtwpCreateLogFile.c)
 *     CmpGetVolumeLogFileSizeCap @ 0x14079227C (CmpGetVolumeLogFileSizeCap.c)
 *     PfpQueryFileExtentsRequest @ 0x14097B4F0 (PfpQueryFileExtentsRequest.c)
 *     PopValidateHiberFileSize @ 0x140986270 (PopValidateHiberFileSize.c)
 *     SmKmIsVolumeIoPossible @ 0x1409D5F0C (SmKmIsVolumeIoPossible.c)
 *     SmKmStoreFileCreate @ 0x1409D68D4 (SmKmStoreFileCreate.c)
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
  return KiServiceInternal(FileHandle, IoStatusBlock);
}
