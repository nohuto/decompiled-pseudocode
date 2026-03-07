__int64 __fastcall CWindowBackgroundTreatment::AddRectangleToBounds(__int64 a1, float *a2)
{
  if ( (float)(a2[2] - *a2) >= 0.99999988 && (float)(a2[3] - a2[1]) >= 0.99999988 )
    TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a1 + 88);
  return 0LL;
}
