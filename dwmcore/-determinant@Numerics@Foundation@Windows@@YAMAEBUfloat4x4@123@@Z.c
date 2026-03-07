float __fastcall Windows::Foundation::Numerics::determinant(
        Windows::Foundation::Numerics *this,
        const struct Windows::Foundation::Numerics::float4x4 *a2)
{
  float v2; // xmm3_4
  float v3; // xmm4_4
  float v4; // xmm5_4
  float v5; // xmm7_4
  float v6; // xmm1_4
  float v7; // xmm0_4

  v2 = (float)(*((float *)this + 15) * *((float *)this + 10)) - (float)(*((float *)this + 14) * *((float *)this + 11));
  v3 = (float)(*((float *)this + 15) * *((float *)this + 9)) - (float)(*((float *)this + 13) * *((float *)this + 11));
  v4 = (float)(*((float *)this + 15) * *((float *)this + 8)) - (float)(*((float *)this + 12) * *((float *)this + 11));
  v5 = (float)(*((float *)this + 14) * *((float *)this + 8)) - (float)(*((float *)this + 12) * *((float *)this + 10));
  v6 = (float)(*((float *)this + 14) * *((float *)this + 9)) - (float)(*((float *)this + 13) * *((float *)this + 10));
  v7 = (float)(*((float *)this + 13) * *((float *)this + 8)) - (float)(*((float *)this + 12) * *((float *)this + 9));
  return (float)((float)((float)((float)((float)((float)(v2 * *((float *)this + 5)) - (float)(v3 * *((float *)this + 6)))
                                       + (float)(v6 * *((float *)this + 7)))
                               * *(float *)this)
                       - (float)((float)((float)((float)(v2 * *((float *)this + 4)) - (float)(v4 * *((float *)this + 6)))
                                       + (float)(v5 * *((float *)this + 7)))
                               * *((float *)this + 1)))
               + (float)((float)((float)((float)(v3 * *((float *)this + 4)) - (float)(v4 * *((float *)this + 5)))
                               + (float)(v7 * *((float *)this + 7)))
                       * *((float *)this + 2)))
       - (float)((float)((float)((float)(v6 * *((float *)this + 4)) - (float)(v5 * *((float *)this + 5)))
                       + (float)(v7 * *((float *)this + 6)))
               * *((float *)this + 3));
}
