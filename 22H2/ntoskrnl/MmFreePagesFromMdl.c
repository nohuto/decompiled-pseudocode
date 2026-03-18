/*
 * XREFs of MmFreePagesFromMdl @ 0x1402EBFB0
 * Callers:
 *     sub_1403F13A0 @ 0x1403F13A0 (sub_1403F13A0.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140934000 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x1409342E8 (HalpDmaAllocateLocalScatterPool.c)
 *     HalpDmaGrowContiguousMapBuffers @ 0x1409345D0 (HalpDmaGrowContiguousMapBuffers.c)
 *     HalpDmaGrowScatterMapBuffers @ 0x1409346D4 (HalpDmaGrowScatterMapBuffers.c)
 *     IopLiveDumpAllocateFromVMMemoryPartition @ 0x14094D8D4 (IopLiveDumpAllocateFromVMMemoryPartition.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x14094E0D8 (IopLiveDumpFreeDumpBuffers.c)
 *     IopLiveDumpWriteDumpFile @ 0x14094F534 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithExtraPages @ 0x14094FA08 (IopLiveDumpWriteDumpFileWithExtraPages.c)
 *     PopFreeHiberContext @ 0x1409886A0 (PopFreeHiberContext.c)
 *     MmAllocateNonCachedMemory @ 0x140A2D980 (MmAllocateNonCachedMemory.c)
 *     MmFreeNonCachedMemory @ 0x140A2DB70 (MmFreeNonCachedMemory.c)
 *     ResFwFreeContext @ 0x140AF2ED4 (ResFwFreeContext.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x1402EBB80 (MiFreePagesFromMdl.c)
 */

void __stdcall MmFreePagesFromMdl(PMDL MemoryDescriptorList)
{
  MiFreePagesFromMdl((ULONG_PTR)MemoryDescriptorList, 0);
}
