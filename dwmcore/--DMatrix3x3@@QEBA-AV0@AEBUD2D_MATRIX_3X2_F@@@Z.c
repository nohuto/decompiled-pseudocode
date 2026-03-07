float *__fastcall Matrix3x3::operator*(float *a1, float *a2, float *a3)
{
  float v3; // xmm3_4
  float *result; // rax
  float v5; // xmm4_4
  float v6; // xmm1_4
  float v7; // xmm2_4
  float v8; // xmm0_4
  float v9; // xmm5_4
  float v10; // xmm2_4
  float v11; // xmm0_4
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm3_4
  float v15; // xmm2_4
  float v16; // xmm0_4
  float v17; // xmm3_4
  float v18; // xmm2_4
  float v19; // xmm1_4
  float v20; // xmm2_4
  float v21; // xmm0_4
  float v22; // xmm4_4
  float v23; // xmm5_4
  float v24; // xmm3_4
  float v25; // xmm2_4
  float v26; // xmm1_4
  float v27; // xmm5_4
  float v28; // xmm0_4
  float v29; // xmm3_4
  float v30; // xmm5_4
  float v31; // xmm2_4
  float v32; // xmm5_4

  v3 = a1[2];
  result = a2;
  v5 = a1[5];
  v6 = v3 * a3[4];
  v7 = *a1 * *a3;
  v8 = a1[1] * a3[2];
  v9 = a1[3];
  a2[2] = v3;
  v10 = v7 + v8;
  a2[5] = v5;
  v11 = a3[3] * a1[1];
  v12 = v10 + v6;
  v13 = a3[5] * v3;
  v14 = a1[4];
  *a2 = v12;
  v15 = (float)(a3[1] * *a1) + v11;
  v16 = v14 * a3[2];
  v17 = v14 * a3[3];
  v18 = v15 + v13;
  v19 = v5 * a3[4];
  a2[1] = v18;
  v20 = (float)(v9 * *a3) + v16;
  v21 = v5 * a3[5];
  v22 = a1[8];
  v23 = (float)(v9 * a3[1]) + v17;
  v24 = a1[7];
  v25 = v20 + v19;
  a2[8] = v22;
  v26 = v22 * a3[4];
  v27 = v23 + v21;
  v28 = v24 * a3[2];
  v29 = v24 * a3[3];
  a2[4] = v27;
  v30 = a1[6];
  a2[3] = v25;
  v31 = (float)(v30 * *a3) + v28;
  v32 = (float)((float)(v30 * a3[1]) + v29) + (float)(v22 * a3[5]);
  a2[6] = v31 + v26;
  a2[7] = v32;
  return result;
}
