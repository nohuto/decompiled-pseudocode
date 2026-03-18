/*
 * XREFs of PopPowerRequestExecutionRequiredTimeoutCallback @ 0x140583C30
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x14032CB04 (PopQueueWorkItem.c)
 */

char PopPowerRequestExecutionRequiredTimeoutCallback()
{
  return PopQueueWorkItem((__int64)&unk_140C3F548, DelayedWorkQueue);
}
