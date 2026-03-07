bool __fastcall CHitTestContext::GetPointInLocalSpace(
        const struct D2D_POINT_2F *a1,
        const struct CMILMatrix *a2,
        struct D2D_POINT_2F *a3)
{
  float v3; // xmm5_4
  bool result; // al
  float v5; // xmm0_4
  float v6; // xmm6_4
  float v7; // xmm7_4
  float v8; // xmm5_4
  float v9; // xmm4_4
  float v10; // xmm3_4
  float v11; // xmm2_4

  v3 = *((float *)a2 + 3);
  result = 0;
  v5 = (float)(a1->x * *((float *)a2 + 7)) - *((float *)a2 + 4);
  v6 = (float)(a1->y * *((float *)a2 + 7)) - *((float *)a2 + 5);
  v7 = (float)(a1->x * v3) - *(float *)a2;
  v8 = (float)(v3 * a1->y) - *((float *)a2 + 1);
  if ( (float)(v7 * v6) != (float)(v5 * v8) )
  {
    v9 = (float)(v7 * v6) - (float)(v5 * v8);
    result = 1;
    v10 = (float)(*((float *)a2 + 15) * a1->x) - *((float *)a2 + 12);
    v11 = (float)(*((float *)a2 + 15) * a1->y) - *((float *)a2 + 13);
    a3->y = (float)((float)(v10 * v8) - (float)(v11 * v7)) / v9;
    a3->x = (float)((float)(v11 * v5) - (float)(v10 * v6)) / v9;
  }
  return result;
}
