__int64 __fastcall efSin(int a1)
{
  float v1; // xmm1_4
  int v2; // edi
  int v3; // ebx
  double v4; // xmm0_8
  float v5; // xmm4_4
  __m128 v6; // xmm0
  __m128 v7; // xmm0
  __m128i v8; // xmm1
  int v10; // [rsp+38h] [rbp+10h] BYREF

  v1 = *(float *)&a1;
  if ( *(float *)&a1 < 0.0 )
  {
    v2 = 1;
    v3 = 0;
    LODWORD(v1) = a1 ^ _xmm;
  }
  else
  {
    v2 = 0;
    v3 = 1;
  }
  v10 = 0;
  bFToL(v1 * *(float *)&FP_SINE_FACTOR, &v10, 5u);
  v4 = eFraction();
  v5 = *(float *)&v4;
  if ( ((v10 >> 5) & 2) == 0 )
    v3 = v2;
  if ( ((v10 >> 5) & 1) != 0 )
  {
    v6 = (__m128)*((unsigned int *)&unk_1C02CEEC0 - (v10 & 0x1F));
    v6.m128_f32[0] = (float)(v6.m128_f32[0] - *((float *)&unk_1C02CEEBC - (v10 & 0x1F))) * v5;
    v7 = _mm_xor_ps(v6, (__m128)(unsigned int)_xmm);
    v7.m128_f32[0] = v7.m128_f32[0] + *((float *)&unk_1C02CEEC0 - (v10 & 0x1F));
  }
  else
  {
    v7 = (__m128)LODWORD(gaefSin[(v10 & 0x1F) + 1]);
    v7.m128_f32[0] = (float)((float)(v7.m128_f32[0] - gaefSin[v10 & 0x1F]) * v5) + gaefSin[v10 & 0x1F];
  }
  v8 = (__m128i)v7;
  if ( v3 )
    v8 = (__m128i)_mm_xor_ps(v7, (__m128)(unsigned int)_xmm);
  return (unsigned int)_mm_cvtsi128_si32(v8);
}
