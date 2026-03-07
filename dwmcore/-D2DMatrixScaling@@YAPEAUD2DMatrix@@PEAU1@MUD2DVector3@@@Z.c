__int64 __fastcall D2DMatrixScaling(__int64 a1, float a2, float *a3)
{
  float v3; // xmm2_4
  float v4; // xmm0_4
  float v5; // xmm1_4
  __int64 result; // rax
  float v7; // xmm2_4

  v3 = 1.0 - a2;
  *(float *)a1 = a2;
  *(float *)(a1 + 20) = a2;
  *(float *)(a1 + 40) = a2;
  *(_QWORD *)(a1 + 4) = 0LL;
  *(_QWORD *)(a1 + 12) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  v4 = (float)(1.0 - a2) * *a3;
  *(_QWORD *)(a1 + 32) = 0LL;
  v5 = (float)(1.0 - a2) * a3[1];
  *(_DWORD *)(a1 + 44) = 0;
  result = a1;
  v7 = v3 * a3[2];
  *(_DWORD *)(a1 + 60) = 1065353216;
  *(float *)(a1 + 48) = v4;
  *(float *)(a1 + 52) = v5;
  *(float *)(a1 + 56) = v7;
  return result;
}
