/*
 * XREFs of NtQueryEvent @ 0x18009DFA0
 * Callers:
 *     PsspDumpObject_Event @ 0x180115D10 (PsspDumpObject_Event.c)
 * Callees:
 *     <none>
 */

__int64 NtQueryEvent()
{
  __int64 result; // rax

  result = 86LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
