/*
 * XREFs of ?D2DMatrixRotationX@@YAPEAUD2DMatrix@@PEAU1@MUD2DVector3@@@Z @ 0x18027A774
 * Callers:
 *     ?Matrix4x4FromRotationX@CExpressionValueStack@@QEAAJI@Z @ 0x18025BE08 (-Matrix4x4FromRotationX@CExpressionValueStack@@QEAAJI@Z.c)
 * Callees:
 *     cosf_0 @ 0x1801176F8 (cosf_0.c)
 *     sinf_0 @ 0x180117794 (sinf_0.c)
 */

__int64 __fastcall D2DMatrixRotationX(__int64 a1, float a2, __int64 a3)
{
  float v5; // xmm7_4
  float v6; // xmm0_4
  float v7; // xmm3_4
  float v8; // xmm4_4
  __int64 result; // rax

  v5 = sinf_0(a2);
  v6 = cosf_0(a2);
  v7 = *(float *)(a3 + 4);
  v8 = *(float *)(a3 + 8);
  *(_DWORD *)(a1 + 36) = LODWORD(v5) ^ _xmm;
  *(float *)(a1 + 20) = v6;
  *(float *)(a1 + 40) = v6;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 28) = 0LL;
  *(_QWORD *)(a1 + 44) = 0LL;
  result = a1;
  *(float *)(a1 + 24) = v5;
  *(_QWORD *)a1 = 1065353216LL;
  *(_DWORD *)(a1 + 60) = 1065353216;
  *(float *)(a1 + 52) = (float)(v7 * (float)(1.0 - v6)) + (float)(v8 * v5);
  *(float *)(a1 + 56) = (float)(v8 * (float)(1.0 - v6)) - (float)(v7 * v5);
  return result;
}
