__int64 __fastcall CDrawingContext::FlushAllDeferredClipping(CDrawingContext *this)
{
  unsigned int v2; // ecx
  int v3; // edi

  v3 = CScopedClipStack::ApplyDeferredD2DLayersInScope((CDrawingContext *)((char *)this + 896), this);
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v2, 0LL, 0, v3, 0x1090u, 0LL);
  }
  else if ( *((_BYTE *)this + 8170) )
  {
    *(_WORD *)((char *)this + 8169) = 1;
  }
  return (unsigned int)v3;
}
