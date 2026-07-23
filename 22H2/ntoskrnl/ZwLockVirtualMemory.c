/*
 * XREFs of ZwLockVirtualMemory @ 0x1403FBBE0
 * Callers:
 *     CmSiLockViewOfSection @ 0x140362260 (CmSiLockViewOfSection.c)
 *     SmKmVirtualLockCtxLockMemory @ 0x14059E7A0 (SmKmVirtualLockCtxLockMemory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwLockVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG MapType)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
