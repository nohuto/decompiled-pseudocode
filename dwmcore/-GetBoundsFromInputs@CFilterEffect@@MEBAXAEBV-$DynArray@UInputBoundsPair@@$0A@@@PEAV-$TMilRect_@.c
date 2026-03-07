char __fastcall CFilterEffect::GetBoundsFromInputs(__int64 a1, __int64 a2, float *a3)
{
  __int64 v3; // r10
  __int64 v5; // r11
  char result; // al
  int v7; // r10d

  v3 = 0LL;
  v5 = a2;
  for ( *(_OWORD *)a3 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
        (unsigned int)v3 < *(_DWORD *)(v5 + 24);
        v3 = (unsigned int)(v7 + 1) )
  {
    result = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(
               a3,
               (float *)(*(_QWORD *)v5 + 4 * (v3 + 4 * v3 + 1)));
  }
  return result;
}
