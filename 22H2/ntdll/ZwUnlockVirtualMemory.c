/*
 * XREFs of ZwUnlockVirtualMemory @ 0x1800A0E70
 * Callers:
 *     RtlUnlockMemoryZone @ 0x18005E400 (RtlUnlockMemoryZone.c)
 *     RtlLockMemoryZone @ 0x18005E9F0 (RtlLockMemoryZone.c)
 *     RtlUnlockModuleSection @ 0x18005EBD0 (RtlUnlockModuleSection.c)
 *     RtlLockCurrentThread @ 0x180083C70 (RtlLockCurrentThread.c)
 *     RtlUnlockCurrentThread @ 0x180087290 (RtlUnlockCurrentThread.c)
 *     RtlpUnlockStack @ 0x180087320 (RtlpUnlockStack.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUnlockVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG MapType)
{
  NTSTATUS result; // eax

  result = 461;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
