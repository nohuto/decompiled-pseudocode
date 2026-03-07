__int64 __fastcall CDxHandleBitmapRealization::GetDDisplayResource(
        CDxHandleBitmapRealization *this,
        struct IDisplayDeviceInterop *a2,
        struct Windows::Devices::Display::Core::IDisplaySurface **a3,
        unsigned int *a4)
{
  __int64 *v4; // r14
  unsigned int v9; // ebx
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, _QWORD, __int64, _QWORD, HANDLE *); // rdi
  int v15; // eax
  __int64 v16; // rcx
  __int64 (__fastcall *v17)(struct IDisplayDeviceInterop *, HANDLE, GUID *, __int64 *); // rbx
  int v18; // eax
  __int64 v19; // rcx
  __int64 v21; // [rsp+30h] [rbp-30h] BYREF
  void (__fastcall ***v22)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-28h] BYREF
  struct Windows::Devices::Display::Core::IDisplaySurface *v23; // [rsp+40h] [rbp-20h] BYREF
  GUID v24; // [rsp+50h] [rbp-10h] BYREF
  HANDLE hObject; // [rsp+90h] [rbp+30h] BYREF

  v4 = (__int64 *)((char *)this + 24);
  v9 = 0;
  v23 = 0LL;
  if ( *((_QWORD *)this + 3) )
  {
LABEL_8:
    if ( a4 )
      *a4 = *(_DWORD *)(*((_QWORD *)this + 2) + 240LL);
    wil::com_ptr_t<Windows::Devices::Display::Core::IDisplaySurface,wil::err_returncode_policy>::operator=(
      (__int64 *)&v23,
      *v4);
    *a3 = v23;
    return v9;
  }
  v10 = *(_QWORD *)this;
  v21 = 0LL;
  hObject = 0LL;
  v22 = 0LL;
  v11 = (*(__int64 (__fastcall **)(CDxHandleBitmapRealization *, _QWORD, _QWORD))(v10 + 144))(this, &v22, 0LL);
  v9 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x12Du, 0LL);
  }
  else
  {
    (**v22)(v22, &GUID_30961379_4609_4a41_998e_54fe567ee0c1, &v21);
    v13 = v21;
    v14 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, HANDLE *))(*(_QWORD *)v21 + 104LL);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &hObject,
      0LL);
    v15 = v14(v13, 0LL, 0x10000000LL, 0LL, &hObject);
    v9 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x131u, 0LL);
    }
    else
    {
      v17 = *(__int64 (__fastcall **)(struct IDisplayDeviceInterop *, HANDLE, GUID *, __int64 *))(*(_QWORD *)a2 + 32LL);
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v4);
      v24 = GUID_594f6cc6_139a_56d6_a4b1_15fe2cb76adb;
      v18 = v17(a2, hObject, &v24, v4);
      v9 = v18;
      if ( v18 >= 0 )
      {
        if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          CloseHandle(hObject);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v21);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v22);
        goto LABEL_8;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x132u, 0LL);
    }
  }
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v21);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v22);
  return v9;
}
