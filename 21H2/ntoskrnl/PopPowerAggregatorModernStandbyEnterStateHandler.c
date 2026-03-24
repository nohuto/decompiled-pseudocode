/*
 * XREFs of PopPowerAggregatorModernStandbyEnterStateHandler @ 0x1408EE530
 * Callers:
 *     PopPowerAggregatorInvokeStateMachine @ 0x1407761A8 (PopPowerAggregatorInvokeStateMachine.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14023E750 (ExQueueWorkItem.c)
 *     PopPowerAggregatorDisengageModernStandby @ 0x1408EE04C (PopPowerAggregatorDisengageModernStandby.c)
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
