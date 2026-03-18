/*
 * XREFs of VfFillAllocatedMemory @ 0x140A9A1DC
 * Callers:
 *     VfHandlePoolAlloc @ 0x140A90660 (VfHandlePoolAlloc.c)
 *     VerifierMmAllocateContiguousMemory @ 0x140A9F2C0 (VerifierMmAllocateContiguousMemory.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCache @ 0x140A9F440 (VerifierMmAllocateContiguousMemorySpecifyCache.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCacheNode @ 0x140A9F580 (VerifierMmAllocateContiguousMemorySpecifyCacheNode.c)
 *     VerifierMmAllocateContiguousNodeMemory @ 0x140A9F6A0 (VerifierMmAllocateContiguousNodeMemory.c)
 *     VerifierMmAllocateNonCachedMemory @ 0x140A9F900 (VerifierMmAllocateNonCachedMemory.c)
 *     VfFillAllocatePagesForMdl @ 0x140AA0838 (VfFillAllocatePagesForMdl.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     memset @ 0x140435E00 (memset.c)
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
