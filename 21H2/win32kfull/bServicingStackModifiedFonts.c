/*
 * XREFs of bServicingStackModifiedFonts @ 0x1C00E20F8
 * Callers:
 *     InitFNTCache @ 0x1C00E2390 (InitFNTCache.c)
 * Callees:
 *     bSetFntCacheReg @ 0x1C00E214C (bSetFntCacheReg.c)
 *     bQueryFntCacheReg @ 0x1C00E22A8 (bQueryFntCacheReg.c)
 */

__int64 bServicingStackModifiedFonts()
{
  bQueryFntCacheReg(ghkeyGreInitialize);
  bSetFntCacheReg(2LL, 2LL);
  return 1LL;
}
