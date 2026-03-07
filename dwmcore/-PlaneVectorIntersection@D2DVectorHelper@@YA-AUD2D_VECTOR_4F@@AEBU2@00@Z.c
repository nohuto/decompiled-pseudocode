struct D2D_VECTOR_4F *__fastcall D2DVectorHelper::PlaneVectorIntersection(
        D2DVectorHelper *this,
        struct D2D_VECTOR_4F *__return_ptr retstr,
        const struct D2D_VECTOR_4F *a3,
        const struct D2D_VECTOR_4F *a4)
{
  float y; // xmm4_4
  float v5; // xmm8_4
  float z; // xmm9_4
  float w; // xmm10_4
  float x; // xmm11_4
  float v9; // xmm13_4
  float v10; // xmm14_4
  float v11; // xmm5_4
  float v12; // xmm6_4
  float v13; // xmm7_4
  float v14; // xmm2_4
  float v15; // xmm4_4
  __m128 v17; // [rsp+0h] [rbp-A8h]
  __m128 v18; // [rsp+0h] [rbp-A8h]

  y = retstr->y;
  v5 = a3->y;
  z = a3->z;
  w = a3->w;
  x = a3->x;
  v17.m128_f32[1] = a4->y - v5;
  v9 = retstr->z;
  v17.m128_f32[0] = a4->x - a3->x;
  v10 = retstr->w;
  v17.m128_f32[3] = a4->w - w;
  v17.m128_f32[2] = a4->z - z;
  v11 = _mm_shuffle_ps(v17, v17, 85).m128_f32[0];
  v12 = _mm_shuffle_ps(v17, v17, 170).m128_f32[0];
  v13 = _mm_shuffle_ps(v17, v17, 255).m128_f32[0];
  v14 = (float)((float)((float)(retstr->x * v17.m128_f32[0]) + (float)(y * v11)) + (float)(v9 * v12))
      + (float)(v10 * v13);
  if ( COERCE_FLOAT(LODWORD(v14) & _xmm) < 0.0000011920929 )
  {
    *(struct D2D_VECTOR_4F *)this = *a3;
  }
  else
  {
    v15 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(y * v5) + (float)(retstr->x * x)) + (float)(v9 * z)) + (float)(v10 * w)) ^ _xmm)
        / v14;
    v18.m128_f32[0] = v17.m128_f32[0] * v15;
    v18.m128_f32[1] = v11 * v15;
    v18.m128_f32[2] = v12 * v15;
    v18.m128_f32[3] = v13 * v15;
    *(float *)this = x + v18.m128_f32[0];
    *((float *)this + 1) = v5 + _mm_shuffle_ps(v18, v18, 85).m128_f32[0];
    *((float *)this + 2) = z + _mm_shuffle_ps(v18, v18, 170).m128_f32[0];
    *((float *)this + 3) = w + _mm_shuffle_ps(v18, v18, 255).m128_f32[0];
  }
  return (struct D2D_VECTOR_4F *)this;
}
