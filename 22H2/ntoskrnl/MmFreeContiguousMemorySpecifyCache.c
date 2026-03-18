/*
 * XREFs of MmFreeContiguousMemorySpecifyCache @ 0x1403B65D0
 * Callers:
 *     <none>
 * Callees:
 *     MmFreeContiguousMemory @ 0x1403C2FA0 (MmFreeContiguousMemory.c)
 */

void __stdcall MmFreeContiguousMemorySpecifyCache(
        PVOID BaseAddress,
        SIZE_T NumberOfBytes,
        MEMORY_CACHING_TYPE CacheType)
{
  MmFreeContiguousMemory(BaseAddress);
}
