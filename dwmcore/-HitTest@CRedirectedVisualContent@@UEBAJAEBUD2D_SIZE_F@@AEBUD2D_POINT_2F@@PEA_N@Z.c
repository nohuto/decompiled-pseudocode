__int64 __fastcall CRedirectedVisualContent::HitTest(
        CRedirectedVisualContent *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  bool IsInfinite; // al
  const struct MilRectF *v5; // rdx
  const struct D2D_POINT_2F *v6; // r8
  bool *v7; // r9
  bool v8; // r10

  IsInfinite = TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::IsInfinite((float *)this - 12);
  v8 = 0;
  if ( !IsInfinite )
    v8 = IsPointInRect(v6, v5);
  *v7 = v8;
  return 0LL;
}
