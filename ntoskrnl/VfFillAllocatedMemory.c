/*
 * XREFs of VfFillAllocatedMemory @ 0x140AD700C
 * Callers:
 *     VfHandlePoolAlloc @ 0x140ACDFB0 (VfHandlePoolAlloc.c)
 *     VerifierMmAllocateContiguousMemory @ 0x140ADF440 (VerifierMmAllocateContiguousMemory.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCache @ 0x140ADF5C0 (VerifierMmAllocateContiguousMemorySpecifyCache.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCacheNode @ 0x140ADF700 (VerifierMmAllocateContiguousMemorySpecifyCacheNode.c)
 *     VerifierMmAllocateContiguousNodeMemory @ 0x140ADF820 (VerifierMmAllocateContiguousNodeMemory.c)
 *     VerifierMmAllocateNonCachedMemory @ 0x140ADFA80 (VerifierMmAllocateNonCachedMemory.c)
 *     VfFillAllocatePagesForMdl @ 0x140AE09B8 (VfFillAllocatePagesForMdl.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

void *__fastcall VfFillAllocatedMemory(void *a1, size_t a2)
{
  unsigned __int8 LowPart; // al
  void *result; // rax

  LowPart = KeQueryPerformanceCounter(0LL).LowPart;
  if ( a2 >= 0x100 )
    a2 = 256LL;
  if ( a2 != 256 )
    return memset(a1, LowPart | 1u, a2);
  result = (void *)(((((LowPart | 1LL) << 8) | LowPart | 1LL) << 16) | ((LowPart | 1LL) << 8) | LowPart | 1LL | ((((((LowPart | 1LL) << 8) | LowPart | 1LL) << 16) | ((LowPart | 1LL) << 8) | LowPart | 1LL) << 32));
  memset64(a1, (unsigned __int64)result, 0x20uLL);
  return result;
}
