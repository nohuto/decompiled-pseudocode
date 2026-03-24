/*
 * XREFs of PopThermalStandbyEndTracking @ 0x14038AE70
 * Callers:
 *     PopThermalSxEntry @ 0x14038A258 (PopThermalSxEntry.c)
 *     PopCheckAndHandleThermalConditions @ 0x1403C50F8 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalCsEntry @ 0x14056F770 (PopThermalCsEntry.c)
 *     PopThermalCsExit @ 0x14056F7F0 (PopThermalCsExit.c)
 * Callees:
 *     PopTraceThermalStandbyComplete @ 0x140573964 (PopTraceThermalStandbyComplete.c)
 */

__int64 __fastcall PopThermalStandbyEndTracking(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  LOBYTE(a3) = byte_140C22E1C;
  result = 0LL;
  byte_140C22E1C = 0;
  if ( byte_140C22E1D )
  {
    byte_140C22E1D = 0;
    return PopTraceThermalStandbyComplete(a1, (MEMORY[0xFFFFF78000000008] - qword_140C22E20) / 0x989680uLL, a3);
  }
  return result;
}
