/*
 * XREFs of PopApplyLegacyPowerRequestFlags @ 0x14034D258
 * Callers:
 *     PoRegisterSystemState @ 0x14056EE50 (PoRegisterSystemState.c)
 *     NtSetThreadExecutionState @ 0x1406F8710 (NtSetThreadExecutionState.c)
 * Callees:
 *     PoSetPowerRequest @ 0x14034AF80 (PoSetPowerRequest.c)
 *     PoClearPowerRequest @ 0x14034B770 (PoClearPowerRequest.c)
 */

NTSTATUS __fastcall PopApplyLegacyPowerRequestFlags(PVOID PowerRequest, char a2, char a3)
{
  NTSTATUS result; // eax

  if ( (a3 & 1) != 0 )
  {
    if ( (a2 & 1) != 0 )
      result = PoSetPowerRequest(PowerRequest, PowerRequestSystemRequired);
    else
      result = PoClearPowerRequest(PowerRequest, PowerRequestSystemRequired);
  }
  if ( (a3 & 2) != 0 )
  {
    if ( (a2 & 2) != 0 )
      result = PoSetPowerRequest(PowerRequest, PowerRequestDisplayRequired);
    else
      result = PoClearPowerRequest(PowerRequest, PowerRequestDisplayRequired);
  }
  if ( (a3 & 0x40) != 0 )
  {
    if ( (a2 & 0x40) != 0 )
      return PoSetPowerRequest(PowerRequest, PowerRequestAwayModeRequired);
    else
      return PoClearPowerRequest(PowerRequest, PowerRequestAwayModeRequired);
  }
  return result;
}
