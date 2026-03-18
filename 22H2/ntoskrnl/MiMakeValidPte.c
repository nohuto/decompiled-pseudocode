/*
 * XREFs of MiMakeValidPte @ 0x1402CF2B0
 * Callers:
 *     MiMapSinglePage @ 0x140217D78 (MiMapSinglePage.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14021ACC0 (MiMapPageInHyperSpaceWorker.c)
 *     MmCheckCachedPageStates @ 0x140265200 (MmCheckCachedPageStates.c)
 *     MiGetPageChain @ 0x14026C5E0 (MiGetPageChain.c)
 *     MiAllocateKernelStackPages @ 0x1402731A0 (MiAllocateKernelStackPages.c)
 *     MiFillSystemPtes @ 0x14027E7A0 (MiFillSystemPtes.c)
 *     MiWsleFree @ 0x140281280 (MiWsleFree.c)
 *     MiPfnShareCountIsZero @ 0x1402817A0 (MiPfnShareCountIsZero.c)
 *     MiComputeCombineHash @ 0x140281B30 (MiComputeCombineHash.c)
 *     MiGetPteFromCopyList @ 0x140283F10 (MiGetPteFromCopyList.c)
 *     MiSetSystemCodeProtection @ 0x1402841F0 (MiSetSystemCodeProtection.c)
 *     MiLinkPoolCommitChain @ 0x140286180 (MiLinkPoolCommitChain.c)
 *     MmProtectPool @ 0x140296EA0 (MmProtectPool.c)
 *     MiMakePageAvoidRead @ 0x1402CE000 (MiMakePageAvoidRead.c)
 *     MiGetUltraMapping @ 0x1402D1A10 (MiGetUltraMapping.c)
 *     MiMakeProtoTransition @ 0x1402D8D90 (MiMakeProtoTransition.c)
 *     MiCreateSharedZeroPages @ 0x1402E0DC0 (MiCreateSharedZeroPages.c)
 *     MiAssignNonPagedPoolPte @ 0x1402E2990 (MiAssignNonPagedPoolPte.c)
 *     MiCompleteRestrictedImageFault @ 0x1402E2E50 (MiCompleteRestrictedImageFault.c)
 *     MiResolveProtoCombine @ 0x1402E3AF8 (MiResolveProtoCombine.c)
 *     MiInitializeSystemPageTable @ 0x1402E45A8 (MiInitializeSystemPageTable.c)
 *     MiWriteLargePte @ 0x1402EC26C (MiWriteLargePte.c)
 *     MiPrivateFixup @ 0x1402ED678 (MiPrivateFixup.c)
 *     MiCopySinglePage @ 0x1402EE8BC (MiCopySinglePage.c)
 *     MiInsertPhysicalPteMapping @ 0x1402F1714 (MiInsertPhysicalPteMapping.c)
 *     MiUpdateImagePfnImportRelocations @ 0x140324F70 (MiUpdateImagePfnImportRelocations.c)
 *     MiMakeTransitionPteValid @ 0x140334E30 (MiMakeTransitionPteValid.c)
 *     MiFillPhysicalPages @ 0x1403390F0 (MiFillPhysicalPages.c)
 *     MiUnlinkStandbyPfn @ 0x14033E61C (MiUnlinkStandbyPfn.c)
 *     MiMakeSystemCachePteValid @ 0x1403458DC (MiMakeSystemCachePteValid.c)
 *     MiSetProtectionOnTransitionPte @ 0x140358070 (MiSetProtectionOnTransitionPte.c)
 *     MiMapArbitraryPage @ 0x14035999C (MiMapArbitraryPage.c)
 *     MiInitializeNewPfns @ 0x140375DC0 (MiInitializeNewPfns.c)
 *     MiMapWithLargePages @ 0x14038CB94 (MiMapWithLargePages.c)
 *     MiReplacePfnWithGapMapping @ 0x14038D978 (MiReplacePfnWithGapMapping.c)
 *     MiDemoteValidLargePageOneLevel @ 0x14038DB24 (MiDemoteValidLargePageOneLevel.c)
 *     MiReplacePageTablePage @ 0x1403932CC (MiReplacePageTablePage.c)
 *     MiMapMdlCommon @ 0x1403A6DE0 (MiMapMdlCommon.c)
 *     MmSetPageProtection @ 0x1403C2610 (MmSetPageProtection.c)
 *     MiMakeOutswappedPageResident @ 0x1406185DC (MiMakeOutswappedPageResident.c)
 *     MiReplacePageOfProtoPool @ 0x14061DA50 (MiReplacePageOfProtoPool.c)
 *     MiUnmapMdlCommon @ 0x14061E248 (MiUnmapMdlCommon.c)
 *     MmProtectMdlSystemAddress @ 0x14061EE40 (MmProtectMdlSystemAddress.c)
 *     MiHugePageOperation @ 0x140620610 (MiHugePageOperation.c)
 *     MiUpdateLargePageSectionPfns @ 0x140628FEC (MiUpdateLargePageSectionPfns.c)
 *     MiMapFrame @ 0x14062EC14 (MiMapFrame.c)
 *     MiMapMemoryDumpMdl @ 0x14062FDB8 (MiMapMemoryDumpMdl.c)
 *     MiInitializeSlowPte @ 0x1406326E8 (MiInitializeSlowPte.c)
 *     MiMakeLargePageTable @ 0x140637074 (MiMakeLargePageTable.c)
 *     MiBuildReservationCluster @ 0x140638354 (MiBuildReservationCluster.c)
 *     MiEnableLargeSubsection @ 0x14063CE70 (MiEnableLargeSubsection.c)
 *     MiFillPageWithImageExtentContents @ 0x14063D100 (MiFillPageWithImageExtentContents.c)
 *     MiPersistMdl @ 0x14063E684 (MiPersistMdl.c)
 *     MiTransferFileExtent @ 0x14063F8DC (MiTransferFileExtent.c)
 *     MiMapRetpolineStubs @ 0x14064074C (MiMapRetpolineStubs.c)
 *     MmMapHotPatchTablePage @ 0x1406430EC (MmMapHotPatchTablePage.c)
 *     MiDbgTranslatePhysicalAddress @ 0x140643F68 (MiDbgTranslatePhysicalAddress.c)
 *     MmReadProcessPageTables @ 0x140645880 (MmReadProcessPageTables.c)
 *     MiInsertLargeVadMapping @ 0x1406461CC (MiInsertLargeVadMapping.c)
 *     MiAddPagesToEnclave @ 0x140646A80 (MiAddPagesToEnclave.c)
 *     MiDecommitHardwareEnclavePages @ 0x140647550 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x1406482B8 (MiProtectEnclavePages.c)
 *     MiProtectAweRegion @ 0x14064B414 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x14064C62C (MiWriteAwePtes.c)
 *     MiWritePteHighLevelIsr @ 0x14064E500 (MiWritePteHighLevelIsr.c)
 *     MiScrubLargePage @ 0x14065E9DC (MiScrubLargePage.c)
 *     MiScrubPage @ 0x14065F160 (MiScrubPage.c)
 *     MiCopyMemoryPagefileData @ 0x14065FB98 (MiCopyMemoryPagefileData.c)
 *     MiBuildForkPageTable @ 0x140661F84 (MiBuildForkPageTable.c)
 *     MiFinishLastForkPageTable @ 0x14066456C (MiFinishLastForkPageTable.c)
 *     MiMapPageFileHash @ 0x14066635C (MiMapPageFileHash.c)
 *     MiInsertLargeUserMapping @ 0x140668B60 (MiInsertLargeUserMapping.c)
 *     MiInitializeProtoPfn @ 0x14066B2E0 (MiInitializeProtoPfn.c)
 *     MiValidateImagePfn @ 0x1406B0FF8 (MiValidateImagePfn.c)
 *     MmCreateProcessAddressSpace @ 0x140705F00 (MmCreateProcessAddressSpace.c)
 *     MiAllocateTopLevelPage @ 0x140706244 (MiAllocateTopLevelPage.c)
 *     MiRelocateImagePfn @ 0x1407447D0 (MiRelocateImagePfn.c)
 *     MiInitializeDynamicBitmap @ 0x14081ED24 (MiInitializeDynamicBitmap.c)
 *     MiProtectLargeKernelHalRange @ 0x14081F030 (MiProtectLargeKernelHalRange.c)
 *     MiInitializeShadowPageTable @ 0x140820480 (MiInitializeShadowPageTable.c)
 *     MmAllocateIndependentPagesEx @ 0x14086C70C (MmAllocateIndependentPagesEx.c)
 *     MmAllocateNonCachedMemory @ 0x140A2D980 (MmAllocateNonCachedMemory.c)
 *     MiCopyPagesIntoEnclave @ 0x140A3D034 (MiCopyPagesIntoEnclave.c)
 *     MiCreateHardwareEnclave @ 0x140A3D7F8 (MiCreateHardwareEnclave.c)
 *     MiCaptureSparsePages @ 0x140A42F44 (MiCaptureSparsePages.c)
 *     MmMapProtectedKernelPage @ 0x140A44188 (MmMapProtectedKernelPage.c)
 *     MiInitializeGapFrames @ 0x140B455F8 (MiInitializeGapFrames.c)
 *     MxMapVa @ 0x140B468AC (MxMapVa.c)
 *     MiMapDummyPages @ 0x140B4710C (MiMapDummyPages.c)
 *     MiInitializeDummyPages @ 0x140B48350 (MiInitializeDummyPages.c)
 *     MxSwapPages @ 0x140B5BAA8 (MxSwapPages.c)
 *     MiInitializeTbFlush @ 0x140B5F1FC (MiInitializeTbFlush.c)
 *     MiFillGapPtes @ 0x140B626A0 (MiFillGapPtes.c)
 *     MiInitializeSharedUserData @ 0x140B6CD50 (MiInitializeSharedUserData.c)
 *     MiProtectSharedUserPage @ 0x140B703E4 (MiProtectSharedUserPage.c)
 *     MxCopyPage @ 0x140B9A540 (MxCopyPage.c)
 *     MiInitializeEnclaveMetadataPage @ 0x140B9AC44 (MiInitializeEnclaveMetadataPage.c)
 * Callees:
 *     MiGetLeafVa @ 0x1402E5A20 (MiGetLeafVa.c)
 *     MiUserPdeOrAbove @ 0x14033C430 (MiUserPdeOrAbove.c)
 */

