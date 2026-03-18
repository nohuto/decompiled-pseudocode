/*
 * XREFs of ExTryQueueWorkItem @ 0x1402B9B00
 * Callers:
 *     PopFxQueueWorkItem @ 0x14028C10C (PopFxQueueWorkItem.c)
 *     PopFxRequestWorkerInternal @ 0x140314D94 (PopFxRequestWorkerInternal.c)
 * Callees:
 *     ExpTryQueueWorkItem @ 0x1402B990C (ExpTryQueueWorkItem.c)
 */

char __fastcall ExTryQueueWorkItem(__int64 *a1, unsigned int a2)
{
  return ExpTryQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), a1, a2, 0);
}
