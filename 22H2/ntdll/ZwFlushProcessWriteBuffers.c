/*
 * XREFs of ZwFlushProcessWriteBuffers @ 0x18009F230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS ZwFlushProcessWriteBuffers(void)
{
  NTSTATUS result; // eax

  result = 235;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
