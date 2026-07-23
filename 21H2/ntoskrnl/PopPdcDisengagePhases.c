/*
 * XREFs of PopPdcDisengagePhases @ 0x1408F0180
 * Callers:
 *     PopPowerAggregatorModernStandbyExitStateHandler @ 0x1408EE6E0 (PopPowerAggregatorModernStandbyExitStateHandler.c)
 *     PopPowerAggregatorScreenOffExitStateHandler @ 0x1408EEB00 (PopPowerAggregatorScreenOffExitStateHandler.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 PopPdcDisengagePhases()
{
  __int64 result; // rax

  result = 3221225474LL;
  if ( qword_140C54460 )
    return ((__int64 (*)(void))qword_140C54460)();
  return result;
}
