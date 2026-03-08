/*
 * XREFs of MiQueueSyncModifiedWriterApc @ 0x140639018
 * Callers:
 *     MiAttemptPageFileReduction @ 0x140635794 (MiAttemptPageFileReduction.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1406392E0 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiStoreDeletePartition @ 0x140659A64 (MiStoreDeletePartition.c)
 * Callees:
 *     KeInitializeApc @ 0x140237E20 (KeInitializeApc.c)
 *     KeInsertQueueApc @ 0x14027DBF0 (KeInsertQueueApc.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall MiQueueSyncModifiedWriterApc(__int64 a1, __int64 a2, __int64 a3, __int64 a4, PVOID Object)
{
  KeInitializeApc(a2, *(_QWORD *)(a1 + 984), 0, (__int64)xHalTimerWatchdogStop, 0LL, a3, 0, a4);
  KeInsertQueueApc(a2, 0LL, 0LL, 0);
  return KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
}
