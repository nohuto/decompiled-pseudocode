/*
 * XREFs of PopThermalStandbyEndTracking @ 0x14038B428
 * Callers:
 *     PopThermalSxEntry @ 0x14038AA3C (PopThermalSxEntry.c)
 *     PopCheckAndHandleThermalConditions @ 0x1403D33C4 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalCsEntry @ 0x1405D03D0 (PopThermalCsEntry.c)
 *     PopThermalCsExit @ 0x1405D0450 (PopThermalCsExit.c)
 *     PopThermalStateTransitionWorker @ 0x1408647A0 (PopThermalStateTransitionWorker.c)
 * Callees:
 *     PopTraceThermalStandbyComplete @ 0x1405D4370 (PopTraceThermalStandbyComplete.c)
 */

__int64 __fastcall PopThermalStandbyEndTracking(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  LOBYTE(a3) = byte_140C2207C;
  result = 0LL;
  byte_140C2207C = 0;
  if ( byte_140C2207D )
  {
    byte_140C2207D = 0;
    return PopTraceThermalStandbyComplete(a1, (MEMORY[0xFFFFF78000000008] - qword_140C22080) / 0x989680uLL, a3);
  }
  return result;
}
