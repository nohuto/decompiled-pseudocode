/*
 * XREFs of NtGdiArcInternal @ 0x1C02C6710
 * Callers:
 *     <none>
 * Callees:
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C0017678 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0099E60 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011B310 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011BFF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C01C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C015A6C4 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ?ptfxGetCurrent@EPATHOBJ@@QEBA?AU_POINTFIX@@XZ @ 0x1C015A7AA (-ptfxGetCurrent@EPATHOBJ@@QEBA-AU_POINTFIX@@XZ.c)
 *     ?bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z @ 0x1C015A8B2 (-bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0284824 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEBU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0285B9C (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEBU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ??0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z @ 0x1C02C5058 (--0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z.c)
 *     ?bPartialArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@JAEAVEFLOAT@@3J4J@Z @ 0x1C02C58D4 (-bPartialArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@JAEAVEFLOAT@@3J4J@Z.c)
 *     ?efHalfDiff@@YA?AVEFLOAT@@JJ@Z @ 0x1C02C61B0 (-efHalfDiff@@YA-AVEFLOAT@@JJ@Z.c)
 *     ?vArctan@@YAXVEFLOAT@@0AEAV1@AEAJ@Z @ 0x1C02C6290 (-vArctan@@YAXVEFLOAT@@0AEAV1@AEAJ@Z.c)
 *     ?vCosSin@@YAXVEFLOAT@@PEAV1@1@Z @ 0x1C02C6424 (-vCosSin@@YAXVEFLOAT@@PEAV1@1@Z.c)
 *     ?vCosSinPrecise@@YAXVEFLOAT@@PEAV1@1@Z @ 0x1C02C65A4 (-vCosSinPrecise@@YAXVEFLOAT@@PEAV1@1@Z.c)
 */

