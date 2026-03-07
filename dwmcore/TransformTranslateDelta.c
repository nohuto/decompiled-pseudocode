float *__fastcall TransformTranslateDelta(float a1, float a2, __m128 *a3, float *a4, float *a5)
{
  float *result; // rax
  float v7; // xmm0_4

  result = a5;
  v7 = (float)((float)(_mm_shuffle_ps(*a3, *a3, 85).m128_f32[0] * a1)
             + (float)(_mm_shuffle_ps(*a3, *a3, 255).m128_f32[0] * a2))
     + 0.0;
  *a4 = (float)((float)(COERCE_FLOAT(*a3) * a1) + (float)(_mm_shuffle_ps(*a3, *a3, 170).m128_f32[0] * a2)) + 0.0;
  *a5 = v7;
  return result;
}
