/*
 * XREFs of bServicingStackModifiedFonts @ 0x1C00E5C90
 * Callers:
 *     InitFNTCache @ 0x1C00E56F0 (InitFNTCache.c)
 * Callees:
 *     bQueryFntCacheReg @ 0x1C00E5BB8 (bQueryFntCacheReg.c)
 *     bSetFntCacheReg @ 0x1C00E5CE4 (bSetFntCacheReg.c)
 */

_BOOL8 bServicingStackModifiedFonts()
{
  BOOL v0; // ebx
  __int64 v1; // r8
  __int64 v2; // r9
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  v0 = 1;
  if ( (unsigned int)bQueryFntCacheReg(ghkeyGreInitialize, L"ServicingStackModifiedFonts", &v4) )
    v0 = v4 != 2;
  bSetFntCacheReg(2LL, 2LL, v1, v2);
  return v0;
}
