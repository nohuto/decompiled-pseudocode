/*
 * XREFs of ZwSetInformationVirtualMemory @ 0x1403FD980
 * Callers:
 *     CmSiPrefetchVirtualMemoryRange @ 0x1402F7A9C (CmSiPrefetchVirtualMemoryRange.c)
 *     PspMapSystemDll @ 0x1406C0A58 (PspMapSystemDll.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetInformationVirtualMemory(
        HANDLE ProcessHandle,
        VIRTUAL_MEMORY_INFORMATION_CLASS VmInformationClass,
        ULONG_PTR NumberOfEntries,
        PMEMORY_RANGE_ENTRY VirtualAddresses,
        PVOID VmInformation,
        ULONG VmInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
