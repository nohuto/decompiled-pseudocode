/*
 * XREFs of MiMakeValidPte @ 0x1402AEDC0
 * Callers:
 *     MiFillSystemPtes @ 0x140226EB0 (MiFillSystemPtes.c)
 *     MiGetUltraMapping @ 0x140234070 (MiGetUltraMapping.c)
 *     MiDeletePteRun @ 0x1402365D0 (MiDeletePteRun.c)
 *     MiAssignNonPagedPoolPte @ 0x14023B360 (MiAssignNonPagedPoolPte.c)
 *     MiAllocateKernelStackPages @ 0x14023E170 (MiAllocateKernelStackPages.c)
 *     MiGetPteFromCopyList @ 0x1402402F0 (MiGetPteFromCopyList.c)
 *     MiCreateSharedZeroPages @ 0x1402410E0 (MiCreateSharedZeroPages.c)
 *     MiReadyStandbyPageForActive @ 0x140283460 (MiReadyStandbyPageForActive.c)
 *     MiCopyDataPageToImagePage @ 0x140284A68 (MiCopyDataPageToImagePage.c)
 *     MiLinkPoolCommitChain @ 0x14028BBC0 (MiLinkPoolCommitChain.c)
 *     MiCopyToUserVa @ 0x14028EBB8 (MiCopyToUserVa.c)
 *     MiCompleteRestrictedImageFault @ 0x14029D730 (MiCompleteRestrictedImageFault.c)
 *     MmCheckCachedPageStates @ 0x1402A1C20 (MmCheckCachedPageStates.c)
 *     MiWsleFree @ 0x1402A8560 (MiWsleFree.c)
 *     MiDecrementAndInsertStandbyPages @ 0x1402ACA70 (MiDecrementAndInsertStandbyPages.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402B2140 (MiMapPageInHyperSpaceWorker.c)
 *     MiPrivateFixup @ 0x1402E29C8 (MiPrivateFixup.c)
 *     MiInsertPhysicalPteMapping @ 0x1402EB468 (MiInsertPhysicalPteMapping.c)
 *     MiMakeSystemCachePteValid @ 0x1402F3648 (MiMakeSystemCachePteValid.c)
 *     MiUnlinkStandbyPfn @ 0x140307F30 (MiUnlinkStandbyPfn.c)
 *     MiMakeTransitionPteValid @ 0x1403096E0 (MiMakeTransitionPteValid.c)
 *     MiCopySinglePage @ 0x14030C314 (MiCopySinglePage.c)
 *     MiZeroLargePage @ 0x14030E918 (MiZeroLargePage.c)
 *     MiMapPageFileHash @ 0x140327238 (MiMapPageFileHash.c)
 *     MiInitializeSystemPageTable @ 0x1403569E4 (MiInitializeSystemPageTable.c)
 *     MiZeroPhysicalPage @ 0x1403578E0 (MiZeroPhysicalPage.c)
 *     MiFillPhysicalPages @ 0x1403579D0 (MiFillPhysicalPages.c)
 *     MiSetSystemCodeProtection @ 0x140357D78 (MiSetSystemCodeProtection.c)
 *     MmProtectPool @ 0x140362438 (MmProtectPool.c)
 *     MiSetProtectionOnTransitionPte @ 0x140363CE4 (MiSetProtectionOnTransitionPte.c)
 *     MiMapArbitraryPage @ 0x140368F60 (MiMapArbitraryPage.c)
 *     MiResolveProtoCombine @ 0x14036A484 (MiResolveProtoCombine.c)
 *     MiMapSinglePage @ 0x14036AA54 (MiMapSinglePage.c)
 *     MmSetPageProtection @ 0x1403796F0 (MmSetPageProtection.c)
 *     MiMapMemoryDumpMdl @ 0x140383AF4 (MiMapMemoryDumpMdl.c)
 *     MiBuildReservationCluster @ 0x1403866F0 (MiBuildReservationCluster.c)
 *     MiUpdateImagePfnImportRelocations @ 0x140397174 (MiUpdateImagePfnImportRelocations.c)
 *     MiInitializeNewUltraHugeContext @ 0x140399FC4 (MiInitializeNewUltraHugeContext.c)
 *     MiTimeSingleLargePageZeroWorker @ 0x1403AB548 (MiTimeSingleLargePageZeroWorker.c)
 *     MiInitializeUnusablePfns @ 0x1403ABE00 (MiInitializeUnusablePfns.c)
 *     MiMapWithLargePages @ 0x1403B848C (MiMapWithLargePages.c)
 *     MiReplacePfnWithGapMapping @ 0x1403B98EC (MiReplacePfnWithGapMapping.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1403B9BC8 (MiDemoteValidLargePageOneLevel.c)
 *     MiFillGapPtes @ 0x1403BC7EC (MiFillGapPtes.c)
 *     MiMapMdlCommon @ 0x1403C8614 (MiMapMdlCommon.c)
 *     MiUpdateLargePageSectionPfns @ 0x1403F382C (MiUpdateLargePageSectionPfns.c)
 *     MiZeroWithSystemPtes @ 0x1403F48B8 (MiZeroWithSystemPtes.c)
 *     MiZeroWithUltraSpace @ 0x1403F4B98 (MiZeroWithUltraSpace.c)
 *     MiMakeOutswappedPageResident @ 0x14052BA00 (MiMakeOutswappedPageResident.c)
 *     MiUnmapMdlCommon @ 0x140531664 (MiUnmapMdlCommon.c)
 *     MmProtectMdlSystemAddress @ 0x1405320F0 (MmProtectMdlSystemAddress.c)
 *     MiHugePageOperation @ 0x140532EB8 (MiHugePageOperation.c)
 *     MiMapFrame @ 0x140536EC4 (MiMapFrame.c)
 *     MiInitializeSlowPte @ 0x1405399EC (MiInitializeSlowPte.c)
 *     MiMakeLargePageTable @ 0x14053D954 (MiMakeLargePageTable.c)
 *     MmMapHotPatchTablePage @ 0x14053F3F0 (MmMapHotPatchTablePage.c)
 *     MiEnableLargeSubsection @ 0x1405408EC (MiEnableLargeSubsection.c)
 *     MiFillPageWithImageExtentContents @ 0x140540A94 (MiFillPageWithImageExtentContents.c)
 *     MiMapRetpolineStubs @ 0x140543F7C (MiMapRetpolineStubs.c)
 *     MiDbgTranslatePhysicalAddress @ 0x140546130 (MiDbgTranslatePhysicalAddress.c)
 *     MmReadProcessPageTables @ 0x140547D40 (MmReadProcessPageTables.c)
 *     MiInsertLargeVadMapping @ 0x1405486E0 (MiInsertLargeVadMapping.c)
 *     MiAddPagesToEnclave @ 0x140549044 (MiAddPagesToEnclave.c)
 *     MiDecommitHardwareEnclavePages @ 0x140549968 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x14054AA70 (MiProtectEnclavePages.c)
 *     MiProtectAweRegion @ 0x14054D2A4 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x14054E1D8 (MiWriteAwePtes.c)
 *     MiInitializeProtoPfn @ 0x140554ED0 (MiInitializeProtoPfn.c)
 *     MiScrubNodeLargePageList @ 0x140556D78 (MiScrubNodeLargePageList.c)
 *     MiBuildForkPageTable @ 0x140557F0C (MiBuildForkPageTable.c)
 *     MiFinishLastForkPageTable @ 0x14055A5E0 (MiFinishLastForkPageTable.c)
 *     MiInsertLargeUserMapping @ 0x14055E4B8 (MiInsertLargeUserMapping.c)
 *     MiScrubPage @ 0x140564234 (MiScrubPage.c)
 *     MiRelocateImagePfn @ 0x1405FC260 (MiRelocateImagePfn.c)
 *     MiValidateImagePfn @ 0x140680124 (MiValidateImagePfn.c)
 *     MmCreateProcessAddressSpace @ 0x1406FDDB4 (MmCreateProcessAddressSpace.c)
 *     MiAllocateTopLevelPage @ 0x1406FE0F4 (MiAllocateTopLevelPage.c)
 *     MmAllocateIndependentPagesEx @ 0x14076202C (MmAllocateIndependentPagesEx.c)
 *     MiInitializeDynamicBitmap @ 0x1407867DC (MiInitializeDynamicBitmap.c)
 *     MiMapNewSession @ 0x140786F8C (MiMapNewSession.c)
 *     MiInitializeShadowPageTable @ 0x1407A0798 (MiInitializeShadowPageTable.c)
 *     MiProtectLargeKernelHalRange @ 0x1407A18A0 (MiProtectLargeKernelHalRange.c)
 *     MmAllocateNonCachedMemory @ 0x1408C6740 (MmAllocateNonCachedMemory.c)
 *     MiCopyPagesIntoEnclave @ 0x1408D21D8 (MiCopyPagesIntoEnclave.c)
 *     MiCreateHardwareEnclave @ 0x1408D2920 (MiCreateHardwareEnclave.c)
 *     MmChangeKernelCfgBitmap @ 0x1408D79A8 (MmChangeKernelCfgBitmap.c)
 *     MiCaptureSparsePages @ 0x1408D85B4 (MiCaptureSparsePages.c)
 *     MxMapVa @ 0x140A43F9C (MxMapVa.c)
 *     MiMapBBTMemory @ 0x140A552A8 (MiMapBBTMemory.c)
 *     MiInitializeTbFlush @ 0x140A55380 (MiInitializeTbFlush.c)
 *     MiInitializeDummyPages @ 0x140A55944 (MiInitializeDummyPages.c)
 *     MxCopyPage @ 0x140A568CC (MxCopyPage.c)
 *     MxSwapPages @ 0x140A57120 (MxSwapPages.c)
 *     MiInitializeSharedUserData @ 0x140A579E0 (MiInitializeSharedUserData.c)
 *     MiInitializeGapFrames @ 0x140A66B10 (MiInitializeGapFrames.c)
 *     MiMapDummyPages @ 0x140A70FCC (MiMapDummyPages.c)
 *     MiInitializeEnclaveMetadataPage @ 0x140A92754 (MiInitializeEnclaveMetadataPage.c)
 * Callees:
 *     MiGetLeafVa @ 0x1402AD4F0 (MiGetLeafVa.c)
 *     MiUserPdeOrAbove @ 0x140303E44 (MiUserPdeOrAbove.c)
 */

