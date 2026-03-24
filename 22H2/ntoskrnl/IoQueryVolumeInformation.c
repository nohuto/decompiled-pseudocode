/*
 * XREFs of IoQueryVolumeInformation @ 0x1406A47B0
 * Callers:
 *     MiCreatePagingFile @ 0x1407B6DDC (MiCreatePagingFile.c)
 * Callees:
 *     IopQueryXxxInformation @ 0x140633A38 (IopQueryXxxInformation.c)
 */

NTSTATUS __stdcall IoQueryVolumeInformation(
        PFILE_OBJECT FileObject,
        FS_INFORMATION_CLASS FsInformationClass,
        ULONG Length,
        PVOID FsInformation,
        PULONG ReturnedLength)
{
  return IopQueryXxxInformation(
           (PADAPTER_OBJECT)FileObject,
           FsInformationClass,
           Length,
           0,
           (struct _IRP *)FsInformation,
           ReturnedLength,
           0);
}
