/*
 * XREFs of CcAllocatePrivateCacheMap @ 0x14040F390
 * Callers:
 *     CcInitializeCacheMapInternal @ 0x14025E7B0 (CcInitializeCacheMapInternal.c)
 * Callees:
 *     ExAllocateFromLookasideListEx @ 0x14022D0A0 (ExAllocateFromLookasideListEx.c)
 */

PVOID CcAllocatePrivateCacheMap()
{
  return ExAllocateFromLookasideListEx(&CcPrivateCacheMapLookasideList);
}
