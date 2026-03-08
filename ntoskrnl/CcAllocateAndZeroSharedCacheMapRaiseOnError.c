/*
 * XREFs of CcAllocateAndZeroSharedCacheMapRaiseOnError @ 0x140409D5C
 * Callers:
 *     CcInitializeCacheMapInternal @ 0x140338F10 (CcInitializeCacheMapInternal.c)
 * Callees:
 *     ExAllocateFromLookasideListEx @ 0x14030DE20 (ExAllocateFromLookasideListEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

PVOID CcAllocateAndZeroSharedCacheMapRaiseOnError()
{
  PVOID v0; // rbx

  v0 = ExAllocateFromLookasideListEx(&CcSharedCacheMapLookasideList);
  memset(v0, 0, 0x260uLL);
  return v0;
}
