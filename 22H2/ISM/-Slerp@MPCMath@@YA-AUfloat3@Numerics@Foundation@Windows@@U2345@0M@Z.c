/*
 * XREFs of ?Slerp@MPCMath@@YA?AUfloat3@Numerics@Foundation@Windows@@U2345@0M@Z @ 0x180086644
 * Callers:
 *     ?PerformDynamicExponential@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x180085C10 (-PerformDynamicExponential@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z.c)
 * Callees:
 *     acosf_0 @ 0x18004B1D7 (acosf_0.c)
 *     cosf_0 @ 0x18004B207 (cosf_0.c)
 *     sinf_0 @ 0x18004B21F (sinf_0.c)
 */

float *__fastcall MPCMath::Slerp(float *a1, float *a2, float *a3, float a4)
{
  float v6; // xmm8_4
  float v7; // xmm9_4
  float v8; // xmm10_4
  float v9; // xmm11_4
  float v10; // xmm2_4
  float *v11; // rcx
  float v12; // xmm6_4
  float v13; // xmm7_4
  float v14; // xmm0_4
  float v15; // xmm3_4
  float *result; // rax
  float v17; // xmm2_4
  float v18; // xmm1_4
  float v19; // xmm0_4
  float v20; // xmm9_4
  float v21; // xmm1_4
  __int64 v22; // [rsp+90h] [rbp+8h] BYREF
  float v23; // [rsp+A8h] [rbp+20h] BYREF

  v6 = FLOAT_1_0;
  v7 = *a3;
  v8 = a3[1];
  v9 = a3[2];
  v10 = (float)((float)(*a3 * *a2) + (float)(v8 * a2[1])) + (float)(v9 * a2[2]);
  v23 = v10;
  if ( v10 <= 1.0 )
  {
    v11 = &v23;
    if ( v10 < -1.0 )
      v11 = (float *)&v22;
    v6 = *v11;
  }
  v12 = acosf_0(v6) * a4;
  v13 = sinf_0(v12);
  v14 = cosf_0(v12);
  v15 = v14 * a2[2];
  result = a1;
  v17 = a2[1] * v6;
  v18 = v14 * *a2;
  v19 = v14 * a2[1];
  v20 = (float)((float)(v7 - (float)(*a2 * v6)) * v13) + v18;
  v21 = a2[2] * v6;
  *a1 = v20;
  a1[1] = (float)((float)(v8 - v17) * v13) + v19;
  a1[2] = (float)((float)(v9 - v21) * v13) + v15;
  return result;
}
