float *__fastcall CAffineTransform2DEffect::TransformBounds(__int64 a1, float *a2, float *a3, float *a4)
{
  float *result; // rax
  __int64 v5; // rcx
  float v6; // xmm11_4
  float v7; // xmm2_4
  float v8; // xmm5_4
  float v9; // xmm10_4
  float v10; // xmm9_4
  float v11; // xmm7_4
  float v12; // xmm0_4
  float v13; // xmm1_4
  float v14; // xmm3_4
  float v15; // xmm4_4
  float v16; // xmm11_4
  float v17; // xmm10_4
  float v18; // xmm0_4
  float v19; // xmm4_4
  float v20; // xmm1_4
  float v21; // xmm3_4
  float v22; // xmm0_4
  float v23; // xmm1_4
  float v24; // [rsp+8h] [rbp-70h]
  float v25[5]; // [rsp+Ch] [rbp-6Ch] BYREF

  result = v25;
  v5 = 3LL;
  v6 = *a2 * *a3;
  v7 = a3[3] * a2[2];
  v8 = a3[3] * a2[3];
  v9 = a2[1] * *a3;
  v10 = a2[2] * a3[1];
  v11 = a2[3] * a3[1];
  v12 = v8 + v9;
  v13 = (float)(v7 + v6) + a2[4];
  v14 = a3[2] * *a2;
  v15 = a3[2] * a2[1];
  v16 = (float)(v6 + v10) + a2[4];
  v17 = (float)(v9 + v11) + a2[5];
  v25[0] = v12 + a2[5];
  v24 = v13;
  v18 = v15 + v8;
  v19 = (float)(v15 + v11) + a2[5];
  v20 = (float)(v14 + v7) + a2[4];
  v21 = (float)(v14 + v10) + a2[4];
  v25[2] = v18 + a2[5];
  v22 = v16;
  v25[4] = v19;
  v25[1] = v20;
  v23 = v17;
  v25[3] = v21;
  do
  {
    v16 = fminf(v16, *(result - 1));
    v17 = fminf(v17, *result);
    v22 = fmaxf(v22, *(result - 1));
    v23 = fmaxf(v23, *result);
    result += 2;
    *a4 = v16;
    --v5;
  }
  while ( v5 );
  a4[1] = v17;
  a4[2] = v22;
  a4[3] = v23;
  return result;
}
