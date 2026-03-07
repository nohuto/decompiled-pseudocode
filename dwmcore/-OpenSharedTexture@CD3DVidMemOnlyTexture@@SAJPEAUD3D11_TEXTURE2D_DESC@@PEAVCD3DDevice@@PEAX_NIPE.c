__int64 __fastcall CD3DVidMemOnlyTexture::OpenSharedTexture(
        struct D3D11_TEXTURE2D_DESC *a1,
        struct CD3DDevice *this,
        struct D3D11_SUBRESOURCE_DATA *a3,
        __int64 a4,
        unsigned int a5,
        struct CD3DVidMemOnlyTexture **a6)
{
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // ebx
  int v12; // eax
  __int64 v13; // rcx
  struct ID3D11Texture2D *v15; // [rsp+30h] [rbp-18h] BYREF

  v15 = 0LL;
  v8 = CD3DDevice::OpenSharedTexture(this, a1, a3, a3, 1, &v15);
  v11 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x94u, 0LL);
  }
  else
  {
    v12 = CD3DVidMemOnlyTexture::Create(v15, 0, v10, this, a6);
    v11 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x9Au, 0LL);
    else
      *((_QWORD *)*a6 + 27) = a3;
  }
  if ( v15 )
    ((void (__fastcall *)(struct ID3D11Texture2D *))v15->lpVtbl->Release)(v15);
  return v11;
}
