/*
 * XREFs of NtFlushBuffersFile @ 0x14067D0F0
 * Callers:
 *     <none>
 * Callees:
 *     NtFlushBuffersFileEx @ 0x14067D120 (NtFlushBuffersFileEx.c)
 */

NTSTATUS __cdecl NtFlushBuffersFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock)
{
  return NtFlushBuffersFileEx(FileHandle, 0, 0LL, 0, IoStatusBlock);
}
