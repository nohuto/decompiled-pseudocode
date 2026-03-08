/*
 * XREFs of MiCreateUltraThreadContext @ 0x140244548
 * Callers:
 *     MiZeroLargePage @ 0x1402441E4 (MiZeroLargePage.c)
 *     MiZeroInParallelWorker @ 0x140275970 (MiZeroInParallelWorker.c)
 *     MiFindContiguousPagesEx @ 0x1403B5CF8 (MiFindContiguousPagesEx.c)
 *     MiInitializeNewUltraHugeContext @ 0x1403BFBC8 (MiInitializeNewUltraHugeContext.c)
 *     MiHugePageOperation @ 0x14061E158 (MiHugePageOperation.c)
 *     MiCombineIdenticalPages @ 0x1407F7D84 (MiCombineIdenticalPages.c)
 *     MiCreateZeroThreadContext @ 0x1408384D8 (MiCreateZeroThreadContext.c)
 *     MmRelocatePfnList @ 0x140A39D10 (MmRelocatePfnList.c)
 *     MiInitializeScrubPacket @ 0x140A433C8 (MiInitializeScrubPacket.c)
 *     MmInitializeProcessor @ 0x140A86740 (MmInitializeProcessor.c)
 * Callees:
 *     MiCreateUltraThreadContextHelper @ 0x1402445C4 (MiCreateUltraThreadContextHelper.c)
 *     MiDeleteUltraThreadContext @ 0x14035137C (MiDeleteUltraThreadContext.c)
 */

__int64 __fastcall MiCreateUltraThreadContext(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  unsigned int v8; // ebx

  v8 = 0;
  while ( !_bittest(&a3, v8) || (unsigned int)MiCreateUltraThreadContextHelper(a1 + 32LL * v8, v8, a2, a4) )
  {
    if ( ++v8 >= 4 )
      return 1LL;
  }
  MiDeleteUltraThreadContext(a1);
  return 0LL;
}
