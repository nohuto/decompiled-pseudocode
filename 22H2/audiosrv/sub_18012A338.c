/*
 * XREFs of sub_18012A338 @ 0x18012A338
 * Callers:
 *     sub_1800204D0 @ 0x1800204D0 (sub_1800204D0.c)
 * Callees:
 *     sinf @ 0x18007440F (sinf.c)
 */

void __fastcall sub_18012A338(__int64 a1, float *a2, float *a3)
{
  float v5; // xmm8_4
  float v6; // xmm0_4
  float v7; // xmm11_4
  float v8; // xmm0_4
  float v9; // xmm0_4
  float v10; // xmm6_4
  float v11; // xmm0_4
  float v12; // xmm6_4
  float v13; // xmm0_4
  float v14; // xmm6_4

  v5 = a3[26];
  v6 = sinf(a3[9] * 0.017453292);
  *a2 = v5;
  v7 = v6 * v5;
  v8 = a3[6] * 0.017453292;
  a2[1] = v7;
  a2[2] = sinf(v8) * v5;
  v9 = sinf((float)(90.0 - a3[6]) * 0.017453292);
  v10 = a3[7];
  a2[3] = -(float)(v9 * v5);
  a2[4] = sinf(v10 * 0.017453292) * v5;
  v11 = sinf((float)(v10 - 90.0) * 0.017453292);
  v12 = a3[8];
  a2[5] = v11 * v5;
  a2[6] = sinf((float)(180.0 - v12) * 0.017453292) * v5;
  a2[7] = sinf((float)(v12 - 90.0) * 0.017453292) * v5;
  a2[8] = sinf((float)(90.0 - a3[9]) * 0.017453292) * v5;
  a2[9] = sinf(a3[10] * 0.017453292) * v7;
  v13 = sinf((float)(90.0 - a3[10]) * 0.017453292);
  v14 = a3[11];
  a2[10] = v13 * v7;
  a2[11] = sinf((float)(180.0 - v14) * 0.017453292) * v7;
  a2[12] = sinf((float)(v14 - 90.0) * 0.017453292) * v7;
}
