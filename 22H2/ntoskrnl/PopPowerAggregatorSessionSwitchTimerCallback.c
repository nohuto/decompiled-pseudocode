/*
 * XREFs of PopPowerAggregatorSessionSwitchTimerCallback @ 0x1405984B0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7C00 (ExQueueWorkItem.c)
 */

void PopPowerAggregatorSessionSwitchTimerCallback()
{
  ExQueueWorkItem(&stru_140C3AB00, DelayedWorkQueue);
}
