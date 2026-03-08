/*
 * XREFs of ?CreateScratchRenderTargetBitmap@CD3DDevice@@IEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVCScratchRenderTargetBitmap@@@Z @ 0x18003BC0C
 * Callers:
 *     ?GetCachedTargetBitmap@CRenderTargetBitmapCache@@IEAAJAEBVCResourceTag@@UD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180034D74 (-GetCachedTargetBitmap@CRenderTargetBitmapCache@@IEAAJAEBVCResourceTag@@UD2D_SIZE_U@@AEBUPixelFo.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Create@CScratchRenderTargetBitmap@@KAJPEAVIDeviceTarget@@PEAPEAV1@@Z @ 0x18003BDC0 (-Create@CScratchRenderTargetBitmap@@KAJPEAVIDeviceTarget@@PEAPEAV1@@Z.c)
 *     ?Create@CDeviceTextureTarget@@SAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@M_NPEAPEAVIDeviceTextureTarget@@@Z @ 0x18003C9CC (-Create@CDeviceTextureTarget@@SAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE.c)
 *     ?CreateTexture@CD3DDevice@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x18003CD3C (-CreateTexture@CD3DDevice@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D1.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180074DD0 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

__int64 __fastcall CD3DDevice::CreateScratchRenderTargetBitmap(
        CD3DDevice *this,
        const struct D2D_SIZE_U *a2,
        struct D3D11_SUBRESOURCE_DATA *a3,
        const struct RenderTargetInfo *a4,
        struct CScratchRenderTargetBitmap **a5)
{
  __int128 v6; // xmm0
  int v8; // ebx
  char v10; // al
  int v11; // eax
  UINT SysMemPitch; // ecx
  __int64 v13; // rcx
  struct IDeviceTarget *v14; // rcx
  unsigned int v15; // ebx
  int v17; // r9d
  unsigned int v18; // [rsp+20h] [rbp-91h]
  unsigned int v19; // [rsp+20h] [rbp-91h]
  int v20; // [rsp+28h] [rbp-89h]
  int v21; // [rsp+30h] [rbp-81h]
  __int64 v22; // [rsp+50h] [rbp-61h] BYREF
  struct ID3D11Texture2D *v23; // [rsp+58h] [rbp-59h] BYREF
  __int128 v24; // [rsp+60h] [rbp-51h] BYREF
  int v25; // [rsp+70h] [rbp-41h]
  __int64 v26; // [rsp+74h] [rbp-3Dh]
  int v27; // [rsp+7Ch] [rbp-35h]
  struct D2D_SIZE_U v28; // [rsp+80h] [rbp-31h] BYREF
  int v29; // [rsp+88h] [rbp-29h]
  int v30; // [rsp+8Ch] [rbp-25h]
  int pSysMem; // [rsp+90h] [rbp-21h]
  __int64 v32; // [rsp+94h] [rbp-1Dh]
  int v33; // [rsp+9Ch] [rbp-15h]
  __int64 v34; // [rsp+A0h] [rbp-11h]
  int v35; // [rsp+A8h] [rbp-9h]
  __int128 v36; // [rsp+B0h] [rbp-1h]

  *(_QWORD *)&v24 = "DWM Scratch Rendertarget";
  DWORD2(v24) = 24;
  v6 = v24;
  *a5 = 0LL;
  v8 = *((_DWORD *)this + 272);
  v23 = 0LL;
  v22 = 0LL;
  v26 = 0LL;
  v27 = 0;
  v36 = v6;
  if ( v8 < 0 )
  {
    v17 = v8;
    v19 = 1419;
    goto LABEL_14;
  }
  v28 = *a2;
  pSysMem = (int)a3->pSysMem;
  v10 = *((_BYTE *)a4 + 20);
  v29 = 1;
  v30 = 1;
  v32 = 1LL;
  v33 = 0;
  v35 = v10 != 0 ? 0x80000 : 0;
  v34 = 40LL;
  v11 = CD3DDevice::CreateTexture(this, (const struct DWM_TEXTURE2D_DESC *)&v28, a3, &v23);
  v8 = v11;
  if ( v11 < 0 )
  {
    v19 = 1434;
    goto LABEL_11;
  }
  v21 = *((_DWORD *)a4 + 4);
  DWORD1(v24) = HIDWORD(a3->pSysMem);
  SysMemPitch = a3->SysMemPitch;
  LODWORD(v24) = pSysMem;
  v20 = *((_DWORD *)a4 + 2);
  v18 = SysMemPitch;
  v13 = *((_QWORD *)this + 23);
  *((_QWORD *)&v24 + 1) = 0x42C0000042C00000LL;
  v25 = 1;
  v11 = CDeviceTextureTarget::Create(v13, v23, &v28, &v24, v18, v20, v21, 0, &v22);
  v8 = v11;
  if ( v11 < 0 )
  {
    v19 = 1451;
    goto LABEL_11;
  }
  if ( v22 )
    v14 = (struct IDeviceTarget *)(*(int *)(*(_QWORD *)(v22 + 8) + 24LL) + v22 + 8);
  else
    v14 = 0LL;
  v11 = CScratchRenderTargetBitmap::Create(v14, a5);
  v8 = v11;
  if ( v11 < 0 )
  {
    v19 = 1455;
LABEL_11:
    v17 = v11;
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, &dword_1802EB290, 2u, v17, v19, 0LL);
  }
  v15 = CD3DDevice::TranslateDXGIorD3DErrorInContext(this, (unsigned int)v8, 0LL);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v22);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v23);
  return v15;
}
