__int64 __fastcall CCursorVisual::GetContentBounds(CCursorVisual *this, float *a2)
{
  int ContentBounds; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  ContentBounds = CVisual::GetContentBounds((char *)this, (__int64)a2);
  v5 = ContentBounds;
  if ( ContentBounds >= 0 )
  {
    if ( CCursorVisual::IsVisible(this) )
      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(
        a2,
        (float *)(*((_QWORD *)this + 90) + 120LL));
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x45,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\global\\cursorvisual.cpp",
      (const char *)(unsigned int)ContentBounds);
    return v5;
  }
}
