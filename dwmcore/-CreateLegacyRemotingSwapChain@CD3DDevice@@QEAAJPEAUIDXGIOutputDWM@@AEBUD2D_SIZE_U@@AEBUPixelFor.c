/*
 * XREFs of ?CreateLegacyRemotingSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutputDWM@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVILegacyRemotingSwapChain@@@Z @ 0x180108CA0
 * Callers:
 *     ?EnsureSwapChain@CRemoteRenderTarget@@IEAAJXZ @ 0x180108AF8 (-EnsureSwapChain@CRemoteRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180034C80 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?CreateTexture@CD3DDevice@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x18003CD3C (-CreateTexture@CD3DDevice@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D1.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800CE01C (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E91E4 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Create@CLegacyRemotingSwapChain@@KAJPEAVCD3DDevice@@PEBGAEBU_UNSIGNED_RATIO@@PEAVIRenderTargetBitmap@@PEAXPEAPEAVILegacyRemotingSwapChain@@@Z @ 0x180108E20 (-Create@CLegacyRemotingSwapChain@@KAJPEAVCD3DDevice@@PEBGAEBU_UNSIGNED_RATIO@@PEAVIRenderTargetB.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x18027907C (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x180289A80 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_.c)
 */

__int64 __fastcall CD3DDevice::CreateLegacyRemotingSwapChain(
        CD3DDevice *this,
        struct IDXGIOutputDWM *a2,
        const struct D2D_SIZE_U *a3,
        const struct PixelFormatInfo *a4,
        const struct RenderTargetInfo *a5,
        struct ILegacyRemotingSwapChain **a6)
{
  char *v6; // rbx
  signed int v9; // edi
  int v11; // eax
  int v12; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  struct D3D11_SUBRESOURCE_DATA *v17; // r8
  int v18; // eax
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rcx
  HANDLE v22; // rax
  signed int LastError; // eax
  int v24; // r9d
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rcx
  int v28; // r9d
  void *v29; // [rsp+20h] [rbp-E0h]
  unsigned int v30; // [rsp+20h] [rbp-E0h]
  unsigned int v31; // [rsp+20h] [rbp-E0h]
  struct ID3D11Texture2D *v32; // [rsp+40h] [rbp-C0h] BYREF
  struct IRenderTargetBitmap *v33; // [rsp+48h] [rbp-B8h] BYREF
  char *v34; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNSIGNED_RATIO v35; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v36; // [rsp+60h] [rbp-A0h] BYREF
  struct ILegacyRemotingSwapChain **v37; // [rsp+70h] [rbp-90h]
  int v38; // [rsp+78h] [rbp-88h] BYREF
  __int64 v39; // [rsp+80h] [rbp-80h]
  int v40; // [rsp+90h] [rbp-70h] BYREF
  __int64 v41; // [rsp+98h] [rbp-68h]
  _DWORD v42[5]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v43; // [rsp+B4h] [rbp-4Ch]
  int v44; // [rsp+BCh] [rbp-44h]
  __int64 v45; // [rsp+C0h] [rbp-40h]
  int v46; // [rsp+C8h] [rbp-38h]
  __int128 v47; // [rsp+D0h] [rbp-30h]
  char v48[40]; // [rsp+E0h] [rbp-20h] BYREF
  struct _UNSIGNED_RATIO v49; // [rsp+108h] [rbp+8h]
  unsigned __int16 v50[40]; // [rsp+150h] [rbp+50h] BYREF
  WCHAR Name[64]; // [rsp+1A0h] [rbp+A0h] BYREF

