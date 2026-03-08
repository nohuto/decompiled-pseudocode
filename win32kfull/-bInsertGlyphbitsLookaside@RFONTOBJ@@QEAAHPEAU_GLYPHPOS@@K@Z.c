/*
 * XREFs of ?bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z @ 0x1C02FF64C
 * Callers:
 *     FONTOBJ_cGetGlyphs @ 0x1C029AF90 (FONTOBJ_cGetGlyphs.c)
 *     ?STROBJ_bEnumLinked@@YAHPEAVESTROBJ@@PEAKPEAPEAU_GLYPHPOS@@@Z @ 0x1C02B6A68 (-STROBJ_bEnumLinked@@YAHPEAVESTROBJ@@PEAKPEAPEAU_GLYPHPOS@@@Z.c)
 *     ?bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C02DBA10 (-bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 *     ?bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C02DC0BC (-bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 *     STROBJ_bEnum @ 0x1C02DD9A0 (STROBJ_bEnum.c)
 * Callees:
 *     ?QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU_GLYPHBITS@@@Z @ 0x1C011E4D4 (-QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU.c)
 *     ?QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C0122090 (-QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?bInsertPathLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@@Z @ 0x1C02FFB54 (-bInsertPathLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@@Z.c)
 */

__int64 __fastcall RFONTOBJ::bInsertGlyphbitsLookaside(RFONTOBJ *this, struct _GLYPHPOS *a2, int a3)
{
  unsigned int *v6; // r14
  __int64 v7; // rbx
  unsigned int v8; // eax
  __int64 v9; // rbp
  void *v10; // rcx
  __int64 v11; // rax
  struct _GLYPHDATA *v12; // rbx
  unsigned int v13; // eax
  __int64 v14; // r8
  HGLYPH hg; // r9d
  struct _GLYPHBITS *v16; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v17[3]; // [rsp+48h] [rbp-30h] BYREF
  struct _GLYPHDATA *v18; // [rsp+98h] [rbp+20h] BYREF

  if ( a3 == 2 )
    return RFONTOBJ::bInsertPathLookaside(this, a2);
  v6 = *(unsigned int **)this;
  v17[0] = *(_QWORD *)(*(_QWORD *)this + 128LL);
  v7 = *(_QWORD *)(v17[0] + 88LL);
  if ( v7 == *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(this) + 32) + 23448LL) )
  {
    v13 = v6[159];
    v6[161] = 0;
    v14 = *(_QWORD *)this;
    hg = a2->hg;
    v18 = 0LL;
    v16 = 0LL;
    if ( (unsigned int)PFFOBJ::QueryGlyphMetricsPlusBits(
                         (PFFOBJ *)v17,
                         *(struct DHPDEV__ **)(v14 + 112),
                         (struct _FONTOBJ *)v14,
                         hg,
                         v13,
                         &v18,
                         &v16) == -1 )
      return 0LL;
    v18->gdf.pgb = v16;
    a2->pgdf = &v18->gdf;
  }
  else
  {
    v8 = v6[158] + 64;
    if ( v8 < 0x50 )
      return 0LL;
    v9 = v8;
    if ( *(_QWORD *)(*(_QWORD *)this + 624LL) < (unsigned __int64)v8 )
    {
      v10 = *(void **)(*(_QWORD *)this + 616LL);
      if ( v10 )
        Win32FreePool(v10);
      *(_QWORD *)(*(_QWORD *)this + 616LL) = Win32AllocPoolZInit(v9, 1667326791LL);
      v11 = *(_QWORD *)this;
      if ( !*(_QWORD *)(*(_QWORD *)this + 616LL) )
      {
        *(_QWORD *)(v11 + 624) = 0LL;
        return 0LL;
      }
      *(_QWORD *)(v11 + 624) = v9;
    }
    v12 = *(struct _GLYPHDATA **)(*(_QWORD *)this + 616LL);
    if ( (unsigned int)PFFOBJ::QueryFontData(
                         (PFFOBJ *)v17,
                         *(struct DHPDEV__ **)(*(_QWORD *)this + 112LL),
                         *(struct _FONTOBJ **)this,
                         1u,
                         a2->hg,
                         v12,
                         &v12[1],
                         v6[158]) == -1 )
      return 0LL;
    a2->pgdf = &v12->gdf;
    v12->gdf.pgb = (GLYPHBITS *)&v12[1];
  }
  return 1LL;
}
