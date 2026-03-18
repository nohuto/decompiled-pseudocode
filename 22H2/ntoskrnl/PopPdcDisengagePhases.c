/*
 * XREFs of PopPdcDisengagePhases @ 0x140998100
 * Callers:
 *     PopPowerAggregatorEnterScreenOff @ 0x1408781A4 (PopPowerAggregatorEnterScreenOff.c)
 *     PopPowerAggregatorModernStandbyExitStateHandler @ 0x140993B90 (PopPowerAggregatorModernStandbyExitStateHandler.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 PopPdcDisengagePhases()
{
  __int64 result; // rax

  result = 3221225474LL;
  if ( qword_140C6B070 )
    return ((__int64 (*)(void))qword_140C6B070)();
  return result;
}
