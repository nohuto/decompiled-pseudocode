/*
 * XREFs of ZwQueryVolumeInformationFile @ 0x14041C080
 * Callers:
 *     DifZwQueryVolumeInformationFileWrapper @ 0x140625EA0 (DifZwQueryVolumeInformationFileWrapper.c)
 *     CmpGetVolumeClusterSize @ 0x14068BEAC (CmpGetVolumeClusterSize.c)
 *     CmpGetVolumeLogFileSizeCap @ 0x1406DEB64 (CmpGetVolumeLogFileSizeCap.c)
 *     EtwpCreateLogFile @ 0x1406F0614 (EtwpCreateLogFile.c)
 *     EtwpFinalizeHeader @ 0x1406F1AC4 (EtwpFinalizeHeader.c)
 *     PopValidateHiberFileSize @ 0x1408018EC (PopValidateHiberFileSize.c)
 *     PfpQueryFileExtentsRequest @ 0x1409876B8 (PfpQueryFileExtentsRequest.c)
 *     SmKmIsVolumeIoPossible @ 0x1409D5B38 (SmKmIsVolumeIoPossible.c)
 *     SmKmStoreFileCreate @ 0x1409D64F8 (SmKmStoreFileCreate.c)
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
