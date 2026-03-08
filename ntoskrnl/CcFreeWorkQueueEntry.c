/*
 * XREFs of CcFreeWorkQueueEntry @ 0x140219E50
 * Callers:
 *     CcCompleteAsyncReadWorker @ 0x14020A670 (CcCompleteAsyncReadWorker.c)
 *     CcWorkerThread @ 0x140215D70 (CcWorkerThread.c)
 *     CcPostWorkQueueAsyncRead @ 0x140216768 (CcPostWorkQueueAsyncRead.c)
 *     CcCachemapUninitWorkerThread @ 0x140217120 (CcCachemapUninitWorkerThread.c)
 *     CcWriteBehind @ 0x140219768 (CcWriteBehind.c)
 *     CcMapAndCopyInToCache @ 0x14021CD00 (CcMapAndCopyInToCache.c)
 *     CcWaitForUninitializeCacheMap @ 0x1402E1014 (CcWaitForUninitializeCacheMap.c)
 *     CcUninitializeCacheMap @ 0x140336C50 (CcUninitializeCacheMap.c)
 *     CcFlushCachePreProcess @ 0x1403373A0 (CcFlushCachePreProcess.c)
 *     CcAsyncReadWorker @ 0x1403B8B70 (CcAsyncReadWorker.c)
 *     CcQuickLazyWriteScanForVolume @ 0x140536700 (CcQuickLazyWriteScanForVolume.c)
 *     CcAsyncLazywriteWorker @ 0x14053741C (CcAsyncLazywriteWorker.c)
 *     CcAsyncLazywriteWorkerMulti @ 0x1405387F4 (CcAsyncLazywriteWorkerMulti.c)
 *     CcCompleteAsyncWriteBehind @ 0x140539048 (CcCompleteAsyncWriteBehind.c)
 * Callees:
 *     CcDereferencePartition @ 0x140219EF0 (CcDereferencePartition.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404204A0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CcFreeWorkQueueEntry(PSLIST_ENTRY ListEntry)
{
  struct _KPRCB *CurrentPrcb; // r8
  __int64 v3; // rdi
  _SLIST_ENTRY *Next; // rbx
  _GENERAL_LOOKASIDE *P; // rcx
  __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  v3 = *((_QWORD *)&ListEntry[8].Next + 1);
  Next = ListEntry[9].Next;
  P = CurrentPrcb->PPLookasideList[6].P;
  ++P->TotalFrees;
  if ( LOWORD(P->ListHead.Alignment) < P->Depth
    || (++P->FreeMisses, P = CurrentPrcb->PPLookasideList[6].L,
                         ++P->TotalFrees,
                         LOWORD(P->ListHead.Alignment) < P->Depth) )
  {
    RtlpInterlockedPushEntrySList(&P->ListHead, ListEntry);
  }
  else
  {
    ++P->FreeMisses;
    ((void (__fastcall *)(PSLIST_ENTRY))P->FreeEx)(ListEntry);
  }
  result = CcDereferencePartition(v3);
  if ( Next )
  {
    result = _InterlockedDecrement64((volatile signed __int64 *)&Next->Next + 1);
    if ( result <= -1 )
      __fastfail(0xEu);
  }
  return result;
}
