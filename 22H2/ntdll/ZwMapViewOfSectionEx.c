/*
 * XREFs of ZwMapViewOfSectionEx @ 0x18009F770
 * Callers:
 *     LdrpMinimalMapModule @ 0x180014C38 (LdrpMinimalMapModule.c)
 * Callees:
 *     <none>
 */

__int64 ZwMapViewOfSectionEx()
{
  __int64 result; // rax

  result = 277LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
