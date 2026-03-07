int __fastcall bRoundRect(struct EPATHOBJ *this, struct _POINTL *a2, __int64 a3)
{
  LONG v5; // eax
  __int64 y; // rdx
  __int64 v7; // rcx
  float v8; // xmm3_4
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // r9d
  int v12; // r10d
  float v13; // xmm4_4
  int v14; // ecx
  int v15; // eax
  float v16; // xmm2_4
  float v17; // xmm3_4
  float v18; // xmm2_4
  float v19; // xmm3_4
  float v20; // xmm1_4
  __m128i v21; // xmm0
  float v22; // xmm1_4
  LONG x; // edi
  LONG v24; // ebx
  __int64 v25; // r15
  __int64 v26; // r12
  __int64 v27; // r13
  struct _POINTL v28; // rax
  struct _POINTL v29; // rax
  struct _POINTL v30; // rax
  struct _POINTL v31; // rax
  struct _POINTL v33; // [rsp+20h] [rbp-58h] BYREF
  struct _POINTL v34; // [rsp+28h] [rbp-50h] BYREF
  __int64 v35; // [rsp+30h] [rbp-48h] BYREF
  struct _POINTL v36; // [rsp+38h] [rbp-40h] BYREF
  float v37[2]; // [rsp+40h] [rbp-38h] BYREF
  struct _POINTL v38; // [rsp+48h] [rbp-30h] BYREF
  struct _POINTL v39; // [rsp+50h] [rbp-28h]
  int v40; // [rsp+58h] [rbp-20h]
  int v41; // [rsp+5Ch] [rbp-1Ch]

  v5 = efHalfDiff((unsigned int)a2[8].x, (unsigned int)a2[9].x, a3, (unsigned int)a3);
  y = (unsigned int)a2[9].y;
  v7 = (unsigned int)a2[8].y;
  v8 = *(float *)&v5;
  v34.x = v5;
  v33.x = efHalfDiff(v7, y, v9, v10);
  if ( EFLOAT::bIsZero((EFLOAT *)&v34) || EFLOAT::bIsZero((EFLOAT *)&v33) )
  {
    v16 = FP_0_0;
    v17 = FP_0_0;
  }
  else
  {
    v14 = abs32(v11);
    v15 = abs32(v12);
    if ( v8 < 0.0 )
      LODWORD(v8) ^= _xmm;
    if ( v13 < 0.0 )
      LODWORD(v13) ^= _xmm;
    v16 = (float)v14 / v8;
    v17 = (float)v15 / v13;
  }
  if ( v16 <= FP_2_0 )
    v18 = v16 * 0.5;
  else
    v18 = FP_1_0;
  if ( v17 <= FP_2_0 )
    v19 = v17 * 0.5;
  else
    v19 = FP_1_0;
  v20 = (float)a2[6].y;
  *(float *)&v35 = (float)a2[6].x * v18;
  v21 = _mm_cvtsi32_si128(a2[7].x);
  *((float *)&v35 + 1) = v20 * v18;
  v22 = (float)a2[7].y * v19;
  v37[0] = _mm_cvtepi32_ps(v21).m128_f32[0] * v19;
  v37[1] = v22;
  EPOINTFL::bToPOINTL((EPOINTFL *)&v35, &v34);
  EPOINTFL::bToPOINTL((EPOINTFL *)v37, &v36);
  x = v36.x;
  v24 = v34.x;
  v25 = (1922922357LL * v34.x) >> 32;
  v26 = (1922922357LL * v34.y) >> 32;
  v27 = (1922922357LL * v36.x) >> 32;
  v35 = (1922922357LL * v36.y) >> 32;
  v33.x = a2[1].x - v36.x;
  v33.y = a2[1].y - v36.y;
  if ( !(unsigned int)EPATHOBJ::bMoveTo(this, 0LL, &v33) )
    return 0;
  v38 = a2[1];
  v28 = v38;
  v38.y -= v35;
  v38.x -= v27;
  v39.x = v28.x - v25;
  v39.y = v28.y - v26;
  v40 = v28.x - v24;
  v41 = v28.y - v34.y;
  if ( !(unsigned int)EPATHOBJ::bPolyBezierTo(this, 0LL, &v38, 3u) )
    return 0;
  v33.x = v24 + a2[2].x;
  v33.y = a2[2].y + v34.y;
  if ( !(unsigned int)EPATHOBJ::bPolyLineTo(this, 0LL, &v33, 1u) )
    return 0;
  v39 = a2[2];
  v29 = v39;
  v39.y -= v35;
  v39.x -= v27;
  v38.x = v25 + v29.x;
  v38.y = v26 + v29.y;
  v40 = v29.x - x;
  v41 = v29.y - v36.y;
  if ( !(unsigned int)EPATHOBJ::bPolyBezierTo(this, 0LL, &v38, 3u) )
    return 0;
  v33.x = x + a2[3].x;
  v33.y = a2[3].y + v36.y;
  if ( !(unsigned int)EPATHOBJ::bPolyLineTo(this, 0LL, &v33, 1u) )
    return 0;
  v38 = a2[3];
  v30 = v38;
  v38.y += v35;
  v38.x += v27;
  v39.x = v25 + v30.x;
  v39.y = v26 + v30.y;
  v40 = v24 + v30.x;
  v41 = v34.y + v30.y;
  if ( !(unsigned int)EPATHOBJ::bPolyBezierTo(this, 0LL, &v38, 3u) )
    return 0;
  v33.x = a2[4].x - v24;
  v33.y = a2[4].y - v34.y;
  if ( !(unsigned int)EPATHOBJ::bPolyLineTo(this, 0LL, &v33, 1u) )
    return 0;
  v39 = a2[4];
  v31 = v39;
  v39.y += v35;
  v39.x += v27;
  v38.x = v31.x - v25;
  v38.y = v31.y - v26;
  v40 = x + v31.x;
  v41 = v36.y + v31.y;
  if ( (unsigned int)EPATHOBJ::bPolyBezierTo(this, 0LL, &v38, 3u) )
    return EPATHOBJ::bCloseFigure(this);
  else
    return 0;
}
