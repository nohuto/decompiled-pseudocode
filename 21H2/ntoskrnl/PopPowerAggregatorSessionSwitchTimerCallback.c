/*
 * XREFs of PopPowerAggregatorSessionSwitchTimerCallback @ 0x140573E90
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14023E750 (ExQueueWorkItem.c)
 */

void PopPowerAggregatorSessionSwitchTimerCallback()
{
  ExQueueWorkItem(&stru_140C217F0, DelayedWorkQueue);
}
