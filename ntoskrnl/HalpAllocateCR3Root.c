/*
 * XREFs of HalpAllocateCR3Root @ 0x1403A3C68
 * Callers:
 *     HalpMmBuildTiledMemoryMap @ 0x140A8D8E8 (HalpMmBuildTiledMemoryMap.c)
 * Callees:
 *     MmAllocateContiguousNodeMemory @ 0x1403B4900 (MmAllocateContiguousNodeMemory.c)
 */

__int64 HalpAllocateCR3Root()
{
  void *ContiguousNodeMemory; // rax

  if ( HalpCR3Root )
    return 0LL;
  ContiguousNodeMemory = (void *)MmAllocateContiguousNodeMemory(4096, 0, -1, 0, 4, 0x80000000);
  if ( ContiguousNodeMemory )
  {
    HalpCR3Root = ContiguousNodeMemory;
    return 0LL;
  }
  return 3221225626LL;
}
