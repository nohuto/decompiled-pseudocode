/*
 * XREFs of PopPdcAreAllPhasesDisengaged @ 0x1408EFDD8
 * Callers:
 *     PopPowerAggregatorScreenOffExitStateHandler @ 0x1408EE9A0 (PopPowerAggregatorScreenOffExitStateHandler.c)
 *     PopArmIdlePhaseWatchdog @ 0x1408EFC08 (PopArmIdlePhaseWatchdog.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

char PopPdcAreAllPhasesDisengaged()
{
  char result; // al

  result = 1;
  if ( qword_140C54430 )
    return ((__int64 (*)(void))qword_140C54430)();
  return result;
}
