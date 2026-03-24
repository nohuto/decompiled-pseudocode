/*
 * XREFs of PopPdcAreAllPhasesDisengaged @ 0x1408EFE28
 * Callers:
 *     PopPowerAggregatorScreenOffExitStateHandler @ 0x1408EE9F0 (PopPowerAggregatorScreenOffExitStateHandler.c)
 *     PopArmIdlePhaseWatchdog @ 0x1408EFC58 (PopArmIdlePhaseWatchdog.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

char PopPdcAreAllPhasesDisengaged()
{
  char result; // al

  result = 1;
  if ( qword_140C54430 )
    return ((__int64 (*)(void))qword_140C54430)();
  return result;
}
