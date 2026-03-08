/*
 * XREFs of NtQueryVirtualMemory @ 0x1407C6350
 * Callers:
 *     <none>
 * Callees:
 *     MmQueryVirtualMemory @ 0x1407C6390 (MmQueryVirtualMemory.c)
 */

NTSTATUS __stdcall NtQueryVirtualMemory(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        MEMORY_INFORMATION_CLASS MemoryInformationClass,
        PVOID MemoryInformation,
        SIZE_T MemoryInformationLength,
        PSIZE_T ReturnLength)
{
  return MmQueryVirtualMemory((ULONG_PTR)ProcessHandle, MemoryInformationLength, (__int64)ReturnLength, 2);
}
