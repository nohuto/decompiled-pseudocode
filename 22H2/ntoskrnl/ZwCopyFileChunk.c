/*
 * XREFs of ZwCopyFileChunk @ 0x1403FAE80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCopyFileChunk(
        HANDLE SourceHandle,
        HANDLE DestinationHandle,
        HANDLE EventHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG Length,
        PLARGE_INTEGER SourceOffset,
        PLARGE_INTEGER DestOffset,
        PULONG SourceKey,
        PULONG DestKey,
        ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SourceHandle);
}
