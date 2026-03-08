/*
 * XREFs of PopPowerAggregatorScreenOffActiveToScreenOffStateHandler @ 0x140879470
 * Callers:
 *     PopPowerAggregatorInvokeStateMachine @ 0x140872018 (PopPowerAggregatorInvokeStateMachine.c)
 * Callees:
 *     PopPowerAggregatorEnterScreenOff @ 0x140879524 (PopPowerAggregatorEnterScreenOff.c)
 */

__int64 PopPowerAggregatorScreenOffActiveToScreenOffStateHandler()
{
  if ( PopPowerAggregatorUmpoInitialized )
    PopPowerAggregatorEnterScreenOff();
  return 0LL;
}
