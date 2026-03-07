struct D2D_VECTOR_2F __fastcall CalcDirectionVector(const struct D2D_POINT_2F *a1, const struct D2D_POINT_2F *a2)
{
  float v2; // xmm6_4
  float v3; // xmm7_4
  __m128 v4; // xmm2
  __m128 v5; // xmm0

  v2 = a2->x - a1->x;
  v3 = a2->y - a1->y;
  v4 = (__m128)(unsigned int)FLOAT_1_0;
  v4.m128_f32[0] = 1.0 / sqrtf_0((float)(v3 * v3) + (float)(v2 * v2));
  v5 = v4;
  v4.m128_f32[0] = v4.m128_f32[0] * v3;
  v5.m128_f32[0] = v5.m128_f32[0] * v2;
  return (struct D2D_VECTOR_2F)_mm_unpacklo_ps(v5, v4).m128_u64[0];
}
