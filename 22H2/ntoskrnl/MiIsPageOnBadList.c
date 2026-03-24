/*
 * XREFs of MiIsPageOnBadList @ 0x140283BEC
 * Callers:
 *     MiDeleteClusterSection @ 0x140280A60 (MiDeleteClusterSection.c)
 *     MiTradePage @ 0x140281260 (MiTradePage.c)
 *     MiFindContiguousPages @ 0x140281D60 (MiFindContiguousPages.c)
 *     MiPfnsWorthTrying @ 0x1402827B0 (MiPfnsWorthTrying.c)
 *     MiQueryPfn @ 0x140322BC8 (MiQueryPfn.c)
 *     MiGetWorkingSetInfoList @ 0x1403378AC (MiGetWorkingSetInfoList.c)
 *     MiCopyHeaderIfResident @ 0x14035A290 (MiCopyHeaderIfResident.c)
 *     MiConvertStandbyToProto @ 0x1403668C8 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x1403699A0 (MiConvertPrivateToProto.c)
 *     MiLargePfnPromoteCandidate @ 0x1403F66A0 (MiLargePfnPromoteCandidate.c)
 *     MiRemoveBadPages @ 0x14052EB08 (MiRemoveBadPages.c)
 *     MiUnlinkBadPages @ 0x14052F038 (MiUnlinkBadPages.c)
 *     MmGetPageBadStatus @ 0x14052F750 (MmGetPageBadStatus.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14052F870 (MmMarkPhysicalMemoryAsBad.c)
 *     MmTryIdentifyPage @ 0x1405347A8 (MmTryIdentifyPage.c)
 *     MmGetDumpRange @ 0x1405386B0 (MmGetDumpRange.c)
 *     MiArePageContentsZero @ 0x14054EB08 (MiArePageContentsZero.c)
 *     MiTransferPartitionPageRun @ 0x140562D50 (MiTransferPartitionPageRun.c)
 *     MiMakePageBad @ 0x140563874 (MiMakePageBad.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPageOnBadList(__int64 a1)
{
  return (*(_BYTE *)(a1 + 34) & 7) == 5 && (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) == 0xFFFFFFFFFFFFFFFCuLL;
}
