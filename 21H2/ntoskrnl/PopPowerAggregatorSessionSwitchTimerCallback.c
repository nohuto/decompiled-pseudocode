/*
 * XREFs of PopPowerAggregatorSessionSwitchTimerCallback @ 0x1405D4950
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 */

void PopPowerAggregatorSessionSwitchTimerCallback()
{
  ExQueueWorkItem(&stru_140C20C20, DelayedWorkQueue);
}
