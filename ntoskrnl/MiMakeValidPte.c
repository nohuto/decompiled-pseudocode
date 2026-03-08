/*
 * XREFs of MiMakeValidPte @ 0x140273920
 * Callers:
 *     MiUpdateImagePfnImportRelocations @ 0x140209498 (MiUpdateImagePfnImportRelocations.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140214870 (MiMapPageInHyperSpaceWorker.c)
 *     MmCheckCachedPageStates @ 0x1402200B0 (MmCheckCachedPageStates.c)
 *     MiWriteLargePte @ 0x1402443C4 (MiWriteLargePte.c)
 *     MiGetPageChain @ 0x14026E0E0 (MiGetPageChain.c)
 *     MiMakePageAvoidRead @ 0x140272670 (MiMakePageAvoidRead.c)
 *     MiGetUltraMapping @ 0x140276080 (MiGetUltraMapping.c)
 *     MiCreateSharedZeroPages @ 0x14028A420 (MiCreateSharedZeroPages.c)
 *     MiCompleteRestrictedImageFault @ 0x14028D690 (MiCompleteRestrictedImageFault.c)
 *     MiMapArbitraryPage @ 0x14029EE40 (MiMapArbitraryPage.c)
 *     MiInsertPhysicalPteMapping @ 0x14029F690 (MiInsertPhysicalPteMapping.c)
 *     MiPrivateFixup @ 0x1402A180C (MiPrivateFixup.c)
 *     MiCopySinglePage @ 0x1402A2358 (MiCopySinglePage.c)
 *     MiMakeProtoTransition @ 0x1402C59B0 (MiMakeProtoTransition.c)
 *     MiMakeTransitionPteValid @ 0x1402CD590 (MiMakeTransitionPteValid.c)
 *     MiFillPhysicalPages @ 0x1402CE820 (MiFillPhysicalPages.c)
 *     MiUnlinkStandbyPfn @ 0x1402D69FC (MiUnlinkStandbyPfn.c)
 *     MiMakeSystemCachePteValid @ 0x1402DA87C (MiMakeSystemCachePteValid.c)
 *     MiSetProtectionOnTransitionPte @ 0x1402EC490 (MiSetProtectionOnTransitionPte.c)
 *     MmProtectPool @ 0x14030B7D8 (MmProtectPool.c)
 *     MiAllocateKernelStackPages @ 0x14031D830 (MiAllocateKernelStackPages.c)
 *     MiFillSystemPtes @ 0x140328C00 (MiFillSystemPtes.c)
 *     MiWsleFree @ 0x14032BA30 (MiWsleFree.c)
 *     MiPfnShareCountIsZero @ 0x14032BF50 (MiPfnShareCountIsZero.c)
 *     MiComputeCombineHash @ 0x14032C2E0 (MiComputeCombineHash.c)
 *     MiGetPteFromCopyList @ 0x14032DE90 (MiGetPteFromCopyList.c)
 *     MiSetSystemCodeProtection @ 0x14032E170 (MiSetSystemCodeProtection.c)
 *     MiLinkPoolCommitChain @ 0x140330100 (MiLinkPoolCommitChain.c)
 *     MiAssignNonPagedPoolPte @ 0x140345570 (MiAssignNonPagedPoolPte.c)
 *     MiResolveProtoCombine @ 0x140345A28 (MiResolveProtoCombine.c)
 *     MiInitializeSystemPageTable @ 0x1403483AC (MiInitializeSystemPageTable.c)
 *     MiMapSinglePage @ 0x14034A868 (MiMapSinglePage.c)
 *     MiInitializeNewPfns @ 0x140370B10 (MiInitializeNewPfns.c)
 *     MiMapWithLargePages @ 0x14038A6D4 (MiMapWithLargePages.c)
 *     MiReplacePfnWithGapMapping @ 0x14038B4B8 (MiReplacePfnWithGapMapping.c)
 *     MiDemoteValidLargePageOneLevel @ 0x14038B664 (MiDemoteValidLargePageOneLevel.c)
 *     MiReplacePageTablePage @ 0x14039164C (MiReplacePageTablePage.c)
 *     MiMapMdlCommon @ 0x1403A2070 (MiMapMdlCommon.c)
 *     MmSetPageProtection @ 0x1403BCCE0 (MmSetPageProtection.c)
 *     MiMakeOutswappedPageResident @ 0x14061612C (MiMakeOutswappedPageResident.c)
 *     MiReplacePageOfProtoPool @ 0x14061B5A0 (MiReplacePageOfProtoPool.c)
 *     MiUnmapMdlCommon @ 0x14061BD98 (MiUnmapMdlCommon.c)
 *     MmProtectMdlSystemAddress @ 0x14061C990 (MmProtectMdlSystemAddress.c)
 *     MiHugePageOperation @ 0x14061E158 (MiHugePageOperation.c)
 *     MiUpdateLargePageSectionPfns @ 0x140626B50 (MiUpdateLargePageSectionPfns.c)
 *     MiMapFrame @ 0x14062C794 (MiMapFrame.c)
 *     MiMapMemoryDumpMdl @ 0x14062D938 (MiMapMemoryDumpMdl.c)
 *     MiInitializeSlowPte @ 0x140630258 (MiInitializeSlowPte.c)
 *     MiMakeLargePageTable @ 0x140634BEC (MiMakeLargePageTable.c)
 *     MiBuildReservationCluster @ 0x140635ED4 (MiBuildReservationCluster.c)
 *     MiEnableLargeSubsection @ 0x14063AA00 (MiEnableLargeSubsection.c)
 *     MiFillPageWithImageExtentContents @ 0x14063AC90 (MiFillPageWithImageExtentContents.c)
 *     MiPersistMdl @ 0x14063C214 (MiPersistMdl.c)
 *     MiTransferFileExtent @ 0x14063D474 (MiTransferFileExtent.c)
 *     MiMapRetpolineStubs @ 0x14063E2EC (MiMapRetpolineStubs.c)
 *     MmMapHotPatchTablePage @ 0x140640C8C (MmMapHotPatchTablePage.c)
 *     MiDbgTranslatePhysicalAddress @ 0x140641B08 (MiDbgTranslatePhysicalAddress.c)
 *     MmReadProcessPageTables @ 0x14064325C (MmReadProcessPageTables.c)
 *     MiInsertLargeVadMapping @ 0x140643BA8 (MiInsertLargeVadMapping.c)
 *     MiAddPagesToEnclave @ 0x14064445C (MiAddPagesToEnclave.c)
 *     MiDecommitHardwareEnclavePages @ 0x140644F2C (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x140645C9C (MiProtectEnclavePages.c)
 *     MiProtectAweRegion @ 0x140648DF8 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x14064A010 (MiWriteAwePtes.c)
 *     MiWritePteHighLevelIsr @ 0x14064BEE0 (MiWritePteHighLevelIsr.c)
 *     MiScrubLargePage @ 0x14065C38C (MiScrubLargePage.c)
 *     MiScrubPage @ 0x14065CB10 (MiScrubPage.c)
 *     MiCopyMemoryPagefileData @ 0x14065D548 (MiCopyMemoryPagefileData.c)
 *     MiBuildForkPageTable @ 0x14065F934 (MiBuildForkPageTable.c)
 *     MiFinishLastForkPageTable @ 0x140661F1C (MiFinishLastForkPageTable.c)
 *     MiMapPageFileHash @ 0x140663D0C (MiMapPageFileHash.c)
 *     MiInsertLargeUserMapping @ 0x140666510 (MiInsertLargeUserMapping.c)
 *     MiInitializeProtoPfn @ 0x140668C90 (MiInitializeProtoPfn.c)
 *     MiValidateImagePfn @ 0x14069EF78 (MiValidateImagePfn.c)
 *     MiRelocateImagePfn @ 0x1406EBA20 (MiRelocateImagePfn.c)
 *     MmCreateProcessAddressSpace @ 0x1407289B8 (MmCreateProcessAddressSpace.c)
 *     MiAllocateTopLevelPage @ 0x140728F6C (MiAllocateTopLevelPage.c)
 *     MiInitializeDynamicBitmap @ 0x14080A0E4 (MiInitializeDynamicBitmap.c)
 *     MiProtectLargeKernelHalRange @ 0x14080A3F0 (MiProtectLargeKernelHalRange.c)
 *     MiInitializeShadowPageTable @ 0x14080B974 (MiInitializeShadowPageTable.c)
 *     MmAllocateIndependentPagesEx @ 0x140869ADC (MmAllocateIndependentPagesEx.c)
 *     MmAllocateNonCachedMemory @ 0x140A2AC20 (MmAllocateNonCachedMemory.c)
 *     MiCopyPagesIntoEnclave @ 0x140A3A34C (MiCopyPagesIntoEnclave.c)
 *     MiCreateHardwareEnclave @ 0x140A3AB10 (MiCreateHardwareEnclave.c)
 *     MiCaptureSparsePages @ 0x140A40264 (MiCaptureSparsePages.c)
 *     MmMapProtectedKernelPage @ 0x140A414B4 (MmMapProtectedKernelPage.c)
 *     MiInitializeGapFrames @ 0x140B36EE8 (MiInitializeGapFrames.c)
 *     MxMapVa @ 0x140B3819C (MxMapVa.c)
 *     MiMapDummyPages @ 0x140B389FC (MiMapDummyPages.c)
 *     MiInitializeDummyPages @ 0x140B39C40 (MiInitializeDummyPages.c)
 *     MxSwapPages @ 0x140B50198 (MxSwapPages.c)
 *     MiInitializeTbFlush @ 0x140B5CD2C (MiInitializeTbFlush.c)
 *     MiFillGapPtes @ 0x140B5F3B0 (MiFillGapPtes.c)
 *     MiInitializeSharedUserData @ 0x140B68D24 (MiInitializeSharedUserData.c)
 *     MiProtectSharedUserPage @ 0x140B6C128 (MiProtectSharedUserPage.c)
 *     MxCopyPage @ 0x140B96330 (MxCopyPage.c)
 *     MiInitializeEnclaveMetadataPage @ 0x140B96A34 (MiInitializeEnclaveMetadataPage.c)
 * Callees:
 *     MiUserPdeOrAbove @ 0x1402D39A0 (MiUserPdeOrAbove.c)
 *     MiGetLeafVa @ 0x140346C50 (MiGetLeafVa.c)
 */

