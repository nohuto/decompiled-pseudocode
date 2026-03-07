void __fastcall CBlurRenderingGraph::DeterminePreScale(
        const struct EffectInput *a1,
        const struct EffectInput *a2,
        int a3,
        struct D2D_MATRIX_3X2_F *a4)
{
  __int64 v4; // r8
  float v5; // xmm6_4
  float v6; // xmm7_4
  float *v7; // r9
  const struct D2D_MATRIX_3X2_F *v8; // r10
  struct D2D_RECT_F v9; // [rsp+28h] [rbp-21h] BYREF
  __int64 v10; // [rsp+38h] [rbp-11h]
  struct D2D_RECT_F v11; // [rsp+40h] [rbp-9h] BYREF
  __int64 v12; // [rsp+50h] [rbp+7h]
  _DWORD v13[6]; // [rsp+58h] [rbp+Fh] BYREF

  v4 = 5LL * a3;
  v5 = fmaxf(
         0.0099999998,
         fminf(
           1.0,
           CBlurRenderingGraph::k_optimizations[v4] / (float)(CBlurRenderingGraph::k_optimizations[v4 + 1] + a4->m11)));
  v6 = fmaxf(
         0.0099999998,
         fminf(
           1.0,
           CBlurRenderingGraph::k_optimizations[v4] / (float)(CBlurRenderingGraph::k_optimizations[v4 + 1] + a4->m12)));
  D2DMatrixHelper::ComputeRectangleTransform(
    (const struct EffectInput *)((char *)a1 + 84),
    (const struct D2D_RECT_F *)((char *)a2 + 84),
    &v9,
    a4);
  v13[1] = 0;
  v13[2] = 0;
  *(float *)v13 = v5;
  *(float *)&v13[3] = v6;
  *(float *)&v13[4] = 0.0 - (float)(v5 * 0.0);
  *(float *)&v13[5] = 0.0 - (float)(v6 * 0.0);
  D2D1::Matrix3x2F::SetProduct(
    (D2D1::Matrix3x2F *)&v11,
    (const struct D2D1::Matrix3x2F *)&v9,
    (const struct D2D1::Matrix3x2F *)v13);
  v9 = v11;
  v10 = v12;
  D2DMatrixHelper::GetScaleDimensions((D2DMatrixHelper *)&v9, v8, &v8->m12, v7);
}
