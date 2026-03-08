/*
 * XREFs of NtFsControlFile @ 0x1407696A0
 * Callers:
 *     <none>
 * Callees:
 *     IopXxxControlFile @ 0x1407C1720 (IopXxxControlFile.c)
 */

NTSTATUS __stdcall NtFsControlFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG FsControlCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  return IopXxxControlFile(
           FileHandle,
           (__int64)IoStatusBlock,
           FsControlCode,
           (__int64)InputBuffer,
           InputBufferLength,
           OutputBuffer,
           OutputBufferLength,
           0);
}
