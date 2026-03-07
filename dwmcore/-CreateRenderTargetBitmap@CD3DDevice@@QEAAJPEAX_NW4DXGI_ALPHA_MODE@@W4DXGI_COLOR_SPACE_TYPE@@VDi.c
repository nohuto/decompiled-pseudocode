__int64 __fastcall CD3DDevice::CreateRenderTargetBitmap(
        CD3DDevice *a1,
        void *a2,
        struct D3D11_SUBRESOURCE_DATA *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        struct IRenderTargetBitmap **a8)
{
  int v10; // ebx
  int RenderTargetBitmap; // eax
  int v12; // r9d
  unsigned int v14; // [rsp+20h] [rbp-78h]
  struct ID3D11Texture2D *v15; // [rsp+40h] [rbp-58h] BYREF
  struct D3D11_TEXTURE2D_DESC v16; // [rsp+48h] [rbp-50h] BYREF

  v15 = 0LL;
  *a8 = 0LL;
  v10 = *((_DWORD *)a1 + 272);
  if ( v10 < 0 )
  {
    v12 = *((_DWORD *)a1 + 272);
    v14 = 1145;
    goto LABEL_8;
  }
  RenderTargetBitmap = CD3DDevice::OpenSharedTexture(a1, &v16, a3, a2, 0, &v15);
  v10 = RenderTargetBitmap;
  if ( RenderTargetBitmap < 0 )
  {
    v14 = 1153;
    goto LABEL_5;
  }
  RenderTargetBitmap = CD3DDevice::CreateRenderTargetBitmap((__int64)a1, (__int64)v15, a4, a5, a6, a7, a8);
  v10 = RenderTargetBitmap;
  if ( RenderTargetBitmap < 0 )
  {
    v14 = 1160;
LABEL_5:
    v12 = RenderTargetBitmap;
LABEL_8:
    MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, &dword_180383C70, 2u, v12, v14, 0LL);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v15);
  return (unsigned int)v10;
}
