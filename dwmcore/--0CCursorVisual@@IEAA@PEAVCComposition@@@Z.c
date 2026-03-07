CCursorVisual *__fastcall CCursorVisual::CCursorVisual(CCursorVisual *this, struct CComposition *a2)
{
  CVisual::CVisual(this, a2);
  *((_BYTE *)this + 712) = 1;
  *(_QWORD *)this = &CCursorVisual::`vftable';
  *((_QWORD *)this + 90) = 0LL;
  *((_QWORD *)this + 91) = 0LL;
  *((_BYTE *)this + 736) = 0;
  return this;
}
