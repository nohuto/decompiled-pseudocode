/*
 * XREFs of IoQueryVolumeInformation @ 0x14079B0A0
 * Callers:
 *     <none>
 * Callees:
 *     IopQueryXxxInformation @ 0x14071E6CC (IopQueryXxxInformation.c)
 */

NTSTATUS __stdcall IoQueryVolumeInformation(
        PFILE_OBJECT FileObject,
        FS_INFORMATION_CLASS FsInformationClass,
        ULONG Length,
        PVOID FsInformation,
        PULONG ReturnedLength)
{
  return IopQueryXxxInformation(
           FileObject,
           FsInformationClass,
           Length,
           0,
           (struct _IRP *)FsInformation,
           ReturnedLength,
           0);
}
