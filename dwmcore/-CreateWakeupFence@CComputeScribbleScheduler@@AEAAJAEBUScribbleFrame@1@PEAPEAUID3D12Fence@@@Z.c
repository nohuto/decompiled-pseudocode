__int64 __fastcall CComputeScribbleScheduler::CreateWakeupFence(
        CComputeScribbleScheduler *this,
        const struct CComputeScribbleScheduler::ScribbleFrame *a2,
        struct ID3D12Fence **a3)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v7)(__int64, _QWORD, _QWORD, __int64 *); // rbx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, __int64, _QWORD, __int64, _QWORD, HANDLE *); // rdi
  int v15; // eax
  __int64 v16; // rdi
  __int64 (__fastcall *v17)(__int64, GUID *, __int64 *); // rbx
  int v18; // eax
  __int64 v19; // rbx
  __int64 (__fastcall *v20)(__int64, HANDLE, GUID *, struct ID3D12Fence **); // rdi
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct ID3D12Fence *v24; // rax
  __int64 v26; // [rsp+40h] [rbp-10h] BYREF
  __int64 v27; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v29; // [rsp+80h] [rbp+30h] BYREF
  HANDLE hObject; // [rsp+88h] [rbp+38h] BYREF
  struct ID3D12Fence *v31; // [rsp+98h] [rbp+48h] BYREF

  v3 = *((_QWORD *)this + 3);
  v27 = 0LL;
  v7 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v3 + 72LL);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v27);
  v8 = v7(v3, *((_QWORD *)this + 4), (unsigned int)(int)(*((double *)a2 + 2) * 10000000.0), &v27);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = (unsigned int)v8;
    v11 = 437LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblescheduler.cpp",
      (const char *)v10);
    goto LABEL_22;
  }
  if ( !v27 )
  {
    v9 = -2147024882;
    v11 = 440LL;
    v10 = 2147942414LL;
    goto LABEL_5;
  }
  v29 = 0LL;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v29);
  v12 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 3))(
          *((_QWORD *)this + 3),
          &GUID_64338358_366a_471b_bd56_dd8ef48e439b,
          &v29);
  v9 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1BB,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblescheduler.cpp",
      (const char *)(unsigned int)v12);
LABEL_8:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v29);
    goto LABEL_22;
  }
  v13 = v29;
  hObject = 0LL;
  v14 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _QWORD, HANDLE *))(*(_QWORD *)v29 + 24LL);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    &hObject,
    0LL);
  v15 = v14(v13, v27, 0LL, 0x10000000LL, 0LL, &hObject);
  v9 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C3,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblescheduler.cpp",
      (const char *)(unsigned int)v15);
LABEL_11:
    CDummyRemotingSwapChain::CPresentStats::~CPresentStats(&hObject);
    goto LABEL_8;
  }
  v16 = *((_QWORD *)this + 2);
  v26 = 0LL;
  v17 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v16 + 56LL);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v26);
  v18 = v17(v16, &GUID_189819f1_1db6_4b57_be54_1821339b85f7, &v26);
  v9 = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C6,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblescheduler.cpp",
      (const char *)(unsigned int)v18);
LABEL_14:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v26);
    goto LABEL_11;
  }
  v19 = v26;
  v31 = 0LL;
  v20 = *(__int64 (__fastcall **)(__int64, HANDLE, GUID *, struct ID3D12Fence **))(*(_QWORD *)v26 + 256LL);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v31);
  v21 = v20(v19, hObject, &GUID_0a753dcf_c4d8_4b91_adf6_be5a60d95a76, &v31);
  v9 = v21;
  if ( v21 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1CA,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblescheduler.cpp",
      (const char *)(unsigned int)v21);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v31);
    goto LABEL_14;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    McTemplateU0xf_EventWriteTransfer(v23, v22, *(_QWORD *)a2);
  v24 = v31;
  v31 = 0LL;
  *a3 = v24;
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v31);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v26);
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v29);
  v9 = 0;
LABEL_22:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v27);
  return v9;
}
