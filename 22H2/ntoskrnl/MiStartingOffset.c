/*
 * XREFs of MiStartingOffset @ 0x1402E2310
 * Callers:
 *     MiInitializeImageProtos @ 0x14021A220 (MiInitializeImageProtos.c)
 *     MiIdentifyPfn @ 0x14023E4A0 (MiIdentifyPfn.c)
 *     MiMakeSystemCacheRangeValid @ 0x140267740 (MiMakeSystemCacheRangeValid.c)
 *     MiLogPageAccess @ 0x14027CA90 (MiLogPageAccess.c)
 *     MiCopyDataPageToImagePage @ 0x14028B350 (MiCopyDataPageToImagePage.c)
 *     MiGatherMappedPages @ 0x140297C04 (MiGatherMappedPages.c)
 *     MiWalkEntireImage @ 0x1402DAFE0 (MiWalkEntireImage.c)
 *     MiReadyFlushMdlToWrite @ 0x1402DFCC4 (MiReadyFlushMdlToWrite.c)
 *     MiPickClusterForMappedFileFault @ 0x1402E1710 (MiPickClusterForMappedFileFault.c)
 *     MiFinishMdlForMappedFileFault @ 0x1402E1B40 (MiFinishMdlForMappedFileFault.c)
 *     MiStartingOffsetNeedLock @ 0x1402E1EA0 (MiStartingOffsetNeedLock.c)
 *     MiEmptyPageAccessLog @ 0x1402E1F40 (MiEmptyPageAccessLog.c)
 *     MiCompleteRestrictedImageFault @ 0x1402E2E50 (MiCompleteRestrictedImageFault.c)
 *     MiTrimSection @ 0x1402EF974 (MiTrimSection.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFC5C (MiTrimSharedPageFromViews.c)
 *     MiViewMayContainPage @ 0x1402F0BD0 (MiViewMayContainPage.c)
 *     MiAdvanceVadView @ 0x14030BABC (MiAdvanceVadView.c)
 *     MiMakeSystemCachePteValid @ 0x1403458DC (MiMakeSystemCachePteValid.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14063C334 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiInitializeCachedExtentWalker @ 0x14063DC58 (MiInitializeCachedExtentWalker.c)
 *     MiLocateCachedExtent @ 0x14063E00C (MiLocateCachedExtent.c)
 *     MiPfPrepareSequentialReadList @ 0x140744BF0 (MiPfPrepareSequentialReadList.c)
 *     MiPfAllocateMdls @ 0x1407465B0 (MiPfAllocateMdls.c)
 *     MiCfgMarkValidEntries @ 0x1407A4C5C (MiCfgMarkValidEntries.c)
 *     MiFillMapFileInfo @ 0x1408AC30A (MiFillMapFileInfo.c)
 *     MiAllocateFileExtents @ 0x140A330D8 (MiAllocateFileExtents.c)
 * Callees:
 *     MiGetSubsectionDriverProtos @ 0x1402A25C4 (MiGetSubsectionDriverProtos.c)
 *     MiGetSharedProtos @ 0x14036973C (MiGetSharedProtos.c)
 */

unsigned __int64 __fastcall MiStartingOffset(__int64 *a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // r9
  unsigned __int64 v5; // rcx
  __int64 v7; // rbx
  unsigned __int64 v9; // rbx
  __int64 SharedProtos; // rax

  v3 = *a1;
  v5 = a1[1];
  if ( (*(_DWORD *)(v3 + 56) & 0x20) != 0 )
  {
    if ( a2 < v5 || a2 >= v5 + 8LL * *((unsigned int *)a1 + 11) )
    {
      if ( (*((_BYTE *)a1 + 34) & 2) != 0 )
        SharedProtos = MiGetSharedProtos(v3, a3, a1);
      else
        SharedProtos = MiGetSubsectionDriverProtos(a1);
      v9 = a2 - *(_QWORD *)(SharedProtos + 72);
    }
    else
    {
      v9 = a2 - v5;
    }
    return ((v9 << 9) & 0xFFFFFFFFFFFFF000uLL) + ((unsigned __int64)*((unsigned int *)a1 + 9) << 9);
  }
  else
  {
    if ( v5 )
      v7 = (__int64)(a2 - v5) >> 3 << 12;
    else
      v7 = 0LL;
    return v7 + ((*((unsigned int *)a1 + 9) | ((unsigned __int64)((_WORD)a1[4] & 0xFFC0) << 26)) << 12);
  }
}
