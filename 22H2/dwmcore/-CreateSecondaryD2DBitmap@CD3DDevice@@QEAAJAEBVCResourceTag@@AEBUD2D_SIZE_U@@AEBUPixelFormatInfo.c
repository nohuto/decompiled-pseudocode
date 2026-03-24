/*
 * XREFs of ?CreateSecondaryD2DBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x18003966C
 * Callers:
 *     ?CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x18003AECC (-CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180025150 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateTexture@CD3DDevice@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x18003A9CC (-CreateTexture@CD3DDevice@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D1.c)
 *     ?Create@CSecondaryD2DBitmap@@SAJPEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@PEAPEAV1@@Z @ 0x18003AC80 (-Create@CSecondaryD2DBitmap@@SAJPEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@AEBUD.c)
 *     ?GetCompatibleTextureFormat@CD3DDevice@@QEBA?AW4DXGI_FORMAT@@W42@@Z @ 0x18003AE5C (-GetCompatibleTextureFormat@CD3DDevice@@QEBA-AW4DXGI_FORMAT@@W42@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180078718 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D0818 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 */

__int64 __fastcall CD3DDevice::CreateSecondaryD2DBitmap(
        CD3DDevice *this,
        const struct CResourceTag *a2,
        const struct D2D_SIZE_U *a3,
        const struct PixelFormatInfo *a4,
        struct CSecondaryD2DBitmap **a5)
{
  int v6; // r14d
  __int128 v8; // xmm0
  int v9; // ebx
  enum DXGI_FORMAT CompatibleTextureFormat; // ecx
  __int64 *v11; // r8
  _DWORD *v12; // r9
  unsigned int v13; // eax
  unsigned int v14; // edx
  __int64 v15; // rax
  int v16; // r8d
  float v17; // xmm2_4
  unsigned int v18; // eax
  struct D3D11_SUBRESOURCE_DATA *v19; // r8
  int v20; // eax
  unsigned int v21; // ebx
  float v23; // xmm0_4
  int v24; // r9d
  unsigned int v25; // [rsp+20h] [rbp-91h]
  __int64 v26; // [rsp+40h] [rbp-71h]
  __int64 v27; // [rsp+40h] [rbp-71h]
  struct ID3D11Texture2D *v28; // [rsp+50h] [rbp-61h] BYREF
  unsigned __int64 v29; // [rsp+58h] [rbp-59h] BYREF
  float v30; // [rsp+60h] [rbp-51h]
  __int64 v31; // [rsp+64h] [rbp-4Dh]
  __int64 v32; // [rsp+6Ch] [rbp-45h]
  int v33; // [rsp+74h] [rbp-3Dh]
  _DWORD v34[5]; // [rsp+80h] [rbp-31h] BYREF
  __int64 v35; // [rsp+94h] [rbp-1Dh]
  int v36; // [rsp+9Ch] [rbp-15h]
  __int64 v37; // [rsp+A0h] [rbp-11h]
  int v38; // [rsp+A8h] [rbp-9h]
  __int128 v39; // [rsp+B0h] [rbp-1h]

  v6 = *((_DWORD *)a4 + 2);
  v26 = *(_QWORD *)a4;
  v8 = *(_OWORD *)a2;
  *a5 = 0LL;
  v28 = 0LL;
  v39 = v8;
  v32 = 0LL;
  v33 = 0;
  if ( !a3->width || !a3->height )
  {
    v9 = -2147024809;
    v25 = 1758;
    goto LABEL_19;
  }
  v9 = *((_DWORD *)this + 282);
  if ( v9 < 0 )
  {
    v25 = 1761;
LABEL_19:
    v24 = v9;
    goto LABEL_20;
  }
  CompatibleTextureFormat = CD3DDevice::GetCompatibleTextureFormat(this, *(enum DXGI_FORMAT *)a4);
  if ( CompatibleTextureFormat == *v12 )
  {
    v13 = HIDWORD(v26);
    CompatibleTextureFormat = (int)v26;
  }
  else
  {
    v13 = v12[1];
    v6 = CompatibleTextureFormat == DXGI_FORMAT_R16G16B16A16_FLOAT;
  }
  v14 = *((_DWORD *)this + 242);
  v29 = __PAIR64__(v13, CompatibleTextureFormat);
  v15 = *v11;
  v16 = *v11;
  v30 = 96.0;
  v31 = 1119879168LL;
  v27 = v15;
  v17 = (float)(int)v14;
  if ( v16 > v14 )
  {
    v23 = (float)v16;
    v16 = v14;
    v30 = (float)(v17 / v23) * 96.0;
  }
  v18 = HIDWORD(v15);
  if ( HIDWORD(v27) > v14 )
  {
    v18 = v14;
    *(float *)&v31 = (float)(v17 / (float)SHIDWORD(v27)) * 96.0;
  }
  v34[1] = v18;
  v34[4] = CompatibleTextureFormat;
  v34[2] = 1;
  v34[3] = 1;
  v35 = 1LL;
  v34[0] = v16;
  v36 = 0;
  v37 = 8LL;
  v38 = 0;
  wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset(&v28);
  v20 = CD3DDevice::CreateTexture(this, (const struct DWM_TEXTURE2D_DESC *)v34, v19, &v28);
  v9 = v20;
  if ( v20 < 0 )
  {
    v25 = 1813;
    goto LABEL_16;
  }
  v20 = CSecondaryD2DBitmap::Create(*((_QWORD *)this + 28), *a3, v28, v34, &v29, v6, DisplayId::None, a5, v27);
  v9 = v20;
  if ( v20 < 0 )
  {
    v25 = 1823;
LABEL_16:
    v24 = v20;
LABEL_20:
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, &dword_1802ACF58, 2u, v24, v25, 0LL);
  }
  v21 = CD3DDevice::TranslateDXGIorD3DErrorInContext(this, (unsigned int)v9, 0LL);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v28);
  return v21;
}
