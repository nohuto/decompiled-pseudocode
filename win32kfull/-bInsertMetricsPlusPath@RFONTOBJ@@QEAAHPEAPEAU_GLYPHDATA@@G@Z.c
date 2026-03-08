/*
 * XREFs of ?bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C02FF940
 * Callers:
 *     xInsertMetricsPlusRFONTOBJ @ 0x1C011DA70 (xInsertMetricsPlusRFONTOBJ.c)
 * Callees:
 *     ?pgbCheckGlyphCache@RFONTOBJ@@QEAAPEAX_K@Z @ 0x1C011DEFC (-pgbCheckGlyphCache@RFONTOBJ@@QEAAPEAX_K@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1C0121768 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 *     ?QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C0122090 (-QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1C01234E4 (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ?vInit@EPATHFONTOBJ@@QEAAXK@Z @ 0x1C0288F7C (-vInit@EPATHFONTOBJ@@QEAAXK@Z.c)
 */

__int64 __fastcall RFONTOBJ::bInsertMetricsPlusPath(RFONTOBJ *this, struct _GLYPHDATA **a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  unsigned int v5; // esi
  __int64 result; // rax
  unsigned int v9; // r14d
  __int64 v10; // r8
  struct _GLYPHDATA *v11; // rax
  __int64 v12; // rax
  unsigned int v13; // r15d
  __int64 v14; // r8
  __int64 v15; // r9
  EPATHFONTOBJ *v16; // rax
  EPATHFONTOBJ *v17; // rsi
  EPATHOBJ *v18; // rcx
  unsigned __int16 v19; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v20; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v22[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v23; // [rsp+68h] [rbp-98h]
  struct _GLYPHDATA v24; // [rsp+E0h] [rbp-20h] BYREF

  v4 = *(_QWORD *)this;
  v5 = (unsigned __int16)a3;
  if ( *(_QWORD *)(*(_QWORD *)this + 480LL)
    || (result = RFONTOBJ::bAllocateCache(this, (struct RFONTOBJ *)a2, a3, a4), (_DWORD)result) )
  {
    v9 = 1;
    if ( (*(_DWORD *)(*(_QWORD *)this + 84LL) & 2) != 0 )
    {
      v19 = v5;
      v20 = 0;
      RFONTOBJ::vXlatGlyphArray(this, &v19, 1, &v20, 0, 0);
      v5 = v20;
    }
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v22);
    if ( !v23 )
      goto LABEL_16;
    memset_0(&v24, 0, sizeof(v24));
    v10 = *(_QWORD *)this;
    v21 = *(_QWORD *)(*(_QWORD *)this + 128LL);
    v11 = &v24;
    if ( !*(_DWORD *)(v10 + 640) )
      v11 = *(struct _GLYPHDATA **)(v4 + 512);
    if ( (unsigned int)PFFOBJ::QueryFontData(
                         (PFFOBJ *)&v21,
                         *(struct DHPDEV__ **)(v10 + 112),
                         (struct _FONTOBJ *)v10,
                         2u,
                         v5,
                         v11,
                         v22,
                         0) == -1 )
    {
LABEL_16:
      v9 = 0;
    }
    else
    {
      if ( *(_DWORD *)(*(_QWORD *)this + 640LL) )
      {
        v12 = *(_QWORD *)(v4 + 512);
        *(_OWORD *)v12 = *(_OWORD *)&v24.gdf.pgb;
        *(_QWORD *)(v12 + 16) = *(_QWORD *)&v24.fxA;
      }
      v13 = EPATHOBJ::cjSize((EPATHOBJ *)v22) + 424;
      v16 = (EPATHFONTOBJ *)RFONTOBJ::pgbCheckGlyphCache(this, v13, v14, v15);
      v17 = v16;
      if ( v16 )
      {
        EPATHFONTOBJ::vInit(v16, v13);
        EPATHOBJ::bClone(v18, (struct EPATHOBJ *)v22);
        **(_QWORD **)(v4 + 512) = v17;
      }
      else
      {
        **(_QWORD **)(v4 + 512) = 0LL;
      }
      *a2 = *(struct _GLYPHDATA **)(v4 + 512);
      *(_QWORD *)(v4 + 512) += (-(__int64)(*(_DWORD *)(*(_QWORD *)this + 640LL) != 0) & 0xFFFFFFFFFFFFFFD8uLL) + 64;
      if ( v17 )
        *(_QWORD *)(v4 + 584) += v13;
    }
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v22);
    return v9;
  }
  return result;
}
