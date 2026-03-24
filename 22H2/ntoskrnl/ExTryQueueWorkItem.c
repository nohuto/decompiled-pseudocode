/*
 * XREFs of ExTryQueueWorkItem @ 0x14023B710
 * Callers:
 *     PopFxRequestWorker @ 0x140262450 (PopFxRequestWorker.c)
 *     PopFxQueueWorkOrder @ 0x140380F98 (PopFxQueueWorkOrder.c)
 * Callees:
 *     ExpTryQueueWorkItem @ 0x14023B73C (ExpTryQueueWorkItem.c)
 */

__int64 __fastcall ExTryQueueWorkItem(__int64 a1, unsigned int a2)
{
  return ExpTryQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), a1, a2, 0LL);
}
