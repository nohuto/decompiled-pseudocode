/*
 * XREFs of HvlpFreeOverlayPages @ 0x14036C920
 * Callers:
 *     HvlInitializeProcessor @ 0x1407A0160 (HvlInitializeProcessor.c)
 *     HvlDeleteProcessor @ 0x14088E710 (HvlDeleteProcessor.c)
 * Callees:
 *     MmFreeContiguousMemory @ 0x1402E9070 (MmFreeContiguousMemory.c)
 */

void __stdcall HvlpFreeOverlayPages(PVOID BaseAddress, SIZE_T NumberOfBytes, MEMORY_CACHING_TYPE CacheType)
{
  MmFreeContiguousMemory(BaseAddress);
}
