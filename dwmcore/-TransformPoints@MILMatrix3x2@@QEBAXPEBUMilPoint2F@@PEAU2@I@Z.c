void __fastcall MILMatrix3x2::TransformPoints(
        MILMatrix3x2 *this,
        const struct MilPoint2F *a2,
        struct MilPoint2F *a3,
        int a4)
{
  __int64 v4; // rdx
  float v5; // xmm2_4
  float v6; // xmm3_4

  v4 = a2 - a3;
  do
  {
    v5 = *(float *)((char *)a3 + v4);
    v6 = *(float *)((char *)a3 + v4 + 4);
    *(float *)a3 = (float)((float)(v6 * *((float *)this + 2)) + (float)(v5 * *(float *)this)) + *((float *)this + 4);
    *((float *)a3 + 1) = (float)((float)(v6 * *((float *)this + 3)) + (float)(v5 * *((float *)this + 1)))
                       + *((float *)this + 5);
    a3 = (struct MilPoint2F *)((char *)a3 + 8);
    --a4;
  }
  while ( a4 );
}
