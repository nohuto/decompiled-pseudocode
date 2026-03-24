/*
 * XREFs of ZwQueryVolumeInformationFile @ 0x1403FACC0
 * Callers:
 *     CmpGetVolumeLogFileSizeCap @ 0x1406BB76C (CmpGetVolumeLogFileSizeCap.c)
 *     EtwpFinalizeHeader @ 0x1406DF770 (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x1406DFDA8 (EtwpUpdateFileHeader.c)
 *     CmpGetVolumeClusterSize @ 0x14071DDD8 (CmpGetVolumeClusterSize.c)
 *     PopValidateHiberFileSize @ 0x140776E28 (PopValidateHiberFileSize.c)
 *     PfpQueryFileExtentsRequest @ 0x1408DFD0C (PfpQueryFileExtentsRequest.c)
 *     SmKmIsVolumeIoPossible @ 0x14092B5F4 (SmKmIsVolumeIoPossible.c)
 *     SmKmStoreFileCreate @ 0x14092BFDC (SmKmStoreFileCreate.c)
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
