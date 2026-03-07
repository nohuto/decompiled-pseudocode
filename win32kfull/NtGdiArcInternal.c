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
  float v16; // eax
  int v17; // ecx
  int v18; // r9d
  int v19; // r10d
  int v20; // r11d
  int v21; // esi
  int v22; // r14d
  float v23; // xmm9_4
  float v24; // xmm6_4
  int v25; // r9d
  int v26; // r10d
  float v27; // xmm7_4
  __m128i v28; // xmm6
  __m128i v29; // xmm7
  float v30; // xmm2_4
  BOOL IsZero; // eax
  BOOL v32; // eax
  _QWORD *Current; // rax
  unsigned int v35; // esi
  unsigned int v36; // ebx
  unsigned int v37; // eax
  ULONG v38; // ecx
  __int64 v39; // [rsp+58h] [rbp-B0h] BYREF
  float v40; // [rsp+60h] [rbp-A8h] BYREF
  int v41; // [rsp+64h] [rbp-A4h] BYREF
  __int64 v42; // [rsp+68h] [rbp-A0h] BYREF
  POINTL *v43[2]; // [rsp+70h] [rbp-98h] BYREF
  int v44; // [rsp+80h] [rbp-88h] BYREF
  struct _XFORMOBJ v45; // [rsp+88h] [rbp-80h] BYREF
  struct _RECTL v46; // [rsp+98h] [rbp-70h] BYREF
  struct _POINTL v47[5]; // [rsp+A8h] [rbp-60h] BYREF
  struct _POINTL v48; // [rsp+D0h] [rbp-38h] BYREF
  int v49; // [rsp+E8h] [rbp-20h]
  int v50; // [rsp+ECh] [rbp-1Ch]
  int v51; // [rsp+F0h] [rbp-18h]
  int v52; // [rsp+F4h] [rbp-14h]
  PATHOBJ ppo; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v54; // [rsp+100h] [rbp-8h]

  v46.right = a5;
  v46.bottom = a6;
  v46.left = a3;
  v46.top = a4;
  DCOBJ::DCOBJ((DCOBJ *)v43, a2);
  v11 = v43[0];
  if ( !v43[0] || (v43[0][4].y & 0x10000) != 0 )
  {
    v38 = 6;
    goto LABEL_49;
  }
  if ( a1 > 3 )
  {
    v38 = 87;
LABEL_49:
    EngSetLastError(v38);
    goto LABEL_50;
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
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
LABEL_50:
    DCOBJ::~DCOBJ((DCOBJ *)v43);
    return 0LL;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v45, (struct XDCOBJ *)v43, 516);
  EBOX::EBOX((EBOX *)v47, (struct DCOBJ *)v43, &v46, (struct _LINEATTRS *)&v43[0][26], 1);
  if ( v47[0].y )
    goto LABEL_32;
  if ( v47[0].x )
  {
LABEL_33:
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
    DCOBJ::~DCOBJ((DCOBJ *)v43);
    return v14;
  }
  LODWORD(v15) = efHalfDiff(v50, -v52);
  LODWORD(v16) = efHalfDiff(v49, -v51);
  v21 = 0;
  v22 = 0;
  v44 = 0;
  v40 = 0.0;
  v23 = v16;
  v42 = 0LL;
  if ( v17 == v20 || v19 == v18 )
  {
    v28 = (__m128i)FP_0_0;
    HIDWORD(v42) = FP_0_0;
    v29 = (__m128i)FP_0_0;
    LODWORD(v42) = FP_0_0;
  }
  else
  {
    v24 = COERCE_FLOAT(efHalfDiff(v20, v17));
    v27 = COERCE_FLOAT(efHalfDiff(v26, v25));
    vArctan(
      COERCE_INT((float)((float)a7 - v23) / v24),
      COERCE_INT((float)((float)a8 - v15) / v27),
      (float *)&v42 + 1,
      &v44);
    *((float *)&v39 + 1) = (float)((float)a10 - v15) / v27;
    *(float *)&v39 = (float)((float)a9 - v23) / v24;
    vArctan(v39, SHIDWORD(v39), (float *)&v42, (int *)&v40);
    v28 = (__m128i)HIDWORD(v42);
    v29 = (__m128i)(unsigned int)v42;
    v21 = v44;
    v22 = LODWORD(v40);
  }
  v30 = *(float *)v29.m128i_i32 - *(float *)v28.m128i_i32;
  v40 = *(float *)v29.m128i_i32 - *(float *)v28.m128i_i32;
  if ( (float)(*(float *)v29.m128i_i32 - *(float *)v28.m128i_i32) < 0.0 )
  {
    LODWORD(v30) ^= _xmm;
    v40 = v30;
  }
  IsZero = EFLOAT::bIsZero((EFLOAT *)&v40);
  if ( (float)(v30 - FP_3_0) >= 0.0 || IsZero )
  {
    vCosSin(_mm_cvtsi128_si32(v28), &v40, (float *)&v41);
    vCosSin(_mm_cvtsi128_si32(v29), (float *)&v39, (float *)&v39 + 1);
  }
  else
  {
    vCosSinPrecise((unsigned int)_mm_cvtsi128_si32(v28), &v40);
    vCosSinPrecise((unsigned int)_mm_cvtsi128_si32(v29), (float *)&v39);
  }
  v32 = v21 != v22 || *(float *)v29.m128i_i32 <= *(float *)v28.m128i_i32;
  if ( !(unsigned int)bPartialArc(
                        (unsigned int)(a1 == 1) + 1,
                        (EPATHOBJ *)&ppo,
                        v47,
                        (__int64)&v40,
                        v21,
                        (__int64)&v42 + 4,
                        (__int64)&v39,
                        v22,
                        (__int64)&v42,
                        v32) )
    goto LABEL_32;
  if ( a1 == 1 )
  {
    *(_DWORD *)(*(_QWORD *)&v43[0][122] + 152LL) |= 0x100u;
    *(_DWORD *)(*(_QWORD *)&v43[0][122] + 152LL) &= ~0x200u;
    Current = (_QWORD *)EPATHOBJ::ptfxGetCurrent((EPATHOBJ *)&ppo, &v39);
    *(_QWORD *)(*(_QWORD *)&v43[0][122] + 8LL) = *Current;
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
    && (!(unsigned int)EPATHOBJ::bPolyLineTo((EPATHOBJ *)&ppo, 0LL, &v48, 1u)
     || !EPATHOBJ::bCloseFigure((EPATHOBJ *)&ppo)) )
  {
    goto LABEL_32;
  }
LABEL_37:
  if ( (v43[0][31].x & 1) != 0 )
    goto LABEL_33;
  v35 = 0;
  if ( !a1 || (v36 = a1 - 1) == 0 )
  {
    v37 = EPATHOBJ::bStrokeAndOrFill(&ppo, v43, (LINEATTRS *)&v43[0][26], &v45, 1u);
    goto LABEL_43;
  }
  if ( v36 - 1 <= 1 )
  {
    v37 = EPATHOBJ::bStrokeAndOrFill(&ppo, v43, (LINEATTRS *)&v43[0][26], &v45, 3u);
LABEL_43:
    v35 = v37;
  }
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
  if ( v43[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v43);
  return v35;
}
