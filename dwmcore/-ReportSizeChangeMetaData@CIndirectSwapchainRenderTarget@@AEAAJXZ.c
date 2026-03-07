__int64 __fastcall CIndirectSwapchainRenderTarget::ReportSizeChangeMetaData(CIndirectSwapchainRenderTarget *this)
{
  unsigned int v1; // ebx
  int v2; // eax
  __int64 v3; // rcx

  v1 = 0;
  if ( !*((_BYTE *)this + 1928) )
  {
    *((_BYTE *)this + 1928) = 1;
    v2 = CIndirectSwapchainRenderTarget::EnsureMetadataBuffer(this);
    v1 = v2;
    if ( v2 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x1BAu, 0LL);
  }
  return v1;
}
