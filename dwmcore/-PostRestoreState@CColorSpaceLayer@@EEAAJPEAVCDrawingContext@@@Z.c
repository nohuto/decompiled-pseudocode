__int64 __fastcall CColorSpaceLayer::PostRestoreState(CColorSpaceLayer *this, struct CDrawingContext *a2)
{
  int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx

  *((_BYTE *)a2 + 8171) = *((_BYTE *)this + 120);
  v2 = CDrawingContext::FlushD2D(a2);
  v4 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x3Cu, 0LL);
  return v4;
}
