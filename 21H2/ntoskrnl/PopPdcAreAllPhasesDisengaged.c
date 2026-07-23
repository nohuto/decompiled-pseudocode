/*
 * XREFs of PopPdcAreAllPhasesDisengaged @ 0x1408EFF38
 * Callers:
 *     PopPowerAggregatorScreenOffExitStateHandler @ 0x1408EEB00 (PopPowerAggregatorScreenOffExitStateHandler.c)
 *     PopArmIdlePhaseWatchdog @ 0x1408EFD68 (PopArmIdlePhaseWatchdog.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

char PopPdcAreAllPhasesDisengaged()
{
  char result; // al

  result = 1;
  if ( qword_140C54470 )
    return ((__int64 (*)(void))qword_140C54470)();
  return result;
}
