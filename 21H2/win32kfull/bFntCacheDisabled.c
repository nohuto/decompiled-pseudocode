/*
 * XREFs of bFntCacheDisabled @ 0x1C00E2238
 * Callers:
 *     InitFNTCache @ 0x1C00E2390 (InitFNTCache.c)
 * Callees:
 *     bQueryFntCacheReg @ 0x1C00E22A8 (bQueryFntCacheReg.c)
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
