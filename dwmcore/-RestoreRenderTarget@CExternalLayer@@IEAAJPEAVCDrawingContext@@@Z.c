__int64 __fastcall CExternalLayer::RestoreRenderTarget(CExternalLayer *this, struct CDrawingContext *a2)
{
  unsigned int v2; // ebx
  int v3; // eax
  __int64 v4; // rcx

  v2 = 0;
  if ( *((_BYTE *)this + 33) )
  {
    v3 = CDrawingContext::PopRenderTargetInternal(a2, 0);
    v2 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x9Bu, 0LL);
  }
  return v2;
}
