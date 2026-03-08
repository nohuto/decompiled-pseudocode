/*
 * XREFs of ?make_float4x4_rotation_z@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@MAEBUfloat3@123@@Z @ 0x18026E280
 * Callers:
 *     ?Set2DAffineMatrix@CMILMatrix@@QEAAXAEBUfloat2@Numerics@Foundation@Windows@@M000@Z @ 0x18026D058 (-Set2DAffineMatrix@CMILMatrix@@QEAAXAEBUfloat2@Numerics@Foundation@Windows@@M000@Z.c)
 *     ?Set2DRotation@CMILMatrix@@QEAAXMMM@Z @ 0x18026D20C (-Set2DRotation@CMILMatrix@@QEAAXMMM@Z.c)
 * Callees:
 *     cosf_0 @ 0x1801176F8 (cosf_0.c)
 *     sinf_0 @ 0x180117794 (sinf_0.c)
 */

__int64 __fastcall Windows::Foundation::Numerics::make_float4x4_rotation_z(__int64 a1, float a2, float *a3)
{
  float v5; // xmm7_4
  float v6; // xmm0_4
  float v7; // xmm3_4
  float v8; // xmm4_4
  __int64 result; // rax

  v5 = cosf_0(a2);
  v6 = sinf_0(a2);
  v7 = *a3;
  v8 = a3[1];
  *(_DWORD *)(a1 + 16) = LODWORD(v6) ^ _xmm;
  *(_QWORD *)(a1 + 40) = 1065353216LL;
  *(_DWORD *)(a1 + 60) = 1065353216;
  result = a1;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(float *)a1 = v5;
  *(float *)(a1 + 20) = v5;
  *(float *)(a1 + 48) = (float)(v7 * (float)(1.0 - v5)) + (float)(v8 * v6);
  *(float *)(a1 + 4) = v6;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 56) = 0;
  *(float *)(a1 + 52) = (float)(v8 * (float)(1.0 - v5)) - (float)(v7 * v6);
  return result;
}
