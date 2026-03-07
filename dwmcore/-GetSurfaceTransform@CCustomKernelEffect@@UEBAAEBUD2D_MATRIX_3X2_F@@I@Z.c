const struct D2D_MATRIX_3X2_F *__fastcall CCustomKernelEffect::GetSurfaceTransform(CCustomKernelEffect *this)
{
  return (const struct D2D_MATRIX_3X2_F *)&CCustomKernelEffect::k_identityTransform;
}
