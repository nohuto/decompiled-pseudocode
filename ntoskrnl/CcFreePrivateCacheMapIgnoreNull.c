/*
 * XREFs of CcFreePrivateCacheMapIgnoreNull @ 0x140409DB0
 * Callers:
 *     CcUninitializeCacheMap @ 0x140336C50 (CcUninitializeCacheMap.c)
 *     CcInitializeCacheMapInternal @ 0x140338F10 (CcInitializeCacheMapInternal.c)
 * Callees:
 *     ExFreeToLookasideListEx @ 0x1402C0A60 (ExFreeToLookasideListEx.c)
 */

void __fastcall CcFreePrivateCacheMapIgnoreNull(PVOID Entry)
{
  if ( Entry )
    ExFreeToLookasideListEx(&CcPrivateCacheMapLookasideList, Entry);
}
