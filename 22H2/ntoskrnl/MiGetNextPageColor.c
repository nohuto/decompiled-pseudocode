/*
 * XREFs of MiGetNextPageColor @ 0x140357168
 * Callers:
 *     MiPfPrepareReadList @ 0x14063D030 (MiPfPrepareReadList.c)
 *     MiAllocateTopLevelPage @ 0x1406FE0F4 (MiAllocateTopLevelPage.c)
 *     MiAllocateDriverPage @ 0x1406FF348 (MiAllocateDriverPage.c)
 *     MiCombineIdenticalPages @ 0x140726870 (MiCombineIdenticalPages.c)
 *     MmAllocateIndependentPagesEx @ 0x14076202C (MmAllocateIndependentPagesEx.c)
 *     MiMapNewSession @ 0x140786F8C (MiMapNewSession.c)
 *     MiFillPerSessionProtos @ 0x1408D8030 (MiFillPerSessionProtos.c)
 *     MiScrubNodeLargePages @ 0x1408D8818 (MiScrubNodeLargePages.c)
 *     MiInitializeScrubPacket @ 0x1408DBEA0 (MiInitializeScrubPacket.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetNextPageColor(__int64 a1)
{
  return *(_DWORD *)(a1 + 12) | (unsigned int)_InterlockedExchangeAdd(*(volatile signed __int32 **)a1, 1u) & *(_DWORD *)(a1 + 8);
}