  v6 = 0LL;
  v37 = a6;
  v33 = 0LL;
  *a6 = 0LL;
  v9 = *((_DWORD *)this + 272);
  v34 = 0LL;
  if ( v9 < 0 )
  {
    v28 = v9;
    v31 = 614;
    goto LABEL_34;
  }
  v11 = (*(__int64 (__fastcall **)(struct IDXGIOutputDWM *, char *))(*(_QWORD *)a2 + 32LL))(a2, v48);
  v9 = v11;
  if ( v11 < 0 )
  {
    v28 = v11;
    v31 = 617;
    goto LABEL_34;
  }
  v35 = v49;
  if ( *((_BYTE *)this + 1509) && (*((_BYTE *)this + 924) & 4) != 0 )
  {
    v14 = *((_QWORD *)this + 71);
    v40 = 2;
    v41 = 0LL;
    v32 = 0LL;
    v15 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v14 + 24LL))(v14, &v40);
    v9 = v15;
    if ( v15 < 0 )
    {
      v30 = 631;
    }
    else
    {
      DWORD2(v36) = 28;
      v42[2] = 1;
      *(_QWORD *)&v36 = "DWM LegacyRemoting SwapChain";
      v42[0] = a3->width;
      v42[1] = a3->height;
      v18 = *(_DWORD *)a4;
      v42[3] = 1;
      v43 = 1LL;
      v42[4] = v18;
      v44 = 0;
      v47 = v36;
      v45 = 40LL;
      v46 = 2;
      v19 = CD3DDevice::CreateTexture(this, (const struct DWM_TEXTURE2D_DESC *)v42, v17, &v32);
      v9 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v20, &dword_1802EB290, 2u, v19, 0x287u, 0LL);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v32);
        v27 = *((_QWORD *)this + 71);
        v38 = 3;
        (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v27 + 24LL))(v27, &v38);
        goto LABEL_6;
      }
      v21 = *((_QWORD *)this + 71);
      v38 = 3;
      v15 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v21 + 24LL))(v21, &v38);
      v9 = v15;
      if ( v15 < 0 )
      {
        v30 = 651;
      }
      else
      {
        v15 = StringCbPrintfW(Name, 0x80uLL, L"Local\\WarpResource_0x%I64x", v39);
        v9 = v15;
        if ( v15 >= 0 )
        {
          SetLastError(0);
          v22 = OpenFileMappingW(0xF001Fu, 0, Name);
          if ( !v22 )
          {
            LastError = GetLastError();
            v9 = LastError;
            if ( LastError > 0 )
              v9 = (unsigned __int16)LastError | 0x80070000;
            v30 = 662;
            if ( v9 >= 0 )
              v9 = -2003304445;
            v24 = v9;
            goto LABEL_22;
          }
          wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
            (void **)&v34,
            v22);
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)&v33);
          v25 = CD3DDevice::CreateRenderTargetBitmap(
                  this,
                  v32,
                  *((unsigned int *)a4 + 1),
                  *((unsigned int *)a4 + 2),
                  *((_DWORD *)a5 + 2),
                  *((_DWORD *)a5 + 4),
                  &v33);
          v9 = v25;
          if ( v25 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v26, &dword_1802EB290, 2u, v25, 0x29Eu, 0LL);
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v32);
            v6 = v34;
            goto LABEL_6;
          }
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v32);
          v6 = v34;
          goto LABEL_5;
        }
        v30 = 657;
      }
    }
    v24 = v15;
LABEL_22:
    MilInstrumentationCheckHR_MaybeFailFast(v16, &dword_1802EB290, 2u, v24, v30, 0LL);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v32);
    goto LABEL_6;
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)&v33);
  DWORD2(v36) = 28;
  *(_QWORD *)&v36 = "DWM LegacyRemoting SwapChain";
  v12 = CD3DDevice::CreateRenderTargetBitmap(this, (const struct CResourceTag *)&v36, a3, a4, a5, 0, &v33);
  v9 = v12;
  if ( v12 >= 0 )
  {
LABEL_5:
    v29 = v6;
    v6 = 0LL;
    v12 = CLegacyRemotingSwapChain::Create(this, v50, &v35, v33, v29, v37);
    v9 = v12;
    if ( v12 >= 0 )
      goto LABEL_6;
    v31 = 688;
    goto LABEL_31;
  }
  v31 = 679;
LABEL_31:
  v28 = v12;
LABEL_34:
  MilInstrumentationCheckHR_MaybeFailFast((__int64)this, &dword_1802EB290, 2u, v28, v31, 0LL);
LABEL_6:
  if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v6);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v33);
  return (unsigned int)v9;
}
