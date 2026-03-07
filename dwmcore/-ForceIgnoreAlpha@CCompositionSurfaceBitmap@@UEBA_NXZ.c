bool __fastcall CCompositionSurfaceBitmap::ForceIgnoreAlpha(CCompositionSurfaceBitmap *this)
{
  return *((_BYTE *)this + 120);
}
