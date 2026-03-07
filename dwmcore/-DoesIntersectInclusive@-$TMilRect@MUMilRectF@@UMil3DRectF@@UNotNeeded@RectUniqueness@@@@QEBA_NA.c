bool __fastcall TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesIntersectInclusive(
        float *a1,
        float *a2)
{
  if ( a1[2] < *a2 )
    return 0;
  if ( a2[2] < *a1 || a1[3] < a2[1] )
    return 0;
  return a2[3] >= a1[1];
}
