/*
 * XREFs of CcAllocateAndZeroSharedCacheMapRaiseOnError @ 0x14040F358
 * Callers:
 *     CcInitializeCacheMapInternal @ 0x14025E7B0 (CcInitializeCacheMapInternal.c)
 * Callees:
 *     ExAllocateFromLookasideListEx @ 0x14022D0A0 (ExAllocateFromLookasideListEx.c)
 *     memset @ 0x140435400 (memset.c)
 */

PVOID CcAllocateAndZeroSharedCacheMapRaiseOnError()
{
  PVOID v0; // rbx

  v0 = ExAllocateFromLookasideListEx(&CcSharedCacheMapLookasideList);
  memset(v0, 0, 0x260uLL);
  return v0;
}
