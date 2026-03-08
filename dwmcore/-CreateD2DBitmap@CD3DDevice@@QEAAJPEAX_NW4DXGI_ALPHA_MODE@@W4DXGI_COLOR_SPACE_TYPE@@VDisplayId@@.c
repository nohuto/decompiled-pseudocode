/*
 * XREFs of ?CreateD2DBitmap@CD3DDevice@@QEAAJPEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MMPEAPEAVCD2DBitmap@@@Z @ 0x18003B50C
 * Callers:
 *     ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ @ 0x18003BAD0 (-EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Create@CD2DBitmap@@KAJPEAVCD2DResourceManager@@_NPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@IPEAPEAV1@@Z @ 0x18003B628 (-Create@CD2DBitmap@@KAJPEAVCD2DResourceManager@@_NPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@.c)
 *     ?OpenSharedTexture@CD3DDevice@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAX_NPEAPEAUID3D11Texture2D@@@Z @ 0x18003D6D8 (-OpenSharedTexture@CD3DDevice@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAX_N.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180074DD0 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

__int64 __fastcall CD3DDevice::CreateD2DBitmap(
        __int64 a1,
        void *a2,
        struct D3D11_SUBRESOURCE_DATA *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        _QWORD *a9)
{
  int v11; // ebx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int v15; // ebx
  int v17; // r9d
  unsigned int v18; // [rsp+20h] [rbp-81h]
  struct ID3D11Texture2D *v19; // [rsp+50h] [rbp-51h] BYREF
  _DWORD v20[5]; // [rsp+58h] [rbp-49h] BYREF
  __int64 v21; // [rsp+6Ch] [rbp-35h]
  int v22; // [rsp+74h] [rbp-2Dh]
  struct D3D11_TEXTURE2D_DESC v23; // [rsp+78h] [rbp-29h] BYREF

  v19 = 0LL;
  v21 = 0LL;
  v22 = 0;
  *a9 = 0LL;
  v11 = *(_DWORD *)(a1 + 1088);
  memset(&v23, 0, sizeof(v23));
  if ( v11 < 0 )
  {
    v17 = v11;
    v18 = 932;
    goto LABEL_9;
  }
  v12 = CD3DDevice::OpenSharedTexture((CD3DDevice *)a1, &v23, a3, a2, (bool)a3, &v19);
  v11 = v12;
  if ( v12 < 0 )
  {
    v18 = 938;
    goto LABEL_7;
  }
  v14 = *(_QWORD *)(a1 + 184);
  v20[4] = 0;
  v20[0] = v23.Format;
  v20[2] = a7;
  v20[3] = a8;
  v20[1] = a4;
  v12 = CD2DBitmap::Create(v14, v13, v19, &v23, v20, a5, a6);
  v11 = v12;
  if ( v12 < 0 )
  {
    v18 = 959;
LABEL_7:
    v17 = v12;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(a1, &dword_1802EB290, 2u, v17, v18, 0LL);
  }
  v15 = CD3DDevice::TranslateDXGIorD3DErrorInContext(a1, (unsigned int)v11, 0LL);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v19);
  return v15;
}
