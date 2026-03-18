/*
 * XREFs of MiIsPageOnBadList @ 0x1402186E0
 * Callers:
 *     MiCopyHeaderIfResident @ 0x14020ECD0 (MiCopyHeaderIfResident.c)
 *     MiConfirmCombinePageContents @ 0x140218650 (MiConfirmCombinePageContents.c)
 *     MiDeleteClusterSection @ 0x1402189D0 (MiDeleteClusterSection.c)
 *     MiGetWorkingSetInfoList @ 0x1402F1954 (MiGetWorkingSetInfoList.c)
 *     MiQueryPfn @ 0x1402F23C4 (MiQueryPfn.c)
 *     MiTradePage @ 0x1403BA300 (MiTradePage.c)
 *     MiFindContiguousPagesEx @ 0x1403BA9B8 (MiFindContiguousPagesEx.c)
 *     MiPfnsWorthTrying @ 0x1403BB034 (MiPfnsWorthTrying.c)
 *     MmTryIdentifyPage @ 0x1406267A0 (MmTryIdentifyPage.c)
 *     MiRemoveBadPages @ 0x14062A4B0 (MiRemoveBadPages.c)
 *     MiUnlinkBadPages @ 0x14062AD80 (MiUnlinkBadPages.c)
 *     MmGetPageBadStatus @ 0x14062B500 (MmGetPageBadStatus.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14062B620 (MmMarkPhysicalMemoryAsBad.c)
 *     MiLocateSharedPageViews @ 0x140636550 (MiLocateSharedPageViews.c)
 *     MiArePageContentsZero @ 0x14064D490 (MiArePageContentsZero.c)
 *     MiTransferPartitionPageRun @ 0x14065B674 (MiTransferPartitionPageRun.c)
 *     MiMakePageBad @ 0x14065E320 (MiMakePageBad.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPageOnBadList(__int64 a1)
{
  return (*(_BYTE *)(a1 + 34) & 7) == 5 && (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) == -4LL;
}
