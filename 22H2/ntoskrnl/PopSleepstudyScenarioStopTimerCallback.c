/*
 * XREFs of PopSleepstudyScenarioStopTimerCallback @ 0x140598370
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7C00 (ExQueueWorkItem.c)
 */

void PopSleepstudyScenarioStopTimerCallback()
{
  ExQueueWorkItem(&stru_140C3BCE8, DelayedWorkQueue);
}
