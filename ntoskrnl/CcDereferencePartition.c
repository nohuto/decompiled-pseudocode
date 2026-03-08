/*
 * XREFs of CcDereferencePartition @ 0x140219EF0
 * Callers:
 *     CcCompleteAsyncReadWorker @ 0x14020A670 (CcCompleteAsyncReadWorker.c)
 *     CcWorkerThread @ 0x140215D70 (CcWorkerThread.c)
 *     CcCachemapUninitWorkerThread @ 0x140217120 (CcCachemapUninitWorkerThread.c)
 *     CcDeleteSharedCacheMap @ 0x140217A10 (CcDeleteSharedCacheMap.c)
 *     CcFreeWorkQueueEntry @ 0x140219E50 (CcFreeWorkQueueEntry.c)
 *     CcZeroData @ 0x140243410 (CcZeroData.c)
 *     CcDereferencePartitionAndPrivateVolumeCacheMap @ 0x1402FE704 (CcDereferencePartitionAndPrivateVolumeCacheMap.c)
 *     CcForEachPartition @ 0x140305240 (CcForEachPartition.c)
 *     CcUninitializeCacheMap @ 0x140336C50 (CcUninitializeCacheMap.c)
 *     CcAsyncReadWorker @ 0x1403B8B70 (CcAsyncReadWorker.c)
 *     CcInitializeAsyncReadForNodeHelper @ 0x1403B90D0 (CcInitializeAsyncReadForNodeHelper.c)
 *     CcReapPrivateVolumeCachemapWorkerThread @ 0x1403BBC10 (CcReapPrivateVolumeCachemapWorkerThread.c)
 *     CcPostDeferredWrites @ 0x1403BBEB8 (CcPostDeferredWrites.c)
 *     CcQueueLazyWriteScanThread @ 0x140534A20 (CcQueueLazyWriteScanThread.c)
 *     CcRemoveExternalCache @ 0x140534DCC (CcRemoveExternalCache.c)
 *     CcDeferWrite @ 0x140535060 (CcDeferWrite.c)
 *     CcUnmapInactiveViews @ 0x140535E58 (CcUnmapInactiveViews.c)
 *     CcQuickLazyWriteScanForVolume @ 0x140536700 (CcQuickLazyWriteScanForVolume.c)
 *     CcDeletePartition @ 0x140536840 (CcDeletePartition.c)
 *     CcAsyncLazywriteWorkerThread @ 0x1405378E0 (CcAsyncLazywriteWorkerThread.c)
 *     CcAsyncReadWorkerThread @ 0x1405386F0 (CcAsyncReadWorkerThread.c)
 *     CcCompleteAsyncLazywriteWorkerThread @ 0x140538F10 (CcCompleteAsyncLazywriteWorkerThread.c)
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
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
