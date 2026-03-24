/*
 * XREFs of PopPowerAggregatorSessionSwitchTimerCallback @ 0x140573DD0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14023E0C0 (ExQueueWorkItem.c)
 */

void PopPowerAggregatorSessionSwitchTimerCallback()
{
  ExQueueWorkItem(&stru_140C21850, DelayedWorkQueue);
}
