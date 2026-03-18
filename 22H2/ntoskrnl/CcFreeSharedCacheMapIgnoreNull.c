/*
 * XREFs of CcFreeSharedCacheMapIgnoreNull @ 0x14040F3D0
 * Callers:
 *     CcInitializeCacheMapInternal @ 0x14025E7B0 (CcInitializeCacheMapInternal.c)
 *     CcDeleteSharedCacheMap @ 0x140299EA0 (CcDeleteSharedCacheMap.c)
 * Callees:
 *     ExFreeToLookasideListEx @ 0x14020BA00 (ExFreeToLookasideListEx.c)
 */

void __fastcall CcFreeSharedCacheMapIgnoreNull(PVOID Entry)
{
  if ( Entry )
    ExFreeToLookasideListEx(&CcSharedCacheMapLookasideList, Entry);
}
