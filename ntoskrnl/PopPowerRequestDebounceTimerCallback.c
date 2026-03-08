/*
 * XREFs of PopPowerRequestDebounceTimerCallback @ 0x1405816D0
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x1402BCCB4 (PopQueueWorkItem.c)
 */

char PopPowerRequestDebounceTimerCallback()
{
  return PopQueueWorkItem((__int64)&unk_140C3F048, DelayedWorkQueue);
}
