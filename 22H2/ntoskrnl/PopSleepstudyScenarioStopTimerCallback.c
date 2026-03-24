/*
 * XREFs of PopSleepstudyScenarioStopTimerCallback @ 0x14057F200
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14023E0C0 (ExQueueWorkItem.c)
 */

void PopSleepstudyScenarioStopTimerCallback()
{
  ExQueueWorkItem(&stru_140C1E4F0, DelayedWorkQueue);
}
