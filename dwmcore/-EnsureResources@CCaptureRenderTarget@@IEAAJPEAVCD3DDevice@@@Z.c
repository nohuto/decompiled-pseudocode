/*
 * XREFs of ?EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z @ 0x1801E9CA4
 * Callers:
 *     ?CheckOcclusionState@CCaptureRenderTarget@@UEAAJXZ @ 0x1801E9638 (-CheckOcclusionState@CCaptureRenderTarget@@UEAAJXZ.c)
 *     ?Render@CCaptureRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801EA904 (-Render@CCaptureRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?OpenSharedTexture@CD3DDevice@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAX_NPEAPEAUID3D11Texture2D@@@Z @ 0x18003D6D8 (-OpenSharedTexture@CD3DDevice@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAX_N.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x1800733C4 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?IsValidPixelFormat@@YAHW4DXGI_FORMAT@@@Z @ 0x1800A875C (-IsValidPixelFormat@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x1801E7348 (-UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x1801E8F88 (--$_Emplace_reallocate@AEBV-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@-$vect.c)
 *     ??$_Emplace_reallocate@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@?$vector@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@@std@@QEAAPEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1801E9080 (--$_Emplace_reallocate@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX.c)
 *     ??0?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDXGIResource@@@Z @ 0x1801E9274 (--0-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDXGIResource@@@Z.c)
 *     ?ReleaseRenderingResources@CCaptureRenderTarget@@IEAAXXZ @ 0x1801EA778 (-ReleaseRenderingResources@CCaptureRenderTarget@@IEAAXXZ.c)
 *     ?clear@?$vector@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x1801EB0C0 (-clear@-$vector@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-Cl.c)
 *     ?CreateFence@CD3DDevice@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@@Z @ 0x180289998 (-CreateFence@CD3DDevice@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@@Z.c)
 */

