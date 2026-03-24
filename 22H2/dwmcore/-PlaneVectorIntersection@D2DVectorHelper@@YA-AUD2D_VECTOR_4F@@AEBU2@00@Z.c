/*
 * XREFs of ?PlaneVectorIntersection@D2DVectorHelper@@YA?AUD2D_VECTOR_4F@@AEBU2@00@Z @ 0x1801F7C60
 * Callers:
 *     ?CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z @ 0x1801F657C (-CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z.c)
 * Callees:
 *     <none>
 */

struct D2D_VECTOR_4F *__fastcall D2DVectorHelper::PlaneVectorIntersection(
        D2DVectorHelper *this,
        struct D2D_VECTOR_4F *__return_ptr retstr,
        const struct D2D_VECTOR_4F *a3,
        const struct D2D_VECTOR_4F *a4)
{
  float y; // xmm8_4
  float z; // xmm9_4
  float w; // xmm10_4
  float x; // xmm11_4
  float v8; // xmm13_4
  float v9; // xmm14_4
  float v10; // xmm5_4
  float v11; // xmm6_4
  float v12; // xmm7_4
  float v13; // xmm2_4
  float v14; // xmm4_4
  __m128 v16; // [rsp+0h] [rbp-A8h]
  __m128 v17; // [rsp+0h] [rbp-A8h]

  y = a3->y;
  z = a3->z;
  w = a3->w;
  x = a3->x;
  v16.m128_f32[1] = a4->y - y;
  v8 = retstr->z;
  v16.m128_f32[0] = a4->x - a3->x;
  v9 = retstr->w;
  v16.m128_f32[3] = a4->w - w;
  v16.m128_f32[2] = a4->z - z;
  v10 = _mm_shuffle_ps(v16, v16, 85).m128_f32[0];
  v11 = _mm_shuffle_ps(v16, v16, 170).m128_f32[0];
  v12 = _mm_shuffle_ps(v16, v16, 255).m128_f32[0];
  v13 = (float)((float)((float)(retstr->y * v10) + (float)(retstr->x * v16.m128_f32[0])) + (float)(v8 * v11))
      + (float)(v9 * v12);
  if ( COERCE_FLOAT(LODWORD(v13) & _xmm) < 0.0000011920929 )
  {
    *(struct D2D_VECTOR_4F *)this = *a3;
  }
  else
  {
    v14 = COERCE_FLOAT(COERCE_UNSIGNED_INT(
                         (float)((float)((float)(retstr->y * y) + (float)(retstr->x * x)) + (float)(v8 * z))
                       + (float)(v9 * w)) ^ _xmm)
        / v13;
    v17.m128_f32[0] = v16.m128_f32[0] * v14;
    v17.m128_f32[1] = v10 * v14;
    v17.m128_f32[2] = v11 * v14;
    v17.m128_f32[3] = v12 * v14;
    *(float *)this = x + v17.m128_f32[0];
    *((float *)this + 1) = y + _mm_shuffle_ps(v17, v17, 85).m128_f32[0];
    *((float *)this + 2) = z + _mm_shuffle_ps(v17, v17, 170).m128_f32[0];
    *((float *)this + 3) = w + _mm_shuffle_ps(v17, v17, 255).m128_f32[0];
  }
  return (struct D2D_VECTOR_4F *)this;
}
