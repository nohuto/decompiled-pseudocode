__int64 __fastcall CDxHandleYUVBitmapRealization::GetDXGIResource(
        CD3DTexture **this,
        struct IDXGIResource **a2,
        unsigned int *a3)
{
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  int DXGIResource; // eax
  __int64 v10; // rcx

  *a2 = 0LL;
  if ( a3 )
    *a3 = 0;
  v6 = CDxHandleYUVBitmapRealization::EnsureTexture((CDxHandleYUVBitmapRealization *)(this - 63));
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x176u, 0LL);
  }
  else
  {
    DXGIResource = CD3DTexture::GetDXGIResource(*(this - 16), a2);
    v8 = DXGIResource;
    if ( DXGIResource < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, DXGIResource, 0x178u, 0LL);
    }
    else if ( a3 )
    {
      *a3 = *((_DWORD *)*(this - 16) + 37);
    }
  }
  return v8;
}
