/*
 * XREFs of PopPowerRequestDebounceTimerCallback @ 0x140583C00
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x14032CB04 (PopQueueWorkItem.c)
 */

char PopPowerRequestDebounceTimerCallback()
{
  return PopQueueWorkItem((__int64)&unk_140C3F488, DelayedWorkQueue);
}
