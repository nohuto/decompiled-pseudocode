/*
 * XREFs of NtDeviceIoControlFile @ 0x1407C16B0
 * Callers:
 *     PopFlushVolumeWorker @ 0x140AA3140 (PopFlushVolumeWorker.c)
 * Callees:
 *     IopXxxControlFile @ 0x1407C1720 (IopXxxControlFile.c)
 */

NTSTATUS __stdcall NtDeviceIoControlFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG IoControlCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  return IopXxxControlFile(
           FileHandle,
           (__int64)IoStatusBlock,
           IoControlCode,
           (__int64)InputBuffer,
           InputBufferLength,
           OutputBuffer,
           OutputBufferLength,
           1);
}
