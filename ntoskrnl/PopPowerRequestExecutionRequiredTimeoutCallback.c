/*
 * XREFs of PopPowerRequestExecutionRequiredTimeoutCallback @ 0x140581700
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x1402BCCB4 (PopQueueWorkItem.c)
 */

char PopPowerRequestExecutionRequiredTimeoutCallback()
{
  return PopQueueWorkItem((__int64)&unk_140C3F108, DelayedWorkQueue);
}
