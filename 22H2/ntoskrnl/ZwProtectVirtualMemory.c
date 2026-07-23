/*
 * XREFs of ZwProtectVirtualMemory @ 0x1403FA420
 * Callers:
 *     CmSiProtectViewOfSection @ 0x140361F3C (CmSiProtectViewOfSection.c)
 *     KiOpPatchCode @ 0x140524674 (KiOpPatchCode.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1405D7AD8 (WbMakeUserDataPagesKernelWritable.c)
 *     MiCheckForUserStackOverflow @ 0x140679A18 (MiCheckForUserStackOverflow.c)
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
