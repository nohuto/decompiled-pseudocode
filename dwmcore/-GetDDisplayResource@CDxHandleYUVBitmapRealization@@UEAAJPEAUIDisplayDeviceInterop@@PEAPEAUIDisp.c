__int64 __fastcall CDxHandleYUVBitmapRealization::GetDDisplayResource(
        CDxHandleYUVBitmapRealization *this,
        struct IDisplayDeviceInterop *a2,
        struct Windows::Devices::Display::Core::IDisplaySurface **a3,
        unsigned int *a4)
{
  __int64 *v4; // rsi
  unsigned int v9; // ebx
  int DXGIResource; // eax
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, _QWORD, __int64, _QWORD, HANDLE *); // rdi
  int v14; // eax
  __int64 v15; // rcx
  __int64 (__fastcall *v16)(struct IDisplayDeviceInterop *, HANDLE, GUID *, __int64 *); // rbx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v20; // [rsp+30h] [rbp-30h] BYREF
  struct IDXGIResource *v21; // [rsp+38h] [rbp-28h] BYREF
  struct Windows::Devices::Display::Core::IDisplaySurface *v22; // [rsp+40h] [rbp-20h] BYREF
  GUID v23; // [rsp+50h] [rbp-10h] BYREF
  HANDLE hObject; // [rsp+90h] [rbp+30h] BYREF

  v4 = (__int64 *)((char *)this - 120);
  v9 = 0;
  v22 = 0LL;
  if ( *((_QWORD *)this - 15) )
  {
LABEL_8:
    if ( a4 )
      *a4 = *(_DWORD *)(*((_QWORD *)this - 16) + 148LL);
    wil::com_ptr_t<Windows::Devices::Display::Core::IDisplaySurface,wil::err_returncode_policy>::operator=(
      (__int64 *)&v22,
      *v4);
    *a3 = v22;
    return v9;
  }
  v20 = 0LL;
  hObject = 0LL;
  v21 = 0LL;
  DXGIResource = CDxHandleYUVBitmapRealization::GetDXGIResource(this, &v21, 0LL);
  v9 = DXGIResource;
  if ( DXGIResource < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, DXGIResource, 0x207u, 0LL);
  }
  else
  {
    ((void (__fastcall *)(struct IDXGIResource *, GUID *, __int64 *))v21->lpVtbl->QueryInterface)(
      v21,
      &GUID_30961379_4609_4a41_998e_54fe567ee0c1,
      &v20);
    v12 = v20;
    v13 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, HANDLE *))(*(_QWORD *)v20 + 104LL);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &hObject,
      0LL);
    v14 = v13(v12, 0LL, 0x10000000LL, 0LL, &hObject);
    v9 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x20Bu, 0LL);
    }
    else
    {
      v16 = *(__int64 (__fastcall **)(struct IDisplayDeviceInterop *, HANDLE, GUID *, __int64 *))(*(_QWORD *)a2 + 32LL);
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v4);
      v23 = GUID_594f6cc6_139a_56d6_a4b1_15fe2cb76adb;
      v17 = v16(a2, hObject, &v23, v4);
      v9 = v17;
      if ( v17 >= 0 )
      {
        if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          CloseHandle(hObject);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v20);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v21);
        goto LABEL_8;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x20Cu, 0LL);
    }
  }
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v20);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v21);
  return v9;
}
