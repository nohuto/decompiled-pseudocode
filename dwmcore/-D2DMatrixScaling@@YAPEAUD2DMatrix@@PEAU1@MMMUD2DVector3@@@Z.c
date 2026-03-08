/*
 * XREFs of ?D2DMatrixScaling@@YAPEAUD2DMatrix@@PEAU1@MMMUD2DVector3@@@Z @ 0x18027AAD4
 * Callers:
 *     ?Matrix4x4FromScale@CExpressionValueStack@@QEAAJI@Z @ 0x18025C3FC (-Matrix4x4FromScale@CExpressionValueStack@@QEAAJI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall D2DMatrixScaling(__int64 a1, float a2, float a3, float a4, float *a5)
{
  float v5; // xmm1_4
  __int64 result; // rax

  *(float *)(a1 + 20) = a3;
  *(_QWORD *)(a1 + 4) = 0LL;
  *(_QWORD *)(a1 + 12) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 44) = 0;
  *(float *)a1 = a2;
  *(float *)(a1 + 40) = a4;
  *(_DWORD *)(a1 + 60) = 1065353216;
  *(float *)(a1 + 48) = (float)(1.0 - a2) * *a5;
  v5 = (float)(1.0 - a4) * a5[2];
  result = a1;
  *(float *)(a1 + 52) = (float)(1.0 - a3) * a5[1];
  *(float *)(a1 + 56) = v5;
  return result;
}