unsigned __int64 __fastcall MiMakeValidPte(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  __int64 v5; // rsi
  __int64 v7; // rdx
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  unsigned __int64 LeafVa; // rbp
  unsigned __int64 v14; // rcx
  int v15; // eax

  v4 = a3;
  v5 = a3 & 0x1F;
  v7 = (a2 & 0xFFFFFFFFFLL) << 12;
  v8 = v7 | MmProtectToPteMask[v5] & 0xFFFF000000000E7FuLL | 0x21;
  if ( a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL )
    goto LABEL_2;
  LeafVa = (__int64)(a1 << 25) >> 16;
  if ( a1 >= 0xFFFFF6FB40000000uLL && a1 <= 0xFFFFF6FB7FFFFFFFuLL )
  {
    if ( a1 == 0xFFFFF6FB7DBEDF68uLL )
    {
      v8 = v7 | MmProtectToPteMask[v5] & 0xFFFF000000000E7FuLL | 0x8000000000000021uLL;
    }
    else if ( (a3 & 0x4000000) == 0 )
    {
      v8 = v7 & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v5] & 0x7FFF000000000E7FLL | 0x21;
    }
    if ( (unsigned int)MiUserPdeOrAbove(a1, v7, a3, a4) )
      v8 |= 4uLL;
  }
  v14 = v8;
  v8 |= 4uLL;
  if ( a1 > 0xFFFFF6BFFFFFFF78uLL )
    v8 = v14;
  if ( (v4 & 0x4000000) != 0 )
    LeafVa = MiGetLeafVa((__int64)(a1 << 25) >> 16);
  if ( LeafVa < 0xFFFF800000000000uLL )
  {
    v15 = HIBYTE(word_140C4E008);
    goto LABEL_25;
  }
  if ( byte_140C4F9C8[((LeafVa >> 39) & 0x1FF) - 256] != 1
    && (LeafVa < 0xFFFFF68000000000uLL || LeafVa > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    if ( LeafVa < qword_140C4FB38 || LeafVa > qword_140C4E368 )
      v15 = (unsigned __int8)word_140C4E008;
    else
      v15 = HIBYTE(word_140C4E008);
LABEL_25:
    if ( !v15 )
      goto LABEL_3;
LABEL_2:
    v8 |= 0x100uLL;
  }
LABEL_3:
  v9 = v8 | 0x42;
  if ( v4 >= 0 || (v5 & 5) != 4 )
    v9 = v8;
  if ( (v4 & 0x40000000) != 0 )
    v9 &= ~4uLL;
  if ( (v4 & 0x20000000) != 0 )
    v9 = ((unsigned __int16)v9 ^ (unsigned __int16)((unsigned __int8)word_140C4E008 << 8)) & 0x100 ^ (unsigned __int64)v9;
  v10 = v9 & 0xFFFFFFFFFFFFFEFFuLL;
  if ( (v4 & 0x8000000) == 0 )
    v10 = v9;
  v11 = v10 | 0x80;
  if ( (v4 & 0x4000000) == 0 )
    v11 = v10;
  return v11 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
}
