/*
 * XREFs of MiIsPageOnBadList @ 0x14034B1D0
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x1402A36A0 (MiGetWorkingSetInfoList.c)
 *     MiQueryPfn @ 0x1402A4110 (MiQueryPfn.c)
 *     MiConfirmCombinePageContents @ 0x14034B140 (MiConfirmCombinePageContents.c)
 *     MiDeleteClusterSection @ 0x14034B3A4 (MiDeleteClusterSection.c)
 *     MiCopyHeaderIfResident @ 0x140368D84 (MiCopyHeaderIfResident.c)
 *     MiTradePage @ 0x1403B5640 (MiTradePage.c)
 *     MiFindContiguousPagesEx @ 0x1403B5CF8 (MiFindContiguousPagesEx.c)
 *     MiPfnsWorthTrying @ 0x1403B6374 (MiPfnsWorthTrying.c)
 *     MmTryIdentifyPage @ 0x140624300 (MmTryIdentifyPage.c)
 *     MiRemoveBadPages @ 0x140628020 (MiRemoveBadPages.c)
 *     MiUnlinkBadPages @ 0x1406288F4 (MiUnlinkBadPages.c)
 *     MmGetPageBadStatus @ 0x140629080 (MmGetPageBadStatus.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1406291A0 (MmMarkPhysicalMemoryAsBad.c)
 *     MiLocateSharedPageViews @ 0x1406340C0 (MiLocateSharedPageViews.c)
 *     MiArePageContentsZero @ 0x14064AE74 (MiArePageContentsZero.c)
 *     MiTransferPartitionPageRun @ 0x140659030 (MiTransferPartitionPageRun.c)
 *     MiMakePageBad @ 0x14065BCD0 (MiMakePageBad.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPageOnBadList(__int64 a1)
{
  return (*(_BYTE *)(a1 + 34) & 7) == 5 && (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) == -4LL;
}
