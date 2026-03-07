bool __fastcall CLayerVisual::HasNonEmptyContent(CLayerVisual *this)
{
  return !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)this + 37);
}
