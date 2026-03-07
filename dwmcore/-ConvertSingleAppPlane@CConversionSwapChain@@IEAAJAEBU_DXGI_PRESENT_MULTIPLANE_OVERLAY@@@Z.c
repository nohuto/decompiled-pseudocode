__int64 __fastcall CConversionSwapChain::ConvertSingleAppPlane(
        CConversionSwapChain *this,
        const struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *a2)
{
  unsigned int v2; // ebx
  enum DXGI_FORMAT v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // r8d
  int v9; // eax
  struct IDXGIResource *v10; // rdx
  int AppOverlayShaderResourceView; // eax
  __int64 v12; // rcx
  int v13; // edx
  int v14; // eax
  __int64 v15; // rcx
  struct ID3D11ShaderResourceView *v17; // [rsp+40h] [rbp-9h] BYREF
  struct D2D_SIZE_U v18; // [rsp+48h] [rbp-1h] BYREF
  enum DXGI_FORMAT v19[4]; // [rsp+50h] [rbp+7h] BYREF
  _DWORD v20[4]; // [rsp+60h] [rbp+17h] BYREF
  _DWORD v21[4]; // [rsp+70h] [rbp+27h] BYREF

  v2 = 0;
  if ( *((_BYTE *)this + 776) )
  {
    v5 = *((_DWORD *)a2 + 25);
    v6 = *((_DWORD *)a2 + 16);
    v7 = *((_DWORD *)a2 + 17);
    v8 = *((_DWORD *)a2 + 18);
    v19[0] = DXGI_FORMAT_UNKNOWN;
    v18 = 0LL;
    v19[2] = v5;
    v9 = *((_DWORD *)a2 + 15);
    v19[1] = DXGI_FORMAT_R32G32B32A32_UINT;
    *((_DWORD *)this + 190) = v9;
    *((_DWORD *)this + 191) = v6;
    *((_DWORD *)this + 192) = v7;
    *((_DWORD *)this + 193) = v8;
    v10 = (struct IDXGIResource *)*((_QWORD *)a2 + 1);
    v17 = 0LL;
    AppOverlayShaderResourceView = CConversionSwapChain::GetAppOverlayShaderResourceView(this, v10, &v18, v19, &v17);
    v2 = AppOverlayShaderResourceView;
    if ( AppOverlayShaderResourceView < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, AppOverlayShaderResourceView, 0x2C6u, 0LL);
    }
    else
    {
      v13 = *((_DWORD *)a2 + 19);
      v20[0] = *((_DWORD *)a2 + 11);
      v20[1] = *((_DWORD *)a2 + 12);
      v20[2] = *((_DWORD *)a2 + 13);
      v20[3] = *((_DWORD *)a2 + 14);
      v21[0] = *((_DWORD *)a2 + 7);
      v21[1] = *((_DWORD *)a2 + 8);
      v21[2] = *((_DWORD *)a2 + 9);
      v21[3] = *((_DWORD *)a2 + 10);
      v14 = CConversionSwapChain::ConvertSingleResource(this, v17, &v18, v19, v21, v13, v20, (char *)this + 760);
      v2 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x2CEu, 0LL);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v17);
  }
  return v2;
}
