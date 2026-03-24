/*
 * XREFs of CcFreeWorkQueueEntry @ 0x14027733C
 * Callers:
 *     CcWorkerThread @ 0x140273870 (CcWorkerThread.c)
 *     CcCachemapUninitWorkerThread @ 0x140273F20 (CcCachemapUninitWorkerThread.c)
 *     CcWriteBehind @ 0x1402767E0 (CcWriteBehind.c)
 *     CcUninitializeCacheMap @ 0x140276F30 (CcUninitializeCacheMap.c)
 *     CcPostWorkQueueAsyncRead @ 0x140278CE4 (CcPostWorkQueueAsyncRead.c)
 *     CcMapAndCopyInToCache @ 0x1402B2300 (CcMapAndCopyInToCache.c)
 *     CcWaitForUninitializeCacheMap @ 0x14030FEE0 (CcWaitForUninitializeCacheMap.c)
 *     CcCompleteAsyncReadWorker @ 0x140325640 (CcCompleteAsyncReadWorker.c)
 *     CcAsyncReadWorker @ 0x1403B72F0 (CcAsyncReadWorker.c)
 *     CcSerializeWithLazyWriter @ 0x1403EFCC4 (CcSerializeWithLazyWriter.c)
 * Callees:
 *     CcDereferencePartition @ 0x1402773AC (CcDereferencePartition.c)
 *     RtlpInterlockedPushEntrySList @ 0x140406FF0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CcFreeWorkQueueEntry(PSLIST_ENTRY ListEntry)
{
  struct _KPRCB *CurrentPrcb; // r8
  _SLIST_ENTRY *Next; // rbx
  _GENERAL_LOOKASIDE *P; // rcx

  CurrentPrcb = KeGetCurrentPrcb();
  Next = ListEntry[8].Next;
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
  return CcDereferencePartition(Next);
}
