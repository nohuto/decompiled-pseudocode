/*
 * XREFs of ZwWaitHighEventPair @ 0x1800A0F90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwWaitHighEventPair(HANDLE EventPairHandle)
{
  NTSTATUS result; // eax

  result = 470;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
