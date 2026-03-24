/*
 * XREFs of MiDeleteUltraThreadContext @ 0x140357B5C
 * Callers:
 *     MiZeroLargePage @ 0x14030E918 (MiZeroLargePage.c)
 *     MiCreateUltraThreadContext @ 0x14035465C (MiCreateUltraThreadContext.c)
 *     MiZeroInParallelWorker @ 0x140357570 (MiZeroInParallelWorker.c)
 *     MiTimeSingleLargePageZeroWorker @ 0x1403AB548 (MiTimeSingleLargePageZeroWorker.c)
 *     MmDeleteProcessor @ 0x14052DF10 (MmDeleteProcessor.c)
 *     MiHugePageOperation @ 0x140532EB8 (MiHugePageOperation.c)
 *     MiDeleteZeroThreadContext @ 0x14054FB54 (MiDeleteZeroThreadContext.c)
 *     MiCombineIdenticalPages @ 0x140726870 (MiCombineIdenticalPages.c)
 *     MiScrubNodeLargePages @ 0x1408D8818 (MiScrubNodeLargePages.c)
 *     MiReleaseScrubPacket @ 0x1408DBFA0 (MiReleaseScrubPacket.c)
 * Callees:
 *     MiDeleteUltraMapContext @ 0x140357B94 (MiDeleteUltraMapContext.c)
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
