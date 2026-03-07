_BOOL8 __fastcall CColorMatrixEffect::GetAlphaDescriptor(__int64 a1)
{
  return *(float *)(a1 + 236) != 0.0 || *(float *)(a1 + 252) != 1.0;
}
