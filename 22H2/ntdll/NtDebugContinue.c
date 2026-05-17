/*
 * XREFs of NtDebugContinue @ 0x18009EEB0
 * Callers:
 *     DbgUiContinue @ 0x1800CC640 (DbgUiContinue.c)
 * Callees:
 *     <none>
 */

__int64 NtDebugContinue()
{
  __int64 result; // rax

  result = 207LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
