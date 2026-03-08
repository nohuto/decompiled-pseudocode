/*
 * XREFs of PoUserShutdownInitiated @ 0x14067EEE0
 * Callers:
 *     PopPowerInformationInternal @ 0x14073E108 (PopPowerInformationInternal.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402459D0 (PsIsCurrentThreadInServerSilo.c)
 *     PopSwitchUpdateUserShutdownScenarioState @ 0x14067EF08 (PopSwitchUpdateUserShutdownScenarioState.c)
 */

char __fastcall PoUserShutdownInitiated(__int64 a1, __int64 a2)
{
  char result; // al
  __int64 v3; // rdx

  result = PsIsCurrentThreadInServerSilo(a1, a2);
  if ( !result )
  {
    LOBYTE(v3) = 1;
    return PopSwitchUpdateUserShutdownScenarioState(3LL, v3);
  }
  return result;
}
