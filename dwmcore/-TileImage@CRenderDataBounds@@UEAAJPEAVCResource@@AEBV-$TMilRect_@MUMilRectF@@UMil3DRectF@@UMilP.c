__int64 __fastcall CRenderDataBounds::TileImage(__int64 a1, __int64 a2, float *a3, __int64 a4, int a5)
{
  __int64 v5; // r8
  __int64 v6; // r9

  if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(a3)
    && COERCE_FLOAT(a5 & _xmm) >= 0.0000011920929 )
  {
    CRenderDataBounds::AddBounds(v6, v5);
  }
  return 0LL;
}
