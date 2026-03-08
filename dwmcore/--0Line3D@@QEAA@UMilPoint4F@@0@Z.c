/*
 * XREFs of ??0Line3D@@QEAA@UMilPoint4F@@0@Z @ 0x180215470
 * Callers:
 *     ?CalcFrustumOutline@@YAXVCMILMatrix@@PEAULine3D@@111@Z @ 0x180215908 (-CalcFrustumOutline@@YAXVCMILMatrix@@PEAULine3D@@111@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Line3D::Line3D(__int64 a1, float *a2, float *a3)
{
  __m128 v3; // xmm4
  float v4; // xmm3_4
  float v5; // xmm1_4
  float v6; // xmm2_4
  float v7; // xmm3_4
  __m128 v8; // xmm0
  __m128 v9; // xmm1

  v3 = (__m128)(unsigned int)FLOAT_1_0;
  v4 = 1.0 / a2[3];
  v5 = v4 * *a2;
  v6 = v4 * a2[1];
  v7 = v4 * a2[2];
  *(float *)a1 = v5;
  *(float *)(a1 + 4) = v6;
  *(float *)(a1 + 8) = v7;
  v3.m128_f32[0] = 1.0 / a3[3];
  v8 = v3;
  v8.m128_f32[0] = (float)(v3.m128_f32[0] * *a3) - v5;
  v9 = v3;
  v9.m128_f32[0] = (float)(v3.m128_f32[0] * a3[1]) - v6;
  v3.m128_f32[0] = (float)(v3.m128_f32[0] * a3[2]) - v7;
  *(_QWORD *)(a1 + 12) = _mm_unpacklo_ps(v8, v9).m128_u64[0];
  *(_DWORD *)(a1 + 20) = v3.m128_i32[0];
  return a1;
}
