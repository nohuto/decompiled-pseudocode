/*
 * XREFs of CcFreePrivateCacheMapIgnoreNull @ 0x14040F3AC
 * Callers:
 *     CcInitializeCacheMapInternal @ 0x14025E7B0 (CcInitializeCacheMapInternal.c)
 *     CcUninitializeCacheMap @ 0x14029BB20 (CcUninitializeCacheMap.c)
 * Callees:
 *     ExFreeToLookasideListEx @ 0x14020BA00 (ExFreeToLookasideListEx.c)
 */

void __fastcall CcFreePrivateCacheMapIgnoreNull(PVOID Entry)
{
  if ( Entry )
    ExFreeToLookasideListEx(&CcPrivateCacheMapLookasideList, Entry);
}
