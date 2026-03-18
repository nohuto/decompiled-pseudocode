/*
 * XREFs of GreAngleArc @ 0x1C029E684
 * Callers:
 *     NtGdiAngleArc @ 0x1C02AC950 (NtGdiAngleArc.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C0017E64 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C002F5C4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00E47F8 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     bFToL @ 0x1C00E82E4 (bFToL.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0134298 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0137840 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0137C34 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?ptfxGetCurrent@EPATHOBJ@@QEBA?AU_POINTFIX@@XZ @ 0x1C01388BC (-ptfxGetCurrent@EPATHOBJ@@QEBA-AU_POINTFIX@@XZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015DA34 (--1MDCOBJ@@QEAA@XZ.c)
 *     ?lGetQuadrant@@YAJAEAVEPOINTFL@@@Z @ 0x1C029E628 (-lGetQuadrant@@YAJAEAVEPOINTFL@@@Z.c)
 *     ??0EBOX@@QEAA@AEAVEXFORMOBJ@@AEAU_RECTL@@@Z @ 0x1C02AF120 (--0EBOX@@QEAA@AEAVEXFORMOBJ@@AEAU_RECTL@@@Z.c)
 *     ?bPartialArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@JAEAVEFLOAT@@3J4J@Z @ 0x1C02AF3B8 (-bPartialArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@JAEAVEFLOAT@@3J4J@Z.c)
 *     ?vArctan@@YAXVEFLOAT@@0AEAV1@AEAJ@Z @ 0x1C02AF9B0 (-vArctan@@YAXVEFLOAT@@0AEAV1@AEAJ@Z.c)
 *     ?vCosSin@@YAXVEFLOAT@@PEAV1@1@Z @ 0x1C02AFB50 (-vCosSin@@YAXVEFLOAT@@PEAV1@1@Z.c)
 *     ?vCosSinPrecise@@YAXVEFLOAT@@PEAV1@1@Z @ 0x1C02AFCE8 (-vCosSinPrecise@@YAXVEFLOAT@@PEAV1@1@Z.c)
 */

