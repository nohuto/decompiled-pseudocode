char __fastcall CCursorVisual::HasNonEmptyContent(CCursorVisual *this)
{
  CVisual *v1; // rcx
  char v2; // bl

  v2 = 0;
  if ( CCursorVisual::IsVisible(this) || CVisual::HasNonEmptyContent(v1) )
    return 1;
  return v2;
}
