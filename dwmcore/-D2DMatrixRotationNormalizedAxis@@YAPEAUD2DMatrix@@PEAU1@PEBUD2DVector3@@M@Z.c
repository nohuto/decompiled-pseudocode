struct D2DMatrix *__fastcall D2DMatrixRotationNormalizedAxis(
        struct D2DMatrix *a1,
        const struct D2DVector3 *a2,
        float a3)
{
  float v5; // xmm7_4
  float v6; // xmm6_4
  float v7; // xmm2_4
  float v8; // xmm3_4
  float v9; // xmm4_4
  float v10; // xmm1_4
  float v11; // xmm0_4
  float v12; // xmm0_4
  struct D2DMatrix *result; // rax

  v5 = sinf_0(a3);
  v6 = cosf_0(a3);
  v7 = (float)(*(float *)a2 * *((float *)a2 + 1)) * (float)(1.0 - v6);
  v8 = (float)(*((float *)a2 + 2) * *(float *)a2) * (float)(1.0 - v6);
  v9 = (float)(*((float *)a2 + 2) * *((float *)a2 + 1)) * (float)(1.0 - v6);
  *(float *)a1 = (float)((float)(*(float *)a2 * *(float *)a2) * (float)(1.0 - v6)) + v6;
  *((float *)a1 + 1) = (float)(v5 * *((float *)a2 + 2)) + v7;
  v10 = v5 * *((float *)a2 + 1);
  *((_DWORD *)a1 + 3) = 0;
  *((float *)a1 + 2) = v8 - v10;
  *((float *)a1 + 4) = v7 - (float)(v5 * *((float *)a2 + 2));
  *((float *)a1 + 5) = (float)((float)(*((float *)a2 + 1) * *((float *)a2 + 1)) * (float)(1.0 - v6)) + v6;
  v11 = v5 * *(float *)a2;
  *((_DWORD *)a1 + 7) = 0;
  *((float *)a1 + 6) = v11 + v9;
  *((float *)a1 + 8) = (float)(v5 * *((float *)a2 + 1)) + v8;
  *((float *)a1 + 9) = v9 - (float)(v5 * *(float *)a2);
  v12 = *((float *)a2 + 2);
  *(_QWORD *)((char *)a1 + 44) = 0LL;
  *(_QWORD *)((char *)a1 + 52) = 0LL;
  result = a1;
  *((_DWORD *)a1 + 15) = 1065353216;
  *((float *)a1 + 10) = (float)((float)(v12 * v12) * (float)(1.0 - v6)) + v6;
  return result;
}
