/*
 * XREFs of NtCompareSigningLevels @ 0x18009E850
 * Callers:
 *     LdrpValidateIntegrityContinuity @ 0x180061B38 (LdrpValidateIntegrityContinuity.c)
 *     LdrpSetModuleSigningLevel @ 0x180089B28 (LdrpSetModuleSigningLevel.c)
 * Callees:
 *     <none>
 */

__int64 NtCompareSigningLevels()
{
  __int64 result; // rax

  result = 156LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
