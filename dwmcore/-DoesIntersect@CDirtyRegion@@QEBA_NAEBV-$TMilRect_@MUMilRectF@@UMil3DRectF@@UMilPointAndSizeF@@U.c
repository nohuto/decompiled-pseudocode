char __fastcall CDirtyRegion::DoesIntersect(__int64 a1, float *a2)
{
  float *v2; // r11
  __int64 v3; // r9
  unsigned int v4; // r8d
  int v6; // r8d
  unsigned int v7; // r10d

  v2 = a2;
  v3 = a1;
  if ( !*(_BYTE *)(a1 + 4420) )
  {
    v4 = 0;
    if ( !*(_DWORD *)(a1 + 2820) )
      return 0;
    while ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
               v2,
               (float *)(16LL * v4 + v3 + 2660)) )
    {
      v4 = v6 + 1;
      if ( v4 >= v7 )
        return 0;
    }
  }
  return 1;
}
