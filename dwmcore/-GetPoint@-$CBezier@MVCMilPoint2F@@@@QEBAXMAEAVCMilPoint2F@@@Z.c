void __fastcall CBezier<float,CMilPoint2F>::GetPoint(float *a1, float a2, _QWORD *a3)
{
  __m128 v3; // xmm5
  __m128 v4; // xmm6
  __m128 v5; // xmm3
  __m128 v6; // xmm2
  float v7; // xmm4_4

  v3 = (__m128)(unsigned int)FLOAT_1_0;
  v3.m128_f32[0] = 1.0 - a2;
  v4 = v3;
  v4.m128_f32[0] = v3.m128_f32[0] * v3.m128_f32[0];
  v5 = v4;
  v5.m128_f32[0] = (float)(v3.m128_f32[0] * v3.m128_f32[0]) * (float)(1.0 - a2);
  v4.m128_f32[0] = (float)((float)(v3.m128_f32[0] * v3.m128_f32[0]) * 3.0) * a2;
  v6 = v5;
  v6.m128_f32[0] = (float)(v5.m128_f32[0] * *a1) + (float)(v4.m128_f32[0] * a1[2]);
  v3.m128_f32[0] = (float)((float)(1.0 - a2) * 3.0) * (float)(a2 * a2);
  v7 = (float)(a2 * a2) * a2;
  v4.m128_f32[0] = (float)((float)((float)(v4.m128_f32[0] * a1[3]) + (float)(v5.m128_f32[0] * a1[1]))
                         + (float)(v3.m128_f32[0] * a1[5]))
                 + (float)(v7 * a1[7]);
  v6.m128_f32[0] = (float)(v6.m128_f32[0] + (float)(v3.m128_f32[0] * a1[4])) + (float)(v7 * a1[6]);
  *a3 = _mm_unpacklo_ps(v6, v4).m128_u64[0];
}
