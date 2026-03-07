bool __fastcall CProjectedShadow::CanUseFastShadow(CProjectedShadowCaster **this)
{
  return CProjectedShadowCaster::IsRectangular(this[10])
      && (float)(*((float *)this + 98) * 0.5) >= *((float *)this + 24);
}
