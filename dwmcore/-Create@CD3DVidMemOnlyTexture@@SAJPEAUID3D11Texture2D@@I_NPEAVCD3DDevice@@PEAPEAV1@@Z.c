/*
 * XREFs of ?Create@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDevice@@PEAPEAV1@@Z @ 0x1802BC55C
 * Callers:
 *     ?Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAVIYUVSwapChainRealization@@@Z @ 0x1802B0D60 (-Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAVIYUVSwapChainRealization@@@Z.c)
 *     ?OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@PEAVCD3DDevice@@PEAX_NIPEAPEAV1@@Z @ 0x1802BC654 (-OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@PEAVCD3DDevice@@PEAX_NIPE.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIDeviceResource@@@@IEAAKXZ @ 0x1800F0E64 (-InternalRelease@-$CMILRefCountBaseT@VIDeviceResource@@@@IEAAKXZ.c)
 *     ?Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z @ 0x1802BC140 (-Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z.c)
 *     ??0CD3DVidMemOnlyTexture@@IEAA@_N@Z @ 0x1802BC478 (--0CD3DVidMemOnlyTexture@@IEAA@_N@Z.c)
 */

__int64 __fastcall CD3DVidMemOnlyTexture::Create(
        struct ID3D11Texture2D *a1,
        unsigned int a2,
        __int64 a3,
        struct CD3DDevice *a4,
        struct CD3DVidMemOnlyTexture **a5)
{
  CD3DVidMemOnlyTexture *v8; // rax
  __int64 v9; // rcx
  CD3DVidMemOnlyTexture *v10; // rax
  CD3DTexture *v11; // rdi
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // ebx
  __int64 v15; // rcx

  *a5 = 0LL;
  v8 = (CD3DVidMemOnlyTexture *)operator new(0xF0uLL);
  if ( v8 && (v10 = CD3DVidMemOnlyTexture::CD3DVidMemOnlyTexture(v8), (v11 = v10) != 0LL) )
  {
    CMILRefCountImpl::AddReference((CD3DVidMemOnlyTexture *)((char *)v10 + 16));
    v12 = CD3DTexture::Init(v11, (struct CD3DDevice *)((char *)a4 + 1104), a1, a2);
    v14 = v12;
    if ( v12 >= 0 )
    {
      *a5 = v11;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x10Bu, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xCBu, 0LL);
      CMILRefCountBaseT<IDeviceResource>::InternalRelease((volatile signed __int32 *)v11);
    }
  }
  else
  {
    v14 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024882, 0xC3u, 0LL);
  }
  return v14;
}