__int64 __fastcall CCaptureRenderTarget::EnsureResources(CCaptureRenderTarget *this, struct D3D11_SUBRESOURCE_DATA *a2)
{
  int v2; // ebx
  struct ID3D11Fence **v3; // r9
  CD3DDevice *v4; // r8
  int Fence; // eax
  __int64 v7; // rcx
  __int64 v8; // r15
  __int64 v9; // r14
  __int64 v10; // r12
  int v11; // eax
  __int64 v12; // rcx
  int v13; // edx
  int updated; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  char **v22; // rdx
  char *v23; // rcx
  unsigned int v25; // [rsp+30h] [rbp-79h] BYREF
  struct ID3D11Texture2D *v26; // [rsp+38h] [rbp-71h] BYREF
  __int64 v27; // [rsp+40h] [rbp-69h] BYREF
  HANDLE hObject; // [rsp+48h] [rbp-61h] BYREF
  struct D3D11_SUBRESOURCE_DATA *v29; // [rsp+50h] [rbp-59h]
  char *v30; // [rsp+58h] [rbp-51h] BYREF
  int v31; // [rsp+60h] [rbp-49h]
  __int128 v32; // [rsp+68h] [rbp-41h] BYREF
  enum DXGI_FORMAT v33[4]; // [rsp+78h] [rbp-31h]
  __int64 v34; // [rsp+88h] [rbp-21h]
  int v35; // [rsp+90h] [rbp-19h]
  struct D3D11_TEXTURE2D_DESC v36; // [rsp+98h] [rbp-11h] BYREF

  v2 = 0;
  v29 = a2;
  v3 = (struct ID3D11Fence **)((char *)this + 1944);
  v25 = 0;
  v4 = (CD3DDevice *)a2;
  if ( !*((_QWORD *)this + 243) )
  {
    *v3 = 0LL;
    v30 = "CaptureRenderFence";
    v31 = 18;
    Fence = CD3DDevice::CreateFence((CD3DDevice *)a2, (const struct CResourceTag *)&v30, (unsigned __int64)a2, v3);
    v25 = Fence;
    v2 = Fence;
    if ( Fence < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, Fence, 0x179u, 0LL);
      goto LABEL_34;
    }
    *((_QWORD *)this + 244) = 0LL;
    v4 = (CD3DDevice *)v29;
  }
  v8 = *((_QWORD *)this + 252);
  v9 = (__int64)(*((_QWORD *)this + 250) - *((_QWORD *)this + 249)) >> 3;
  v10 = (unsigned int)v9;
  if ( (unsigned int)v9 < (unsigned __int64)((*((_QWORD *)this + 253) - v8) >> 3) )
  {
    while ( 1 )
    {
      v26 = 0LL;
      v11 = CD3DDevice::OpenSharedTexture(
              v4,
              &v36,
              (struct D3D11_SUBRESOURCE_DATA *)v4,
              *(void **)(v8 + 8 * v10),
              1,
              &v26);
      v25 = v11;
      v2 = v11;
      if ( v11 < 0 )
        break;
      v34 = 0LL;
      v32 = 0LL;
      v35 = 0;
      *(_OWORD *)v33 = 0LL;
      ((void (__fastcall *)(struct ID3D11Texture2D *, __int128 *))v26->lpVtbl->GetDesc)(v26, &v32);
      if ( !IsValidPixelFormat(v33[0]) )
      {
        std::vector<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>::clear((char *)this + 2016);
        CCaptureRenderTarget::ReleaseRenderingResources(this);
        goto LABEL_33;
      }
      if ( ((*((_QWORD *)this + 250) - *((_QWORD *)this + 249)) & 0xFFFFFFFFFFFFFFF8uLL) == 0 )
      {
        updated = COffScreenRenderTarget::UpdatePixelFormatInfo(this, v13);
        v25 = updated;
        v2 = updated;
        if ( updated < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, updated, 0x19Fu, 0LL);
          goto LABEL_33;
        }
        if ( !*((_BYTE *)this + 1897) )
          *((_QWORD *)this + 13) = v32;
        *((_BYTE *)this + 1898) = HIDWORD(v32) > 1;
      }
      v27 = 0LL;
      v16 = ((__int64 (__fastcall *)(struct ID3D11Texture2D *, GUID *, __int64 *))v26->lpVtbl->QueryInterface)(
              v26,
              &GUID_035f3ab4_482e_4e50_b41f_8a7f8bd8960b,
              &v27);
      v25 = v16;
      v2 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x1AFu, 0LL);
        goto LABEL_28;
      }
      v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 246) + 48LL))(
              *((_QWORD *)this + 246),
              0LL,
              0LL,
              *(_QWORD *)(v8 + 8 * v10),
              *((_QWORD *)this + 235));
      v25 = v18;
      v2 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x1B5u, 0LL);
        goto LABEL_28;
      }
      if ( *((_QWORD *)this + 250) == *((_QWORD *)this + 251) )
      {
        std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy> const &>(
          (__int64 *)this + 249,
          *((_QWORD *)this + 250),
          &v27);
      }
      else
      {
        wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>::com_ptr_t<IDXGIResource,wil::err_returncode_policy>(
          *((_QWORD **)this + 250),
          v27);
        *((_QWORD *)this + 250) += 8LL;
      }
      v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char **))(**((_QWORD **)this + 246) + 64LL))(
              *((_QWORD *)this + 246),
              *(_QWORD *)(v8 + 8 * v10),
              &v30);
      v25 = v20;
      v2 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x1BCu, 0LL);
LABEL_28:
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v27);
        goto LABEL_33;
      }
      v22 = (char **)*((_QWORD *)this + 256);
      hObject = v30;
      if ( v22 == *((char ***)this + 257) )
      {
        std::vector<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>::_Emplace_reallocate<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>(
          (__int64 *)this + 255,
          (__int64)v22,
          &hObject);
        v23 = (char *)hObject;
      }
      else
      {
        v23 = 0LL;
        *v22 = v30;
        *((_QWORD *)this + 256) += 8LL;
      }
      if ( (unsigned __int64)(v23 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v23);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v27);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v26);
      LODWORD(v9) = v9 + 1;
      v8 = *((_QWORD *)this + 252);
      v10 = (unsigned int)v9;
      if ( (unsigned int)v9 >= (unsigned __int64)((*((_QWORD *)this + 253) - v8) >> 3) )
        goto LABEL_34;
      v4 = (CD3DDevice *)v29;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x18Du, 0LL);
LABEL_33:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v26);
  }
LABEL_34:
  if ( v2 < 0 )
  {
    TranslateDXGIorD3DErrorInContext(v2, 0, &v25);
    CCaptureRenderTarget::ReleaseRenderingResources(this);
    return v25;
  }
  return (unsigned int)v2;
}
