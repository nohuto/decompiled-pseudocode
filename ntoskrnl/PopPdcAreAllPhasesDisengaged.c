/*
 * XREFs of PopPdcAreAllPhasesDisengaged @ 0x14087F0C8
 * Callers:
 *     PopArmIdlePhaseWatchdog @ 0x14087EFA4 (PopArmIdlePhaseWatchdog.c)
 *     PopPowerAggregatorScreenOffExitStateHandler @ 0x140990EA0 (PopPowerAggregatorScreenOffExitStateHandler.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

char PopPdcAreAllPhasesDisengaged()
{
  char result; // al

  result = 1;
  if ( qword_140C6AC10 )
    return ((__int64 (*)(void))qword_140C6AC10)();
  return result;
}
