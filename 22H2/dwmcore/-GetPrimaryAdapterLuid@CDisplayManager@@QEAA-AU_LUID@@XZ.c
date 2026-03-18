/*
 * XREFs of ?GetPrimaryAdapterLuid@CDisplayManager@@QEAA?AU_LUID@@XZ @ 0x1800CEB6C
 * Callers:
 *     ?CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x180020B94 (-CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?Snapshot@CCachedVisualImage@@IEAAJXZ @ 0x1800CE5A4 (-Snapshot@CCachedVisualImage@@IEAAJXZ.c)
 *     ?EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ @ 0x1801BCA48 (-EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ.c)
 *     ?GetSpectreTexture@CSceneResourceManager@@QEAAJPEAVCResource@@PEAPEAUISpectreTexture@@@Z @ 0x1801BD0BC (-GetSpectreTexture@CSceneResourceManager@@QEAAJPEAVCResource@@PEAPEAUISpectreTexture@@@Z.c)
 *     ?GetRenderTargetInfo@COffScreenRenderTarget@@UEBA?AVRenderTargetInfo@@XZ @ 0x1801E9ECC (-GetRenderTargetInfo@COffScreenRenderTarget@@UEBA-AVRenderTargetInfo@@XZ.c)
 *     ?EnsureSwapChain@CRemoteAppRenderTarget@@IEAAJXZ @ 0x1801EAA68 (-EnsureSwapChain@CRemoteAppRenderTarget@@IEAAJXZ.c)
 *     ?LockAndRead@CDebugVisualImage@@QEAAXXZ @ 0x180218708 (-LockAndRead@CDebugVisualImage@@QEAAXXZ.c)
 *     ?GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z @ 0x180285EB8 (-GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800047F0 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180073594 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C0E8C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z @ 0x1800CEC6C (-InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z.c)
 *     __security_check_cookie @ 0x18010EF20 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

struct _LUID __fastcall CDisplayManager::GetPrimaryAdapterLuid(CDisplayManager *this, struct _LUID *a2)
{
  int DXGIFactory; // eax
  __int64 v4; // rcx
  int v5; // ebx
  int v6; // eax
  __int64 v7; // rcx
  int v9; // [rsp+30h] [rbp-D0h] BYREF
  struct IDXGIFactory5 *v10; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v11[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v12[296]; // [rsp+50h] [rbp-B0h] BYREF
  struct _LUID v13; // [rsp+178h] [rbp+78h]

  v11[0] = 0LL;
  v10 = 0LL;
  *a2 = g_luidZero;
  DXGIFactory = CDisplayManager::InternalGetDXGIFactory(this, &v10);
  v9 = DXGIFactory;
  v5 = DXGIFactory;
  if ( DXGIFactory < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, &dword_180358980, 2u, DXGIFactory, 0x6Au, 0LL);
    goto LABEL_9;
  }
  v6 = ((__int64 (__fastcall *)(struct IDXGIFactory5 *, _QWORD, __int64 *))v10->lpVtbl->EnumAdapters1)(v10, 0LL, v11);
  v9 = v6;
  v5 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_180358980, 2u, v6, 0x6Du, 0LL);
LABEL_9:
    TranslateDXGIorD3DErrorInContext(v5, 4, &v9);
    v5 = v9;
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v10);
  if ( v5 >= 0 && (*(int (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v11[0] + 80LL))(v11[0], v12) >= 0 )
    *a2 = v13;
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v11);
  return (struct _LUID)a2;
}