unsigned __int64 __fastcall MiMakeValidPte(unsigned __int64 a1, __int64 a2, int a3)
{
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
    if ( (unsigned int)MiUserPdeOrAbove(a1) )
      v7 |= 4uLL;
  }
  v15 = v7;
  v8 = v7 | 4;
  if ( a1 > 0xFFFFF6BFFFFFFF78uLL )
    v8 = v15;
  v9 = a3 & 0x4000000;
  if ( (a3 & 0x4000000) != 0 )
    LeafVa = MiGetLeafVa((__int64)(a1 << 25) >> 16);
  if ( LeafVa < 0xFFFF800000000000uLL )
  {
    v16 = HIBYTE(word_140C6697C);
  }
  else
  {
    if ( byte_140C6A058[((LeafVa >> 39) & 0x1FF) - 256] == 1
      || LeafVa >= 0xFFFFF68000000000uLL && LeafVa <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      goto LABEL_3;
    }
    if ( LeafVa > qword_140C66CF0 || LeafVa < qword_140C6A1D8 )
      v16 = (unsigned __int8)word_140C6697C;
    else
      v16 = HIBYTE(word_140C6697C);
  }
  if ( v16 )
    v8 |= 0x100uLL;
LABEL_3:
  v10 = v8 | 0x42;
  if ( a3 >= 0 || (v4 & 5) != 4 )
    v10 = v8;
  if ( (a3 & 0x40000000) != 0 )
    v10 &= ~4uLL;
  if ( (a3 & 0x20000000) != 0 )
    v10 = ((unsigned __int16)v10 ^ (unsigned __int16)((unsigned __int8)word_140C6697C << 8)) & 0x100 ^ (unsigned __int64)v10;
  v11 = v10 & 0xFFFFFFFFFFFFFEFFuLL;
  if ( (a3 & 0x8000000) == 0 )
    v11 = v10;
  v12 = v11 | 0x80;
  if ( !v9 )
    v12 = v11;
  return v12 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
}
