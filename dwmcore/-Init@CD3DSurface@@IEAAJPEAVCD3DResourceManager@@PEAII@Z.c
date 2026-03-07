__int64 __fastcall CD3DSurface::Init(
        CD3DSurface *this,
        struct CD3DResourceManager *a2,
        struct IDXGIResource *a3,
        int a4)
{
  __int64 v5; // rcx
  __int64 v7; // rcx
  unsigned int v8; // edi
  int v9; // ecx
  int v10; // r8d
  int PixelFormatColorSpace; // eax
  __int64 v12; // rcx
  int v13; // eax
  bool v14; // cc
  const struct D3D11_RENDER_TARGET_VIEW_DESC *v15; // r8
  bool v16; // cc
  const struct D3D11_SHADER_RESOURCE_VIEW_DESC *v17; // r8
  unsigned int v19; // [rsp+20h] [rbp-30h]
  int v20; // [rsp+30h] [rbp-20h] BYREF
  __int64 v21; // [rsp+34h] [rbp-1Ch]
  int v22; // [rsp+3Ch] [rbp-14h]
  int v23; // [rsp+40h] [rbp-10h]
  int v24; // [rsp+44h] [rbp-Ch]
  struct IDXGIResource *v25; // [rsp+80h] [rbp+30h] BYREF
  int v26; // [rsp+88h] [rbp+38h] BYREF

  v26 = a4;
  v25 = a3;
  v5 = *((_QWORD *)this + 14);
  v25 = 0LL;
  (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v5 + 80LL))(v5, (char *)this + 124);
  if ( !*((_DWORD *)this + 34) )
  {
    v8 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024809, 0x9Du, 0LL);
    goto LABEL_25;
  }
  v9 = *((_DWORD *)this + 35);
  *((_DWORD *)this + 30) = 0;
  *((_DWORD *)this + 42) = (unsigned int)HasAlphaChannel(v9) != 0 ? 1 : 3;
  PixelFormatColorSpace = GetPixelFormatColorSpace(v10, (enum DXGI_COLOR_SPACE_TYPE *)this + 43);
  v8 = PixelFormatColorSpace;
  if ( PixelFormatColorSpace < 0 )
  {
    v19 = 176;
    goto LABEL_24;
  }
  v13 = (*(__int64 (__fastcall **)(CD3DSurface *))(*(_QWORD *)this + 88LL))(this);
  *((_BYTE *)this + 70) = 1;
  *((_DWORD *)this + 16) = v13;
  *((_QWORD *)this + 3) = a2;
  CD3DResourceManager::RegisterResource(a2, this);
  PixelFormatColorSpace = CD3DSurface::GetDXGIResource(this, &v25);
  v8 = PixelFormatColorSpace;
  if ( PixelFormatColorSpace < 0 )
  {
    v19 = 190;
    goto LABEL_24;
  }
  PixelFormatColorSpace = ((__int64 (__fastcall *)(struct IDXGIResource *, int *))v25->lpVtbl->GetUsage)(v25, &v26);
  v8 = PixelFormatColorSpace;
  if ( PixelFormatColorSpace < 0 )
  {
    v19 = 192;
LABEL_24:
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, PixelFormatColorSpace, v19, 0LL);
    goto LABEL_25;
  }
  if ( (*((_BYTE *)this + 156) & 0x20) != 0 && (v26 & 0x100) == 0 )
  {
    v14 = *((_DWORD *)this + 34) <= 1u;
    if ( *((_DWORD *)this + 34) > 1u )
    {
      v20 = *((_DWORD *)this + 35);
      v22 = *((_DWORD *)this + 30);
      v21 = 5LL;
      v23 = 1;
    }
    v15 = (const struct D3D11_RENDER_TARGET_VIEW_DESC *)&v20;
    if ( v14 )
      v15 = 0LL;
    PixelFormatColorSpace = CD3DDevice::CreateRenderTargetView(
                              *(CD3DDevice **)(*((_QWORD *)this + 3) + 80LL),
                              *((struct ID3D11Resource **)this + 14),
                              v15,
                              (struct ID3D11RenderTargetView **)this + 22);
    v8 = PixelFormatColorSpace;
    if ( PixelFormatColorSpace < 0 )
    {
      v19 = 216;
      goto LABEL_24;
    }
  }
  if ( (*((_BYTE *)this + 156) & 8) != 0 )
  {
    v16 = *((_DWORD *)this + 34) <= 1u;
    if ( *((_DWORD *)this + 34) > 1u )
    {
      v20 = *((_DWORD *)this + 35);
      v22 = *((_DWORD *)this + 33);
      v23 = *((_DWORD *)this + 30);
      v21 = 5LL;
      v24 = 1;
    }
    v17 = (const struct D3D11_SHADER_RESOURCE_VIEW_DESC *)&v20;
    if ( v16 )
      v17 = 0LL;
    PixelFormatColorSpace = CD3DDevice::CreateShaderResourceView(
                              *(CD3DDevice **)(*((_QWORD *)this + 3) + 80LL),
                              *((struct ID3D11Resource **)this + 14),
                              v17,
                              (struct ID3D11ShaderResourceView **)this + 23);
    v8 = PixelFormatColorSpace;
    if ( PixelFormatColorSpace < 0 )
    {
      v19 = 238;
      goto LABEL_24;
    }
  }
LABEL_25:
  if ( v25 )
    ((void (__fastcall *)(struct IDXGIResource *))v25->lpVtbl->Release)(v25);
  return v8;
}
