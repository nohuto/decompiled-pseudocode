/*
 * XREFs of CcDereferencePartition @ 0x14029C310
 * Callers:
 *     CcWorkerThread @ 0x140298820 (CcWorkerThread.c)
 *     CcCachemapUninitWorkerThread @ 0x140299380 (CcCachemapUninitWorkerThread.c)
 *     CcDeleteSharedCacheMap @ 0x140299EA0 (CcDeleteSharedCacheMap.c)
 *     CcUninitializeCacheMap @ 0x14029BB20 (CcUninitializeCacheMap.c)
 *     CcFreeWorkQueueEntry @ 0x14029C270 (CcFreeWorkQueueEntry.c)
 *     CcZeroData @ 0x1402FB700 (CcZeroData.c)
 *     CcForEachPartition @ 0x140310BEC (CcForEachPartition.c)
 *     CcCompleteAsyncReadWorker @ 0x140352FA0 (CcCompleteAsyncReadWorker.c)
 *     CcDereferencePartitionAndPrivateVolumeCacheMap @ 0x1403696F4 (CcDereferencePartitionAndPrivateVolumeCacheMap.c)
 *     CcAsyncReadWorker @ 0x1403BE4A0 (CcAsyncReadWorker.c)
 *     CcInitializeAsyncReadForNodeHelper @ 0x1403BEA00 (CcInitializeAsyncReadForNodeHelper.c)
 *     CcReapPrivateVolumeCachemapWorkerThread @ 0x1403C1540 (CcReapPrivateVolumeCachemapWorkerThread.c)
 *     CcPostDeferredWrites @ 0x1403C17E8 (CcPostDeferredWrites.c)
 *     CcQueueLazyWriteScanThread @ 0x140536EF0 (CcQueueLazyWriteScanThread.c)
 *     CcRemoveExternalCache @ 0x14053729C (CcRemoveExternalCache.c)
 *     CcDeferWrite @ 0x140537530 (CcDeferWrite.c)
 *     CcUnmapInactiveViews @ 0x140538328 (CcUnmapInactiveViews.c)
 *     CcQuickLazyWriteScanForVolume @ 0x140538BD0 (CcQuickLazyWriteScanForVolume.c)
 *     CcDeletePartition @ 0x140538D10 (CcDeletePartition.c)
 *     CcAsyncLazywriteWorkerThread @ 0x140539DB0 (CcAsyncLazywriteWorkerThread.c)
 *     CcAsyncReadWorkerThread @ 0x14053ABC0 (CcAsyncReadWorkerThread.c)
 *     CcCompleteAsyncLazywriteWorkerThread @ 0x14053B3E0 (CcCompleteAsyncLazywriteWorkerThread.c)
 * Callees:
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 */

char __fastcall CcDereferencePartition(__int64 a1)
{
  signed __int64 v1; // rax
  char v2; // bl
  bool v3; // cc
  signed __int64 v4; // rax

  v1 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1296), 0xFFFFFFFFFFFFFFFFuLL);
  v2 = 0;
  v3 = v1 <= 1;
  v4 = v1 - 1;
  if ( v3 )
  {
    if ( v4 )
      __fastfail(0xEu);
    v2 = 1;
    KeSetEvent((PRKEVENT)(a1 + 1328), 0, 0);
  }
  return v2;
}
