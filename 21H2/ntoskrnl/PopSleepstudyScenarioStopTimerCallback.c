/*
 * XREFs of PopSleepstudyScenarioStopTimerCallback @ 0x14057F500
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 */

void PopSleepstudyScenarioStopTimerCallback()
{
  ExQueueWorkItem(&stru_140C1E4D0, DelayedWorkQueue);
}
