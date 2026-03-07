void __fastcall CDxHandleYUVBitmapRealization::CalcDecodedSourceRectAndTransform(
        CBitmapRealization *this,
        CMILMatrix *a2,
        _DWORD *a3,
        _OWORD *a4)
{
  __int128 v8; // xmm0
  float v9; // xmm0_4
  int v10; // eax
  __m128 v11; // xmm2
  float v12; // xmm0_4
  int v13; // eax
  __m128 v14; // xmm2
  float v15; // [rsp+30h] [rbp-48h]
  float v16; // [rsp+30h] [rbp-48h]

  v8 = *(_OWORD *)CBitmapRealization::CalcSourceRect((__int64)this);
  if ( a4 )
    *a4 = v8;
  *a3 = 0;
  a3[1] = 0;
  a3[2] = DWORD2(v8) - v8;
  a3[3] = HIDWORD(v8) - DWORD1(v8);
  if ( CBitmapRealization::CalcImageTransform(this, a2)
    && CMILMatrix::IsTranslateAndScale<1>((__int64)a2)
    && *(float *)a2 > 0.0
    && *((float *)a2 + 5) > 0.0 )
  {
    v9 = (float)(int)a3[2] * *(float *)a2;
    if ( COERCE_UNSIGNED_INT(fabs(v9)) > 0x497FFFF0 )
    {
      v11 = 0LL;
      v11.m128_f32[0] = (float)(int)v9 - v9;
      v10 = (int)v9 - _mm_cmple_ss(v11, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
    }
    else
    {
      v15 = v9 + 6291456.25;
      v10 = (int)(LODWORD(v15) << 10) >> 11;
    }
    a3[2] = v10;
    v12 = (float)(int)a3[3] * *((float *)a2 + 5);
    if ( COERCE_UNSIGNED_INT(fabs(v12)) > 0x497FFFF0 )
    {
      v14 = 0LL;
      v14.m128_f32[0] = (float)(int)v12 - v12;
      v13 = (int)v12 - _mm_cmple_ss(v14, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
    }
    else
    {
      v16 = v12 + 6291456.25;
      v13 = (int)(LODWORD(v16) << 10) >> 11;
    }
    a3[3] = v13;
    CMILMatrix::Set2DScaleAndOffset(a2, 1.0, 1.0, *((float *)a2 + 8), *((float *)a2 + 9));
  }
}
