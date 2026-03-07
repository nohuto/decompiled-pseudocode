__int64 __fastcall CRectanglesShape::BuildFromRectFs(CRectanglesShape *a1, const void *a2, unsigned int a3)
{
  CRectanglesShape::Reset(a1);
  return DynArray<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
           (__int64)a1 + 16,
           a2,
           a3);
}
