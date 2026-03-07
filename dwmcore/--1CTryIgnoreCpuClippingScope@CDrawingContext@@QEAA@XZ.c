void __fastcall CDrawingContext::CTryIgnoreCpuClippingScope::~CTryIgnoreCpuClippingScope(CDrawingContext **this)
{
  CDrawingContext *v1; // rcx
  CDrawingContext **v2; // r9

  v1 = *this;
  if ( v1 )
  {
    CDrawingContext::PopGpuClipRectInternal(v1, 0);
    CDrawingContext::PopClippingScope(*v2, 0);
  }
}
