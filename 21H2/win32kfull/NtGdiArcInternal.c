/*
 * XREFs of NtGdiArcInternal @ 0x1C02AFE50
 * Callers:
 *     <none>
 * Callees:
 *     ?efHalfDiff@@YA?AVEFLOAT@@JJ@Z @ 0x1C0015C00 (-efHalfDiff@@YA-AVEFLOAT@@JJ@Z.c)
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C0017E64 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00E47F8 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0134298 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0137840 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0137C34 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?ptfxGetCurrent@EPATHOBJ@@QEBA?AU_POINTFIX@@XZ @ 0x1C01388BC (-ptfxGetCurrent@EPATHOBJ@@QEBA-AU_POINTFIX@@XZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015DA34 (--1MDCOBJ@@QEAA@XZ.c)
 *     ??0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z @ 0x1C02AEC68 (--0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z.c)
 *     ?bPartialArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@JAEAVEFLOAT@@3J4J@Z @ 0x1C02AF3B8 (-bPartialArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@JAEAVEFLOAT@@3J4J@Z.c)
 *     ?vArctan@@YAXVEFLOAT@@0AEAV1@AEAJ@Z @ 0x1C02AF9B0 (-vArctan@@YAXVEFLOAT@@0AEAV1@AEAJ@Z.c)
 *     ?vCosSin@@YAXVEFLOAT@@PEAV1@1@Z @ 0x1C02AFB50 (-vCosSin@@YAXVEFLOAT@@PEAV1@1@Z.c)
 *     ?vCosSinPrecise@@YAXVEFLOAT@@PEAV1@1@Z @ 0x1C02AFCE8 (-vCosSinPrecise@@YAXVEFLOAT@@PEAV1@1@Z.c)
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
  unsigned int v12; // ebx
  POINTL v13; // rdx
  int v14; // edi
  int v15; // edi
  float v16; // xmm8_4
  int v17; // r14d
  int v18; // r15d
  int v19; // ecx
  int v20; // r9d
  int v21; // r10d
  int v22; // r11d
  float v23; // xmm9_4
  float v24; // xmm6_4
  int v25; // r9d
  int v26; // r10d
  float v27; // xmm7_4
  __m128i v28; // xmm6
  __m128i v29; // xmm7
  float v30; // xmm2_4
  BOOL IsZero; // ecx
  int v32; // eax
  _QWORD *Current; // rax
  unsigned int v34; // eax
  ULONG v35; // ecx
  __int64 v37; // [rsp+58h] [rbp-B0h] BYREF
  float v38; // [rsp+60h] [rbp-A8h] BYREF
  int v39; // [rsp+64h] [rbp-A4h] BYREF
  unsigned int v40; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v41; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v42; // [rsp+70h] [rbp-98h] BYREF
  POINTL *v43[2]; // [rsp+78h] [rbp-90h] BYREF
  char v44[32]; // [rsp+88h] [rbp-80h] BYREF
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

  v46.right = a5;
  v46.bottom = a6;
  v46.left = a3;
  v46.top = a4;
  DCOBJ::DCOBJ((DCOBJ *)v43, a2);
  v11 = v43[0];
  v12 = 0;
  if ( !v43[0] || (v43[0][4].y & 0x10000) != 0 )
  {
    v35 = 6;
    goto LABEL_42;
  }
  if ( (unsigned int)a1 > 3 )
  {
    v35 = 87;
LABEL_42:
    EngSetLastError(v35);
    goto LABEL_43;
  }
  v13 = v43[0][122];
  v14 = *(_DWORD *)(*(_QWORD *)&v13 + 152LL);
  if ( (v14 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v43[0], *(_QWORD *)(*(_QWORD *)&v13 + 160LL));
    v11 = v43[0];
  }
  if ( (v14 & 0x2000) != 0 )
    GreDCSelectPen(v11, *(_QWORD *)(*(_QWORD *)&v11[122] + 168LL));
  v15 = 1;
  PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, (DC **)v43, a1 == 1);
  if ( v54 )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v45, (struct XDCOBJ *)v43, 516);
    EBOX::EBOX((EBOX *)v47, (struct DCOBJ *)v43, &v46, (struct _LINEATTRS *)&v43[0][26], 1);
    if ( v47[1] )
      goto LABEL_33;
    if ( v47[0] )
    {
LABEL_32:
      v12 = v15;
      goto LABEL_33;
    }
    LODWORD(v16) = efHalfDiff(v50, -v52);
    v41 = 0;
    v17 = 0;
    v40 = 0;
    v18 = 0;
    LODWORD(v42) = 0;
    LODWORD(v23) = efHalfDiff(v49, -v51);
    v38 = 0.0;
    if ( v19 == v22 || v21 == v20 )
    {
      v28 = (__m128i)FP_0_0;
      v41 = FP_0_0;
      v29 = (__m128i)FP_0_0;
      v40 = FP_0_0;
    }
    else
    {
      v24 = COERCE_FLOAT(efHalfDiff(v22, v19));
      v27 = COERCE_FLOAT(efHalfDiff(v26, v25));
      vArctan(
        COERCE_INT((float)((float)a7 - v23) / v24),
        COERCE_INT((float)((float)a8 - v16) / v27),
        (float *)&v41,
        (int *)&v42);
      *((float *)&v37 + 1) = (float)((float)a10 - v16) / v27;
      *(float *)&v37 = (float)((float)a9 - v23) / v24;
      vArctan(v37, SHIDWORD(v37), (float *)&v40, (int *)&v38);
      v28 = (__m128i)v41;
      v29 = (__m128i)v40;
      v17 = v42;
      v18 = LODWORD(v38);
    }
    v30 = *(float *)v29.m128i_i32 - *(float *)v28.m128i_i32;
    v38 = *(float *)v29.m128i_i32 - *(float *)v28.m128i_i32;
    if ( (float)(*(float *)v29.m128i_i32 - *(float *)v28.m128i_i32) < 0.0 )
    {
      LODWORD(v30) ^= _xmm;
      v38 = v30;
    }
    IsZero = EFLOAT::bIsZero((EFLOAT *)&v38);
    if ( (float)(v30 - FP_3_0) >= 0.0 || IsZero )
    {
      vCosSin(_mm_cvtsi128_si32(v28), &v38, (float *)&v39);
      vCosSin(_mm_cvtsi128_si32(v29), (float *)&v37, (float *)&v37 + 1);
    }
    else
    {
      vCosSinPrecise((unsigned int)_mm_cvtsi128_si32(v28), &v38);
      vCosSinPrecise((unsigned int)_mm_cvtsi128_si32(v29), (float *)&v37);
    }
    if ( v17 != v18 || (v32 = 0, *(float *)v29.m128i_i32 <= *(float *)v28.m128i_i32) )
      v32 = 1;
    if ( (unsigned int)bPartialArc(
                         (unsigned int)(a1 == 1) + 1,
                         (EPATHOBJ *)&ppo,
                         (__int64)v47,
                         (__int64)&v38,
                         v17,
                         (__int64)&v41,
                         (__int64)&v37,
                         v18,
                         (__int64)&v40,
                         v32) )
    {
      if ( a1 == 1 )
      {
        *(_DWORD *)(*(_QWORD *)&v43[0][122] + 152LL) |= 0x100u;
        *(_DWORD *)(*(_QWORD *)&v43[0][122] + 152LL) &= ~0x200u;
        Current = (_QWORD *)EPATHOBJ::ptfxGetCurrent((EPATHOBJ *)&ppo, &v37);
        *(_QWORD *)(*(_QWORD *)&v43[0][122] + 8LL) = *Current;
        goto LABEL_35;
      }
      if ( a1 == 2 )
        goto LABEL_46;
      if ( a1 != 3 )
        goto LABEL_35;
      if ( EPATHOBJ::bPolyLineTo((EPATHOBJ *)&ppo, 0LL, &v48, 1u) )
      {
LABEL_46:
        if ( !EPATHOBJ::bCloseFigure((EPATHOBJ *)&ppo) )
          goto LABEL_31;
LABEL_35:
        if ( (v43[0][31].x & 1) == 0 )
        {
          if ( a1 <= 1 )
            v34 = EPATHOBJ::bStrokeAndOrFill(&ppo, v43, (LINEATTRS *)&v43[0][26], &v45, 1u);
          else
            v34 = EPATHOBJ::bStrokeAndOrFill(&ppo, v43, (LINEATTRS *)&v43[0][26], &v45, 3u);
          v12 = v34;
          goto LABEL_33;
        }
        goto LABEL_32;
      }
    }
LABEL_31:
    v15 = 0;
    goto LABEL_32;
  }
  EngSetLastError(8u);
LABEL_33:
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
LABEL_43:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v43);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v44);
  return v12;
}
