int *__fastcall PixelAlign(int *a1, float *a2)
{
  float v2; // xmm3_4
  int v5; // eax
  float v6; // xmm3_4
  int v7; // eax
  float v8; // xmm3_4
  int v9; // eax
  float v10; // xmm3_4
  int v11; // eax
  __m128 v13; // xmm2
  __m128 v14; // xmm2
  __m128 v15; // xmm2
  __m128 v16; // xmm2
  __m128 v17; // rt1
  float v18; // [rsp+40h] [rbp+8h]
  float v19; // [rsp+40h] [rbp+8h]
  float v20; // [rsp+40h] [rbp+8h]
  float v21; // [rsp+40h] [rbp+8h]

  v2 = *a2;
  if ( (*(_DWORD *)a2 & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v13 = 0LL;
    v13.m128_f32[0] = (float)(int)v2 - v2;
    v5 = (int)v2 - _mm_cmple_ss(v13, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
  }
  else
  {
    v18 = v2 + 6291456.25;
    v5 = (int)(LODWORD(v18) << 10) >> 11;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v2 - (float)v5) & _xmm) > 0.00390625 )
    v5 = CFloatFPU::FloorSat(v2);
  v6 = a2[1];
  *a1 = v5;
  if ( (LODWORD(v6) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v14 = 0LL;
    v14.m128_f32[0] = (float)(int)v6 - v6;
    v7 = (int)v6 - _mm_cmple_ss(v14, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
  }
  else
  {
    v19 = v6 + 6291456.25;
    v7 = (int)(LODWORD(v19) << 10) >> 11;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v6 - (float)v7) & _xmm) > 0.00390625 )
    v7 = CFloatFPU::FloorSat(v6);
  v8 = a2[2];
  a1[1] = v7;
  if ( (LODWORD(v8) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v15 = 0LL;
    v15.m128_f32[0] = (float)(int)v8 - v8;
    v9 = (int)v8 - _mm_cmple_ss(v15, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
  }
  else
  {
    v20 = v8 + 6291456.25;
    v9 = (int)(LODWORD(v20) << 10) >> 11;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v8 - (float)v9) & _xmm) > 0.00390625 )
    v9 = CFloatFPU::CeilingSat(v8);
  v10 = a2[3];
  a1[2] = v9;
  if ( (LODWORD(v10) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v16 = 0LL;
    v16.m128_f32[0] = (float)(int)v10 - v10;
    v17.m128_f32[0] = FLOAT_N0_5;
    v11 = (int)v10 - _mm_cmple_ss(v16, v17).m128_u32[0];
  }
  else
  {
    v21 = v10 + 6291456.25;
    v11 = (int)(LODWORD(v21) << 10) >> 11;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v10 - (float)v11) & _xmm) > 0.00390625 )
    v11 = CFloatFPU::CeilingSat(v10);
  a1[3] = v11;
  return a1;
}
