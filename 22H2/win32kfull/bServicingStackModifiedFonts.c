/*
 * XREFs of bServicingStackModifiedFonts @ 0x1C0088694
 * Callers:
 *     InitFNTCache @ 0x1C00880A0 (InitFNTCache.c)
 * Callees:
 *     bSetFntCacheReg @ 0x1C0088514 (bSetFntCacheReg.c)
 *     bQueryFntCacheReg @ 0x1C0088820 (bQueryFntCacheReg.c)
 */

__int64 __fastcall bServicingStackModifiedFonts(__int64 a1)
{
  __int64 v1; // rax

  v1 = SGDGetSessionState(a1);
  bQueryFntCacheReg(*(HANDLE *)(*(_QWORD *)(v1 + 32) + 19408LL));
  bSetFntCacheReg(2u, 2);
  return 1LL;
}
