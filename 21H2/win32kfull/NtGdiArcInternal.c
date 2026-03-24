/*
 * XREFs of NtGdiArcInternal @ 0x1C02B1280
 * Callers:
 *     <none>
 * Callees:
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C0098748 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     ?efHalfDiff@@YA?AVEFLOAT@@JJ@Z @ 0x1C00A09B4 (-efHalfDiff@@YA-AVEFLOAT@@JJ@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2C98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00FDC44 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z @ 0x1C0142564 (--0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0145120 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?ptfxGetCurrent@EPATHOBJ@@QEBA?AU_POINTFIX@@XZ @ 0x1C0145E20 (-ptfxGetCurrent@EPATHOBJ@@QEBA-AU_POINTFIX@@XZ.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0146E94 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C016AA7C (--1MDCOBJ@@QEAA@XZ.c)
 *     ?bPartialArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@JAEAVEFLOAT@@3J4J@Z @ 0x1C02B07A4 (-bPartialArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@JAEAVEFLOAT@@3J4J@Z.c)
 *     ?vArctan@@YAXVEFLOAT@@0AEAV1@AEAJ@Z @ 0x1C02B0DA4 (-vArctan@@YAXVEFLOAT@@0AEAV1@AEAJ@Z.c)
 *     ?vCosSin@@YAXVEFLOAT@@PEAV1@1@Z @ 0x1C02B0F50 (-vCosSin@@YAXVEFLOAT@@PEAV1@1@Z.c)
 *     ?vCosSinPrecise@@YAXVEFLOAT@@PEAV1@1@Z @ 0x1C02B10E8 (-vCosSinPrecise@@YAXVEFLOAT@@PEAV1@1@Z.c)
 */

