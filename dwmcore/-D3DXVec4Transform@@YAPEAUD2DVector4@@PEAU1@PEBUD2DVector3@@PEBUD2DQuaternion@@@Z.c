struct D2DVector4 *__fastcall D3DXVec4Transform(
        struct D2DVector4 *a1,
        const struct D2DVector3 *a2,
        const struct D2DQuaternion *a3)
{
  struct D2DVector4 *result; // rax
  float v4; // xmm6_4
  float v5; // xmm1_4
  float v6; // xmm8_4
  float v7; // xmm11_4
  float v8; // xmm12_4
  float v9; // xmm10_4
  float v10; // xmm13_4
  float v11; // xmm5_4
  float v12; // xmm0_4
  float v13; // xmm6_4
  float v14; // xmm12_4
  float v15; // xmm13_4
  float v16; // xmm9_4
  float v17; // xmm10_4
  float v18; // xmm3_4
  float v19; // xmm4_4
  float v20; // xmm2_4
  float v21; // xmm1_4
  float v22; // xmm0_4
  float v23; // xmm11_4
  float v24; // xmm4_4
  float v25; // xmm1_4

  result = a1;
  v4 = *((float *)a3 + 2);
  v5 = v4 + v4;
  v6 = *(float *)a3;
  v7 = *(float *)a3 * (float)(v4 + v4);
  v8 = *((float *)a3 + 3);
  *((_DWORD *)a1 + 3) = 1065353216;
  v9 = v8;
  v10 = *((float *)a3 + 1);
  v11 = v8 * (float)(v4 + v4);
  v12 = v10 + v10;
  v13 = v4 * (float)(v4 + v4);
  v14 = v8 * (float)(v6 + v6);
  v15 = v10 * v5;
  v16 = *((float *)a3 + 1) * v12;
  v17 = v9 * v12;
  v18 = v6 * v12;
  v19 = 1.0 - (float)(v6 * (float)(v6 + v6));
  v20 = (float)((float)((float)((float)(1.0 - v16) - v13) * *(float *)a2)
              + (float)((float)((float)(v6 * v12) - v11) * *((float *)a2 + 1)))
      + (float)((float)(v7 + v17) * *((float *)a2 + 2));
  v21 = v19 - v13;
  v22 = (float)(v15 - v14) * *((float *)a2 + 2);
  v23 = (float)((float)(v7 - v17) * *(float *)a2) + (float)((float)(v15 + v14) * *((float *)a2 + 1));
  v24 = (float)(v19 - v16) * *((float *)a2 + 2);
  v25 = (float)(v21 * *((float *)a2 + 1)) + (float)((float)(v18 + v11) * *(float *)a2);
  *(float *)a1 = v20;
  *((float *)a1 + 2) = v23 + v24;
  *((float *)a1 + 1) = v25 + v22;
  return result;
}
