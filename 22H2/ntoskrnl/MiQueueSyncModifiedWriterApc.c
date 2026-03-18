/*
 * XREFs of MiQueueSyncModifiedWriterApc @ 0x14063B498
 * Callers:
 *     MiAttemptPageFileReduction @ 0x140637C1C (MiAttemptPageFileReduction.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14063B760 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiStoreDeletePartition @ 0x14065C0A8 (MiStoreDeletePartition.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     KeInitializeApc @ 0x1402BE6A0 (KeInitializeApc.c)
 *     KeInsertQueueApc @ 0x1402CC640 (KeInsertQueueApc.c)
 */

NTSTATUS __fastcall MiQueueSyncModifiedWriterApc(__int64 a1, __int64 a2, __int64 a3, __int64 a4, PVOID Object)
{
  KeInitializeApc(a2, *(_QWORD *)(a1 + 984), 0, (__int64)xHalTimerWatchdogStop, 0LL, a3, 0, a4);
  KeInsertQueueApc(a2, 0LL, 0LL, 0);
  return KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
}
