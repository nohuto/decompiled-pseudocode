/*
 * XREFs of PfpPrefetchSharedInitialize @ 0x14070C0A0
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x14062E400 (PfSnAsyncPrefetchWorker.c)
 *     PfpPrefetchRequestPerform @ 0x14070AFA4 (PfpPrefetchRequestPerform.c)
 *     PfpQueryFileExtentsRequest @ 0x1408DFD5C (PfpQueryFileExtentsRequest.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402D40A0 (KeInitializeEvent.c)
 *     memset @ 0x140413800 (memset.c)
 */

void __fastcall PfpPrefetchSharedInitialize(__int64 a1)
{
  memset((void *)a1, 0, 0x90uLL);
  *(_QWORD *)(a1 + 48) = a1;
  *(_QWORD *)(a1 + 40) = PfpPrefetchSharedConflictNotifyStart;
  KeInitializeEvent((PRKEVENT)(a1 + 88), NotificationEvent, 0);
  *(_QWORD *)(a1 + 120) = 1LL;
}
