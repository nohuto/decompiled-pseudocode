/*
 * XREFs of MiGetPfnPageSizeIndex @ 0x14034D770
 * Callers:
 *     MiZeroInParallelWorker @ 0x140275970 (MiZeroInParallelWorker.c)
 *     MiProcessPageGroupInfo @ 0x1402B4BE0 (MiProcessPageGroupInfo.c)
 *     MiGetFastLargePages @ 0x14034D588 (MiGetFastLargePages.c)
 *     MiGetFreeLargePage @ 0x14034FBD0 (MiGetFreeLargePage.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x14035094C (MiGetPfnPageSizeIndexUnsynchronized.c)
 *     MiInitializeLargeMdlLeafPfns @ 0x140386D90 (MiInitializeLargeMdlLeafPfns.c)
 *     MiTryUnlinkNodeLargePages @ 0x14039BDDC (MiTryUnlinkNodeLargePages.c)
 *     MiTradePage @ 0x1403B5640 (MiTradePage.c)
 *     MiActivePageClaimCandidate @ 0x1403B68D8 (MiActivePageClaimCandidate.c)
 *     MiFindLargeNodePage @ 0x14061B228 (MiFindLargeNodePage.c)
 *     MiMirrorRemoveInactivePages @ 0x140625E94 (MiMirrorRemoveInactivePages.c)
 *     MiUpdateLargePageSectionPfns @ 0x140626B50 (MiUpdateLargePageSectionPfns.c)
 *     MiFreeContiguousLargePageRun @ 0x14064780C (MiFreeContiguousLargePageRun.c)
 *     MiGetPagesRemainingInResidentPage @ 0x14064CC94 (MiGetPagesRemainingInResidentPage.c)
 *     MiTransferPartitionPageRun @ 0x140659030 (MiTransferPartitionPageRun.c)
 *     MiCoalesceActivePagesIntoFree @ 0x14065AF0C (MiCoalesceActivePagesIntoFree.c)
 *     MiFreeLargePages @ 0x140665C70 (MiFreeLargePages.c)
 *     MiScrubLargePageRegions @ 0x140A437AC (MiScrubLargePageRegions.c)
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
