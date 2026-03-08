/*
 * XREFs of ?D2DMatrixScaling@@YAPEAUD2DMatrix@@PEAU1@UD2DVector3@@1@Z @ 0x18027ABB0
 * Callers:
 *     ?Matrix4x4FromScale@CExpressionValueStack@@QEAAJI@Z @ 0x18025C3FC (-Matrix4x4FromScale@CExpressionValueStack@@QEAAJI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall D2DMatrixScaling(__int64 a1, float *a2, float *a3)
{
  float v3; // xmm4_4
  float v4; // xmm0_4
  float v5; // xmm2_4
  float v6; // xmm0_4
  float v7; // xmm1_4
  __int64 result; // rax
  float v9; // xmm3_4

  v3 = a2[1];
  v4 = 1.0 - *a2;
  v5 = a2[2];
  *(float *)a1 = *a2;
  *(_QWORD *)(a1 + 4) = 0LL;
  *(_QWORD *)(a1 + 12) = 0LL;
  v6 = v4 * *a3;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  v7 = (float)(1.0 - v3) * a3[1];
  *(_DWORD *)(a1 + 44) = 0;
  result = a1;
  v9 = (float)(1.0 - v5) * a3[2];
  *(_DWORD *)(a1 + 60) = 1065353216;
  *(float *)(a1 + 52) = v7;
  *(float *)(a1 + 20) = v3;
  *(float *)(a1 + 40) = v5;
  *(float *)(a1 + 48) = v6;
  *(float *)(a1 + 56) = v9;
  return result;
}
