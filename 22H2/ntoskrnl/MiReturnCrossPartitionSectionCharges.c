/*
 * XREFs of MiReturnCrossPartitionSectionCharges @ 0x14055502C
 * Callers:
 *     MiFlushSectionInternal @ 0x140219D70 (MiFlushSectionInternal.c)
 *     MiDeleteVad @ 0x14021BFB0 (MiDeleteVad.c)
 *     MmPurgeSection @ 0x140238510 (MmPurgeSection.c)
 *     MiDeleteSubsectionPages @ 0x140238AE0 (MiDeleteSubsectionPages.c)
 *     MiDeleteControlArea @ 0x140278164 (MiDeleteControlArea.c)
 *     MiCreatePrototypePtes @ 0x140278478 (MiCreatePrototypePtes.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x14027D05C (MiRemoveViewsFromSectionWithPfn.c)
 *     MiDeletePartialVad @ 0x14027DF5C (MiDeletePartialVad.c)
 *     MiRemoveMappedPtes @ 0x140288B80 (MiRemoveMappedPtes.c)
 *     MmUnmapViewInSystemCache @ 0x140294160 (MmUnmapViewInSystemCache.c)
 *     MiCheckControlArea @ 0x140295130 (MiCheckControlArea.c)
 *     MiFlushRelease @ 0x140295690 (MiFlushRelease.c)
 *     MiAddViewsForSection @ 0x140295C70 (MiAddViewsForSection.c)
 *     MiReferenceActiveSubsection @ 0x140296380 (MiReferenceActiveSubsection.c)
 *     MiDereferenceControlAreaPfnList @ 0x1402F4E60 (MiDereferenceControlAreaPfnList.c)
 *     MiAppendSubsectionChain @ 0x1402F97CC (MiAppendSubsectionChain.c)
 *     MiUpdateLastSubsectionSize @ 0x1402F9A78 (MiUpdateLastSubsectionSize.c)
 *     MiReleaseFaultCharges @ 0x14032243C (MiReleaseFaultCharges.c)
 *     MiDecrementSubsection @ 0x140325E50 (MiDecrementSubsection.c)
 *     MiCleanSection @ 0x14037EA3C (MiCleanSection.c)
 *     MiDeleteCachedSegment @ 0x140528AF8 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x140528CEC (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x1405296D4 (MiFlushControlArea.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x140529CA8 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiProcessDeleteOnClose @ 0x140529ED8 (MiProcessDeleteOnClose.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x14052A864 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiSetDeleteOnClose @ 0x14052A954 (MiSetDeleteOnClose.c)
 *     MiUpControlAreaRefs @ 0x14052AAB0 (MiUpControlAreaRefs.c)
 *     MiRemoveSystemCacheReferences @ 0x140537390 (MiRemoveSystemCacheReferences.c)
 *     MiUpdateActiveSubsection @ 0x14053CE20 (MiUpdateActiveSubsection.c)
 *     MiChargeSegmentCommit @ 0x1406202F0 (MiChargeSegmentCommit.c)
 *     MiSegmentDelete @ 0x140635830 (MiSegmentDelete.c)
 *     MiExtendSection @ 0x140669618 (MiExtendSection.c)
 * Callees:
 *     MiReturnCommit @ 0x140298920 (MiReturnCommit.c)
 *     MiReturnCrossPartitionCharges @ 0x140562AD0 (MiReturnCrossPartitionCharges.c)
 */

__int64 __fastcall MiReturnCrossPartitionSectionCharges(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  unsigned __int64 v6; // r8
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CachedResidentAvailable; // rdx
  bool v9; // zf
  signed __int32 v10; // eax

  if ( a2 )
    MiReturnCommit(a1, a3);
  v6 = a3;
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
    if ( (_DWORD)CachedResidentAvailable != -1 )
    {
      if ( a3 + CachedResidentAvailable <= 0x100 )
      {
        do
        {
          if ( a3 >= 0x80000 )
            break;
          v10 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                  CachedResidentAvailable + a3,
                  CachedResidentAvailable);
          v9 = (_DWORD)CachedResidentAvailable == v10;
          LODWORD(CachedResidentAvailable) = v10;
          if ( v9 )
            return MiReturnCrossPartitionCharges(a1, 0LL, a2, a3);
        }
        while ( v10 != -1 && a3 + v10 <= 0x100 );
      }
      if ( (int)CachedResidentAvailable > 192
        && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                192,
                                                CachedResidentAvailable) )
      {
        v6 = a3 + (int)CachedResidentAvailable - 192;
      }
    }
  }
  if ( v6 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7168), v6);
  return MiReturnCrossPartitionCharges(a1, 0LL, a2, a3);
}
