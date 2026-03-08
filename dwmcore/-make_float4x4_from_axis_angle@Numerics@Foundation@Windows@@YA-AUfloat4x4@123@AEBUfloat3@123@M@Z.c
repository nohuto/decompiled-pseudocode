/*
 * XREFs of ?make_float4x4_from_axis_angle@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@AEBUfloat3@123@M@Z @ 0x18026DF7C
 * Callers:
 *     ?SetRotation@CMILMatrix@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z @ 0x18026D270 (-SetRotation@CMILMatrix@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z.c)
 * Callees:
 *     cosf_0 @ 0x1801176F8 (cosf_0.c)
 *     sinf_0 @ 0x180117794 (sinf_0.c)
 */

__int64 __fastcall Windows::Foundation::Numerics::make_float4x4_from_axis_angle(__int64 a1, float *a2, float a3)
{
  float v5; // xmm12_4
  float v6; // xmm0_4
  float v7; // xmm6_4
  float v8; // xmm1_4
  float v9; // xmm4_4
  float v10; // xmm2_4
  float v11; // xmm3_4
  float v12; // xmm9_4
  __int64 result; // rax
  float v14; // xmm12_4
  float v15; // xmm5_4
  float v16; // xmm11_4
  float v17; // xmm6_4
  float v18; // xmm4_4
  float v19; // xmm9_4

  v5 = sinf_0(a3);
  v6 = cosf_0(a3);
  v7 = a2[2] * *a2;
  *(_DWORD *)(a1 + 60) = 1065353216;
  v8 = *a2;
  v9 = a2[1] * *a2;
  *(_DWORD *)(a1 + 12) = 0;
  v10 = v5 * a2[2];
  *(_DWORD *)(a1 + 28) = 0;
  v11 = v5 * a2[1];
  *(_QWORD *)(a1 + 44) = 0LL;
  v12 = a2[2] * a2[1];
  *(_QWORD *)(a1 + 52) = 0LL;
  result = a1;
  v14 = v5 * *a2;
  v15 = a2[1];
  v16 = a2[2];
  *(float *)a1 = (float)((float)(1.0 - (float)(v8 * v8)) * v6) + (float)(v8 * v8);
  v17 = v7 - (float)(v7 * v6);
  v18 = v9 - (float)(v9 * v6);
  *(float *)(a1 + 4) = v10 + v18;
  *(float *)(a1 + 16) = v18 - v10;
  *(float *)(a1 + 8) = v17 - v11;
  *(float *)(a1 + 32) = v11 + v17;
  *(float *)(a1 + 20) = (float)((float)(1.0 - (float)(v15 * v15)) * v6) + (float)(v15 * v15);
  *(float *)(a1 + 40) = (float)((float)(1.0 - (float)(v16 * v16)) * v6) + (float)(v16 * v16);
  v19 = v12 - (float)(v12 * v6);
  *(float *)(a1 + 24) = v14 + v19;
  *(float *)(a1 + 36) = v19 - v14;
  return result;
}
