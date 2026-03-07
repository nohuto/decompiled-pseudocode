__int64 __fastcall bCvtVts_FlToFl(float *a1, float *a2, float *a3, __int64 a4)
{
  float v4; // xmm3_4
  float v5; // xmm4_4
  float v6; // xmm0_4
  float v7; // xmm1_4
  float v8; // xmm4_4

  for ( ; a4; --a4 )
  {
    v4 = *a2;
    v5 = a2[1];
    v6 = *a2 * *a1;
    v7 = v5;
    a2 += 2;
    v8 = (float)(v5 * a1[3]) + (float)(v4 * a1[1]);
    *a3 = (float)(v7 * a1[2]) + v6;
    a3[1] = v8;
    a3 += 2;
  }
  return 1LL;
}
