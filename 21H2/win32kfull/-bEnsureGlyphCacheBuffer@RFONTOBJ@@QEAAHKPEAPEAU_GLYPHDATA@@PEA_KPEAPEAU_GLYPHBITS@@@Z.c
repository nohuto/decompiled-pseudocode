/*
 * XREFs of ?bEnsureGlyphCacheBuffer@RFONTOBJ@@QEAAHKPEAPEAU_GLYPHDATA@@PEA_KPEAPEAU_GLYPHBITS@@@Z @ 0x1C001B4D8
 * Callers:
 *     FONTOBJ_bEnsureGlyphCacheBuffer @ 0x1C00193FC (FONTOBJ_bEnsureGlyphCacheBuffer.c)
 * Callees:
 *     ?bCheckMetricsCache@RFONTOBJ@@QEAAHXZ @ 0x1C001AFA4 (-bCheckMetricsCache@RFONTOBJ@@QEAAHXZ.c)
 *     ?pgbCheckGlyphCache@RFONTOBJ@@QEAAPEAX_K@Z @ 0x1C001B588 (-pgbCheckGlyphCache@RFONTOBJ@@QEAAPEAX_K@Z.c)
 *     ?bEnsureAuxCacheBuffer@RFONTOBJ@@QEAAHK@Z @ 0x1C02D45AC (-bEnsureAuxCacheBuffer@RFONTOBJ@@QEAAHK@Z.c)
 *     ?vFlushCache@RFONTOBJ@@QEAAXXZ @ 0x1C02D4A70 (-vFlushCache@RFONTOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall RFONTOBJ::bEnsureGlyphCacheBuffer(
        RFONTOBJ *this,
        unsigned int a2,
        struct _GLYPHDATA **a3,
        unsigned __int64 *a4,
        struct _GLYPHBITS **a5)
{
  __int64 v5; // rdi
  unsigned __int64 v8; // rbp
  _DWORD *v10; // r14
  struct _GLYPHBITS *v11; // rax
  unsigned int v13; // eax
  struct _GLYPHDATA *v14; // rdx

  v5 = *(_QWORD *)this;
  v8 = a2;
  v10 = (_DWORD *)(*(_QWORD *)this + 644LL);
  if ( (*v10 & 4) != 0 )
  {
    if ( !a3 )
      goto LABEL_5;
    if ( (unsigned int)RFONTOBJ::bCheckMetricsCache(this) )
    {
      *a3 = *(struct _GLYPHDATA **)(v5 + 512);
      v5 = *(_QWORD *)this;
LABEL_5:
      *a4 = (-(__int64)(*(_DWORD *)(v5 + 640) != 0) & 0xFFFFFFFFFFFFFFD8uLL) + 64;
      while ( 1 )
      {
        v11 = (struct _GLYPHBITS *)RFONTOBJ::pgbCheckGlyphCache(this, v8);
        if ( v11 )
          goto LABEL_7;
        if ( (*v10 & 1) == 0 )
        {
          if ( (*v10 & 2) == 0 )
            return 0LL;
          goto LABEL_7;
        }
        RFONTOBJ::vFlushCache(this);
        *v10 &= ~1u;
      }
    }
  }
  else if ( a3 )
  {
    v13 = *(_DWORD *)(v5 + 632);
    if ( v13 >= 0x10 && v13 < 0xFFFFFFC0 && (unsigned int)RFONTOBJ::bEnsureAuxCacheBuffer(this, v13 + 64) )
    {
      v14 = *(struct _GLYPHDATA **)(*(_QWORD *)this + 616LL);
      *a3 = v14;
      *a4 = 64LL;
      v11 = (struct _GLYPHBITS *)&v14[1];
LABEL_7:
      *a5 = v11;
      return 1LL;
    }
  }
  return 0LL;
}