unsigned __int64 __fastcall MiMakeValidPte(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  __int64 v4; // rsi
  __int64 v6; // rdx
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rbx
  int v9; // r9d
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int64 LeafVa; // rbp
  unsigned __int64 v15; // rcx
  int v16; // eax

  v3 = a3;
  v4 = a3 & 0x1F;
  v6 = (a2 & 0xFFFFFFFFFFLL) << 12;
  v7 = v6 | MmProtectToPteMask[v4] & 0xFFF0000000000E7FuLL | 0x21;
  if ( a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v8 = v6 | MmProtectToPteMask[v4] & 0xFFF0000000000E7FuLL | 0x121;
    v9 = a3 & 0x4000000;
    goto LABEL_3;
  }
  LeafVa = (__int64)(a1 << 25) >> 16;
  if ( a1 >= 0xFFFFF6FB40000000uLL && a1 <= 0xFFFFF6FB7FFFFFFFuLL )
  {
    if ( a1 == 0xFFFFF6FB7DBEDF68uLL )
    {
      v7 = v6 | MmProtectToPteMask[v4] & 0xFFF0000000000E7FuLL | 0x8000000000000021uLL;
    }
    else if ( (a3 & 0x4000000) == 0 )
    {
      v7 = v6 & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v4] & 0x7FF0000000000E7FLL | 0x21;
    }
    if ( (unsigned int)MiUserPdeOrAbove(a1, v6, a3) )
      v7 |= 4uLL;
  }
  v15 = v7;
  v8 = v7 | 4;
  if ( a1 > 0xFFFFF6BFFFFFFF78uLL )
    v8 = v15;
  v9 = v3 & 0x4000000;
  if ( (v3 & 0x4000000) != 0 )
    LeafVa = MiGetLeafVa((__int64)(a1 << 25) >> 16);
  if ( LeafVa < 0xFFFF800000000000uLL )
  {
    v16 = HIBYTE(word_140C66DFC);
  }
  else
  {
    if ( byte_140C6A4D8[((LeafVa >> 39) & 0x1FF) - 256] == 1
      || LeafVa >= 0xFFFFF68000000000uLL && LeafVa <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      goto LABEL_3;
    }
    if ( LeafVa > qword_140C67170 || LeafVa < qword_140C6A658 )
      v16 = (unsigned __int8)word_140C66DFC;
    else
      v16 = HIBYTE(word_140C66DFC);
  }
  if ( v16 )
    v8 |= 0x100uLL;
LABEL_3:
  v10 = v8 | 0x42;
  if ( v3 >= 0 || (v4 & 5) != 4 )
    v10 = v8;
  if ( (v3 & 0x40000000) != 0 )
    v10 &= ~4uLL;
  if ( (v3 & 0x20000000) != 0 )
    v10 = ((unsigned __int16)v10 ^ (unsigned __int16)((unsigned __int8)word_140C66DFC << 8)) & 0x100 ^ (unsigned __int64)v10;
  v11 = v10 & 0xFFFFFFFFFFFFFEFFuLL;
  if ( (v3 & 0x8000000) == 0 )
    v11 = v10;
  v12 = v11 | 0x80;
  if ( !v9 )
    v12 = v11;
  return v12 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
}
