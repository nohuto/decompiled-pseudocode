/*
 * XREFs of PopPowerAggregatorSessionSwitchTimerCallback @ 0x1405740D0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 */

void PopPowerAggregatorSessionSwitchTimerCallback()
{
  ExQueueWorkItem(&stru_140C21850, DelayedWorkQueue);
}
