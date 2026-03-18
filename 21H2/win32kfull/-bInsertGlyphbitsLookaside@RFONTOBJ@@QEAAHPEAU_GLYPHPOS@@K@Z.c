/*
 * XREFs of ?bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z @ 0x1C02D464C
 * Callers:
 *     STROBJ_bEnum @ 0x1C013A2C0 (STROBJ_bEnum.c)
 *     FONTOBJ_cGetGlyphs @ 0x1C0291150 (FONTOBJ_cGetGlyphs.c)
 *     ?STROBJ_bEnumLinked@@YAHPEAVESTROBJ@@PEAKPEAPEAU_GLYPHPOS@@@Z @ 0x1C02A567C (-STROBJ_bEnumLinked@@YAHPEAVESTROBJ@@PEAKPEAPEAU_GLYPHPOS@@@Z.c)
 *     ?bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C02BC3E0 (-bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 *     ?bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C02BCA2C (-bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 * Callees:
 *     ?QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C0018C7C (-QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU_GLYPHBITS@@@Z @ 0x1C0019160 (-QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU.c)
 *     ?bInsertPathLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@@Z @ 0x1C02D4914 (-bInsertPathLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@@Z.c)
 */

__int64 __fastcall RFONTOBJ::bInsertGlyphbitsLookaside(RFONTOBJ *this, struct _GLYPHPOS *a2, int a3)
{
  __int64 v6; // r8
  unsigned int v7; // ebx
  unsigned int *v8; // r14
  unsigned int v9; // ecx
  unsigned int v10; // eax
  __int64 v11; // rbp
  __int64 v12; // rcx
  __int64 v13; // rax
  struct _GLYPHDATA *v14; // rdi
  unsigned int v15; // eax
  __int64 v16; // r8
  HGLYPH hg; // r9d
  struct _GLYPHBITS *v18; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v19[3]; // [rsp+48h] [rbp-30h] BYREF
  struct _GLYPHDATA *v20; // [rsp+98h] [rbp+20h] BYREF

  if ( a3 == 2 )
    return RFONTOBJ::bInsertPathLookaside(this, a2);
  v6 = *(_QWORD *)this;
  v7 = 0;
  v19[0] = *(_QWORD *)(*(_QWORD *)this + 128LL);
  if ( *(_QWORD *)(v19[0] + 88LL) == qword_1C033BDF8 )
  {
    v15 = *(_DWORD *)(v6 + 636);
    *(_DWORD *)(v6 + 644) = 0;
    v16 = *(_QWORD *)this;
    hg = a2->hg;
    v20 = 0LL;
    v18 = 0LL;
    if ( (unsigned int)PFFOBJ::QueryGlyphMetricsPlusBits(
                         (PFFOBJ *)v19,
                         *(struct DHPDEV__ **)(v16 + 112),
                         (struct _FONTOBJ *)v16,
                         hg,
                         v15,
                         &v20,
                         &v18) == -1 )
      return v7;
    v20->gdf.pgb = v18;
    a2->pgdf = &v20->gdf;
    return 1;
  }
  v8 = (unsigned int *)(v6 + 632);
  v9 = *(_DWORD *)(v6 + 632);
  v10 = v9 + 64;
  if ( v9 + 64 >= 0x50 )
  {
    v11 = v10;
    if ( *(_QWORD *)(v6 + 624) < (unsigned __int64)v10 )
    {
      v12 = *(_QWORD *)(v6 + 616);
      if ( v12 )
        Win32FreePool(v12);
      *(_QWORD *)(*(_QWORD *)this + 616LL) = Win32AllocPoolZInit(v11, 1667326791LL);
      v13 = *(_QWORD *)this;
      if ( !*(_QWORD *)(*(_QWORD *)this + 616LL) )
      {
        *(_QWORD *)(v13 + 624) = 0LL;
        return v7;
      }
      *(_QWORD *)(v13 + 624) = v11;
      v6 = *(_QWORD *)this;
      v9 = *v8;
    }
    v14 = *(struct _GLYPHDATA **)(v6 + 616);
    if ( (unsigned int)PFFOBJ::QueryFontData(
                         (PFFOBJ *)v19,
                         *(struct DHPDEV__ **)(v6 + 112),
                         (struct _FONTOBJ *)v6,
                         1u,
                         a2->hg,
                         v14,
                         &v14[1],
                         v9) == -1 )
      return v7;
    a2->pgdf = &v14->gdf;
    v14->gdf.pgb = (GLYPHBITS *)&v14[1];
    return 1;
  }
  return v7;
}
