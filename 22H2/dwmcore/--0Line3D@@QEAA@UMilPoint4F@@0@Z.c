/*
 * XREFs of ??0Line3D@@QEAA@UMilPoint4F@@0@Z @ 0x1801F3E88
 * Callers:
 *     ?CalcFrustumOutline@@YAXVCMILMatrix@@PEAULine3D@@111@Z @ 0x1801F3F5C (-CalcFrustumOutline@@YAXVCMILMatrix@@PEAULine3D@@111@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Line3D::Line3D(__int64 a1, float *a2, float *a3)
{
  __m128 v3; // xmm3
  float v4; // xmm2_4
  float v5; // xmm0_4
  float v6; // xmm1_4
  __m128 v7; // xmm0
  __m128 v8; // xmm1

  v3 = (__m128)(unsigned int)FLOAT_1_0;
  v4 = 1.0 / a2[3];
  v5 = v4 * a2[2];
  v6 = v4 * a2[1];
  *(float *)a1 = v4 * *a2;
  *(float *)(a1 + 4) = v6;
  *(float *)(a1 + 8) = v5;
  v3.m128_f32[0] = 1.0 / a3[3];
  v7 = v3;
  v8 = v3;
  v7.m128_f32[0] = (float)(v3.m128_f32[0] * *a3) - *(float *)a1;
  v8.m128_f32[0] = (float)(v3.m128_f32[0] * a3[1]) - *(float *)(a1 + 4);
  v3.m128_f32[0] = (float)(v3.m128_f32[0] * a3[2]) - *(float *)(a1 + 8);
  *(_QWORD *)(a1 + 12) = _mm_unpacklo_ps(v7, v8).m128_u64[0];
  *(_DWORD *)(a1 + 20) = v3.m128_i32[0];
  return a1;
}
