/*
 * XREFs of MiStartingOffset @ 0x14028C530
 * Callers:
 *     MiInitializeImageProtos @ 0x140213DD0 (MiInitializeImageProtos.c)
 *     MiGatherMappedPages @ 0x140215150 (MiGatherMappedPages.c)
 *     MiMakeSystemCacheRangeValid @ 0x140221870 (MiMakeSystemCacheRangeValid.c)
 *     MiIdentifyPfn @ 0x14025E5D0 (MiIdentifyPfn.c)
 *     MiWalkEntireImage @ 0x1402862C0 (MiWalkEntireImage.c)
 *     MiPickClusterForMappedFileFault @ 0x14028B0C0 (MiPickClusterForMappedFileFault.c)
 *     MiFinishMdlForMappedFileFault @ 0x14028BD60 (MiFinishMdlForMappedFileFault.c)
 *     MiStartingOffsetNeedLock @ 0x14028C0C0 (MiStartingOffsetNeedLock.c)
 *     MiEmptyPageAccessLog @ 0x14028C160 (MiEmptyPageAccessLog.c)
 *     MiReadyFlushMdlToWrite @ 0x14028C5D0 (MiReadyFlushMdlToWrite.c)
 *     MiCompleteRestrictedImageFault @ 0x14028D690 (MiCompleteRestrictedImageFault.c)
 *     MiTrimSection @ 0x1402A0034 (MiTrimSection.c)
 *     MiTrimSharedPageFromViews @ 0x1402A031C (MiTrimSharedPageFromViews.c)
 *     MiViewMayContainPage @ 0x1402A12A0 (MiViewMayContainPage.c)
 *     MiAdvanceVadView @ 0x1402D5E10 (MiAdvanceVadView.c)
 *     MiMakeSystemCachePteValid @ 0x1402DA87C (MiMakeSystemCachePteValid.c)
 *     MiLogPageAccess @ 0x140326EF0 (MiLogPageAccess.c)
 *     MiCopyDataPageToImagePage @ 0x140334490 (MiCopyDataPageToImagePage.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x140639EB8 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiInitializeCachedExtentWalker @ 0x14063B7E8 (MiInitializeCachedExtentWalker.c)
 *     MiLocateCachedExtent @ 0x14063BB9C (MiLocateCachedExtent.c)
 *     MiPfPrepareSequentialReadList @ 0x1406EBE40 (MiPfPrepareSequentialReadList.c)
 *     MiPfAllocateMdls @ 0x14075A230 (MiPfAllocateMdls.c)
 *     MiCfgMarkValidEntries @ 0x14075C3DC (MiCfgMarkValidEntries.c)
 *     MiFillMapFileInfo @ 0x1408A749A (MiFillMapFileInfo.c)
 *     MiAllocateFileExtents @ 0x140A303A8 (MiAllocateFileExtents.c)
 * Callees:
 *     MiGetSharedProtos @ 0x1402CCDF8 (MiGetSharedProtos.c)
 *     MiGetSubsectionDriverProtos @ 0x1403443A4 (MiGetSubsectionDriverProtos.c)
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
