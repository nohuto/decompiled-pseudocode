/*
 * XREFs of PopPowerAggregatorModernStandbyEnterStateHandler @ 0x1408EE580
 * Callers:
 *     PopPowerAggregatorInvokeStateMachine @ 0x140776C08 (PopPowerAggregatorInvokeStateMachine.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14023E0C0 (ExQueueWorkItem.c)
 *     PopPowerAggregatorDisengageModernStandby @ 0x1408EE09C (PopPowerAggregatorDisengageModernStandby.c)
 */

__int64 __fastcall PopPowerAggregatorModernStandbyEnterStateHandler(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 96) )
  {
    PopPowerAggregatorDisengageModernStandby(a1);
  }
  else if ( *(_QWORD *)(a1 + 80) != *(_QWORD *)(a1 + 40) && !*(_BYTE *)(a1 + 104) )
  {
    *(_BYTE *)(a1 + 104) = 1;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 112), DelayedWorkQueue);
  }
  return 0LL;
}
