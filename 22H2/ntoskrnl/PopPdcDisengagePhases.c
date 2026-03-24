/*
 * XREFs of PopPdcDisengagePhases @ 0x1408F0070
 * Callers:
 *     PopPowerAggregatorModernStandbyExitStateHandler @ 0x1408EE5D0 (PopPowerAggregatorModernStandbyExitStateHandler.c)
 *     PopPowerAggregatorScreenOffExitStateHandler @ 0x1408EE9F0 (PopPowerAggregatorScreenOffExitStateHandler.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 PopPdcDisengagePhases()
{
  __int64 result; // rax

  result = 3221225474LL;
  if ( qword_140C54420 )
    return ((__int64 (*)(void))qword_140C54420)();
  return result;
}
