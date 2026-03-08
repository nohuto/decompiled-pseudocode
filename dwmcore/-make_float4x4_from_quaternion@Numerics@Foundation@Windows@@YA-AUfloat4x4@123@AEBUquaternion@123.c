/*
 * XREFs of ?make_float4x4_from_quaternion@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@AEBUquaternion@123@@Z @ 0x18026E11C
 * Callers:
 *     ?SetRotation@CMILMatrix@@QEAAXAEBUquaternion@Numerics@Foundation@Windows@@@Z @ 0x18026D300 (-SetRotation@CMILMatrix@@QEAAXAEBUquaternion@Numerics@Foundation@Windows@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Foundation::Numerics::make_float4x4_from_quaternion(__int64 a1, float *a2)
{
  float v2; // xmm0_4
  float v3; // xmm3_4
  float v4; // xmm2_4
  float v5; // xmm9_4
  float v6; // xmm8_4
  float v7; // xmm6_4
  float v8; // xmm5_4
  __int64 result; // rax
  float v10; // xmm10_4
  float v11; // xmm4_4
  float v12; // xmm2_4
  float v13; // xmm9_4
  float v14; // xmm10_4

  v2 = a2[1];
  v3 = v2 * *a2;
  *(_DWORD *)(a1 + 12) = 0;
  v4 = a2[3];
  v5 = a2[2];
  v6 = v4 * *a2;
  *(_DWORD *)(a1 + 28) = 0;
  v7 = v4 * v2;
  *(_QWORD *)(a1 + 44) = 0LL;
  v8 = v5 * *a2;
  *(_QWORD *)(a1 + 52) = 0LL;
  result = a1;
  v10 = *a2;
  *(_DWORD *)(a1 + 60) = 1065353216;
  v11 = v5 * v5;
  v12 = v4 * v5;
  v13 = v5 * v2;
  v14 = v10 * v10;
  *(float *)a1 = 1.0 - (float)((float)(v11 + (float)(v2 * v2)) + (float)(v11 + (float)(v2 * v2)));
  *(float *)(a1 + 4) = (float)(v12 + v3) + (float)(v12 + v3);
  *(float *)(a1 + 16) = (float)(v3 - v12) + (float)(v3 - v12);
  *(float *)(a1 + 8) = (float)(v8 - v7) + (float)(v8 - v7);
  *(float *)(a1 + 32) = (float)(v7 + v8) + (float)(v7 + v8);
  *(float *)(a1 + 40) = 1.0 - (float)((float)((float)(v2 * v2) + v14) + (float)((float)(v2 * v2) + v14));
  *(float *)(a1 + 36) = (float)(v13 - v6) + (float)(v13 - v6);
  *(float *)(a1 + 20) = 1.0 - (float)((float)(v11 + v14) + (float)(v11 + v14));
  *(float *)(a1 + 24) = (float)(v6 + v13) + (float)(v6 + v13);
  return result;
}
