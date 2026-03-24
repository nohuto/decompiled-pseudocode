/*
 * XREFs of CcDereferencePartition @ 0x1402773AC
 * Callers:
 *     CcWorkerThread @ 0x140273870 (CcWorkerThread.c)
 *     CcCachemapUninitWorkerThread @ 0x140273F20 (CcCachemapUninitWorkerThread.c)
 *     CcDeleteSharedCacheMap @ 0x14027445C (CcDeleteSharedCacheMap.c)
 *     CcUninitializeCacheMap @ 0x140276F30 (CcUninitializeCacheMap.c)
 *     CcFreeWorkQueueEntry @ 0x14027733C (CcFreeWorkQueueEntry.c)
 *     CcForEachPartition @ 0x140279290 (CcForEachPartition.c)
 *     CcCompleteAsyncReadWorker @ 0x140325640 (CcCompleteAsyncReadWorker.c)
 *     CcZeroData @ 0x140359820 (CcZeroData.c)
 *     CcAsyncReadWorker @ 0x1403B72F0 (CcAsyncReadWorker.c)
 *     CcQueueLazyWriteScanThread @ 0x1403B8D40 (CcQueueLazyWriteScanThread.c)
 *     CcInitializeAsyncRead @ 0x1403C2BD0 (CcInitializeAsyncRead.c)
 *     CcDeferWrite @ 0x1404E9F80 (CcDeferWrite.c)
 *     CcPostDeferredWrites @ 0x1404EA230 (CcPostDeferredWrites.c)
 *     CcUnmapInactiveViews @ 0x1404EB320 (CcUnmapInactiveViews.c)
 *     CcDeletePartition @ 0x1404EBBC0 (CcDeletePartition.c)
 *     CcAsyncReadWorkerThread @ 0x1404EC500 (CcAsyncReadWorkerThread.c)
 * Callees:
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 */

char __fastcall CcDereferencePartition(__int64 a1)
{
  signed __int64 v1; // rax
  char v2; // bl
  bool v3; // cc
  signed __int64 v4; // rax

  v1 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 968), 0xFFFFFFFFFFFFFFFFuLL);
  v2 = 0;
  v3 = v1 <= 1;
  v4 = v1 - 1;
  if ( v3 )
  {
    if ( v4 )
      __fastfail(0xEu);
    v2 = 1;
    KeSetEvent((PRKEVENT)(a1 + 1000), 0, 0);
  }
  return v2;
}
