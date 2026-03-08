/*
 * XREFs of MmGetPhysicalMemoryRanges @ 0x140836290
 * Callers:
 *     IopGetPhysicalMemoryBlock @ 0x140392BD0 (IopGetPhysicalMemoryBlock.c)
 *     IoFillDumpHeader @ 0x14054D7C8 (IoFillDumpHeader.c)
 * Callees:
 *     MmGetPhysicalMemoryRangesEx2 @ 0x1408362B0 (MmGetPhysicalMemoryRangesEx2.c)
 */

PPHYSICAL_MEMORY_RANGE MmGetPhysicalMemoryRanges(void)
{
  return (PPHYSICAL_MEMORY_RANGE)MmGetPhysicalMemoryRangesEx2(0LL);
}
