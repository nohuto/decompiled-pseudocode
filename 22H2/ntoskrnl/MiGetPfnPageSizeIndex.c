/*
 * XREFs of MiGetPfnPageSizeIndex @ 0x1403F6158
 * Callers:
 *     MiInsertLargePageInNodeList @ 0x14027F0D0 (MiInsertLargePageInNodeList.c)
 *     MiTradePage @ 0x140281260 (MiTradePage.c)
 *     MiActivePageClaimCandidate @ 0x140282D80 (MiActivePageClaimCandidate.c)
 *     MiIdentifyPfn @ 0x1402C9940 (MiIdentifyPfn.c)
 *     MiTryUnlinkNodeLargePage @ 0x1402EF1FC (MiTryUnlinkNodeLargePage.c)
 *     MiZeroInParallelWorker @ 0x140357570 (MiZeroInParallelWorker.c)
 *     MiFindLargeNodePage @ 0x1403947D0 (MiFindLargeNodePage.c)
 *     MiUpdateLargePageSectionPfns @ 0x1403F382C (MiUpdateLargePageSectionPfns.c)
 *     MiZeroWithSystemPtes @ 0x1403F48B8 (MiZeroWithSystemPtes.c)
 *     MiZeroWithUltraSpace @ 0x1403F4B98 (MiZeroWithUltraSpace.c)
 *     MiGetPagesRemainingInResidentPage @ 0x1403F6038 (MiGetPagesRemainingInResidentPage.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x1403F6188 (MiGetPfnPageSizeIndexUnsynchronized.c)
 *     MiGetFastLargePages @ 0x1403F71A0 (MiGetFastLargePages.c)
 *     MiInitializeLargeMdlLeafPfns @ 0x140533F28 (MiInitializeLargeMdlLeafPfns.c)
 *     MiMirrorRemoveInactivePages @ 0x140534CB4 (MiMirrorRemoveInactivePages.c)
 *     MiAllocateLargeZeroPages @ 0x14055D99C (MiAllocateLargeZeroPages.c)
 *     MiAssembleLargePagePfnList @ 0x14055DD60 (MiAssembleLargePagePfnList.c)
 *     MiFreeLargePages @ 0x14055E3D8 (MiFreeLargePages.c)
 *     MiTransferPartitionPageRun @ 0x140562D50 (MiTransferPartitionPageRun.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetPfnPageSizeIndex(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_QWORD *)(a1 + 40) & 0x1000000000LL) == 0 )
    return 0xFFFFFFFFLL;
  result = 3 - (*(_BYTE *)(a1 + 39) & 3u);
  if ( (_DWORD)result == 3 )
    return 0xFFFFFFFFLL;
  return result;
}
