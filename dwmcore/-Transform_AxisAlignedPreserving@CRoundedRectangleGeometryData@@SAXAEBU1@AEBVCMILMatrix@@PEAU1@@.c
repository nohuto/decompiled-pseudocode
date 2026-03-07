void __fastcall CRoundedRectangleGeometryData::Transform_AxisAlignedPreserving(
        const struct CRoundedRectangleGeometryData *a1,
        const struct CMILMatrix *a2,
        struct CRoundedRectangleGeometryData *a3)
{
  bool v3; // zf
  char v7; // al
  const struct CMILMatrix *v8; // rcx
  char v9; // r11
  float v10; // xmm3_4
  int v11; // xmm6_4
  float v12; // xmm6_4
  __m128i v13; // xmm0
  bool v14; // cl
  bool v15; // al
  int v16; // eax
  __m128i *p_si128; // rdx
  __int64 v18; // r8
  _DWORD *v19; // rcx
  __int64 v20; // rax
  __m128 v21; // xmm1
  __m128 v22; // xmm0
  float v23; // xmm1_4
  float v24; // xmm0_4
  float v25; // xmm1_4
  float v26; // xmm2_4
  float v27; // xmm2_4
  float v28; // xmm0_4
  __m128 v29; // xmm5
  __m128 v30; // xmm4
  __m128i si128; // [rsp+20h] [rbp-40h] BYREF
  __int128 v32; // [rsp+30h] [rbp-30h] BYREF

  v3 = *((_BYTE *)a1 + 52) == 0;
  si128 = 0LL;
  if ( v3 )
  {
    v32 = *(_OWORD *)a1;
  }
  else
  {
    v23 = *((float *)a1 + 1);
    LODWORD(v32) = *(_DWORD *)a1;
    *(_QWORD *)((char *)&v32 + 4) = __PAIR64__(*(float *)&v32 + *((float *)a1 + 2), LODWORD(v23));
    *((float *)&v32 + 3) = v23 + *((float *)a1 + 3);
  }
  CMILMatrix::Transform2DBoundsHelper<0>(a2, (struct MilRectF *)&v32);
  v7 = CMILMatrix::Is90Or270RotationWithTranslateAndScaleIgnoreZ<1>(a2);
  v8 = (const struct CMILMatrix *)((char *)a2 + 4);
  v9 = v7;
  if ( !v7 )
    v8 = a2;
  LODWORD(v10) = *(_DWORD *)v8 & _xmm;
  if ( v7 )
    v11 = *((_DWORD *)a2 + 4);
  else
    v11 = *((_DWORD *)a2 + 5);
  LODWORD(v12) = v11 & _xmm;
  if ( *((_BYTE *)a1 + 52) )
  {
    v29 = (__m128)*((unsigned int *)a1 + 4);
    v30 = (__m128)*((unsigned int *)a1 + 5);
    v24 = *(float *)si128.m128i_i32;
    v25 = *(float *)&si128.m128i_i32[1];
    v26 = *(float *)&si128.m128i_i32[2];
    *(_DWORD *)a3 = si128.m128i_i32[0];
    v27 = v26 - v24;
    v28 = *(float *)&si128.m128i_i32[3];
    *((float *)a3 + 1) = v25;
    v29.m128_f32[0] = v29.m128_f32[0] * v10;
    *((_BYTE *)a3 + 52) = 1;
    v30.m128_f32[0] = v30.m128_f32[0] * v12;
    *((float *)a3 + 2) = v27;
    *((float *)a3 + 3) = v28 - v25;
    if ( v7 )
    {
      *(_QWORD *)&v32 = _mm_unpacklo_ps(v30, v29).m128_u64[0];
      v30.m128_i32[0] = DWORD1(v32);
      v29.m128_i32[0] = v32;
    }
    *((_DWORD *)a3 + 4) = v29.m128_i32[0];
    *((_DWORD *)a3 + 5) = v30.m128_i32[0];
  }
  else
  {
    v13 = si128;
    *((_BYTE *)a3 + 52) = 0;
    *(__m128i *)a3 = v13;
    v14 = *(float *)a2 < 0.0 || *((float *)a2 + 1) < 0.0;
    v15 = *((float *)a2 + 4) < 0.0 || *((float *)a2 + 5) < 0.0;
    if ( v14 )
    {
      if ( v15 )
      {
        v16 = 3;
        si128.m128i_i32[0] = 2;
        *(__int64 *)((char *)si128.m128i_i64 + 4) = 3LL;
        si128.m128i_i32[3] = 1;
      }
      else
      {
        si128.m128i_i64[0] = 1LL;
        v16 = 0;
        si128.m128i_i64[1] = 0x200000003LL;
      }
    }
    else if ( v15 )
    {
      v16 = 2;
      si128.m128i_i64[0] = 0x200000003LL;
      si128.m128i_i64[1] = 1LL;
    }
    else
    {
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      v16 = si128.m128i_i32[1];
    }
    if ( v9 )
    {
      si128.m128i_i32[1] = 3;
      si128.m128i_i32[3] = v16;
    }
    p_si128 = &si128;
    v18 = 4LL;
    v19 = (_DWORD *)((char *)a3 + 16);
    do
    {
      if ( *((_BYTE *)a1 + 52) )
        v20 = 16LL;
      else
        v20 = 8LL * p_si128->m128i_u32[0] + 16;
      v21 = (__m128)*(unsigned int *)((char *)a1 + v20);
      v22 = (__m128)*(unsigned int *)((char *)a1 + v20 + 4);
      v21.m128_f32[0] = v21.m128_f32[0] * v10;
      v22.m128_f32[0] = v22.m128_f32[0] * v12;
      if ( v9 )
      {
        *(_QWORD *)&v32 = _mm_unpacklo_ps(v22, v21).m128_u64[0];
        v22.m128_i32[0] = DWORD1(v32);
        v21.m128_i32[0] = v32;
      }
      *v19 = v21.m128_i32[0];
      p_si128 = (__m128i *)((char *)p_si128 + 4);
      v19[1] = v22.m128_i32[0];
      v19 += 2;
      --v18;
    }
    while ( v18 );
  }
  *((float *)a3 + 12) = fminf(v10, v12) * *((float *)a1 + 12);
}
