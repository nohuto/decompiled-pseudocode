/*
 * XREFs of MmFreeContiguousMemorySpecifyCache @ 0x1403B1910
 * Callers:
 *     <none>
 * Callees:
 *     MmFreeContiguousMemory @ 0x1403BD6E0 (MmFreeContiguousMemory.c)
 */

void __stdcall MmFreeContiguousMemorySpecifyCache(
        PVOID BaseAddress,
        SIZE_T NumberOfBytes,
        MEMORY_CACHING_TYPE CacheType)
{
  MmFreeContiguousMemory(BaseAddress);
}
