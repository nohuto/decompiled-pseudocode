/*
 * XREFs of NtWriteVirtualMemory @ 0x140695AE0
 * Callers:
 *     <none>
 * Callees:
 *     MiReadWriteVirtualMemory @ 0x1405F6190 (MiReadWriteVirtualMemory.c)
 */

NTSTATUS __cdecl NtWriteVirtualMemory(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID Buffer,
        SIZE_T BufferSize,
        PSIZE_T NumberOfBytesWritten)
{
  return MiReadWriteVirtualMemory(
           ProcessHandle,
           (size_t)BaseAddress,
           (size_t)Buffer,
           BufferSize,
           (unsigned __int64)NumberOfBytesWritten,
           0x20u);
}
