struct D2DVector3 *__fastcall D3DXVec3Transform(
        struct D2DVector3 *a1,
        const struct D2DVector3 *a2,
        const struct D2DMatrix *a3)
{
  struct D2DVector3 *result; // rax
  float v4; // xmm0_4
  float v5; // xmm1_4
  float v6; // xmm6_4
  float v7; // xmm3_4
  float v8; // xmm3_4

  result = a1;
  v4 = *((float *)a2 + 1);
  v5 = *((float *)a2 + 2);
  v6 = (float)((float)(*(float *)a2 * *((float *)a3 + 2)) + (float)(v4 * *((float *)a3 + 6)))
     + (float)(v5 * *((float *)a3 + 10));
  v7 = (float)((float)(*(float *)a2 * *((float *)a3 + 1)) + (float)(v4 * *((float *)a3 + 5)))
     + (float)(v5 * *((float *)a3 + 9));
  *(float *)a1 = (float)((float)((float)(v4 * *((float *)a3 + 4)) + (float)(*(float *)a2 * *(float *)a3))
                       + (float)(v5 * *((float *)a3 + 8)))
               + *((float *)a3 + 12);
  v8 = v7 + *((float *)a3 + 13);
  *((float *)a1 + 2) = v6 + *((float *)a3 + 14);
  *((float *)a1 + 1) = v8;
  return result;
}
