bool __fastcall TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsCloseToEmpty<void>(
        float *a1,
        float a2)
{
  return (float)(a1[2] - a2) <= *a1 || (float)(a1[3] - a2) <= a1[1];
}
