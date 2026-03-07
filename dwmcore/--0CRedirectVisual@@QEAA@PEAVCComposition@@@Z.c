CRedirectVisual *__fastcall CRedirectVisual::CRedirectVisual(CRedirectVisual *this, struct CComposition *a2)
{
  CVisual::CVisual(this, a2);
  *(_QWORD *)this = &CRedirectVisual::`vftable';
  return this;
}
