/*
 * XREFs of PopCheckPowerSourceAfterRtcWakeTimerCallback @ 0x14058DF50
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x1402BCCB4 (PopQueueWorkItem.c)
 */

char PopCheckPowerSourceAfterRtcWakeTimerCallback()
{
  return PopQueueWorkItem((__int64)&unk_140C3C228, DelayedWorkQueue);
}
