void __fastcall CParticleAttractor::AnimateSingle(__int64 a1, float a2, __int64 a3, __int64 a4)
{
  float *v4; // rdx
  float *v6; // rbx
  float v7; // xmm7_4
  float v8; // xmm8_4
  float v9; // xmm9_4
  float v10; // xmm0_4
  float v11; // xmm6_4
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm0_4
  __int64 v15; // [rsp+20h] [rbp-58h]

  v4 = *(float **)(a3 + 8);
  v6 = *(float **)(a4 + 8);
  v15 = *(_QWORD *)(a1 - 24);
  v7 = *(float *)&v15 - *v4;
  v8 = *((float *)&v15 + 1) - v4[1];
  v9 = *(float *)(a1 - 16) - v4[2];
  v10 = fmaxf(sqrtf_0((float)((float)(v8 * v8) + (float)(v7 * v7)) + (float)(v9 * v9)), 0.001);
  if ( *(float *)(a1 - 12) > v10 )
  {
    v11 = a2 * *(float *)(a1 - 8);
    v12 = 1.0 / v10;
    v13 = (float)((float)((float)(1.0 / v10) * v8) * v11) + v6[1];
    v14 = (float)((float)((float)(1.0 / v10) * v9) * v11) + v6[2];
    *v6 = (float)((float)(v12 * v7) * v11) + *v6;
    v6[1] = v13;
    v6[2] = v14;
  }
}
