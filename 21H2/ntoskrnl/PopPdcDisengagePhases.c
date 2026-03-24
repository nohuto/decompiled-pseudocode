/*
 * XREFs of PopPdcDisengagePhases @ 0x1408F0020
 * Callers:
 *     PopPowerAggregatorModernStandbyExitStateHandler @ 0x1408EE580 (PopPowerAggregatorModernStandbyExitStateHandler.c)
 *     PopPowerAggregatorScreenOffExitStateHandler @ 0x1408EE9A0 (PopPowerAggregatorScreenOffExitStateHandler.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

__int64 PopPdcDisengagePhases()
{
  __int64 result; // rax

  result = 3221225474LL;
  if ( qword_140C54420 )
    return ((__int64 (*)(void))qword_140C54420)();
  return result;
}
