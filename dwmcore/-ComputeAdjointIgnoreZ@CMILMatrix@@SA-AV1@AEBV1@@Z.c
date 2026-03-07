__int64 __fastcall CMILMatrix::ComputeAdjointIgnoreZ(__int64 a1, float *a2)
{
  float v2; // xmm4_4
  float v3; // xmm3_4
  float v4; // xmm5_4
  float v5; // xmm6_4
  float v6; // xmm7_4
  float v7; // xmm8_4
  float v8; // xmm9_4
  float v9; // xmm10_4
  float v10; // xmm11_4
  __int64 result; // rax

  v2 = a2[7];
  v3 = a2[15];
  v4 = a2[3];
  v5 = a2[13];
  v6 = a2[12];
  v7 = a2[1];
  v8 = a2[4];
  v9 = a2[5];
  v10 = *a2;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(float *)a1 = (float)(v3 * v9) - (float)(v2 * v5);
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 64) = 0;
  result = a1;
  *(float *)(a1 + 4) = (float)(v5 * v4) - (float)(v3 * v7);
  *(float *)(a1 + 12) = (float)(v2 * v7) - (float)(v9 * v4);
  *(float *)(a1 + 16) = (float)(v6 * v2) - (float)(v8 * v3);
  *(float *)(a1 + 20) = (float)(v10 * v3) - (float)(v6 * v4);
  *(float *)(a1 + 28) = (float)(v8 * v4) - (float)(v10 * v2);
  *(float *)(a1 + 48) = (float)(v8 * v5) - (float)(v6 * v9);
  *(float *)(a1 + 60) = (float)(v10 * v9) - (float)(v8 * v7);
  *(float *)(a1 + 52) = (float)(v7 * v6) - (float)(v10 * v5);
  return result;
}
