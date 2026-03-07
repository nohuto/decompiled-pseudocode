__int64 __fastcall CD3DSurface::Create(
        CD3DDevice **a1,
        const struct DWM_TEXTURE2D_DESC *a2,
        struct D3D11_SUBRESOURCE_DATA *a3,
        struct CD3DSurface **a4)
{
  int v6; // eax
  __int64 v7; // rcx
  unsigned int *v8; // r8
  unsigned int v9; // r9d
  struct ID3D11Texture2D *v10; // rdi
  unsigned int v11; // ebx
  int ViewOfTexture; // eax
  __int64 v13; // rcx
  struct ID3D11Texture2D *v15; // [rsp+50h] [rbp+18h] BYREF

  *a4 = 0LL;
  v15 = 0LL;
  v6 = CD3DDevice::CreateTexture(a1[10], a2, a3, &v15);
  v10 = v15;
  v11 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_1803B6D08, 0xAu, v6, 0x47u, 0LL);
  }
  else
  {
    ViewOfTexture = CD3DSurface::CreateViewOfTexture((struct CD3DResourceManager *)a1, v15, v8, v9, a4);
    v11 = ViewOfTexture;
    if ( ViewOfTexture < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v13, &dword_1803B6D08, 0xAu, ViewOfTexture, 0x4Du, 0LL);
  }
  if ( v10 )
    ((void (__fastcall *)(struct ID3D11Texture2D *))v10->lpVtbl->Release)(v10);
  return v11;
}
