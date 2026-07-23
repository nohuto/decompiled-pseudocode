/*
 * XREFs of ZwProtectVirtualMemory @ 0x1403FAF80
 * Callers:
 *     CmSiProtectViewOfSection @ 0x1402F7A5C (CmSiProtectViewOfSection.c)
 *     KiOpPatchCode @ 0x140524974 (KiOpPatchCode.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1405D7AD8 (WbMakeUserDataPagesKernelWritable.c)
 *     MiCheckForUserStackOverflow @ 0x1405F4B48 (MiCheckForUserStackOverflow.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwProtectVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        PSIZE_T RegionSize,
        ULONG NewProtect,
        PULONG OldProtect)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
