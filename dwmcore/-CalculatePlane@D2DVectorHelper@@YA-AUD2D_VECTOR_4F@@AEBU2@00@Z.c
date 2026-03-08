/*
 * XREFs of ?CalculatePlane@D2DVectorHelper@@YA?AUD2D_VECTOR_4F@@AEBU2@00@Z @ 0x180009EAC
 * Callers:
 *     ?Init@CVisualDepthGeometry@@AEAAXAEBUfloat2@Numerics@Foundation@Windows@@AEBVCMILMatrix@@@Z @ 0x180009BC0 (-Init@CVisualDepthGeometry@@AEAAXAEBUfloat2@Numerics@Foundation@Windows@@AEBVCMILMatrix@@@Z.c)
 *     ?Create@CPolygon@@SAJPEAV?$DynArray@UPoint@CPolygon@@$0A@@@PEAVCVisual@@PEAVCContent@@PEAVCMILMatrix@@MIW4Enum@MilBitmapBorderMode@@W46MilCompositingMode@@W46MilBitmapInterpolationMode@@_N7PEAUD2D_VECTOR_4F@@PEAPEAV1@@Z @ 0x18020FDD4 (-Create@CPolygon@@SAJPEAV-$DynArray@UPoint@CPolygon@@$0A@@@PEAVCVisual@@PEAVCContent@@PEAVCMILMa.c)
 *     ?GetPlaneOfVisual@ShadowHelpers@@YA?AUD2D_VECTOR_4F@@PEAVCVisual@@@Z @ 0x1802B4B08 (-GetPlaneOfVisual@ShadowHelpers@@YA-AUD2D_VECTOR_4F@@PEAVCVisual@@@Z.c)
 * Callees:
 *     sqrtf_0 @ 0x1801177AC (sqrtf_0.c)
 */

struct D2D_VECTOR_4F *__fastcall D2DVectorHelper::CalculatePlane(
        struct D2D_VECTOR_4F *this,
        struct D2D_VECTOR_4F *__return_ptr retstr,
        const struct D2D_VECTOR_4F *a3,
        const struct D2D_VECTOR_4F *a4)
{
  float y; // xmm3_4
  float z; // xmm4_4
  float w; // xmm5_4
  float v8; // xmm8_4
  float x; // xmm9_4
  float v10; // xmm10_4
  float v11; // xmm11_4
  __m128 v12; // xmm7
  float v13; // xmm4_4
  float v14; // xmm3_4
  float v15; // xmm5_4
  float v16; // xmm2_4
  float v17; // xmm0_4
  float v18; // xmm6_4
  float v19; // xmm7_4
  float v20; // xmm12_4
  float v21; // xmm3_4
  struct D2D_VECTOR_4F *result; // rax
  __m128 v23; // [rsp+28h] [rbp-29h]
  __m128 v24; // [rsp+28h] [rbp-29h]

  y = a3->y;
  z = a3->z;
  w = a3->w;
  v8 = retstr->y;
  v23.m128_f32[0] = a4->x - a3->x;
  v23.m128_f32[1] = a4->y - y;
  x = retstr->x;
  v10 = retstr->z;
  v11 = retstr->w;
  v23.m128_f32[3] = a4->w - w;
  v23.m128_f32[2] = a4->z - z;
  v12 = v23;
  v23.m128_f32[0] = a3->x - retstr->x;
  v23.m128_f32[1] = y - v8;
  v23.m128_f32[2] = z - v10;
  v23.m128_f32[3] = w - v11;
  v13 = _mm_shuffle_ps(v12, v12, 170).m128_f32[0];
  v14 = _mm_shuffle_ps(v12, v12, 85).m128_f32[0];
  v15 = _mm_shuffle_ps(v23, v23, 85).m128_f32[0];
  v16 = _mm_shuffle_ps(v23, v23, 170).m128_f32[0];
  v17 = v23.m128_f32[0] * v13;
  v18 = v23.m128_f32[0] * v14;
  v24.m128_f32[0] = (float)(v13 * v15) - (float)(v14 * v16);
  v24.m128_i32[3] = 0;
  v24.m128_f32[1] = (float)(v12.m128_f32[0] * v16) - v17;
  v24.m128_f32[2] = v18 - (float)(v12.m128_f32[0] * v15);
  v19 = _mm_shuffle_ps(v24, v24, 85).m128_f32[0];
  v20 = _mm_shuffle_ps(v24, v24, 170).m128_f32[0];
  v21 = sqrtf_0((float)((float)(v19 * v19) + (float)(v24.m128_f32[0] * v24.m128_f32[0])) + (float)(v20 * v20));
  if ( COERCE_FLOAT(LODWORD(v21) & _xmm) < 0.0000011920929 )
    v21 = *(float *)&FLOAT_1_0;
  result = this;
  this->x = v24.m128_f32[0] / v21;
  this->z = v20 / v21;
  this->w = COERCE_FLOAT(COERCE_UNSIGNED_INT(
                           (float)((float)((float)(v8 * v19) + (float)(x * v24.m128_f32[0])) + (float)(v10 * v20))
                         + (float)(v11 * 0.0)) ^ _xmm)
          / v21;
  this->y = v19 / v21;
  return result;
}
