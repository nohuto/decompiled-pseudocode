/*
 * XREFs of NtLockVirtualMemory @ 0x18009F690
 * Callers:
 *     RtlExtendMemoryZone @ 0x180001A70 (RtlExtendMemoryZone.c)
 *     RtlLockMemoryZone @ 0x18005E9F0 (RtlLockMemoryZone.c)
 *     RtlpModuleEnumeratorCallback @ 0x18007FA10 (RtlpModuleEnumeratorCallback.c)
 *     RtlLockCurrentThread @ 0x180083C70 (RtlLockCurrentThread.c)
 *     RtlpLockStack @ 0x180083D28 (RtlpLockStack.c)
 * Callees:
 *     <none>
 */

__int64 NtLockVirtualMemory()
{
  __int64 result; // rax

  result = 270LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
