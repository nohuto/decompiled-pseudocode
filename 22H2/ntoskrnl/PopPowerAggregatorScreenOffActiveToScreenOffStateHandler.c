/*
 * XREFs of PopPowerAggregatorScreenOffActiveToScreenOffStateHandler @ 0x1408780F0
 * Callers:
 *     PopPowerAggregatorInvokeStateMachine @ 0x140874ED8 (PopPowerAggregatorInvokeStateMachine.c)
 * Callees:
 *     PopPowerAggregatorEnterScreenOff @ 0x1408781A4 (PopPowerAggregatorEnterScreenOff.c)
 */

__int64 PopPowerAggregatorScreenOffActiveToScreenOffStateHandler()
{
  if ( PopPowerAggregatorUmpoInitialized )
    PopPowerAggregatorEnterScreenOff();
  return 0LL;
}
