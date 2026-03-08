/*
 * XREFs of ?CreateCompositionSwapChain@CD3DDevice@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IPEAPEAVICompositionSwapChain@@@Z @ 0x180289464
 * Callers:
 *     ?EnsureSwapChain@CRemoteAppRenderTarget@@IEAAJXZ @ 0x1801E7768 (-EnsureSwapChain@CRemoteAppRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180074DD0 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800CE01C (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?GetDXGIFactory@CDisplayManager@@QEAAJPEAPEAUIDXGIFactory5@@@Z @ 0x1800CE090 (-GetDXGIFactory@CDisplayManager@@QEAAJPEAPEAUIDXGIFactory5@@@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FF6C0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Create@CCompSwapChain@@KAJPEAVCD3DDevice@@PEAUIDXGISwapChain1@@I$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVICompositionSwapChain@@@Z @ 0x18029AC58 (-Create@CCompSwapChain@@KAJPEAVCD3DDevice@@PEAUIDXGISwapChain1@@I$$QEAV-$unique_any_t@V-$unique_.c)
 */

__int64 __fastcall CD3DDevice::CreateCompositionSwapChain(
        CD3DDevice *this,
        const struct D2D_SIZE_U *a2,
        const struct PixelFormatInfo *a3,
        const struct RenderTargetInfo *a4,
        unsigned int a5,
        struct ICompositionSwapChain **a6)
{
  int v9; // ebx
  int DXGIFactory; // eax
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, _QWORD, HANDLE, struct D2D_SIZE_U *, _QWORD, __int64 *); // rdi
  int v13; // r9d
  unsigned int v14; // ebx
  unsigned int v16; // [rsp+20h] [rbp-79h]
  HANDLE hObject; // [rsp+40h] [rbp-59h] BYREF
  __int64 v18; // [rsp+48h] [rbp-51h] BYREF
  __int64 v19; // [rsp+50h] [rbp-49h] BYREF
  struct IDXGIFactory5 *v20; // [rsp+58h] [rbp-41h] BYREF
  struct D2D_SIZE_U v21; // [rsp+60h] [rbp-39h] BYREF
  int v22; // [rsp+68h] [rbp-31h]
  int v23; // [rsp+6Ch] [rbp-2Dh]
  __int64 v24; // [rsp+70h] [rbp-29h]
  int v25; // [rsp+78h] [rbp-21h]
  __int64 v26; // [rsp+7Ch] [rbp-1Dh]
  int v27; // [rsp+84h] [rbp-15h]
  int v28; // [rsp+88h] [rbp-11h]
  int v29; // [rsp+8Ch] [rbp-Dh]

  v20 = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  *a6 = 0LL;
  v9 = *((_DWORD *)this + 272);
  hObject = 0LL;
  if ( v9 < 0 )
  {
    v13 = v9;
    v16 = 857;
  }
  else
  {
    v21 = *a2;
    v22 = *(_DWORD *)a3;
    v26 = 3LL;
    v27 = 3;
    v28 = *((_DWORD *)a3 + 1);
    v23 = 0;
    v24 = 1LL;
    v25 = 32;
    v29 = 0;
    DXGIFactory = CDisplayManager::GetDXGIFactory(this, &v20);
    v9 = DXGIFactory;
    if ( DXGIFactory < 0 )
    {
      v16 = 880;
    }
    else
    {
      if ( v19 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      DXGIFactory = ((__int64 (__fastcall *)(struct IDXGIFactory5 *, GUID *, __int64 *))v20->lpVtbl->QueryInterface)(
                      v20,
                      &GUID_41e7d1f2_a591_4f7b_a2e5_fa9c843e1c12,
                      &v19);
      v9 = DXGIFactory;
      if ( DXGIFactory < 0 )
      {
        v16 = 881;
      }
      else
      {
        wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
          &hObject,
          0LL);
        DXGIFactory = DCompositionCreateSurfaceHandle(3LL, 0LL, &hObject);
        v9 = DXGIFactory;
        if ( DXGIFactory < 0 )
        {
          v16 = 885;
        }
        else
        {
          v11 = v19;
          v12 = *(__int64 (__fastcall **)(__int64, _QWORD, HANDLE, struct D2D_SIZE_U *, _QWORD, __int64 *))(*(_QWORD *)v19 + 24LL);
          wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v18);
          DXGIFactory = v12(v11, *((_QWORD *)this + 69), hObject, &v21, 0LL, &v18);
          v9 = DXGIFactory;
          if ( DXGIFactory < 0 )
          {
            v16 = 891;
          }
          else
          {
            DXGIFactory = CCompSwapChain::Create(
                            (_DWORD)this,
                            v18,
                            v29,
                            (unsigned int)&hObject,
                            (__int64)a3,
                            (__int64)a4,
                            (__int64)a6);
            v9 = DXGIFactory;
            if ( DXGIFactory >= 0 )
              goto LABEL_17;
            v16 = 900;
          }
        }
      }
    }
    v13 = DXGIFactory;
  }
  MilInstrumentationCheckHR_MaybeFailFast((__int64)this, &dword_180383C70, 2u, v13, v16, 0LL);
LABEL_17:
  v14 = CD3DDevice::TranslateDXGIorD3DErrorInContext((__int64)this, v9, 2);
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v18);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v19);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v20);
  return v14;
}
