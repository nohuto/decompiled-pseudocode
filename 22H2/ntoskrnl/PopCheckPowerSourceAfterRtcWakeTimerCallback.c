/*
 * XREFs of PopCheckPowerSourceAfterRtcWakeTimerCallback @ 0x140576940
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x14032CC74 (PopQueueWorkItem.c)
 */

char PopCheckPowerSourceAfterRtcWakeTimerCallback()
{
  return PopQueueWorkItem((__int64)&unk_140C21208, DelayedWorkQueue);
}
