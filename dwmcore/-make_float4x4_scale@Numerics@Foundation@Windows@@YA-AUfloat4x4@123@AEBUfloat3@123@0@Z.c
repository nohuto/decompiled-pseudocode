__int64 __fastcall Windows::Foundation::Numerics::make_float4x4_scale(__int64 a1, float *a2, float *a3)
{
  float v3; // xmm0_4
  float v4; // xmm1_4
  float v5; // xmm4_4
  float v6; // xmm3_4
  float v7; // xmm2_4
  __int64 result; // rax
  float v9; // xmm5_4

  v3 = *a2;
  v4 = a2[1];
  v5 = a2[2];
  *(_QWORD *)(a1 + 4) = 0LL;
  *(_QWORD *)(a1 + 12) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  v6 = (float)(1.0 - v3) * *a3;
  *(_QWORD *)(a1 + 32) = 0LL;
  v7 = (float)(1.0 - v4) * a3[1];
  *(_DWORD *)(a1 + 44) = 0;
  result = a1;
  v9 = (float)(1.0 - v5) * a3[2];
  *(_DWORD *)(a1 + 60) = 1065353216;
  *(float *)(a1 + 48) = v6;
  *(float *)(a1 + 52) = v7;
  *(float *)a1 = v3;
  *(float *)(a1 + 20) = v4;
  *(float *)(a1 + 40) = v5;
  *(float *)(a1 + 56) = v9;
  return result;
}
