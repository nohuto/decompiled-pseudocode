/*
 * XREFs of MmFreePagesFromMdl @ 0x1403294B0
 * Callers:
 *     sub_1403E9C00 @ 0x1403E9C00 (sub_1403E9C00.c)
 *     MmFreeSecureKernelPages @ 0x140553644 (MmFreeSecureKernelPages.c)
 *     PopFreeHiberContext @ 0x14077404C (PopFreeHiberContext.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140864DE0 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x1408650C8 (HalpDmaAllocateLocalScatterPool.c)
 *     HalpDmaGrowContiguousMapBuffers @ 0x1408653B4 (HalpDmaGrowContiguousMapBuffers.c)
 *     HalpDmaGrowScatterMapBuffers @ 0x1408654B8 (HalpDmaGrowScatterMapBuffers.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x1408972A4 (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpAllocateFromVMMemoryPartition @ 0x140897960 (IopLiveDumpAllocateFromVMMemoryPartition.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x140898070 (IopLiveDumpFreeDumpBuffers.c)
 *     IopLiveDumpWriteDumpFile @ 0x140898BD0 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithExtraPages @ 0x140898EF0 (IopLiveDumpWriteDumpFileWithExtraPages.c)
 *     MmAllocateNonCachedMemory @ 0x1408C6740 (MmAllocateNonCachedMemory.c)
 *     MmFreeNonCachedMemory @ 0x1408C6930 (MmFreeNonCachedMemory.c)
 *     ResFwFreeContext @ 0x1409F107C (ResFwFreeContext.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x14027FB6C (MiFreePagesFromMdl.c)
 */

void __stdcall MmFreePagesFromMdl(PMDL MemoryDescriptorList)
{
  __int64 v1; // r8

  MiFreePagesFromMdl((ULONG_PTR)MemoryDescriptorList, 0, v1);
}
