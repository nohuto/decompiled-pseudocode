/*
 * XREFs of PopSleepstudyScenarioStopTimerCallback @ 0x140399400
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 */

void PopSleepstudyScenarioStopTimerCallback()
{
  ExQueueWorkItem(&stru_140C20028, DelayedWorkQueue);
}
