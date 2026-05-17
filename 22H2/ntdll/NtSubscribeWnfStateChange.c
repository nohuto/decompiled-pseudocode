/*
 * XREFs of NtSubscribeWnfStateChange @ 0x1800A0C50
 * Callers:
 *     RtlpAddWnfUserSubToNameSub @ 0x1800425FC (RtlpAddWnfUserSubToNameSub.c)
 *     RtlpRemoveUserSubFromNameSub @ 0x180063BAC (RtlpRemoveUserSubFromNameSub.c)
 * Callees:
 *     <none>
 */

__int64 NtSubscribeWnfStateChange()
{
  __int64 result; // rax

  result = 444LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
