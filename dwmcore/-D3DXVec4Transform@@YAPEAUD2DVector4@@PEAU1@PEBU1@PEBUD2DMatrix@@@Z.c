struct D2DVector4 *__fastcall D3DXVec4Transform(
        struct D2DVector4 *a1,
        const struct D2DVector4 *a2,
        const struct D2DMatrix *a3)
{
  float v3; // xmm4_4
  struct D2DVector4 *result; // rax
  float v5; // xmm5_4
  float v6; // xmm6_4
  float v7; // xmm7_4
  float v8; // xmm1_4
  float v9; // xmm3_4
  float v10; // xmm2_4
  float v11; // xmm7_4
  float v12; // xmm3_4
  float v13; // xmm1_4
  float v14; // xmm5_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  float v17; // xmm4_4
  float v18; // xmm2_4
  float v19; // xmm7_4

  v3 = *((float *)a2 + 1);
  result = a1;
  v5 = *((float *)a2 + 2);
  v6 = *((float *)a2 + 3);
  v7 = *(float *)a2;
  v8 = v5 * *((float *)a3 + 9);
  v9 = (float)(*(float *)a2 * *((float *)a3 + 1)) + (float)(v3 * *((float *)a3 + 5));
  *(float *)a1 = (float)((float)((float)(v3 * *((float *)a3 + 4)) + (float)(*(float *)a2 * *(float *)a3))
                       + (float)(v5 * *((float *)a3 + 8)))
               + (float)(v6 * *((float *)a3 + 12));
  v10 = v7;
  v11 = v7 * *((float *)a3 + 3);
  v12 = v9 + v8;
  v13 = v5;
  v14 = v5 * *((float *)a3 + 11);
  v15 = v13 * *((float *)a3 + 10);
  v16 = v3 * *((float *)a3 + 6);
  v17 = v3 * *((float *)a3 + 7);
  v18 = (float)(v10 * *((float *)a3 + 2)) + v16;
  *((float *)a1 + 1) = v12 + (float)(v6 * *((float *)a3 + 13));
  v19 = (float)((float)(v11 + v17) + v14) + (float)(v6 * *((float *)a3 + 15));
  *((float *)a1 + 2) = (float)(v18 + v15) + (float)(v6 * *((float *)a3 + 14));
  *((float *)a1 + 3) = v19;
  return result;
}
