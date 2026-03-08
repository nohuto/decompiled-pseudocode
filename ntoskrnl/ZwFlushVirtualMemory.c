/*
 * XREFs of ZwFlushVirtualMemory @ 0x140414150
 * Callers:
 *     DifZwFlushVirtualMemoryWrapper @ 0x1405EE3B0 (DifZwFlushVirtualMemoryWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFlushVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        PSIZE_T RegionSize,
        PIO_STATUS_BLOCK IoStatus)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle, BaseAddress);
}
