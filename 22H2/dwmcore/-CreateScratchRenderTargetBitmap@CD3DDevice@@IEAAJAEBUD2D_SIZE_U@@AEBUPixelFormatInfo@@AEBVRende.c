/*
 * XREFs of ?CreateScratchRenderTargetBitmap@CD3DDevice@@IEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVCScratchRenderTargetBitmap@@@Z @ 0x18003B2CC
 * Callers:
 *     ?GetCachedTargetBitmap@CRenderTargetBitmapCache@@IEAAJAEBVCResourceTag@@UD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180060E68 (-GetCachedTargetBitmap@CRenderTargetBitmapCache@@IEAAJAEBVCResourceTag@@UD2D_SIZE_U@@AEBUPixelFo.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024CA8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180025150 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateTexture@CD3DDevice@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x18003A9CC (-CreateTexture@CD3DDevice@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D1.c)
 *     ?Create@CDeviceTextureTarget@@SAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@M_NPEAPEAVIDeviceTextureTarget@@@Z @ 0x18003C95C (-Create@CDeviceTextureTarget@@SAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE.c)
 *     ?Create@CScratchRenderTargetBitmap@@KAJPEAVIDeviceTarget@@PEAPEAV1@@Z @ 0x18003DEA4 (-Create@CScratchRenderTargetBitmap@@KAJPEAVIDeviceTarget@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180078718 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D0818 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 */

__int64 __fastcall CD3DDevice::CreateScratchRenderTargetBitmap(
        CD3DDevice *this,
        const struct D2D_SIZE_U *a2,
        const struct PixelFormatInfo *a3,
        const struct RenderTargetInfo *a4,
        struct CScratchRenderTargetBitmap **a5)
{
  __int128 v6; // xmm0
  int v8; // ebx
  bool v10; // cf
  struct D3D11_SUBRESOURCE_DATA *v11; // r8
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // xmm0_4
  __int64 v15; // rcx
  struct IDeviceTarget *v16; // rcx
  unsigned int v17; // ebx
  int v19; // r9d
  unsigned int v20; // [rsp+20h] [rbp-A1h]
  unsigned int v21; // [rsp+20h] [rbp-A1h]
  int v22; // [rsp+28h] [rbp-99h]
  struct ID3D11Texture2D *v23; // [rsp+50h] [rbp-71h] BYREF
  __int64 v24; // [rsp+58h] [rbp-69h] BYREF
  __int128 v25; // [rsp+60h] [rbp-61h]
  __int64 v26; // [rsp+70h] [rbp-51h] BYREF
  int v27; // [rsp+78h] [rbp-49h]
  int v28; // [rsp+7Ch] [rbp-45h]
  int v29; // [rsp+80h] [rbp-41h]
  __int64 v30; // [rsp+84h] [rbp-3Dh]
  int v31; // [rsp+8Ch] [rbp-35h]
  struct D2D_SIZE_U v32; // [rsp+90h] [rbp-31h] BYREF
  int v33; // [rsp+98h] [rbp-29h]
  int v34; // [rsp+9Ch] [rbp-25h]
  int v35; // [rsp+A0h] [rbp-21h]
  __int64 v36; // [rsp+A4h] [rbp-1Dh]
  int v37; // [rsp+ACh] [rbp-15h]
  __int64 v38; // [rsp+B0h] [rbp-11h]
  int v39; // [rsp+B8h] [rbp-9h]
  __int128 v40; // [rsp+C0h] [rbp-1h]

  *(_QWORD *)&v25 = "DWM Scratch Rendertarget";
  DWORD2(v25) = 24;
  v6 = v25;
  *a5 = 0LL;
  v8 = *((_DWORD *)this + 282);
  v23 = 0LL;
  v24 = 0LL;
  v30 = 0LL;
  v31 = 0;
  v40 = v6;
  if ( v8 < 0 )
  {
    v19 = v8;
    v21 = 1851;
    goto LABEL_14;
  }
  v32 = *a2;
  v35 = *(_DWORD *)a3;
  v10 = *((_BYTE *)a4 + 20) != 0;
  v33 = 1;
  v34 = 1;
  v36 = 1LL;
  v37 = 0;
  v39 = v10 ? 0x80000 : 0;
  v38 = 40LL;
  wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset(&v23);
  v12 = CD3DDevice::CreateTexture(this, (const struct DWM_TEXTURE2D_DESC *)&v32, v11, &v23);
  v8 = v12;
  if ( v12 < 0 )
  {
    v21 = 1866;
    goto LABEL_11;
  }
  v13 = *((_DWORD *)a3 + 2);
  v14 = *((_DWORD *)a4 + 4);
  LODWORD(v25) = v35;
  DWORD1(v25) = *((_DWORD *)a3 + 1);
  v26 = v25;
  v22 = *((_DWORD *)a4 + 2);
  v20 = v13;
  v15 = *((_QWORD *)this + 28);
  v27 = 1119879168;
  v28 = 1119879168;
  v29 = 1;
  v12 = CDeviceTextureTarget::Create(v15, v23, &v32, &v26, v20, v22, v14, 0, &v24);
  v8 = v12;
  if ( v12 < 0 )
  {
    v21 = 1883;
    goto LABEL_11;
  }
  if ( v24 )
    v16 = (struct IDeviceTarget *)(*(int *)(*(_QWORD *)(v24 + 8) + 24LL) + v24 + 8);
  else
    v16 = 0LL;
  v12 = CScratchRenderTargetBitmap::Create(v16, a5);
  v8 = v12;
  if ( v12 < 0 )
  {
    v21 = 1887;
LABEL_11:
    v19 = v12;
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, &dword_1802ACF58, 2u, v19, v21, 0LL);
  }
  v17 = CD3DDevice::TranslateDXGIorD3DErrorInContext(this, (unsigned int)v8, 0LL);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v24);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v23);
  return v17;
}
