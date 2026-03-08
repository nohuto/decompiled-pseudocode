/*
 * XREFs of CcFreeSharedCacheMapIgnoreNull @ 0x140409DD4
 * Callers:
 *     CcDeleteSharedCacheMap @ 0x140217A10 (CcDeleteSharedCacheMap.c)
 *     CcInitializeCacheMapInternal @ 0x140338F10 (CcInitializeCacheMapInternal.c)
 * Callees:
 *     ExFreeToLookasideListEx @ 0x1402C0A60 (ExFreeToLookasideListEx.c)
 */

void __fastcall CcFreeSharedCacheMapIgnoreNull(PVOID Entry)
{
  if ( Entry )
    ExFreeToLookasideListEx(&CcSharedCacheMapLookasideList, Entry);
}
