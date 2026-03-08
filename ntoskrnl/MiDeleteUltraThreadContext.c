/*
 * XREFs of MiDeleteUltraThreadContext @ 0x14035137C
 * Callers:
 *     MiZeroLargePage @ 0x1402441E4 (MiZeroLargePage.c)
 *     MiCreateUltraThreadContext @ 0x140244548 (MiCreateUltraThreadContext.c)
 *     MiZeroPage @ 0x140275060 (MiZeroPage.c)
 *     MiZeroInParallelWorker @ 0x140275970 (MiZeroInParallelWorker.c)
 *     MiFindContiguousPagesEx @ 0x1403B5CF8 (MiFindContiguousPagesEx.c)
 *     MiInitializeNewUltraHugeContext @ 0x1403BFBC8 (MiInitializeNewUltraHugeContext.c)
 *     MmDeleteProcessor @ 0x14061578C (MmDeleteProcessor.c)
 *     MiHugePageOperation @ 0x14061E158 (MiHugePageOperation.c)
 *     MiDeleteZeroThreadContext @ 0x140652704 (MiDeleteZeroThreadContext.c)
 *     MiReleaseLargeZeroingVa @ 0x140652CD8 (MiReleaseLargeZeroingVa.c)
 *     MiCombineIdenticalPages @ 0x1407F7D84 (MiCombineIdenticalPages.c)
 *     MmRelocatePfnList @ 0x140A39D10 (MmRelocatePfnList.c)
 *     MiReleaseScrubPacket @ 0x140A436D0 (MiReleaseScrubPacket.c)
 *     MmInitializeProcessor @ 0x140A86740 (MmInitializeProcessor.c)
 * Callees:
 *     MiDeleteUltraMapContext @ 0x1403513B4 (MiDeleteUltraMapContext.c)
 */

__int64 __fastcall MiDeleteUltraThreadContext(__int64 a1)
{
  unsigned int i; // ebx
  __int64 result; // rax

  for ( i = 0; i < 4; ++i )
  {
    result = MiDeleteUltraMapContext(a1, i);
    a1 += 32LL;
  }
  return result;
}
