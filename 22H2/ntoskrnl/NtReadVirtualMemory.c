/*
 * XREFs of NtReadVirtualMemory @ 0x1405F6160
 * Callers:
 *     <none>
 * Callees:
 *     MiReadWriteVirtualMemory @ 0x1405F6190 (MiReadWriteVirtualMemory.c)
 */

NTSTATUS __cdecl NtReadVirtualMemory(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID Buffer,
        SIZE_T BufferSize,
        PSIZE_T NumberOfBytesRead)
{
  return MiReadWriteVirtualMemory(ProcessHandle, (__int64)NumberOfBytesRead, 0x10u);
}
