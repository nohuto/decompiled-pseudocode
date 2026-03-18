/*
 * XREFs of MiGetPfnPriority @ 0x1402DF258
 * Callers:
 *     MiCombineWithExisting @ 0x1402179D4 (MiCombineWithExisting.c)
 *     MiStandbyPageContentsIntact @ 0x140218710 (MiStandbyPageContentsIntact.c)
 *     MiUnlinkPageFromListEx @ 0x140266510 (MiUnlinkPageFromListEx.c)
 *     MiResolveProtoPteFault @ 0x140267DB0 (MiResolveProtoPteFault.c)
 *     MiDeleteVa @ 0x14027A4A0 (MiDeleteVa.c)
 *     MiResetAccessBitPte @ 0x14027B900 (MiResetAccessBitPte.c)
 *     MiWsleFree @ 0x140281280 (MiWsleFree.c)
 *     MiPfnShareCountIsZero @ 0x1402817A0 (MiPfnShareCountIsZero.c)
 *     MiMakePageAvoidRead @ 0x1402CE000 (MiMakePageAvoidRead.c)
 *     MiDeletePteRun @ 0x1402D50F0 (MiDeletePteRun.c)
 *     MiInsertPagesInList @ 0x1402DD520 (MiInsertPagesInList.c)
 *     MiSharedInsertPfnChainInList @ 0x1402DDB70 (MiSharedInsertPfnChainInList.c)
 *     MiPfnToStandbyLookaside @ 0x1402DDEF0 (MiPfnToStandbyLookaside.c)
 *     MiUpdatePfnPriority @ 0x1402E23B0 (MiUpdatePfnPriority.c)
 *     MiTrimThisWsle @ 0x1402E27D8 (MiTrimThisWsle.c)
 *     MiCombineInitialInstance @ 0x1402EC690 (MiCombineInitialInstance.c)
 *     MiGetWorkingSetInfoList @ 0x1402F1954 (MiGetWorkingSetInfoList.c)
 *     MiQueryPfn @ 0x1402F23C4 (MiQueryPfn.c)
 *     MiReplaceTransitionPage @ 0x1403304D0 (MiReplaceTransitionPage.c)
 *     MiUpdatePrefetchPriority @ 0x14033383C (MiUpdatePrefetchPriority.c)
 *     MiUpdatePageAttributeStamp @ 0x140334AD8 (MiUpdatePageAttributeStamp.c)
 *     MiRestoreTransitionPte @ 0x14033501C (MiRestoreTransitionPte.c)
 *     MiUnlinkStandbyPfn @ 0x14033E61C (MiUnlinkStandbyPfn.c)
 *     MiCombineWithStandbyExisting @ 0x140359B7C (MiCombineWithStandbyExisting.c)
 *     MiReplaceNumaStandbyPage @ 0x1403C4178 (MiReplaceNumaStandbyPage.c)
 *     MiResetAccessBitPteWorker @ 0x14046BAAC (MiResetAccessBitPteWorker.c)
 *     MiUpdateOldPteWorker @ 0x14046BD86 (MiUpdateOldPteWorker.c)
 *     MiStoreCheckCandidatePage @ 0x14046CFE0 (MiStoreCheckCandidatePage.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14062D73C (MiDeprioritizeVirtualAddresses.c)
 *     MiDuplicateCloneLeaf @ 0x1406640F8 (MiDuplicateCloneLeaf.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetPfnPriority(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 35) & 8) != 0 )
    return 5LL;
  else
    return *(_BYTE *)(a1 + 35) & 7;
}
