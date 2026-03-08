/*
 * XREFs of MmFreePagesFromMdl @ 0x1402C0DB0
 * Callers:
 *     sub_1403EBE80 @ 0x1403EBE80 (sub_1403EBE80.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140930FF0 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x1409312D8 (HalpDmaAllocateLocalScatterPool.c)
 *     HalpDmaGrowContiguousMapBuffers @ 0x1409315C0 (HalpDmaGrowContiguousMapBuffers.c)
 *     HalpDmaGrowScatterMapBuffers @ 0x1409316C4 (HalpDmaGrowScatterMapBuffers.c)
 *     IopLiveDumpAllocateFromVMMemoryPartition @ 0x14094A8B4 (IopLiveDumpAllocateFromVMMemoryPartition.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x14094B0B8 (IopLiveDumpFreeDumpBuffers.c)
 *     IopLiveDumpWriteDumpFile @ 0x14094C514 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithExtraPages @ 0x14094C9E8 (IopLiveDumpWriteDumpFileWithExtraPages.c)
 *     PopFreeHiberContext @ 0x1409855F0 (PopFreeHiberContext.c)
 *     MmAllocateNonCachedMemory @ 0x140A2AC20 (MmAllocateNonCachedMemory.c)
 *     MmFreeNonCachedMemory @ 0x140A2AE10 (MmFreeNonCachedMemory.c)
 *     ResFwFreeContext @ 0x140AEEED4 (ResFwFreeContext.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x1402C0DD0 (MiFreePagesFromMdl.c)
 */

void __stdcall MmFreePagesFromMdl(PMDL MemoryDescriptorList)
{
  MiFreePagesFromMdl((ULONG_PTR)MemoryDescriptorList);
}
