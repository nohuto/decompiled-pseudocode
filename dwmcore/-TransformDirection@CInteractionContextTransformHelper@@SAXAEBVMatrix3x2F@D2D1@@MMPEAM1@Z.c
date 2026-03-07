void __fastcall CInteractionContextTransformHelper::TransformDirection(
        const struct D2D1::Matrix3x2F *a1,
        float a2,
        float a3,
        float *a4,
        float *a5)
{
  float v5; // xmm7_4
  float *v6; // rcx
  float *v7; // r9
  float v8; // xmm3_4

  v5 = a3;
  if ( D2D1::Matrix3x2F::IsIdentity(a1) )
  {
    v8 = a2;
  }
  else
  {
    a3 = (float)((float)((float)(v6[1] * a2) + (float)(v6[3] * a3)) + v6[5])
       - (float)((float)((float)(v6[1] * 0.0) + (float)(v6[3] * 0.0)) + v6[5]);
    v8 = (float)((float)((float)(*v6 * a2) + (float)(v6[2] * v5)) + v6[4])
       - (float)((float)((float)(*v6 * 0.0) + (float)(v6[2] * 0.0)) + v6[4]);
  }
  *v7 = v8;
  *a5 = a3;
}