__int64 __fastcall GreAngleArc(HDC a1, int a2, int a3, int a4, unsigned int a5, float a6)
{
  unsigned int v7; // ebx
  POINTL *v10; // rcx
  POINTL v11; // rdx
  int v12; // r15d
  float v13; // xmm7_4
  __m128i v14; // xmm6
  LONG top; // ecx
  unsigned int v16; // r13d
  char v17; // di
  __m128i v18; // xmm8
  int v19; // r12d
  BOOL IsZero; // ecx
  float v21; // esi
  float v22; // eax
  char v23; // r14
  int v24; // r14d
  int v25; // esi
  int v26; // edi
  int v27; // r15d
  _QWORD *Current; // rax
  ULONG v29; // ecx
  float v31; // [rsp+58h] [rbp-B0h] BYREF
  float v32; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v33; // [rsp+60h] [rbp-A8h] BYREF
  struct _RECTL v34; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v35; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v36; // [rsp+7Ch] [rbp-8Ch] BYREF
  POINTL *v37[2]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v38[32]; // [rsp+90h] [rbp-78h] BYREF
  struct _XFORMOBJ v39; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE v40[80]; // [rsp+C8h] [rbp-40h] BYREF
  PATHOBJ ppo; // [rsp+118h] [rbp+10h] BYREF
  __int64 v42; // [rsp+120h] [rbp+18h]

  v7 = 0;
  v31 = 0.0;
  DCOBJ::DCOBJ((DCOBJ *)v37, a1);
  v10 = v37[0];
  if ( !v37[0] || (v37[0][4].y & 0x10000) != 0 )
  {
    v29 = 6;
    goto LABEL_40;
  }
  v11 = v37[0][122];
  v12 = *(_DWORD *)(*(_QWORD *)&v11 + 152LL);
  if ( (v12 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v37[0], *(_QWORD *)(*(_QWORD *)&v11 + 160LL));
    v10 = v37[0];
  }
  if ( (v12 & 0x2000) != 0 )
    GreDCSelectPen(v10, *(_QWORD *)(*(_QWORD *)&v10[122] + 168LL));
  v34.right = a4 + a2;
  v34.left = a2 - a4;
  v34.top = a3 - a4;
  v34.bottom = a4 + a3;
  if ( a4 < 0 || a2 - a4 > a2 || a4 + a2 < a2 || a3 - a4 > a3 || a4 + a3 < a3 )
  {
    v29 = 87;
LABEL_40:
    EngSetLastError(v29);
    goto LABEL_41;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v39, (struct XDCOBJ *)v37, 516);
  PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, (DC **)v37, 1);
  if ( v42 )
  {
    ERECTL::vOrder((ERECTL *)&v34);
    v13 = a6;
    v14 = (__m128i)a5;
    v33 = a5;
    if ( a6 < 0.0 )
    {
      top = v34.top;
      v14 = (__m128i)_mm_xor_ps((__m128)a5, (__m128)_xmm);
      LODWORD(v13) = LODWORD(a6) ^ _xmm;
      v33 = v14.m128i_i32[0];
      v34.top = v34.bottom;
      v34.bottom = top;
    }
    EBOX::EBOX((EBOX *)v40, (struct EXFORMOBJ *)&v39, &v34);
    v16 = 2;
    bFToL(v13 * FP_1DIV90, (int *)&v31, 5u);
    v17 = LOBYTE(v31);
    v18 = v14;
    *(float *)v18.m128i_i32 = *(float *)v14.m128i_i32 + v13;
    v19 = SLODWORD(v31) >> 2;
    if ( SLODWORD(v31) >> 2 > 8 )
      v19 = 8;
    v31 = *(float *)v14.m128i_i32 + v13;
    v32 = *(float *)v18.m128i_i32 - *(float *)v14.m128i_i32;
    IsZero = EFLOAT::bIsZero((EFLOAT *)&v32);
    if ( (float)((float)(*(float *)v18.m128i_i32 - *(float *)v14.m128i_i32) - FP_3_0) >= 0.0 || IsZero )
    {
      vCosSin((unsigned int)_mm_cvtsi128_si32(v14), &v34, &v34.top);
      vCosSin((unsigned int)_mm_cvtsi128_si32(v18), &v35, &v36);
    }
    else
    {
      vCosSinPrecise((unsigned int)_mm_cvtsi128_si32(v14), &v34, &v34.top);
      vCosSinPrecise((unsigned int)_mm_cvtsi128_si32(v18), &v35, &v36);
    }
    LODWORD(v21) = lGetQuadrant((struct EPOINTFL *)&v34);
    v32 = v21;
    if ( *(float *)v14.m128i_i32 > FP_3600_0 || FP_M3600_0 > *(float *)v14.m128i_i32 )
    {
      vArctan((unsigned int)v34.left, (unsigned int)v34.top, &v33, &v32);
      v21 = v32;
      v14.m128i_i32[0] = v33;
    }
    LODWORD(v22) = lGetQuadrant((struct EPOINTFL *)&v35);
    v23 = LOBYTE(v22);
    v32 = v22;
    if ( *(float *)v18.m128i_i32 > FP_3600_0 || FP_M3600_0 > *(float *)v18.m128i_i32 )
    {
      vArctan(v35, v36, &v31, &v32);
      v23 = LOBYTE(v32);
      v17 = (LOBYTE(v32) - LOBYTE(v21)) & 3;
      if ( ((LODWORD(v32) - LODWORD(v21)) & 3) == 0 && *(float *)v14.m128i_i32 > v31 )
        v17 = 3;
    }
    v24 = v23 & 3;
    v25 = LOBYTE(v21) & 3;
    v26 = v17 & 3;
    v27 = 0;
    if ( v19 <= 0 )
    {
LABEL_33:
      if ( (unsigned int)bPartialArc(v16, &ppo, v40, &v34, v25, &v33, &v35, v24, &v31, v26) )
      {
        *(_DWORD *)(*(_QWORD *)&v37[0][122] + 152LL) |= 0x100u;
        *(_DWORD *)(*(_QWORD *)&v37[0][122] + 152LL) &= ~0x200u;
        Current = (_QWORD *)EPATHOBJ::ptfxGetCurrent((EPATHOBJ *)&ppo, &v34);
        *(_QWORD *)(*(_QWORD *)&v37[0][122] + 8LL) = *Current;
        if ( (v37[0][31].x & 1) != 0
          || (unsigned int)EPATHOBJ::bStrokeAndOrFill(&ppo, v37, (LINEATTRS *)&v37[0][26], &v39, 1u) )
        {
          v7 = 1;
        }
      }
    }
    else
    {
      while ( (unsigned int)bPartialArc(v16, &ppo, v40, &v34, v25, &v33, &v35, v24, &v31, v26)
           && (unsigned int)bPartialArc(0LL, &ppo, v40, &v35, v24, &v31, &v34, v25, &v33, 3 - v26) )
      {
        ++v27;
        v16 = 0;
        if ( v27 >= v19 )
          goto LABEL_33;
      }
    }
  }
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
LABEL_41:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v37);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v38);
  return v7;
}
