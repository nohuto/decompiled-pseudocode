/*
 * XREFs of CcAllocatePrivateCacheMap @ 0x140409D94
 * Callers:
 *     CcInitializeCacheMapInternal @ 0x140338F10 (CcInitializeCacheMapInternal.c)
 * Callees:
 *     ExAllocateFromLookasideListEx @ 0x14030DE20 (ExAllocateFromLookasideListEx.c)
 */

PVOID CcAllocatePrivateCacheMap()
{
  return ExAllocateFromLookasideListEx(&CcPrivateCacheMapLookasideList);
}
