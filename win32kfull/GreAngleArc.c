__int64 __fastcall GreAngleArc(HDC a1, int a2, int a3, int a4, unsigned int a5, float a6)
{
  POINTL *v9; // rcx
  POINTL v10; // rdx
  int v11; // r14d
  unsigned int v12; // r14d
  float v13; // xmm7_4
  __m128i v14; // xmm6
  LONG top; // ecx
  unsigned int v16; // r13d
  char v17; // bl
  __m128i v18; // xmm2
  int v19; // r12d
  __m128i v20; // xmm7
  float v21; // xmm2_4
  BOOL IsZero; // eax
  float v23; // edi
  float v24; // eax
  char v25; // si
  int v26; // esi
  int v27; // edi
  int v28; // ebx
  int v29; // r15d
  _QWORD *Current; // rax
  ULONG v32; // ecx
  float v33; // [rsp+58h] [rbp-B0h] BYREF
  float v34; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v35; // [rsp+60h] [rbp-A8h] BYREF
  struct _RECTL v36; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v37; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v38; // [rsp+7Ch] [rbp-8Ch] BYREF
  POINTL *v39[2]; // [rsp+80h] [rbp-88h] BYREF
  struct _XFORMOBJ v40; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v41[80]; // [rsp+A8h] [rbp-60h] BYREF
  PATHOBJ ppo; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v43; // [rsp+100h] [rbp-8h]

  v33 = 0.0;
  DCOBJ::DCOBJ((DCOBJ *)v39, a1);
  v9 = v39[0];
  if ( !v39[0] || (v39[0][4].y & 0x10000) != 0 )
  {
    v32 = 6;
    goto LABEL_43;
  }
  v10 = v39[0][122];
  v11 = *(_DWORD *)(*(_QWORD *)&v10 + 152LL);
  if ( (v11 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v39[0], *(_QWORD *)(*(_QWORD *)&v10 + 160LL));
    v9 = v39[0];
  }
  if ( (v11 & 0x2000) != 0 )
    GreDCSelectPen(v9, *(_QWORD *)(*(_QWORD *)&v9[122] + 168LL));
  v36.right = a4 + a2;
  v36.left = a2 - a4;
  v36.top = a3 - a4;
  v36.bottom = a4 + a3;
  if ( a4 < 0 || a2 - a4 > a2 || a4 + a2 < a2 || a3 - a4 > a3 || a4 + a3 < a3 )
  {
    v32 = 87;
LABEL_43:
    EngSetLastError(v32);
    goto LABEL_44;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v40, (struct XDCOBJ *)v39, 516);
  v12 = 1;
  PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, (DC **)v39, 1);
  if ( !v43 )
    goto LABEL_40;
  ERECTL::vOrder((ERECTL *)&v36);
  v13 = a6;
  v14 = (__m128i)a5;
  v35 = a5;
  if ( a6 < 0.0 )
  {
    top = v36.top;
    v14 = (__m128i)_mm_xor_ps((__m128)a5, (__m128)_xmm);
    LODWORD(v13) = LODWORD(a6) ^ _xmm;
    v35 = v14.m128i_i32[0];
    v36.top = v36.bottom;
    v36.bottom = top;
  }
  EBOX::EBOX((EBOX *)v41, (struct EXFORMOBJ *)&v40, &v36);
  v16 = 2;
  bFToL(v13 * FP_1DIV90, (int *)&v33, 5u);
  v17 = LOBYTE(v33);
  v18 = v14;
  *(float *)v18.m128i_i32 = *(float *)v14.m128i_i32 + v13;
  v19 = SLODWORD(v33) >> 2;
  if ( SLODWORD(v33) >> 2 > 8 )
    v19 = 8;
  v20 = v18;
  v21 = *(float *)v18.m128i_i32 - *(float *)v14.m128i_i32;
  v33 = *(float *)v20.m128i_i32;
  v34 = v21;
  IsZero = EFLOAT::bIsZero((EFLOAT *)&v34);
  if ( (float)(v21 - FP_3_0) >= 0.0 || IsZero )
  {
    vCosSin((unsigned int)_mm_cvtsi128_si32(v14), &v36, &v36.top);
    vCosSin((unsigned int)_mm_cvtsi128_si32(v20), &v37, &v38);
  }
  else
  {
    vCosSinPrecise((unsigned int)_mm_cvtsi128_si32(v14), &v36, &v36.top);
    vCosSinPrecise((unsigned int)_mm_cvtsi128_si32(v20), &v37, &v38);
  }
  LODWORD(v23) = lGetQuadrant((struct EPOINTFL *)&v36);
  v34 = v23;
  if ( *(float *)v14.m128i_i32 > FP_3600_0 || FP_M3600_0 > *(float *)v14.m128i_i32 )
  {
    vArctan((unsigned int)v36.left, (unsigned int)v36.top, &v35, &v34);
    v23 = v34;
    v14.m128i_i32[0] = v35;
  }
  LODWORD(v24) = lGetQuadrant((struct EPOINTFL *)&v37);
  v25 = LOBYTE(v24);
  v34 = v24;
  if ( *(float *)v20.m128i_i32 > FP_3600_0 || FP_M3600_0 > *(float *)v20.m128i_i32 )
  {
    vArctan(v37, v38, &v33, &v34);
    v25 = LOBYTE(v34);
    v17 = (LOBYTE(v34) - LOBYTE(v23)) & 3;
    if ( ((LODWORD(v34) - LODWORD(v23)) & 3) == 0 && *(float *)v14.m128i_i32 > v33 )
      v17 = 3;
  }
  v26 = v25 & 3;
  v27 = LOBYTE(v23) & 3;
  v28 = v17 & 3;
  v29 = 0;
  if ( v19 > 0 )
  {
    while ( (unsigned int)bPartialArc(v16, &ppo, v41, &v36, v27, &v35, &v37, v26, &v33, v28)
         && (unsigned int)bPartialArc(0LL, &ppo, v41, &v37, v26, &v33, &v36, v27, &v35, 3 - v28) )
    {
      v16 = 0;
      if ( ++v29 >= v19 )
        goto LABEL_33;
    }
    goto LABEL_40;
  }
LABEL_33:
  if ( !(unsigned int)bPartialArc(v16, &ppo, v41, &v36, v27, &v35, &v37, v26, &v33, v28) )
  {
LABEL_40:
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
LABEL_44:
    DCOBJ::~DCOBJ((DCOBJ *)v39);
    return 0LL;
  }
  *(_DWORD *)(*(_QWORD *)&v39[0][122] + 152LL) |= 0x100u;
  *(_DWORD *)(*(_QWORD *)&v39[0][122] + 152LL) &= ~0x200u;
  Current = (_QWORD *)EPATHOBJ::ptfxGetCurrent((EPATHOBJ *)&ppo, &v36);
  *(_QWORD *)(*(_QWORD *)&v39[0][122] + 8LL) = *Current;
  if ( (v39[0][31].x & 1) == 0
    && !(unsigned int)EPATHOBJ::bStrokeAndOrFill(&ppo, v39, (LINEATTRS *)&v39[0][26], &v40, 1u) )
  {
    v12 = 0;
  }
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
  if ( v39[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v39);
  return v12;
}