__int64 __fastcall NtGdiArcInternal(
        unsigned int a1,
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
  int v13; // edi
  unsigned int v14; // edi
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
  BOOL IsZero; // eax
  BOOL v31; // eax
  _QWORD *Current; // rax
  unsigned int v34; // esi
  unsigned int v35; // ebx
  unsigned int v36; // eax
  ULONG v37; // ecx
  __int64 v38; // [rsp+58h] [rbp-B0h] BYREF
  float v39; // [rsp+60h] [rbp-A8h] BYREF
  int v40; // [rsp+64h] [rbp-A4h] BYREF
  unsigned int v41; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v42; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v43; // [rsp+70h] [rbp-98h] BYREF
  POINTL *v44[2]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v45[32]; // [rsp+88h] [rbp-80h] BYREF
  struct _XFORMOBJ v46; // [rsp+A8h] [rbp-60h] BYREF
  struct _RECTL v47; // [rsp+B8h] [rbp-50h] BYREF
  struct _POINTL v48[5]; // [rsp+C8h] [rbp-40h] BYREF
  struct _POINTL v49; // [rsp+F0h] [rbp-18h] BYREF
  int v50; // [rsp+108h] [rbp+0h]
  int v51; // [rsp+10Ch] [rbp+4h]
  int v52; // [rsp+110h] [rbp+8h]
  int v53; // [rsp+114h] [rbp+Ch]
  PATHOBJ ppo; // [rsp+118h] [rbp+10h] BYREF
  __int64 v55; // [rsp+120h] [rbp+18h]

  v47.right = a5;
  v47.bottom = a6;
  v47.left = a3;
  v47.top = a4;
  DCOBJ::DCOBJ((DCOBJ *)v44, a2);
  v11 = v44[0];
  if ( !v44[0] || (v44[0][4].y & 0x10000) != 0 )
  {
    v37 = 6;
    goto LABEL_49;
  }
  if ( a1 > 3 )
  {
    v37 = 87;
LABEL_49:
    EngSetLastError(v37);
    goto LABEL_50;
  }
  v12 = v44[0][122];
  v13 = *(_DWORD *)(*(_QWORD *)&v12 + 152LL);
  if ( (v13 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v44[0], *(_QWORD *)(*(_QWORD *)&v12 + 160LL));
    v11 = v44[0];
  }
  if ( (v13 & 0x2000) != 0 )
    GreDCSelectPen(v11, *(_QWORD *)(*(_QWORD *)&v11[122] + 168LL));
  v14 = 1;
  PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, (DC **)v44, a1 == 1);
  if ( !v55 )
  {
    EngSetLastError(8u);
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
LABEL_50:
    DCOBJ::~DCOBJ((DCOBJ *)v44);
    return 0LL;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v46, (struct XDCOBJ *)v44, 516);
  EBOX::EBOX((EBOX *)v48, (struct DCOBJ *)v44, &v47, (struct _LINEATTRS *)&v44[0][26], 1);
  if ( v48[0].y )
    goto LABEL_32;
  if ( v48[0].x )
  {
LABEL_33:
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
    DCOBJ::~DCOBJ((DCOBJ *)v44);
    return v14;
  }
  LODWORD(v15) = efHalfDiff(v51, -v53);
  v16 = 0;
  v17 = 0;
  LODWORD(v43) = 0;
  v39 = 0.0;
  LODWORD(v22) = efHalfDiff(v50, -v52);
  v42 = 0;
  v41 = 0;
  if ( v18 == v21 || v20 == v19 )
  {
    v27 = (__m128i)FP_0_0;
    v42 = FP_0_0;
    v28 = (__m128i)FP_0_0;
    v41 = FP_0_0;
  }
  else
  {
    v23 = COERCE_FLOAT(efHalfDiff(v21, v18));
    v26 = COERCE_FLOAT(efHalfDiff(v25, v24));
    vArctan(
      COERCE_INT((float)((float)a7 - v22) / v23),
      COERCE_INT((float)((float)a8 - v15) / v26),
      (float *)&v42,
      (int *)&v43);
    *((float *)&v38 + 1) = (float)((float)a10 - v15) / v26;
    *(float *)&v38 = (float)((float)a9 - v22) / v23;
    vArctan(v38, SHIDWORD(v38), (float *)&v41, (int *)&v39);
    v27 = (__m128i)v42;
    v28 = (__m128i)v41;
    v16 = v43;
    v17 = LODWORD(v39);
  }
  v29 = *(float *)v28.m128i_i32 - *(float *)v27.m128i_i32;
  v39 = *(float *)v28.m128i_i32 - *(float *)v27.m128i_i32;
  if ( (float)(*(float *)v28.m128i_i32 - *(float *)v27.m128i_i32) < 0.0 )
  {
    LODWORD(v29) ^= _xmm;
    v39 = v29;
  }
  IsZero = EFLOAT::bIsZero((EFLOAT *)&v39);
  if ( (float)(v29 - FP_3_0) >= 0.0 || IsZero )
  {
    vCosSin(_mm_cvtsi128_si32(v27), &v39, (float *)&v40);
    vCosSin(_mm_cvtsi128_si32(v28), (float *)&v38, (float *)&v38 + 1);
  }
  else
  {
    vCosSinPrecise((unsigned int)_mm_cvtsi128_si32(v27), &v39);
    vCosSinPrecise((unsigned int)_mm_cvtsi128_si32(v28), (float *)&v38);
  }
  v31 = v16 != v17 || *(float *)v28.m128i_i32 <= *(float *)v27.m128i_i32;
  if ( !(unsigned int)bPartialArc(
                        (unsigned int)(a1 == 1) + 1,
                        (EPATHOBJ *)&ppo,
                        v48,
                        (__int64)&v39,
                        v16,
                        (__int64)&v42,
                        (__int64)&v38,
                        v17,
                        (__int64)&v41,
                        v31) )
    goto LABEL_32;
  if ( a1 == 1 )
  {
    *(_DWORD *)(*(_QWORD *)&v44[0][122] + 152LL) |= 0x100u;
    *(_DWORD *)(*(_QWORD *)&v44[0][122] + 152LL) &= ~0x200u;
    Current = (_QWORD *)EPATHOBJ::ptfxGetCurrent((EPATHOBJ *)&ppo, &v38);
    *(_QWORD *)(*(_QWORD *)&v44[0][122] + 8LL) = *Current;
    goto LABEL_37;
  }
  if ( a1 == 2 )
  {
    if ( EPATHOBJ::bCloseFigure((EPATHOBJ *)&ppo) )
      goto LABEL_37;
LABEL_32:
    v14 = 0;
    goto LABEL_33;
  }
  if ( a1 == 3
    && (!(unsigned int)EPATHOBJ::bPolyLineTo((EPATHOBJ *)&ppo, 0LL, &v49, 1u)
     || !EPATHOBJ::bCloseFigure((EPATHOBJ *)&ppo)) )
  {
    goto LABEL_32;
  }
LABEL_37:
  if ( (v44[0][31].x & 1) != 0 )
    goto LABEL_33;
  v34 = 0;
  if ( !a1 || (v35 = a1 - 1) == 0 )
  {
    v36 = EPATHOBJ::bStrokeAndOrFill(&ppo, v44, (LINEATTRS *)&v44[0][26], &v46, 1u);
    goto LABEL_43;
  }
  if ( v35 - 1 <= 1 )
  {
    v36 = EPATHOBJ::bStrokeAndOrFill(&ppo, v44, (LINEATTRS *)&v44[0][26], &v46, 3u);
LABEL_43:
    v34 = v36;
  }
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
  if ( v44[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v44);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v45);
  return v34;
}
