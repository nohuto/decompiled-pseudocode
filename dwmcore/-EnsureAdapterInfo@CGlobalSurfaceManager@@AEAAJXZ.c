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
