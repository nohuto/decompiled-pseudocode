char __fastcall CTreeEffect::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        float *a5,
        char a6,
        float *a7,
        float *a8)
{
  char result; // al

  result = 0;
  if ( *a1 )
    return CEffectBrush::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(*a1, a2, a3, a4, a5, a6, a7, a8);
  return result;
}
