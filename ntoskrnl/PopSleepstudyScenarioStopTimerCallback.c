/*
 * XREFs of PopSleepstudyScenarioStopTimerCallback @ 0x140595E50
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 */

void PopSleepstudyScenarioStopTimerCallback()
{
  ExQueueWorkItem(&stru_140C3B908, DelayedWorkQueue);
}
