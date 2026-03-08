/*
 * XREFs of PopThermalStandbyEndTracking @ 0x14058D6F8
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x14039CAB4 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalCsEntry @ 0x14058D3AC (PopThermalCsEntry.c)
 *     PopThermalCsExit @ 0x14058D42C (PopThermalCsExit.c)
 *     PopThermalSxEntry @ 0x14058D7A8 (PopThermalSxEntry.c)
 *     PopThermalStateTransitionWorker @ 0x140860FF0 (PopThermalStateTransitionWorker.c)
 * Callees:
 *     PopTraceThermalStandbyComplete @ 0x140593754 (PopTraceThermalStandbyComplete.c)
 */

__int64 __fastcall PopThermalStandbyEndTracking(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  LOBYTE(a3) = byte_140C3C45C;
  result = 0LL;
  byte_140C3C45C = 0;
  if ( byte_140C3C45D )
  {
    byte_140C3C45D = 0;
    return PopTraceThermalStandbyComplete(a1, (MEMORY[0xFFFFF78000000008] - qword_140C3C460) / 0x989680uLL, a3);
  }
  return result;
}
