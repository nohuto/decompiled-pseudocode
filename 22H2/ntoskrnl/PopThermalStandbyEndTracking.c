/*
 * XREFs of PopThermalStandbyEndTracking @ 0x14038A770
 * Callers:
 *     PopThermalSxEntry @ 0x140389B58 (PopThermalSxEntry.c)
 *     PopCheckAndHandleThermalConditions @ 0x1403C4D58 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalCsEntry @ 0x14056F6B0 (PopThermalCsEntry.c)
 *     PopThermalCsExit @ 0x14056F730 (PopThermalCsExit.c)
 * Callees:
 *     PopTraceThermalStandbyComplete @ 0x1405738A4 (PopTraceThermalStandbyComplete.c)
 */

__int64 __fastcall PopThermalStandbyEndTracking(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  LOBYTE(a3) = byte_140C22E7C;
  result = 0LL;
  byte_140C22E7C = 0;
  if ( byte_140C22E7D )
  {
    byte_140C22E7D = 0;
    return PopTraceThermalStandbyComplete(a1, (MEMORY[0xFFFFF78000000008] - qword_140C22E80) / 0x989680uLL, a3);
  }
  return result;
}
