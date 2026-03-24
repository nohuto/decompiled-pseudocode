/*
 * XREFs of xInsertMetricsPlusRFONTOBJ @ 0x1C009CA18
 * Callers:
 *     ?bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C009C9C8 (-bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 * Callees:
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1C00997C0 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 *     ?QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C009A2D8 (-QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU_GLYPHBITS@@@Z @ 0x1C009A398 (-QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU.c)
 *     ?pgbCheckGlyphCache@RFONTOBJ@@QEAAPEAX_K@Z @ 0x1C009B028 (-pgbCheckGlyphCache@RFONTOBJ@@QEAAPEAX_K@Z.c)
 *     ?bCheckMetricsCache@RFONTOBJ@@QEAAHXZ @ 0x1C009CB9C (-bCheckMetricsCache@RFONTOBJ@@QEAAHXZ.c)
 *     ?bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C009D83C (-bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C0152B0C (-bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     memset @ 0x1C016E780 (memset.c)
 */

__int64 __fastcall xInsertMetricsPlusRFONTOBJ(RFONTOBJ *this, struct _GLYPHDATA **a2, unsigned __int16 a3)
{
  __int64 v3; // rbx
  unsigned int v4; // edi
  __int64 v8; // r13
  unsigned int v9; // r12d
  __int64 v10; // r13
  __int64 v11; // r8
  unsigned int v12; // eax
  struct _GLYPHDATA *v14; // rax
  unsigned __int64 v15; // r15
  void *v16; // r13
  struct _GLYPHDATA *v17; // rax
  unsigned int FontData; // eax
  __int64 v19; // rdx
  __int64 v20; // rax
  unsigned __int16 v21; // [rsp+40h] [rbp-59h] BYREF
  struct _GLYPHDATA *v22; // [rsp+48h] [rbp-51h] BYREF
  struct _GLYPHBITS *v23; // [rsp+50h] [rbp-49h] BYREF
  _QWORD v24[3]; // [rsp+58h] [rbp-41h] BYREF
  struct _GLYPHDATA v25; // [rsp+70h] [rbp-29h] BYREF

  v3 = *(_QWORD *)this;
  v4 = 0;
  v8 = *(_QWORD *)(*(_QWORD *)this + 480LL);
  if ( (*(_DWORD *)(*(_QWORD *)this + 84LL) & 2) != 0 )
  {
    v21 = a3;
    LODWORD(v22) = 0;
    RFONTOBJ::vXlatGlyphArray(this, &v21, 1, (unsigned int *)&v22, 0, 0);
    v9 = (unsigned int)v22;
    v3 = *(_QWORD *)this;
  }
  else
  {
    v9 = a3;
  }
  if ( v9 == *(_DWORD *)(v3 + 460) )
  {
    v14 = *(struct _GLYPHDATA **)(v8 + 8);
    if ( v14 )
    {
      *a2 = v14;
      return 1LL;
    }
  }
  if ( !*(_DWORD *)(v3 + 88) )
    return RFONTOBJ::bInsertMetrics(this, a2, a3);
  if ( (unsigned int)RFONTOBJ::bCheckMetricsCache(this) )
  {
    v10 = *(_QWORD *)this;
    if ( *(_DWORD *)(*(_QWORD *)this + 88LL) == 2 )
      return RFONTOBJ::bInsertMetricsPlusPath(this, a2, a3);
    v24[0] = *(_QWORD *)(v10 + 128);
    if ( *(struct PDEV **)(v24[0] + 88LL) == qword_1C0341AF0 )
    {
      *(_DWORD *)(v3 + 644) = 6;
      v11 = *(_QWORD *)this;
      v22 = 0LL;
      v12 = *(_DWORD *)(v3 + 636);
      v23 = 0LL;
      if ( (unsigned int)PFFOBJ::QueryGlyphMetricsPlusBits(
                           (PFFOBJ *)v24,
                           *(struct DHPDEV__ **)(v11 + 112),
                           (struct _FONTOBJ *)v11,
                           v9,
                           v12,
                           &v22,
                           &v23) == -1 )
        return v4;
      v22->gdf.pgb = v23;
      *a2 = v22;
    }
    else
    {
      memset(&v25, 0, sizeof(v25));
      v15 = *(unsigned int *)(v3 + 632);
      if ( v15 > *(_QWORD *)(v3 + 592) - *(_QWORD *)(v3 + 584) )
      {
        LODWORD(v15) = PFFOBJ::QueryFontData(
                         (PFFOBJ *)v24,
                         *(struct DHPDEV__ **)(v10 + 112),
                         (struct _FONTOBJ *)v10,
                         1u,
                         v9,
                         &v25,
                         0LL,
                         0);
        if ( (_DWORD)v15 == -1 )
          return v4;
      }
      v16 = (void *)RFONTOBJ::pgbCheckGlyphCache(this, (unsigned int)v15);
      v17 = &v25;
      if ( !*(_DWORD *)(*(_QWORD *)this + 640LL) )
        v17 = *(struct _GLYPHDATA **)(v3 + 512);
      FontData = PFFOBJ::QueryFontData(
                   (PFFOBJ *)v24,
                   *(struct DHPDEV__ **)(*(_QWORD *)this + 112LL),
                   *(struct _FONTOBJ **)this,
                   1u,
                   v9,
                   v17,
                   v16,
                   v15);
      v19 = FontData;
      if ( FontData == -1 )
        return v4;
      if ( *(_DWORD *)(*(_QWORD *)this + 640LL) )
      {
        v20 = *(_QWORD *)(v3 + 512);
        *(_OWORD *)v20 = *(_OWORD *)&v25.gdf.pgb;
        *(_QWORD *)(v20 + 16) = *(_QWORD *)&v25.fxA;
      }
      *a2 = *(struct _GLYPHDATA **)(v3 + 512);
      *(_QWORD *)(v3 + 512) += (-(__int64)(*(_DWORD *)(*(_QWORD *)this + 640LL) != 0) & 0xFFFFFFFFFFFFFFD8uLL) + 64;
      if ( v16 )
        *(_QWORD *)(v3 + 584) += v19;
    }
    return 1;
  }
  return 0LL;
}
