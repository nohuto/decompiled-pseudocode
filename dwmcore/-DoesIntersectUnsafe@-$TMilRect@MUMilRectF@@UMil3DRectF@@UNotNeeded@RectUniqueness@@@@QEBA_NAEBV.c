bool __fastcall TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
        float *a1,
        float *a2)
{
  float v2; // xmm2_4
  float v3; // xmm1_4
  bool result; // al

  v2 = a1[2];
  result = 0;
  if ( v2 > *a1 && a1[3] > a1[1] )
  {
    v3 = a2[2];
    if ( v3 > *a2 && a2[3] > a2[1] && v2 > *a2 && v3 > *a1 && a1[3] > a2[1] && a2[3] > a1[1] )
      return 1;
  }
  return result;
}
