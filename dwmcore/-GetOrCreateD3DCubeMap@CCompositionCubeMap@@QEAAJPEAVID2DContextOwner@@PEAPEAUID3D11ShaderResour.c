/*
 * XREFs of ?GetOrCreateD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x18021F830
 * Callers:
 *     ?BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuilder@@@Z @ 0x180221EB0 (-BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuil.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18001C8D4 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18001EC20 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x180034A84 (-GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?CreateTexture@CD3DDevice@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x18003CD3C (-CreateTexture@CD3DDevice@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D1.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800D4E90 (-GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?CreateShaderResourceView@CD3DDevice@@QEAAJPEAUID3D11Resource@@PEBUD3D11_SHADER_RESOURCE_VIEW_DESC@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x1800D7FBC (-CreateShaderResourceView@CD3DDevice@@QEAAJPEAUID3D11Resource@@PEBUD3D11_SHADER_RESOURCE_VIEW_DE.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FlushToD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@@Z @ 0x18021F57C (-FlushToD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@@Z.c)
 *     ?GetAdapterLuid@CCompositionSurfaceBitmap@@QEBA?AU_LUID@@XZ @ 0x18021F7E0 (-GetAdapterLuid@CCompositionSurfaceBitmap@@QEBA-AU_LUID@@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCD3DDevice@@@WRL@Microsoft@@IEAAKXZ @ 0x18021FB18 (-InternalRelease@-$ComPtr@VCD3DDevice@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CCompositionCubeMap::GetOrCreateD3DCubeMap(
        CCompositionCubeMap *this,
        struct ID2DContextOwner *a2,
        struct ID3D11ShaderResourceView **a3)
{
  unsigned int v4; // edi
  __int64 v6; // rax
  __int64 v7; // rcx
  struct _LUID v9; // rbx
  struct ID3D11Texture2D **v10; // r15
  struct ID3D11ShaderResourceView **v11; // r14
  CDeviceManager *v12; // rcx
  int ExistingDevice; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  int CurrentRenderingRealization; // eax
  __int64 v18; // rcx
  void (__fastcall ***v19)(_QWORD, DXGI_FORMAT *); // rcx
  char v20; // dl
  struct D3D11_SUBRESOURCE_DATA *v21; // r8
  int Texture; // eax
  __int64 v23; // rcx
  struct ID3D11Texture2D *v24; // rdx
  int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  struct _LUID v30; // [rsp+30h] [rbp-79h] BYREF
  struct CD3DDevice *v31; // [rsp+38h] [rbp-71h] BYREF
  struct D3D11_SHADER_RESOURCE_VIEW_DESC v32; // [rsp+40h] [rbp-69h] BYREF
  __int128 v33; // [rsp+58h] [rbp-51h]
  DXGI_FORMAT v34[6]; // [rsp+68h] [rbp-41h] BYREF
  _DWORD v35[5]; // [rsp+80h] [rbp-29h] BYREF
  __int64 v36; // [rsp+94h] [rbp-15h]
  int v37; // [rsp+9Ch] [rbp-Dh]
  int v38; // [rsp+A0h] [rbp-9h]
  int v39; // [rsp+A4h] [rbp-5h]
  int v40; // [rsp+A8h] [rbp-1h]
  __int128 v41; // [rsp+B0h] [rbp+7h]

  v4 = 0;
  *a3 = 0LL;
  v6 = *((unsigned int *)this + 30);
  v7 = *((_QWORD *)this + 11);
  v31 = 0LL;
  CCompositionSurfaceBitmap::GetAdapterLuid(*(CCompositionSurfaceBitmap **)(32 * v6 + v7 + 8), &v30);
  v9 = v30;
  v10 = (struct ID3D11Texture2D **)((char *)this + 136);
  if ( *((_QWORD *)this + 16) == v30 )
  {
    v11 = (struct ID3D11ShaderResourceView **)((char *)this + 144);
  }
  else
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 17);
    v11 = (struct ID3D11ShaderResourceView **)((char *)this + 144);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 18);
    *((struct _LUID *)this + 16) = v9;
    *((_BYTE *)this + 152) = 1;
  }
  if ( *v10 || *((int *)this + 30) < 0 )
    goto LABEL_12;
  Microsoft::WRL::ComPtr<CD3DDevice>::InternalRelease(&v31);
  ExistingDevice = CDeviceManager::GetExistingDevice(v12, v9, &v31);
  v4 = ExistingDevice;
  if ( ExistingDevice < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, ExistingDevice, 0x10Au, 0LL);
    goto LABEL_13;
  }
  v15 = *((_QWORD *)this + 11);
  v16 = 32LL * *((unsigned int *)this + 30);
  v30 = 0LL;
  CurrentRenderingRealization = CCompositionSurfaceBitmap::GetCurrentRenderingRealization(
                                  (CCompositionSurfaceBitmap *)(*(_QWORD *)(v16 + v15 + 8) + 72LL),
                                  (struct IBitmapRealization **)&v30);
  v4 = CurrentRenderingRealization;
  if ( CurrentRenderingRealization < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, CurrentRenderingRealization, 0x10Du, 0LL);
    goto LABEL_18;
  }
  v19 = (void (__fastcall ***)(_QWORD, DXGI_FORMAT *))(*(int *)(*(_QWORD *)(*(_QWORD *)&v30 + 8LL) + 8LL)
                                                     + *(_QWORD *)&v30
                                                     + 8LL);
  (**v19)(v19, v34);
  v20 = *((_BYTE *)this + 168);
  *(_QWORD *)&v33 = "DWM Composition Cube Map";
  v35[0] = *((_DWORD *)this + 40);
  v35[1] = v35[0];
  v35[2] = *((_DWORD *)this + 41);
  v35[4] = v34[0];
  DWORD2(v33) = 24;
  v35[3] = 6;
  v36 = 1LL;
  v37 = 0;
  v38 = v20 != 0 ? 40 : 8;
  v39 = 0;
  v40 = (v20 != 0) + 4;
  v41 = v33;
  Texture = CD3DDevice::CreateTexture(v31, (const struct DWM_TEXTURE2D_DESC *)v35, v21, v10);
  v4 = Texture;
  if ( Texture < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, Texture, 0x136u, 0LL);
    goto LABEL_18;
  }
  v11 = (struct ID3D11ShaderResourceView **)((char *)this + 144);
  v24 = *v10;
  v32.Format = v34[0];
  v32.Buffer.NumElements = *((_DWORD *)this + 41);
  *(_QWORD *)&v32.ViewDimension = 9LL;
  v25 = CD3DDevice::CreateShaderResourceView(
          v31,
          (struct ID3D11Resource *)v24,
          &v32,
          (struct ID3D11ShaderResourceView **)this + 18);
  v4 = v25;
  if ( v25 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x13Eu, 0LL);
    goto LABEL_18;
  }
  v27 = CCompositionCubeMap::FlushToD3DCubeMap(this, a2);
  v4 = v27;
  if ( v27 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0x140u, 0LL);
LABEL_18:
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v30);
    goto LABEL_13;
  }
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v30);
LABEL_12:
  *a3 = *v11;
LABEL_13:
  Microsoft::WRL::ComPtr<CD3DDevice>::InternalRelease(&v31);
  return v4;
}
