/*
 * XREFs of MiGetPfnPriority @ 0x14028A3F8
 * Callers:
 *     MiUnlinkPageFromListEx @ 0x140264100 (MiUnlinkPageFromListEx.c)
 *     MiResolveProtoPteFault @ 0x140270A50 (MiResolveProtoPteFault.c)
 *     MiMakePageAvoidRead @ 0x140272670 (MiMakePageAvoidRead.c)
 *     MiDeletePteRun @ 0x140279760 (MiDeletePteRun.c)
 *     MiInsertPagesInList @ 0x140287DB0 (MiInsertPagesInList.c)
 *     MiSharedInsertPfnChainInList @ 0x140288400 (MiSharedInsertPfnChainInList.c)
 *     MiPfnToStandbyLookaside @ 0x140288780 (MiPfnToStandbyLookaside.c)
 *     MiUpdatePfnPriority @ 0x14028D35C (MiUpdatePfnPriority.c)
 *     MiCombineInitialInstance @ 0x14029CD58 (MiCombineInitialInstance.c)
 *     MiCombineWithStandbyExisting @ 0x14029F020 (MiCombineWithStandbyExisting.c)
 *     MiGetWorkingSetInfoList @ 0x1402A36A0 (MiGetWorkingSetInfoList.c)
 *     MiQueryPfn @ 0x1402A4110 (MiQueryPfn.c)
 *     MiReplaceTransitionPage @ 0x1402C6784 (MiReplaceTransitionPage.c)
 *     MiUpdatePrefetchPriority @ 0x1402C95DC (MiUpdatePrefetchPriority.c)
 *     MiUnlinkStandbyPfn @ 0x1402D69FC (MiUnlinkStandbyPfn.c)
 *     MiDeleteVa @ 0x140324900 (MiDeleteVa.c)
 *     MiResetAccessBitPte @ 0x140325D60 (MiResetAccessBitPte.c)
 *     MiWsleFree @ 0x14032BA30 (MiWsleFree.c)
 *     MiPfnShareCountIsZero @ 0x14032BF50 (MiPfnShareCountIsZero.c)
 *     MiTrimThisWsle @ 0x1403493EC (MiTrimThisWsle.c)
 *     MiCombineWithExisting @ 0x14034A4C4 (MiCombineWithExisting.c)
 *     MiStandbyPageContentsIntact @ 0x14034B200 (MiStandbyPageContentsIntact.c)
 *     MiUpdatePageAttributeStamp @ 0x14036A854 (MiUpdatePageAttributeStamp.c)
 *     MiRestoreTransitionPte @ 0x14036A9C4 (MiRestoreTransitionPte.c)
 *     MiReplaceNumaStandbyPage @ 0x1403BE8B8 (MiReplaceNumaStandbyPage.c)
 *     MiResetAccessBitPteWorker @ 0x140463BAC (MiResetAccessBitPteWorker.c)
 *     MiUpdateOldPteWorker @ 0x140463E86 (MiUpdateOldPteWorker.c)
 *     MiStoreCheckCandidatePage @ 0x1404650E0 (MiStoreCheckCandidatePage.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14062B2BC (MiDeprioritizeVirtualAddresses.c)
 *     MiDuplicateCloneLeaf @ 0x140661AA8 (MiDuplicateCloneLeaf.c)
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
