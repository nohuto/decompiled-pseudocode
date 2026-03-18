/*
 * XREFs of PopCheckPowerSourceAfterRtcWakeTimerCallback @ 0x140590480
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x14032CB04 (PopQueueWorkItem.c)
 */

char PopCheckPowerSourceAfterRtcWakeTimerCallback()
{
  return PopQueueWorkItem((__int64)&unk_140C3C6A8, DelayedWorkQueue);
}
