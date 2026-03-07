__int64 __fastcall CBezierFlattener<float,CMilPoint2F>::HalveTheStep(__int64 a1)
{
  float v1; // xmm1_4
  float v2; // xmm0_4
  __int64 result; // rax
  float v4; // xmm2_4
  float v5; // xmm1_4
  float v6; // xmm2_4
  float v7; // xmm2_4

  v1 = *(float *)(a1 + 72) + *(float *)(a1 + 64);
  v2 = *(float *)(a1 + 56);
  result = (unsigned int)(2 * *(_DWORD *)(a1 + 80));
  *(float *)(a1 + 64) = v1;
  v4 = *(float *)(a1 + 76);
  v5 = v1 * 0.125;
  *(_DWORD *)(a1 + 80) = result;
  v6 = v4 + *(float *)(a1 + 68);
  *(float *)(a1 + 64) = v5;
  v7 = v6 * 0.125;
  *(float *)(a1 + 68) = v7;
  *(float *)(a1 + 56) = (float)(v2 - v5) * 0.5;
  *(float *)(a1 + 60) = (float)(*(float *)(a1 + 60) - v7) * 0.5;
  *(float *)(a1 + 72) = *(float *)(a1 + 72) * 0.25;
  *(float *)(a1 + 76) = *(float *)(a1 + 76) * 0.25;
  *(float *)(a1 + 88) = *(float *)(a1 + 88) * 0.5;
  return result;
}
