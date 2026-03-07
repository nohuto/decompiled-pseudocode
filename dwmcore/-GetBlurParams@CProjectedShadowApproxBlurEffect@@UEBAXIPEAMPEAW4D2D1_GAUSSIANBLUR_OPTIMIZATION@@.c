void __fastcall CProjectedShadowApproxBlurEffect::GetBlurParams(
        CProjectedShadowApproxBlurEffect *this,
        __int64 a2,
        float *a3,
        enum D2D1_GAUSSIANBLUR_OPTIMIZATION *a4,
        enum D2D1_BORDER_MODE *a5)
{
  *a3 = 0.0;
  *a4 = D2D1_GAUSSIANBLUR_OPTIMIZATION_SPEED;
  *a5 = D2D1_BORDER_MODE_SOFT;
}
