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
