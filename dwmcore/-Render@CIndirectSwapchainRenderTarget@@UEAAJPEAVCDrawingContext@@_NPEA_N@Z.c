__int64 __fastcall CIndirectSwapchainRenderTarget::Render(
        CIndirectSwapchainRenderTarget *this,
        struct CDrawingContext *a2,
        char a3,
        bool *a4)
{
  CIndirectSwapchainRenderTarget *v4; // rsi
  unsigned int v6; // ebx
  int Buffer; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx

  v4 = (CIndirectSwapchainRenderTarget *)((char *)this - 2016);
  v6 = 0;
  *a4 = 0;
  if ( COffScreenRenderTarget::ReadyForRender((CIndirectSwapchainRenderTarget *)((char *)this - 2016)) )
  {
    Buffer = CIndirectSwapchainRenderTarget::TryTargetNextBuffer(v4);
    v6 = Buffer;
    if ( Buffer < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, Buffer, 0xD3u, 0LL);
    }
    else
    {
      if ( !*((_BYTE *)this - 260) || !*((_QWORD *)this - 9) )
        return v6;
      LOBYTE(v12) = a3;
      v13 = COffScreenRenderTarget::Render((LARGE_INTEGER *)this - 13, a2, v12, a4);
      v6 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xDFu, 0LL);
      }
      else
      {
        *((_BYTE *)this - 86) = 1;
        v15 = CIndirectSwapchainRenderTarget::EnsureMetadataBuffer(v4);
        v6 = v15;
        if ( v15 >= 0 )
        {
          *a4 = 1;
          return v6;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xE3u, 0LL);
      }
    }
    if ( v6 == -2003304307 )
      CIndirectSwapchainRenderTarget::Unregister(v4);
  }
  return v6;
}
