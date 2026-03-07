struct D2DVector4 *__fastcall D3DXVec4Transform(
        struct D2DVector4 *a1,
        const struct D2DVector3 *a2,
        const struct D2DMatrix *a3)
{
  struct D2DVector4 *result; // rax
  float v4; // xmm6_4
  float v5; // xmm0_4
  float v6; // xmm4_4
  float v7; // xmm0_4
  float v8; // xmm1_4
  float v9; // xmm5_4
  float v10; // xmm1_4
  float v11; // xmm3_4
  float v12; // xmm2_4
  float v13; // xmm6_4
  float v14; // xmm2_4

  result = a1;
  v4 = *(float *)a2;
  v5 = *((float *)a2 + 1);
  v6 = v5 * *((float *)a3 + 7);
  v7 = v5 * *((float *)a3 + 6);
  v8 = *((float *)a2 + 2);
  v9 = v8 * *((float *)a3 + 11);
  v10 = v8 * *((float *)a3 + 10);
  v11 = (float)((float)((float)(*(float *)a2 * *((float *)a3 + 1)) + (float)(*((float *)a2 + 1) * *((float *)a3 + 5)))
              + (float)(*((float *)a2 + 2) * *((float *)a3 + 9)))
      + *((float *)a3 + 13);
  *(float *)a1 = (float)((float)((float)(*((float *)a2 + 1) * *((float *)a3 + 4)) + (float)(*(float *)a2 * *(float *)a3))
                       + (float)(*((float *)a2 + 2) * *((float *)a3 + 8)))
               + *((float *)a3 + 12);
  v12 = v4 * *((float *)a3 + 2);
  v13 = (float)(v4 * *((float *)a3 + 3)) + v6;
  *((float *)a1 + 1) = v11;
  v14 = (float)((float)(v12 + v7) + v10) + *((float *)a3 + 14);
  *((float *)a1 + 3) = (float)(v13 + v9) + *((float *)a3 + 15);
  *((float *)a1 + 2) = v14;
  return result;
}
