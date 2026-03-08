/*
 * XREFs of HalpMmAllocatePerProcessorMemory @ 0x140374B44
 * Callers:
 *     HalpTimerInitializeProfiling @ 0x140377960 (HalpTimerInitializeProfiling.c)
 *     HalpInitializePmcCounterSetInfo @ 0x140B3D3DC (HalpInitializePmcCounterSetInfo.c)
 * Callees:
 *     HalQueryMaximumProcessorCount @ 0x140375910 (HalQueryMaximumProcessorCount.c)
 *     HalpMmAllocateMemoryInternal @ 0x14037A7A8 (HalpMmAllocateMemoryInternal.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

void *__fastcall HalpMmAllocatePerProcessorMemory(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  void *MemoryInternal; // rax
  void *v4; // rbx

  v2 = HalQueryMaximumProcessorCount(a1, a2) * a1;
  MemoryInternal = (void *)HalpMmAllocateMemoryInternal(v2, 1LL);
  v4 = MemoryInternal;
  if ( MemoryInternal )
    memset(MemoryInternal, 0, v2);
  return v4;
}
