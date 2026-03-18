/*
 * XREFs of PopThermalStandbyEndTracking @ 0x14058FC28
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x140373610 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalCsEntry @ 0x14058F8DC (PopThermalCsEntry.c)
 *     PopThermalCsExit @ 0x14058F95C (PopThermalCsExit.c)
 *     PopThermalSxEntry @ 0x14058FCD8 (PopThermalSxEntry.c)
 *     PopThermalStateTransitionWorker @ 0x140865600 (PopThermalStateTransitionWorker.c)
 * Callees:
 *     PopTraceThermalStandbyComplete @ 0x140595C70 (PopTraceThermalStandbyComplete.c)
 */

__int64 __fastcall PopThermalStandbyEndTracking(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  LOBYTE(a3) = byte_140C3C83C;
  result = 0LL;
  byte_140C3C83C = 0;
  if ( byte_140C3C83D )
  {
    byte_140C3C83D = 0;
    return PopTraceThermalStandbyComplete(a1, (MEMORY[0xFFFFF78000000008] - qword_140C3C840) / 0x989680uLL, a3);
  }
  return result;
}
