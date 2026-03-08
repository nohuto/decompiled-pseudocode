/*
 * XREFs of ?CreateSecondaryD2DBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x1800ECE5C
 * Callers:
 *     ?CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x1800ECA7C (-CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateTexture@CD3DDevice@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x18003CD3C (-CreateTexture@CD3DDevice@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D1.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180074DD0 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCompatibleTextureFormat@CD3DDevice@@QEBA?AW4DXGI_FORMAT@@W42@@Z @ 0x1800ECFF8 (-GetCompatibleTextureFormat@CD3DDevice@@QEBA-AW4DXGI_FORMAT@@W42@@Z.c)
 *     ?Create@CSecondaryD2DBitmap@@SAJPEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@PEAPEAV1@@Z @ 0x1800ED060 (-Create@CSecondaryD2DBitmap@@SAJPEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@AEBUD.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
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
  int v13; // eax
  unsigned int v14; // edx
  __int64 v15; // rax
  unsigned __int64 v16; // r8
  float v17; // xmm2_4
  unsigned int v18; // eax
  int v19; // eax
  unsigned int v20; // ebx
  float v22; // xmm0_4
  int v23; // r9d
  unsigned int v24; // [rsp+20h] [rbp-91h]
  struct ID3D11Texture2D *v25; // [rsp+40h] [rbp-71h] BYREF
  __int64 v26; // [rsp+48h] [rbp-69h]
  _DWORD v27[2]; // [rsp+58h] [rbp-59h] BYREF
  float v28; // [rsp+60h] [rbp-51h]
  __int64 v29; // [rsp+64h] [rbp-4Dh]
  __int64 v30; // [rsp+6Ch] [rbp-45h]
  int v31; // [rsp+74h] [rbp-3Dh]
  _DWORD v32[5]; // [rsp+80h] [rbp-31h] BYREF
  __int64 v33; // [rsp+94h] [rbp-1Dh]
  int v34; // [rsp+9Ch] [rbp-15h]
  __int64 v35; // [rsp+A0h] [rbp-11h]
  int v36; // [rsp+A8h] [rbp-9h]
  __int128 v37; // [rsp+B0h] [rbp-1h]

  v6 = *((_DWORD *)a4 + 2);
  v26 = *(_QWORD *)a4;
  v8 = *(_OWORD *)a2;
  *a5 = 0LL;
  v25 = 0LL;
  v37 = v8;
  v30 = 0LL;
  v31 = 0;
  if ( !a3->width || !a3->height )
  {
    v9 = -2147024809;
    v24 = 1299;
    goto LABEL_19;
  }
  v9 = *((_DWORD *)this + 272);
  if ( v9 < 0 )
  {
    v24 = 1302;
LABEL_19:
    v23 = v9;
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
  v14 = *((_DWORD *)this + 232);
  v27[1] = v13;
  v15 = *v11;
  v16 = (unsigned int)*v11;
  v27[0] = CompatibleTextureFormat;
  v28 = 96.0;
  v29 = 1119879168LL;
  v26 = v15;
  v17 = (float)(int)v14;
  if ( (unsigned int)v16 > v14 )
  {
    v22 = (float)(int)v16;
    v16 = v14;
    v28 = (float)(v17 / v22) * 96.0;
  }
  v18 = HIDWORD(v26);
  if ( HIDWORD(v26) > v14 )
  {
    v18 = v14;
    *(float *)&v29 = (float)(v17 / (float)SHIDWORD(v26)) * 96.0;
  }
  v32[1] = v18;
  v32[4] = CompatibleTextureFormat;
  v32[2] = 1;
  v32[3] = 1;
  v33 = 1LL;
  v32[0] = v16;
  v34 = 0;
  v35 = 8LL;
  v36 = 0;
  v19 = CD3DDevice::CreateTexture(
          this,
          (const struct DWM_TEXTURE2D_DESC *)v32,
          (struct D3D11_SUBRESOURCE_DATA *)v16,
          &v25);
  v9 = v19;
  if ( v19 < 0 )
  {
    v24 = 1354;
    goto LABEL_16;
  }
  v19 = CSecondaryD2DBitmap::Create(*((_QWORD *)this + 23), *a3, v25, v32, v27, v6, DisplayId::None, a5);
  v9 = v19;
  if ( v19 < 0 )
  {
    v24 = 1364;
LABEL_16:
    v23 = v19;
LABEL_20:
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, &dword_1802EB290, 2u, v23, v24, 0LL);
  }
  v20 = CD3DDevice::TranslateDXGIorD3DErrorInContext((__int64)this, v9, 0);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v25);
  return v20;
}
