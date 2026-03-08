/*
 * XREFs of MiReturnCrossPartitionSectionCharges @ 0x140668DD4
 * Callers:
 *     MiCleanSection @ 0x14020165C (MiCleanSection.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x14020DBB4 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiDeleteControlArea @ 0x140215028 (MiDeleteControlArea.c)
 *     MmPurgeSection @ 0x1402836F0 (MmPurgeSection.c)
 *     MmUnmapViewInSystemCache @ 0x140285250 (MmUnmapViewInSystemCache.c)
 *     MiUpdateLastSubsectionSize @ 0x1402A4BE0 (MiUpdateLastSubsectionSize.c)
 *     MiAppendSubsectionChain @ 0x1402A5090 (MiAppendSubsectionChain.c)
 *     MiDereferenceControlAreaPfnList @ 0x1402CFBF0 (MiDereferenceControlAreaPfnList.c)
 *     MiUnmapViewSubsections @ 0x1402DADD4 (MiUnmapViewSubsections.c)
 *     MiReleaseFaultCharges @ 0x1402F8018 (MiReleaseFaultCharges.c)
 *     MiFlushSectionInternal @ 0x14031FA90 (MiFlushSectionInternal.c)
 *     MiAddViewsForSection @ 0x140331DC0 (MiAddViewsForSection.c)
 *     MiReferenceActiveSubsection @ 0x1403323F0 (MiReferenceActiveSubsection.c)
 *     MiFlushRelease @ 0x140334AC0 (MiFlushRelease.c)
 *     MiCheckControlArea @ 0x140334D00 (MiCheckControlArea.c)
 *     MiRemoveMappedPtes @ 0x1403474D0 (MiRemoveMappedPtes.c)
 *     MiDeleteSubsectionPages @ 0x14034B8E0 (MiDeleteSubsectionPages.c)
 *     MiCreatePrototypePtes @ 0x14036862C (MiCreatePrototypePtes.c)
 *     MiDecrementSubsection @ 0x1403A118C (MiDecrementSubsection.c)
 *     MiDeleteCachedSegment @ 0x140621514 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x140621708 (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x1406220F4 (MiFlushControlArea.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x140622788 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiProcessDeleteOnClose @ 0x1406229CC (MiProcessDeleteOnClose.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x1406238BC (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiSetDeleteOnClose @ 0x1406239AC (MiSetDeleteOnClose.c)
 *     MiUpControlAreaRefs @ 0x140623ABC (MiUpControlAreaRefs.c)
 *     MiRemoveSystemCacheReferences @ 0x14062CB5C (MiRemoveSystemCacheReferences.c)
 *     MiUpdateActiveSubsection @ 0x1406337C0 (MiUpdateActiveSubsection.c)
 *     MiSegmentDelete @ 0x1406A6FD4 (MiSegmentDelete.c)
 *     MiExtendSection @ 0x140726AAC (MiExtendSection.c)
 *     MiChargeSegmentCommit @ 0x1407F1988 (MiChargeSegmentCommit.c)
 * Callees:
 *     MiReturnCommit @ 0x140287340 (MiReturnCommit.c)
 *     MiReturnCrossPartitionCharges @ 0x140658D80 (MiReturnCrossPartitionCharges.c)
 */

void __fastcall MiReturnCrossPartitionSectionCharges(__int64 a1, int a2, unsigned __int64 a3)
{
  char v4; // si
  unsigned __int64 v6; // r8
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CachedResidentAvailable; // rdx
  bool v9; // zf
  signed __int32 v10; // eax

  v4 = a2;
  if ( a2 )
    MiReturnCommit(a1, a3, a3);
  v6 = a3;
  if ( (unsigned __int16 *)a1 != MiSystemPartition )
    goto LABEL_13;
  CurrentPrcb = KeGetCurrentPrcb();
  CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
  if ( (_DWORD)CachedResidentAvailable == -1 )
    goto LABEL_13;
  if ( a3 + CachedResidentAvailable > 0x100 || a3 >= 0x80000 )
  {
LABEL_10:
    if ( (int)CachedResidentAvailable > 192
      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
    {
      v6 = a3 + (int)CachedResidentAvailable - 192;
    }
LABEL_13:
    if ( v6 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 17280), v6);
    goto LABEL_15;
  }
  while ( 1 )
  {
    v10 = _InterlockedCompareExchange(
            (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
            CachedResidentAvailable + a3,
            CachedResidentAvailable);
    v9 = (_DWORD)CachedResidentAvailable == v10;
    LODWORD(CachedResidentAvailable) = v10;
    if ( v9 )
      break;
    if ( v10 == -1 || a3 + v10 > 0x100 )
      goto LABEL_10;
  }
LABEL_15:
  MiReturnCrossPartitionCharges(a1, 0, v4, a3);
}
