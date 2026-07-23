/*
 * XREFs of ZwQueryVolumeInformationFile @ 0x1403FA340
 * Callers:
 *     CmpGetVolumeLogFileSizeCap @ 0x14069E798 (CmpGetVolumeLogFileSizeCap.c)
 *     EtwpFinalizeHeader @ 0x140713010 (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x140713648 (EtwpUpdateFileHeader.c)
 *     CmpGetVolumeClusterSize @ 0x14071D1A8 (CmpGetVolumeClusterSize.c)
 *     PopValidateHiberFileSize @ 0x140773EB8 (PopValidateHiberFileSize.c)
 *     PfpQueryFileExtentsRequest @ 0x1408DFD5C (PfpQueryFileExtentsRequest.c)
 *     SmKmIsVolumeIoPossible @ 0x14092B644 (SmKmIsVolumeIoPossible.c)
 *     SmKmStoreFileCreate @ 0x14092C02C (SmKmStoreFileCreate.c)
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
