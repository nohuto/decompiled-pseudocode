/*
 * XREFs of ExTryQueueWorkItem @ 0x140308A80
 * Callers:
 *     PopFxQueueWorkItem @ 0x1402B8D54 (PopFxQueueWorkItem.c)
 *     PopFxRequestWorkerInternal @ 0x1403089B4 (PopFxRequestWorkerInternal.c)
 * Callees:
 *     ExpTryQueueWorkItem @ 0x140308AAC (ExpTryQueueWorkItem.c)
 */

__int64 __fastcall ExTryQueueWorkItem(__int64 a1, unsigned int a2)
{
  return ExpTryQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), a1, a2, 0LL);
}
