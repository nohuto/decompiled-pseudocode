/*
 * XREFs of ?EnsureAdapterInfo@CGlobalSurfaceManager@@AEAAJXZ @ 0x1800CDDA8
 * Callers:
 *     ?ProcessKernelTokens@CGlobalSurfaceManager@@AEAAJXZ @ 0x1800CDC70 (-ProcessKernelTokens@CGlobalSurfaceManager@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x180034A40 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x180034A84 (-GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Emplace_reallocate@AEAU_LUID@@@?$vector@VAdapterInfo@CGlobalSurfaceManager@@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@QEAAPEAVAdapterInfo@CGlobalSurfaceManager@@QEAV23@AEAU_LUID@@@Z @ 0x1800CD4AC (--$_Emplace_reallocate@AEAU_LUID@@@-$vector@VAdapterInfo@CGlobalSurfaceManager@@V-$allocator@VAd.c)
 *     ?OpenRenderFence@CD3DDevice@@QEBAPEAXXZ @ 0x1800CDF8C (-OpenRenderFence@CD3DDevice@@QEBAPEAXXZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800CE01C (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?GetDXGIFactory@CDisplayManager@@QEAAJPEAPEAUIDXGIFactory5@@@Z @ 0x1800CE090 (-GetDXGIFactory@CDisplayManager@@QEAAJPEAPEAUIDXGIFactory5@@@Z.c)
 *     ?clear@?$vector@VAdapterInfo@CGlobalSurfaceManager@@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@QEAAXXZ @ 0x1800CE2C4 (-clear@-$vector@VAdapterInfo@CGlobalSurfaceManager@@V-$allocator@VAdapterInfo@CGlobalSurfaceMana.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CGlobalSurfaceManager::EnsureAdapterInfo(CGlobalSurfaceManager *this)
{
  __int64 *v1; // rsi
  CDisplayManager *v2; // rcx
  int DXGIFactory; // eax
  __int64 v4; // rcx
  int v5; // ebx
  struct IDXGIFactory5 *v6; // rdi
  unsigned int i; // r14d
  struct IDXGIFactory5Vtbl *lpVtbl; // rax
  __int64 v9; // rcx
  int v10; // eax
  CDeviceManager *v11; // rcx
  struct _LUID *v12; // rax
  struct _LUID v13; // rdx
  struct _LUID *v14; // r15
  int ExistingDevice; // eax
  CD3DDevice *v16; // rbx
  void *v17; // rax
  struct IDXGIFactory5 *v19; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v20; // [rsp+40h] [rbp-C8h] BYREF
  CD3DDevice *v21; // [rsp+48h] [rbp-C0h] BYREF
  __int64 *v22; // [rsp+50h] [rbp-B8h]
  __int64 v23; // [rsp+58h] [rbp-B0h] BYREF
  char v24; // [rsp+60h] [rbp-A8h]
  char v25[296]; // [rsp+68h] [rbp-A0h] BYREF
  struct _LUID v26; // [rsp+190h] [rbp+88h] BYREF

  v20 = 0LL;
  v1 = (__int64 *)((char *)this + 480);
  std::vector<CGlobalSurfaceManager::AdapterInfo>::clear((char *)this + 480);
  v19 = 0LL;
  DXGIFactory = CDisplayManager::GetDXGIFactory(v2, &v19);
  v5 = DXGIFactory;
  if ( DXGIFactory < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, DXGIFactory, 0x135u, 0LL);
  }
  else
  {
    v6 = v19;
    for ( i = 0; ; ++i )
    {
      lpVtbl = v6->lpVtbl;
      v23 = 0LL;
      v22 = &v20;
      v24 = 1;
      v5 = ((__int64 (__fastcall *)(struct IDXGIFactory5 *, _QWORD, __int64 *))lpVtbl->EnumAdapters1)(v6, i, &v23);
      if ( v24 )
      {
        v9 = *v22;
        *v22 = v23;
        if ( v9 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
      if ( v5 < 0 )
        break;
      v10 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v20 + 64LL))(v20, v25);
      v5 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v11, 0LL, 0, v10, 0x13Du, 0LL);
        goto LABEL_17;
      }
      v12 = (struct _LUID *)v1[1];
      if ( v12 == (struct _LUID *)v1[2] )
      {
        std::vector<CGlobalSurfaceManager::AdapterInfo>::_Emplace_reallocate<_LUID &>(v1, v1[1], &v26);
      }
      else
      {
        v13 = v26;
        v14 = v12 + 1;
        v12[1] = 0LL;
        v12[2] = 0LL;
        v21 = 0LL;
        *v12 = v13;
        ExistingDevice = CDeviceManager::GetExistingDevice(v11, v13, &v21);
        v16 = v21;
        if ( ExistingDevice >= 0 )
        {
          v17 = CD3DDevice::OpenRenderFence(v21);
          wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
            v14,
            v17);
        }
        if ( v16 )
          CD3DDevice::Release(v16);
        v1[1] += 24LL;
      }
    }
    if ( v5 == -2005270526 )
      v5 = 0;
  }
LABEL_17:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v19);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v20);
  return (unsigned int)v5;
}
