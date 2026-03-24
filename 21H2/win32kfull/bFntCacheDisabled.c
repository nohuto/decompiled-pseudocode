/*
 * XREFs of bFntCacheDisabled @ 0x1C00E5B48
 * Callers:
 *     InitFNTCache @ 0x1C00E56F0 (InitFNTCache.c)
 * Callees:
 *     bQueryFntCacheReg @ 0x1C00E5BB8 (bQueryFntCacheReg.c)
 */

__int64 bFntCacheDisabled()
{
  unsigned int v0; // ebx

  v0 = 0;
  bQueryFntCacheReg(ghkeyGreInitialize);
  if ( !G_fServiceSession )
    return (unsigned int)bQueryFntCacheReg(ghkeyGreInitialize) == 0;
  return v0;
}
