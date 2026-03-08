/*
 * XREFs of xInsertMetricsRFONTOBJ @ 0x1C0151CF0
 * Callers:
 *     ?bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C02B6C7C (-bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 * Callees:
 *     ?bCheckMetricsCache@RFONTOBJ@@QEAAHXZ @ 0x1C011E1B0 (-bCheckMetricsCache@RFONTOBJ@@QEAAHXZ.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1C0121768 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 *     ?QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C0122090 (-QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 __fastcall xInsertMetricsRFONTOBJ(RFONTOBJ *this, _QWORD *a2, __int64 a3)
{
  __int64 v5; // r9
  __int64 v6; // rbp
  unsigned int v7; // esi
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v11; // rbp
  BOOL v12; // r14d
  bool v13; // zf
  struct _GLYPHDATA *v14; // rax
  __int64 v15; // rax
  unsigned __int16 v16; // [rsp+40h] [rbp-98h] BYREF
  unsigned int v17; // [rsp+48h] [rbp-90h] BYREF
  __int64 v18; // [rsp+50h] [rbp-88h] BYREF
  struct _GLYPHDATA v19; // [rsp+60h] [rbp-78h] BYREF

  v5 = *(unsigned int *)(*(_QWORD *)this + 84LL);
  v6 = *(_QWORD *)(*(_QWORD *)this + 480LL);
  if ( (v5 & 2) != 0 )
  {
    v17 = 0;
    v16 = a3;
    RFONTOBJ::vXlatGlyphArray(this, &v16, 1, &v17, 0, 0);
    v7 = v17;
  }
  else
  {
    v7 = (unsigned __int16)a3;
  }
  v8 = *(_QWORD *)this;
  if ( v7 == *(_DWORD *)(*(_QWORD *)this + 460LL) )
  {
    v9 = *(_QWORD *)(v6 + 8);
    if ( v9 )
    {
      *a2 = v9;
      return 1LL;
    }
  }
  if ( (unsigned int)RFONTOBJ::bCheckMetricsCache(this, (__int64)a2, a3, v5) )
  {
    v11 = *(_QWORD *)this;
    v12 = *(_DWORD *)(*(_QWORD *)this + 88LL) == 2;
    memset_0(&v19, 0, sizeof(v19));
    v13 = *(_DWORD *)(v11 + 640) == 0;
    v18 = *(_QWORD *)(v11 + 128);
    v14 = &v19;
    if ( v13 )
      v14 = *(struct _GLYPHDATA **)(v8 + 512);
    if ( (unsigned int)PFFOBJ::QueryFontData(
                         (PFFOBJ *)&v18,
                         *(struct DHPDEV__ **)(v11 + 112),
                         (struct _FONTOBJ *)v11,
                         v12 + 1,
                         v7,
                         v14,
                         0LL,
                         0) != -1 )
    {
      if ( *(_DWORD *)(*(_QWORD *)this + 640LL) )
      {
        v15 = *(_QWORD *)(v8 + 512);
        *(_OWORD *)v15 = *(_OWORD *)&v19.gdf.pgb;
        *(_QWORD *)(v15 + 16) = *(_QWORD *)&v19.fxA;
      }
      **(_QWORD **)(v8 + 512) = 0LL;
      *a2 = *(_QWORD *)(v8 + 512);
      *(_QWORD *)(v8 + 512) += (-(__int64)(*(_DWORD *)(*(_QWORD *)this + 640LL) != 0) & 0xFFFFFFFFFFFFFFD8uLL) + 64;
      return 1LL;
    }
  }
  return 0LL;
}
