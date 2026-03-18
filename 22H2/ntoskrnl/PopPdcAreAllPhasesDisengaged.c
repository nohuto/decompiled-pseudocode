/*
 * XREFs of PopPdcAreAllPhasesDisengaged @ 0x140883E68
 * Callers:
 *     PopArmIdlePhaseWatchdog @ 0x140883D44 (PopArmIdlePhaseWatchdog.c)
 *     PopPowerAggregatorScreenOffExitStateHandler @ 0x140993F50 (PopPowerAggregatorScreenOffExitStateHandler.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

char PopPdcAreAllPhasesDisengaged()
{
  char result; // al

  result = 1;
  if ( qword_140C6B080 )
    return ((__int64 (*)(void))qword_140C6B080)();
  return result;
}
