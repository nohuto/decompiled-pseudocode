/*
 * XREFs of ST::mult_Atx_3x3_float_ @ 0x1801A57F4
 * Callers:
 *     ST::mult_AB_3x3x3_float_ @ 0x1801A577C (ST--mult_AB_3x3x3_float_.c)
 * Callees:
 *     <none>
 */

void __fastcall ST::mult_Atx_3x3_float_(float *a1, float *a2, float *a3)
{
  float v3; // xmm4_4
  float v4; // xmm5_4
  float v5; // xmm0_4
  float v6; // xmm1_4
  float v7; // xmm6_4
  float v8; // xmm1_4
  float v9; // xmm4_4
  float v10; // xmm3_4
  float v11; // xmm2_4
  float v12; // xmm5_4

  v3 = *a3;
  v4 = a3[1];
  v5 = *a3 * *a2;
  v6 = *a3;
  v7 = a3[2];
  *a1 = v5;
  v8 = v6 * a2[1];
  a1[1] = v8;
  v9 = v3 * a2[2];
  a1[2] = v9;
  v10 = (float)(v4 * a2[3]) + v5;
  *a1 = v10;
  v11 = (float)(v4 * a2[4]) + v8;
  a1[1] = v11;
  v12 = (float)(v4 * a2[5]) + v9;
  a1[2] = v12;
  *a1 = (float)(v7 * a2[6]) + v10;
  a1[1] = (float)(v7 * a2[7]) + v11;
  a1[2] = (float)(v7 * a2[8]) + v12;
}
