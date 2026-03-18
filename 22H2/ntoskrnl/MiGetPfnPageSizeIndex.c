/*
 * XREFs of MiGetPfnPageSizeIndex @ 0x1402E88E0
 * Callers:
 *     MiZeroInParallelWorker @ 0x1402D1300 (MiZeroInParallelWorker.c)
 *     MiGetFreeLargePage @ 0x1402D8720 (MiGetFreeLargePage.c)
 *     MiGetFastLargePages @ 0x1402E86FC (MiGetFastLargePages.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x1402E90A0 (MiGetPfnPageSizeIndexUnsynchronized.c)
 *     MiProcessPageGroupInfo @ 0x14032F370 (MiProcessPageGroupInfo.c)
 *     MiInitializeLargeMdlLeafPfns @ 0x1403899D0 (MiInitializeLargeMdlLeafPfns.c)
 *     MiTryUnlinkNodeLargePages @ 0x1403A088C (MiTryUnlinkNodeLargePages.c)
 *     MiTradePage @ 0x1403BA300 (MiTradePage.c)
 *     MiActivePageClaimCandidate @ 0x1403BB598 (MiActivePageClaimCandidate.c)
 *     MiFindLargeNodePage @ 0x14061D6D8 (MiFindLargeNodePage.c)
 *     MiMirrorRemoveInactivePages @ 0x140628334 (MiMirrorRemoveInactivePages.c)
 *     MiUpdateLargePageSectionPfns @ 0x140628FEC (MiUpdateLargePageSectionPfns.c)
 *     MiFreeContiguousLargePageRun @ 0x140649E28 (MiFreeContiguousLargePageRun.c)
 *     MiGetPagesRemainingInResidentPage @ 0x14064F2B4 (MiGetPagesRemainingInResidentPage.c)
 *     MiTransferPartitionPageRun @ 0x14065B674 (MiTransferPartitionPageRun.c)
 *     MiCoalesceActivePagesIntoFree @ 0x14065D55C (MiCoalesceActivePagesIntoFree.c)
 *     MiFreeLargePages @ 0x1406682C0 (MiFreeLargePages.c)
 *     MiScrubLargePageRegions @ 0x140A46480 (MiScrubLargePageRegions.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetPfnPageSizeIndex(__int64 a1)
{
  __int64 result; // rax

  if ( !_bittest64((const signed __int64 *)(a1 + 40), 0x28u) )
    return 0xFFFFFFFFLL;
  result = 3 - (*(_BYTE *)(a1 + 36) & 3u);
  if ( (_DWORD)result == 3 )
    return 0xFFFFFFFFLL;
  return result;
}
