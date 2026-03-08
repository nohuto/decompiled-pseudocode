/*
 * XREFs of PopPowerAggregatorSessionSwitchTimerCallback @ 0x140595F90
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 */

void PopPowerAggregatorSessionSwitchTimerCallback()
{
  ExQueueWorkItem(&stru_140C3A760, DelayedWorkQueue);
}
