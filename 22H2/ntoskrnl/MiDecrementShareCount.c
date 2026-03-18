/*
 * XREFs of MiDecrementShareCount @ 0x140280690
 * Callers:
 *     MiLockAndDecrementShareCount @ 0x140211BCC (MiLockAndDecrementShareCount.c)
 *     MiSharePages @ 0x1402161D0 (MiSharePages.c)
 *     MiCombineWithExisting @ 0x1402179D4 (MiCombineWithExisting.c)
 *     MiOutPageSingleKernelStack @ 0x14021B5A0 (MiOutPageSingleKernelStack.c)
 *     MiAddSystemPageTableToList @ 0x14021E488 (MiAddSystemPageTableToList.c)
 *     MiMakeSystemCacheRangeValid @ 0x140267740 (MiMakeSystemCacheRangeValid.c)
 *     MiCompletePrivateZeroFault @ 0x14026A860 (MiCompletePrivateZeroFault.c)
 *     MiCopyOnWrite @ 0x14026FC80 (MiCopyOnWrite.c)
 *     MiWsleFree @ 0x140281280 (MiWsleFree.c)
 *     MiTrimSystemImagePages @ 0x140290FD4 (MiTrimSystemImagePages.c)
 *     MiDeleteTopLevelPage @ 0x1402929A4 (MiDeleteTopLevelPage.c)
 *     MiDeletePteList @ 0x1402D2450 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x1402D50F0 (MiDeletePteRun.c)
 *     MiAddPageToInsertList @ 0x1402D99D0 (MiAddPageToInsertList.c)
 *     MiUnlockMdlWritePages @ 0x1402D9B30 (MiUnlockMdlWritePages.c)
 *     MmUnmapViewInSystemCache @ 0x1402D9FB0 (MmUnmapViewInSystemCache.c)
 *     MiRestoreTransitionPte @ 0x14033501C (MiRestoreTransitionPte.c)
 *     MiFreeUnmappedPageTables @ 0x140340460 (MiFreeUnmappedPageTables.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x140346714 (MiRewriteTrimPteAsDemandZero.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140347C78 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MmOutSwapProcess @ 0x14034C9F8 (MmOutSwapProcess.c)
 *     MiPurgeImageSection @ 0x140369DE8 (MiPurgeImageSection.c)
 *     MiFreeContiguousPages @ 0x1403C337C (MiFreeContiguousPages.c)
 *     MiPurgeSubsection @ 0x140625744 (MiPurgeSubsection.c)
 *     MiDecrementLargeSubsections @ 0x14063C764 (MiDecrementLargeSubsections.c)
 *     MiDecrementProtoShareCounts @ 0x14063C9FC (MiDecrementProtoShareCounts.c)
 *     MiClearDriverHotPatchPtes @ 0x140641E5C (MiClearDriverHotPatchPtes.c)
 *     MiDuplicateCloneLeaf @ 0x1406640F8 (MiDuplicateCloneLeaf.c)
 *     MiFinishLastForkPageTable @ 0x14066456C (MiFinishLastForkPageTable.c)
 *     MiInitializeProtoPfn @ 0x14066B2E0 (MiInitializeProtoPfn.c)
 *     MiTradeBootImagePage @ 0x140B4A55C (MiTradeBootImagePage.c)
 *     MiFreeRegistryPageRange @ 0x140B5EEB4 (MiFreeRegistryPageRange.c)
 * Callees:
 *     MiPfnShareCountIsZero @ 0x1402817A0 (MiPfnShareCountIsZero.c)
 *     MiBadShareCount @ 0x14064D6FC (MiBadShareCount.c)
 */

__int64 __fastcall MiDecrementShareCount(__int64 a1)
{
  __int64 v1; // rdx

  if ( (*(_BYTE *)(a1 + 34) & 7) != 6 )
    MiBadShareCount(a1);
  v1 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = v1 ^ (((v1 & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ v1) & 0x3FFFFFFFFFFFFFFFLL;
  if ( (v1 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
    return MiPfnShareCountIsZero(a1, 0LL);
  else
    return 2LL;
}
