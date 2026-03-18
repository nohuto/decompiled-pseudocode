/*
 * XREFs of MiReturnCrossPartitionSectionCharges @ 0x14066B424
 * Callers:
 *     MiCleanSection @ 0x1402016FC (MiCleanSection.c)
 *     MiDeleteSubsectionPages @ 0x140218F10 (MiDeleteSubsectionPages.c)
 *     MiDeleteControlArea @ 0x1402199F0 (MiDeleteControlArea.c)
 *     MiCreatePrototypePtes @ 0x14021BAA0 (MiCreatePrototypePtes.c)
 *     MiFlushSectionInternal @ 0x140275630 (MiFlushSectionInternal.c)
 *     MiAddViewsForSection @ 0x140288650 (MiAddViewsForSection.c)
 *     MiReferenceActiveSubsection @ 0x140288C80 (MiReferenceActiveSubsection.c)
 *     MiAppendSubsectionChain @ 0x1402931B8 (MiAppendSubsectionChain.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x14029C964 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiUnmapViewSubsections @ 0x14029CAF0 (MiUnmapViewSubsections.c)
 *     MiFlushRelease @ 0x14029F860 (MiFlushRelease.c)
 *     MiCheckControlArea @ 0x14029FAA0 (MiCheckControlArea.c)
 *     MmUnmapViewInSystemCache @ 0x1402D9FB0 (MmUnmapViewInSystemCache.c)
 *     MmPurgeSection @ 0x1402DC8D0 (MmPurgeSection.c)
 *     MiRemoveMappedPtes @ 0x1402E65E0 (MiRemoveMappedPtes.c)
 *     MiDereferenceControlAreaPfnList @ 0x1403399D0 (MiDereferenceControlAreaPfnList.c)
 *     MiReleaseFaultCharges @ 0x140363060 (MiReleaseFaultCharges.c)
 *     MiUpdateLastSubsectionSize @ 0x140365844 (MiUpdateLastSubsectionSize.c)
 *     MiDecrementSubsection @ 0x1403A5F2C (MiDecrementSubsection.c)
 *     MiDeleteCachedSegment @ 0x1406239C4 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x140623BB8 (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x1406245A4 (MiFlushControlArea.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x140624C38 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiProcessDeleteOnClose @ 0x140624E7C (MiProcessDeleteOnClose.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x140625D6C (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiSetDeleteOnClose @ 0x140625E5C (MiSetDeleteOnClose.c)
 *     MiUpControlAreaRefs @ 0x140625F6C (MiUpControlAreaRefs.c)
 *     MiRemoveSystemCacheReferences @ 0x14062EFDC (MiRemoveSystemCacheReferences.c)
 *     MiUpdateActiveSubsection @ 0x140635C50 (MiUpdateActiveSubsection.c)
 *     MiSegmentDelete @ 0x1406B0954 (MiSegmentDelete.c)
 *     MiExtendSection @ 0x140706884 (MiExtendSection.c)
 *     MiChargeSegmentCommit @ 0x140748518 (MiChargeSegmentCommit.c)
 * Callees:
 *     MiReturnCommit @ 0x1402DC250 (MiReturnCommit.c)
 *     MiReturnCrossPartitionCharges @ 0x14065B3C4 (MiReturnCrossPartitionCharges.c)
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
    MiReturnCommit(a1, a3);
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