__int64 __fastcall NtGdiArcInternal(
        int a1,
        HDC a2,
        LONG a3,
        LONG a4,
        LONG a5,
        LONG a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  POINTL *v11; // rcx
  POINTL v12; // rdx
  int v13; // ebx
  unsigned int v14; // ebx
  float v15; // xmm8_4
  int v16; // esi
  int v17; // r14d
  int v18; // ecx
  int v19; // r9d
  int v20; // r10d
  int v21; // r11d
  float v22; // xmm9_4
  float v23; // xmm6_4
  int v24; // r9d
  int v25; // r10d
  float v26; // xmm7_4
  __m128i v27; // xmm6
  __m128i v28; // xmm7
  float v29; // xmm2_4
  BOOL IsZero; // ecx
  BOOL v31; // eax
  _QWORD *Current; // rax
  __int64 v33; // r8
  unsigned int v34; // eax
  ULONG v35; // ecx
  __int64 v37; // [rsp+58h] [rbp-B0h] BYREF
  float v38; // [rsp+60h] [rbp-A8h] BYREF
  int v39; // [rsp+64h] [rbp-A4h] BYREF
  unsigned int v40; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v41; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v42; // [rsp+70h] [rbp-98h] BYREF
  POINTL *v43[2]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v44[32]; // [rsp+88h] [rbp-80h] BYREF
  struct _XFORMOBJ v45; // [rsp+A8h] [rbp-60h] BYREF
  struct _RECTL v46; // [rsp+B8h] [rbp-50h] BYREF
  _DWORD v47[10]; // [rsp+C8h] [rbp-40h] BYREF
  struct _POINTL v48; // [rsp+F0h] [rbp-18h] BYREF
  int v49; // [rsp+108h] [rbp+0h]
  int v50; // [rsp+10Ch] [rbp+4h]
  int v51; // [rsp+110h] [rbp+8h]
  int v52; // [rsp+114h] [rbp+Ch]
  PATHOBJ ppo; // [rsp+118h] [rbp+10h] BYREF
  __int64 v54; // [rsp+120h] [rbp+18h]
  _BYTE v55[32]; // [rsp+168h] [rbp+60h] BYREF
  int v56; // [rsp+188h] [rbp+80h]

  v46.right = a5;
  v46.bottom = a6;
  v46.left = a3;
  v46.top = a4;
  DCOBJ::DCOBJ((DCOBJ *)v43, a2);
  v11 = v43[0];
  if ( !v43[0] || (v43[0][4].y & 0x10000) != 0 )
  {
    v35 = 6;
    goto LABEL_44;
  }
  if ( (unsigned int)a1 > 3 )
  {
    v35 = 87;
LABEL_44:
    EngSetLastError(v35);
    v14 = 0;
    goto LABEL_45;
  }
  v12 = v43[0][122];
  v13 = *(_DWORD *)(*(_QWORD *)&v12 + 152LL);
  if ( (v13 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v43[0], *(_QWORD *)(*(_QWORD *)&v12 + 160LL));
    v11 = v43[0];
  }
  if ( (v13 & 0x2000) != 0 )
    GreDCSelectPen(v11, *(_QWORD *)(*(_QWORD *)&v11[122] + 168LL));
  v14 = 1;
  PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, (DC **)v43, a1 == 1);
  if ( !v54 )
  {
    EngSetLastError(8u);
LABEL_10:
    v14 = 0;
    goto LABEL_11;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v45, (struct XDCOBJ *)v43, 516);
  EBOX::EBOX((EBOX *)v47, (struct DCOBJ *)v43, &v46, (struct _LINEATTRS *)&v43[0][26], 1);
  if ( v47[1] )
    goto LABEL_10;
  if ( !v47[0] )
  {
    LODWORD(v15) = efHalfDiff(v50, -v52);
    v41 = 0;
    v16 = 0;
    v40 = 0;
    v17 = 0;
    LODWORD(v42) = 0;
    LODWORD(v22) = efHalfDiff(v49, -v51);
    v38 = 0.0;
    if ( v18 == v21 || v20 == v19 )
    {
      v27 = (__m128i)FP_0_0;
      v41 = FP_0_0;
      v28 = (__m128i)FP_0_0;
      v40 = FP_0_0;
    }
    else
    {
      v23 = COERCE_FLOAT(efHalfDiff(v21, v18));
      v26 = COERCE_FLOAT(efHalfDiff(v25, v24));
      vArctan(
        COERCE_INT((float)((float)a7 - v22) / v23),
        COERCE_INT((float)((float)a8 - v15) / v26),
        (float *)&v41,
        (int *)&v42);
      *((float *)&v37 + 1) = (float)((float)a10 - v15) / v26;
      *(float *)&v37 = (float)((float)a9 - v22) / v23;
      vArctan(v37, SHIDWORD(v37), (float *)&v40, (int *)&v38);
      v27 = (__m128i)v41;
      v28 = (__m128i)v40;
      v16 = v42;
      v17 = LODWORD(v38);
    }
    v29 = *(float *)v28.m128i_i32 - *(float *)v27.m128i_i32;
    v38 = *(float *)v28.m128i_i32 - *(float *)v27.m128i_i32;
    if ( (float)(*(float *)v28.m128i_i32 - *(float *)v27.m128i_i32) < 0.0 )
    {
      LODWORD(v29) ^= _xmm;
      v38 = v29;
    }
    IsZero = EFLOAT::bIsZero((EFLOAT *)&v38);
    if ( (float)(v29 - FP_3_0) >= 0.0 || IsZero )
    {
      vCosSin(_mm_cvtsi128_si32(v27), &v38, (float *)&v39);
      vCosSin(_mm_cvtsi128_si32(v28), (float *)&v37, (float *)&v37 + 1);
    }
    else
    {
      vCosSinPrecise((unsigned int)_mm_cvtsi128_si32(v27), (__int64)&v38, (__int64)&v39);
      vCosSinPrecise((unsigned int)_mm_cvtsi128_si32(v28), (__int64)&v37, (__int64)&v37 + 4);
    }
    v31 = v16 != v17 || *(float *)v28.m128i_i32 <= *(float *)v27.m128i_i32;
    if ( !(unsigned int)bPartialArc(
                          (unsigned int)(a1 == 1) + 1,
                          (EPATHOBJ *)&ppo,
                          (__int64)v47,
                          (__int64)&v38,
                          v16,
                          (__int64)&v41,
                          (__int64)&v37,
                          v17,
                          (__int64)&v40,
                          v31) )
      goto LABEL_10;
    if ( a1 == 1 )
    {
      *(_DWORD *)(*(_QWORD *)&v43[0][122] + 152LL) |= 0x100u;
      *(_DWORD *)(*(_QWORD *)&v43[0][122] + 152LL) &= ~0x200u;
      Current = (_QWORD *)EPATHOBJ::ptfxGetCurrent((EPATHOBJ *)&ppo, &v37);
      *(_QWORD *)(v33 + 8) = *Current;
    }
    else
    {
      if ( a1 != 2 )
      {
        if ( a1 != 3 )
          goto LABEL_37;
        if ( !EPATHOBJ::bPolyLineTo((EPATHOBJ *)&ppo, 0LL, &v48, 1u) )
          goto LABEL_10;
      }
      if ( !EPATHOBJ::bCloseFigure((EPATHOBJ *)&ppo) )
        goto LABEL_10;
    }
LABEL_37:
    if ( (v43[0][31].x & 1) == 0 )
    {
      if ( a1 <= 1 )
        v34 = EPATHOBJ::bStrokeAndOrFill(&ppo, v43, (LINEATTRS *)&v43[0][26], &v45, 1u);
      else
        v34 = EPATHOBJ::bStrokeAndOrFill(&ppo, v43, (LINEATTRS *)&v43[0][26], &v45, 3u);
      v14 = v34;
    }
  }
LABEL_11:
  EPATHOBJ::vUnlock((EPATHOBJ *)&ppo);
  if ( v56 )
  {
    PopThreadGuardedObject(v55);
    v56 = 0;
  }
LABEL_45:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v43);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v44);
  return v14;
}
