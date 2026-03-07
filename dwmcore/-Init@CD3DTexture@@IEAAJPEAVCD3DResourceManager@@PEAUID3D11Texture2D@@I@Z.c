__int64 __fastcall CD3DTexture::Init(
        CD3DTexture *this,
        struct CD3DResourceManager *a2,
        struct ID3D11Texture2D *a3,
        unsigned int a4)
{
  int PixelFormatColorSpace; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  int v11; // eax
  unsigned int v13; // [rsp+20h] [rbp-18h]

  ((void (__fastcall *)(struct ID3D11Texture2D *, char *))a3->lpVtbl->GetDesc)(a3, (char *)this + 104);
  *((_DWORD *)this + 38) = (unsigned int)HasAlphaChannel(*((_DWORD *)this + 30)) != 0 ? 1 : 3;
  PixelFormatColorSpace = GetPixelFormatColorSpace(*((_DWORD *)this + 30), (enum DXGI_COLOR_SPACE_TYPE *)this + 39);
  v10 = PixelFormatColorSpace;
  if ( PixelFormatColorSpace < 0 )
  {
    v13 = 75;
    goto LABEL_9;
  }
  v11 = *((_DWORD *)this + 28);
  *((_DWORD *)this + 40) = v11;
  if ( (unsigned int)(v11 - 1) <= 0x1F )
  {
    *((_DWORD *)this + 37) = a4;
    if ( a4 >= *((_DWORD *)this + 29) )
    {
      v10 = -2147467259;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147467259, 0x56u, 0LL);
      return v10;
    }
    PixelFormatColorSpace = CD3DTexture::InitResource(this, a2, a3);
    v10 = PixelFormatColorSpace;
    if ( PixelFormatColorSpace >= 0 )
      return v10;
    v13 = 92;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, PixelFormatColorSpace, v13, 0LL);
    return v10;
  }
  v10 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147467259, 0x50u, 0LL);
  return v10;
}
