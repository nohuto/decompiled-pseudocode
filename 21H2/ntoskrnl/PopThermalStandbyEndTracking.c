/*
 * XREFs of PopThermalStandbyEndTracking @ 0x14038AFC0
 * Callers:
 *     PopThermalSxEntry @ 0x14038A3A8 (PopThermalSxEntry.c)
 *     PopCheckAndHandleThermalConditions @ 0x1403C5528 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalCsEntry @ 0x14056F9B0 (PopThermalCsEntry.c)
 *     PopThermalCsExit @ 0x14056FA30 (PopThermalCsExit.c)
 * Callees:
 *     PopTraceThermalStandbyComplete @ 0x140573BA4 (PopTraceThermalStandbyComplete.c)
 */

__int64 __fastcall PopThermalStandbyEndTracking(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  LOBYTE(a3) = byte_140C22E9C;
  result = 0LL;
  byte_140C22E9C = 0;
  if ( byte_140C22E9D )
  {
    byte_140C22E9D = 0;
    return PopTraceThermalStandbyComplete(a1, (MEMORY[0xFFFFF78000000008] - qword_140C22EA0) / 0x989680uLL, a3);
  }
  return result;
}
