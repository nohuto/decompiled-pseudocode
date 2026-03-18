/*
 * XREFs of PopPowerRequestDebounceTimerCallback @ 0x1405C6B50
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x14036AAC4 (PopQueueWorkItem.c)
 */

char PopPowerRequestDebounceTimerCallback()
{
  return PopQueueWorkItem((__int64)&unk_140C24408, DelayedWorkQueue);
}
