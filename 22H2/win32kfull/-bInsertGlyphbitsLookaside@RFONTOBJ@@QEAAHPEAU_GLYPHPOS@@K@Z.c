/*
 * XREFs of ?bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z @ 0x1C02D4F2C
 * Callers:
 *     ?STROBJ_bEnumLinked@@YAHPEAVESTROBJ@@PEAKPEAPEAU_GLYPHPOS@@@Z @ 0x1C0007498 (-STROBJ_bEnumLinked@@YAHPEAVESTROBJ@@PEAKPEAPEAU_GLYPHPOS@@@Z.c)
 *     STROBJ_bEnum @ 0x1C00CCDA0 (STROBJ_bEnum.c)
 *     FONTOBJ_cGetGlyphs @ 0x1C0292FB0 (FONTOBJ_cGetGlyphs.c)
 *     ?cGetGlyphData@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z @ 0x1C02A7224 (-cGetGlyphData@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z.c)
 *     ?bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C02BD818 (-bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 * Callees:
 *     ?QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C009A248 (-QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU_GLYPHBITS@@@Z @ 0x1C009A308 (-QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU.c)
 *     PALLOCMEM2 @ 0x1C009FDB8 (PALLOCMEM2.c)
 *     ?bInsertPathLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@@Z @ 0x1C02D5208 (-bInsertPathLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@@Z.c)
 */

__int64 __fastcall RFONTOBJ::bInsertGlyphbitsLookaside(RFONTOBJ *this, struct _GLYPHPOS *a2, int a3)
{
  __int64 v6; // r10
  unsigned int v7; // ebx
  unsigned int *v8; // r14
  unsigned int v9; // eax
  unsigned int v10; // ebp
  void *v11; // rcx
  __int64 v12; // rax
  struct _GLYPHDATA *v13; // rdi
  HGLYPH hg; // r9d
  __int64 v15; // r8
  unsigned int v16; // eax
  struct _GLYPHBITS *v17; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v18[3]; // [rsp+48h] [rbp-30h] BYREF
  struct _GLYPHDATA *v19; // [rsp+98h] [rbp+20h] BYREF

  if ( a3 == 2 )
    return RFONTOBJ::bInsertPathLookaside(this, a2);
  v6 = *(_QWORD *)this;
  v7 = 0;
  v18[0] = *(_QWORD *)(*(_QWORD *)this + 128LL);
  if ( *(struct PDEV **)(v18[0] + 88LL) == qword_1C0340AC0 )
  {
    *(_DWORD *)(v6 + 644) = 0;
    hg = a2->hg;
    v15 = *(_QWORD *)this;
    v16 = *(_DWORD *)(v6 + 636);
    v19 = 0LL;
    v17 = 0LL;
    if ( (unsigned int)PFFOBJ::QueryGlyphMetricsPlusBits(
                         (PFFOBJ *)v18,
                         *(struct DHPDEV__ **)(v15 + 112),
                         (struct _FONTOBJ *)v15,
                         hg,
                         v16,
                         &v19,
                         &v17) == -1 )
      return v7;
    v19->gdf.pgb = v17;
    a2->pgdf = &v19->gdf;
    return 1;
  }
  v8 = (unsigned int *)(v6 + 632);
  v9 = *(_DWORD *)(v6 + 632);
  v10 = v9 + 64;
  if ( v9 + 64 >= 0x50 )
  {
    if ( *(_QWORD *)(v6 + 624) < (unsigned __int64)v10 )
    {
      v11 = *(void **)(v6 + 616);
      if ( v11 )
        Win32FreePool(v11);
      *(_QWORD *)(*(_QWORD *)this + 616LL) = PALLOCMEM2(v10, 1667326791LL, 1);
      v12 = *(_QWORD *)this;
      if ( !*(_QWORD *)(*(_QWORD *)this + 616LL) )
      {
        *(_QWORD *)(v12 + 624) = 0LL;
        return v7;
      }
      *(_QWORD *)(v12 + 624) = v10;
      v6 = *(_QWORD *)this;
      v9 = *v8;
    }
    v13 = *(struct _GLYPHDATA **)(v6 + 616);
    if ( (unsigned int)PFFOBJ::QueryFontData(
                         (PFFOBJ *)v18,
                         *(struct DHPDEV__ **)(v6 + 112),
                         (struct _FONTOBJ *)v6,
                         1u,
                         a2->hg,
                         v13,
                         &v13[1],
                         v9) == -1 )
      return v7;
    a2->pgdf = &v13->gdf;
    v13->gdf.pgb = (GLYPHBITS *)&v13[1];
    return 1;
  }
  return v7;
}
