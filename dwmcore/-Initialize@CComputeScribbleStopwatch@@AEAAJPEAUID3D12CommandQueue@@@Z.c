__int64 __fastcall CComputeScribbleStopwatch::Initialize(
        CComputeScribbleStopwatch *this,
        struct ID3D12CommandQueue *a2)
{
  struct ID3D12CommandQueueVtbl *lpVtbl; // rax
  HRESULT (__stdcall *GetDevice)(ID3D12CommandQueue *, const IID *const, void **); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rbx
  __int64 v11; // rax
  __int64 (__fastcall *v12)(_QWORD *, _DWORD *, GUID *, char *); // r14
  __int64 v13; // rcx
  _QWORD *v14; // rbx
  __int64 v15; // rax
  __int64 (__fastcall *v16)(_QWORD *, int *, _QWORD, int *, int, _QWORD, GUID *, char *); // r14
  _QWORD *v18; // [rsp+50h] [rbp-49h] BYREF
  LARGE_INTEGER Frequency; // [rsp+58h] [rbp-41h] BYREF
  _DWORD v20[4]; // [rsp+60h] [rbp-39h] BYREF
  int v21; // [rsp+70h] [rbp-29h] BYREF
  __int64 v22; // [rsp+74h] [rbp-25h]
  int v23; // [rsp+7Ch] [rbp-1Dh]
  __int64 v24; // [rsp+80h] [rbp-19h]
  int v25; // [rsp+88h] [rbp-11h]
  int v26; // [rsp+8Ch] [rbp-Dh]
  int v27; // [rsp+90h] [rbp-9h]
  int v28; // [rsp+94h] [rbp-5h]
  int v29; // [rsp+98h] [rbp-1h]
  int v30; // [rsp+9Ch] [rbp+3h]
  __int64 v31; // [rsp+A0h] [rbp+7h]
  int v32; // [rsp+A8h] [rbp+Fh] BYREF
  __int128 v33; // [rsp+ACh] [rbp+13h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  lpVtbl = a2->lpVtbl;
  v18 = 0LL;
  GetDevice = lpVtbl->GetDevice;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v18);
  v6 = ((__int64 (__fastcall *)(struct ID3D12CommandQueue *, GUID *, _QWORD **))GetDevice)(
         a2,
         &GUID_189819f1_1db6_4b57_be54_1821339b85f7,
         &v18);
  v7 = v6;
  if ( v6 >= 0 )
  {
    wil::com_ptr_t<ID3D12CommandQueue,wil::err_returncode_policy>::operator=((__int64 *)this, (__int64)a2);
    v20[2] = 0;
    v9 = *((_QWORD *)this + 4);
    v10 = v18;
    v20[1] = 1;
    v20[0] = 1;
    v11 = *v18;
    *((_QWORD *)this + 4) = 0LL;
    v12 = *(__int64 (__fastcall **)(_QWORD *, _DWORD *, GUID *, char *))(v11 + 312);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    v6 = v12(v10, v20, &GUID_0d9658ae_ed45_469e_a61d_970ec583cab4, (char *)this + 32);
    v7 = v6;
    if ( v6 >= 0 )
    {
      v22 = 0LL;
      v23 = 0;
      v29 = 0;
      v31 = 0LL;
      v27 = 0;
      v13 = *((_QWORD *)this + 5);
      v14 = v18;
      v33 = 0LL;
      v32 = 3;
      v21 = 1;
      v24 = 8LL;
      v25 = 1;
      v26 = 65537;
      v28 = 1;
      v30 = 1;
      v15 = *v18;
      *((_QWORD *)this + 5) = 0LL;
      v16 = *(__int64 (__fastcall **)(_QWORD *, int *, _QWORD, int *, int, _QWORD, GUID *, char *))(v15 + 216);
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      v6 = v16(v14, &v32, 0LL, &v21, 1024, 0LL, &GUID_696442be_a72e_4059_bc79_5b5c98040fad, (char *)this + 40);
      v7 = v6;
      if ( v6 >= 0 )
      {
        QueryPerformanceFrequency(&Frequency);
        v7 = 0;
        *((float *)this + 2) = (float)(int)Frequency.LowPart;
        goto LABEL_13;
      }
      v8 = 46LL;
    }
    else
    {
      v8 = 24LL;
    }
  }
  else
  {
    v8 = 16LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblestopwatch.cpp",
    (const char *)(unsigned int)v6);
LABEL_13:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v18);
  return v7;
}
