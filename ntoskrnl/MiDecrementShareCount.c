/*
 * XREFs of MiDecrementShareCount @ 0x14032AE40
 * Callers:
 *     MiLockAndDecrementShareCount @ 0x140210114 (MiLockAndDecrementShareCount.c)
 *     MiMakeSystemCacheRangeValid @ 0x140221870 (MiMakeSystemCacheRangeValid.c)
 *     MiSharePages @ 0x140228990 (MiSharePages.c)
 *     MiCompletePrivateZeroFault @ 0x14026C360 (MiCompletePrivateZeroFault.c)
 *     MiDeletePteList @ 0x140276AC0 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x140279760 (MiDeletePteRun.c)
 *     MiAddPageToInsertList @ 0x1402848D0 (MiAddPageToInsertList.c)
 *     MiUnlockMdlWritePages @ 0x140284DD0 (MiUnlockMdlWritePages.c)
 *     MmUnmapViewInSystemCache @ 0x140285250 (MmUnmapViewInSystemCache.c)
 *     MiAddSystemPageTableToList @ 0x14029A218 (MiAddSystemPageTableToList.c)
 *     MiDeleteTopLevelPage @ 0x1402A568C (MiDeleteTopLevelPage.c)
 *     MiTrimSystemImagePages @ 0x1402B0298 (MiTrimSystemImagePages.c)
 *     MmOutSwapProcess @ 0x1402C00EC (MmOutSwapProcess.c)
 *     MiFreeUnmappedPageTables @ 0x1402D8BE0 (MiFreeUnmappedPageTables.c)
 *     MiOutPageSingleKernelStack @ 0x1402DB980 (MiOutPageSingleKernelStack.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x1402DC734 (MiRewriteTrimPteAsDemandZero.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1402DD950 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiPurgeImageSection @ 0x1402FECC8 (MiPurgeImageSection.c)
 *     MiCopyOnWrite @ 0x140319F00 (MiCopyOnWrite.c)
 *     MiWsleFree @ 0x14032BA30 (MiWsleFree.c)
 *     MiCombineWithExisting @ 0x14034A4C4 (MiCombineWithExisting.c)
 *     MiRestoreTransitionPte @ 0x14036A9C4 (MiRestoreTransitionPte.c)
 *     MiFreeContiguousPages @ 0x1403BDABC (MiFreeContiguousPages.c)
 *     MiPurgeSubsection @ 0x140623294 (MiPurgeSubsection.c)
 *     MiDecrementLargeSubsections @ 0x14063A2E8 (MiDecrementLargeSubsections.c)
 *     MiDecrementProtoShareCounts @ 0x14063A580 (MiDecrementProtoShareCounts.c)
 *     MiClearDriverHotPatchPtes @ 0x14063F9FC (MiClearDriverHotPatchPtes.c)
 *     MiDuplicateCloneLeaf @ 0x140661AA8 (MiDuplicateCloneLeaf.c)
 *     MiFinishLastForkPageTable @ 0x140661F1C (MiFinishLastForkPageTable.c)
 *     MiInitializeProtoPfn @ 0x140668C90 (MiInitializeProtoPfn.c)
 *     MiTradeBootImagePage @ 0x140B3BE4C (MiTradeBootImagePage.c)
 *     MiFreeRegistryPageRange @ 0x140B5C9E4 (MiFreeRegistryPageRange.c)
 * Callees:
 *     MiPfnShareCountIsZero @ 0x14032BF50 (MiPfnShareCountIsZero.c)
 *     MiBadShareCount @ 0x14064B0E0 (MiBadShareCount.c)
 */

__int64 __fastcall MiDecrementShareCount(__int64 a1)
{
  __int64 v1; // rdx

  if ( (*(_BYTE *)(a1 + 34) & 7) != 6 )
    MiBadShareCount(a1);
  v1 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = v1 ^ (((v1 & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ v1) & 0x3FFFFFFFFFFFFFFFLL;
  if ( (v1 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
    return MiPfnShareCountIsZero(a1);
  else
    return 2LL;
}
