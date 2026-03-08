/*
 * XREFs of ZwSetVolumeInformationFile @ 0x140415B30
 * Callers:
 *     DifZwSetVolumeInformationFileWrapper @ 0x1405F5910 (DifZwSetVolumeInformationFileWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetVolumeInformationFile(
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
