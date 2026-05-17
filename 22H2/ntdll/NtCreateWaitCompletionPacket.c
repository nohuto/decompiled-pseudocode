/*
 * XREFs of NtCreateWaitCompletionPacket @ 0x18009EE10
 * Callers:
 *     TpAllocWait @ 0x18000DF40 (TpAllocWait.c)
 *     TppInitializeTimerSubQueue @ 0x180063264 (TppInitializeTimerSubQueue.c)
 * Callees:
 *     <none>
 */

__int64 NtCreateWaitCompletionPacket()
{
  __int64 result; // rax

  result = 202LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
