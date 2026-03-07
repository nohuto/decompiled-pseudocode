float *__fastcall Windows::Foundation::Numerics::transform(float *a1, float *a2, float *a3)
{
  float *result; // rax
  float v4; // xmm6_4
  float v5; // xmm1_4
  float v6; // xmm8_4
  float v7; // xmm11_4
  float v8; // xmm10_4
  float v9; // xmm13_4
  float v10; // xmm5_4
  float v11; // xmm0_4
  float v12; // xmm6_4
  float v13; // xmm12_4
  float v14; // xmm13_4
  float v15; // xmm9_4
  float v16; // xmm10_4
  float v17; // xmm3_4
  float v18; // xmm4_4
  float v19; // xmm2_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  float v22; // xmm11_4
  float v23; // xmm4_4
  float v24; // xmm1_4

  result = a1;
  v4 = a3[2];
  v5 = v4 + v4;
  v6 = *a3;
  v7 = *a3 * (float)(v4 + v4);
  v8 = a3[3];
  v9 = a3[1];
  v10 = v8 * (float)(v4 + v4);
  v11 = v9 + v9;
  v12 = v4 * (float)(v4 + v4);
  v13 = v8 * (float)(v6 + v6);
  v14 = v9 * v5;
  v15 = a3[1] * v11;
  v16 = v8 * v11;
  v17 = *a3 * v11;
  v18 = 1.0 - (float)(v6 * (float)(v6 + v6));
  v19 = (float)((float)((float)((float)(1.0 - v15) - v12) * *a2) + (float)((float)(v17 - v10) * a2[1]))
      + (float)((float)(v7 + v16) * a2[2]);
  v20 = v18 - v12;
  v21 = (float)(v14 - v13) * a2[2];
  v22 = (float)((float)(v7 - v16) * *a2) + (float)((float)(v14 + v13) * a2[1]);
  v23 = (float)(v18 - v15) * a2[2];
  v24 = (float)(v20 * a2[1]) + (float)((float)(v17 + v10) * *a2);
  *a1 = v19;
  a1[2] = v22 + v23;
  a1[1] = v24 + v21;
  return result;
}
