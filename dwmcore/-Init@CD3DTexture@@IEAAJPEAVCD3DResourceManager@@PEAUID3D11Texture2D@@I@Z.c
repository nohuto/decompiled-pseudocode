/*
 * XREFs of ?Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z @ 0x1802BC140
 * Callers:
 *     ?Create@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDevice@@PEAPEAV1@@Z @ 0x1802BC55C (-Create@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDevice@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x1800A8DE4 (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180298CB0 (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?InitResource@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@@Z @ 0x1802BC260 (-InitResource@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@@Z.c)
 */

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
