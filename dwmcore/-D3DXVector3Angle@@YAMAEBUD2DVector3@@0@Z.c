float __fastcall D3DXVector3Angle(const struct D2DVector3 *a1, const struct D2DVector3 *a2)
{
  float v2; // xmm1_4
  float v3; // xmm7_4
  float v4; // xmm8_4
  float v5; // xmm9_4
  float v6; // xmm10_4
  float v7; // xmm6_4
  float v8; // xmm10_4

  v2 = *((float *)a2 + 2);
  v3 = *((float *)a1 + 1);
  v4 = *((float *)a1 + 2);
  v5 = *(float *)a1;
  v6 = (float)((float)(*(float *)a2 * *(float *)a1) + (float)(*((float *)a2 + 1) * v3)) + (float)(v2 * v4);
  v7 = sqrtf_0(
         (float)((float)(*(float *)a2 * *(float *)a2) + (float)(*((float *)a2 + 1) * *((float *)a2 + 1)))
       + (float)(v2 * v2));
  v8 = v6 / (float)(v7 * sqrtf_0((float)((float)(v5 * v5) + (float)(v3 * v3)) + (float)(v4 * v4)));
  return acosf_0(v8);
}
