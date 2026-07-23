/*
 * XREFs of ZwLockVirtualMemory @ 0x1403FC740
 * Callers:
 *     CmSiLockViewOfSection @ 0x1402F7EC0 (CmSiLockViewOfSection.c)
 *     SmKmVirtualLockCtxLockMemory @ 0x14059EA90 (SmKmVirtualLockCtxLockMemory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwLockVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG MapType)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
