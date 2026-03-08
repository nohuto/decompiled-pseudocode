/*
 * XREFs of ?bEnsureGlyphCacheBuffer@RFONTOBJ@@QEAAHKPEAPEAU_GLYPHDATA@@PEA_KPEAPEAU_GLYPHBITS@@@Z @ 0x1C011DE48
 * Callers:
 *     FONTOBJ_bEnsureGlyphCacheBuffer @ 0x1C0130428 (FONTOBJ_bEnsureGlyphCacheBuffer.c)
 * Callees:
 *     ?pgbCheckGlyphCache@RFONTOBJ@@QEAAPEAX_K@Z @ 0x1C011DEFC (-pgbCheckGlyphCache@RFONTOBJ@@QEAAPEAX_K@Z.c)
 *     ?bCheckMetricsCache@RFONTOBJ@@QEAAHXZ @ 0x1C011E1B0 (-bCheckMetricsCache@RFONTOBJ@@QEAAHXZ.c)
 *     ?bEnsureAuxCacheBuffer@RFONTOBJ@@QEAAHK@Z @ 0x1C02FF5AC (-bEnsureAuxCacheBuffer@RFONTOBJ@@QEAAHK@Z.c)
 *     ?vFlushCache@RFONTOBJ@@QEAAXXZ @ 0x1C02FFD48 (-vFlushCache@RFONTOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall RFONTOBJ::bEnsureGlyphCacheBuffer(
        RFONTOBJ *this,
        unsigned int a2,
        struct _GLYPHDATA **a3,
        unsigned __int64 *a4,
        struct _GLYPHBITS **a5)
{
  __int64 v6; // rbx
  unsigned __int64 v7; // rbp
  struct _GLYPHBITS *v10; // rax
  int v12; // ecx
  unsigned int v13; // eax
  struct _GLYPHDATA *v14; // rdx

  v6 = *(_QWORD *)this + 512LL;
  v7 = a2;
  if ( (*(_DWORD *)(*(_QWORD *)this + 644LL) & 4) != 0 )
  {
    if ( !a3 )
      goto LABEL_3;
    if ( (unsigned int)RFONTOBJ::bCheckMetricsCache(this) )
    {
      *a3 = *(struct _GLYPHDATA **)v6;
LABEL_3:
      *a4 = (-(__int64)(*(_DWORD *)(*(_QWORD *)this + 640LL) != 0) & 0xFFFFFFFFFFFFFFD8uLL) + 64;
      while ( 1 )
      {
        v10 = (struct _GLYPHBITS *)RFONTOBJ::pgbCheckGlyphCache(this, v7);
        if ( v10 )
          goto LABEL_5;
        v12 = *(_DWORD *)(v6 + 132);
        if ( (v12 & 1) == 0 )
        {
          if ( (v12 & 2) == 0 )
            return 0LL;
          goto LABEL_5;
        }
        RFONTOBJ::vFlushCache(this);
        *(_DWORD *)(v6 + 132) &= ~1u;
      }
    }
  }
  else if ( a3 )
  {
    v13 = *(_DWORD *)(*(_QWORD *)this + 632LL);
    if ( v13 >= 0x10 && v13 < 0xFFFFFFC0 && (unsigned int)RFONTOBJ::bEnsureAuxCacheBuffer(this, v13 + 64) )
    {
      v14 = *(struct _GLYPHDATA **)(*(_QWORD *)this + 616LL);
      *a3 = v14;
      *a4 = 64LL;
      v10 = (struct _GLYPHBITS *)&v14[1];
LABEL_5:
      *a5 = v10;
      return 1LL;
    }
  }
  return 0LL;
}
