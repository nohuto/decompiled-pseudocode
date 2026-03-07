__int64 __fastcall TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::SetToBoundsOfUnorderedPointSet<MilPoint2F>(
        float *a1,
        unsigned __int64 *a2)
{
  __int64 result; // rax
  unsigned __int64 v5; // rsi

  *a1 = *(float *)gsl::span<MilPoint2F const,-1>::operator[](a2, 0LL);
  a1[1] = *(float *)(gsl::span<MilPoint2F const,-1>::operator[](a2, 0LL) + 4);
  a1[2] = *(float *)gsl::span<MilPoint2F const,-1>::operator[](a2, 0LL);
  result = gsl::span<MilPoint2F const,-1>::operator[](a2, 0LL);
  v5 = 1LL;
  a1[3] = *(float *)(result + 4);
  while ( v5 < *a2 )
  {
    *a1 = fminf(*a1, *(float *)gsl::span<MilPoint2F const,-1>::operator[](a2, v5));
    a1[1] = fminf(a1[1], *(float *)(gsl::span<MilPoint2F const,-1>::operator[](a2, v5) + 4));
    a1[2] = fmaxf(a1[2], *(float *)gsl::span<MilPoint2F const,-1>::operator[](a2, v5));
    result = gsl::span<MilPoint2F const,-1>::operator[](a2, v5++);
    a1[3] = fmaxf(a1[3], *(float *)(result + 4));
  }
  return result;
}
