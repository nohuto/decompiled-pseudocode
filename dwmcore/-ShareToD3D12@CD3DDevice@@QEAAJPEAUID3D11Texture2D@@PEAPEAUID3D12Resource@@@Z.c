__int64 __fastcall CD3DDevice::ShareToD3D12(CD3DDevice *this, struct ID3D11Texture2D *a2, struct ID3D12Resource **a3)
{
  unsigned int D3D12DeviceNoRef; // ebx
  __int64 v6; // rdx
  struct ID3D12Device *v7; // rsi
  struct ID3D11Texture2DVtbl *lpVtbl; // rax
  int v9; // eax
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, _QWORD, __int64, _QWORD, HANDLE *); // rdi
  int v12; // eax
  __int64 v13; // rdx
  __int64 v15; // [rsp+30h] [rbp-10h] BYREF
  struct ID3D12Device *v16; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  HANDLE hObject; // [rsp+78h] [rbp+38h] BYREF

  D3D12DeviceNoRef = CD3DDevice::GetD3D12DeviceNoRef(this, &v16);
  if ( (D3D12DeviceNoRef & 0x80000000) == 0 )
  {
    v7 = v16;
    if ( !v16 )
    {
      D3D12DeviceNoRef = -2003292404;
      v6 = 1694LL;
      goto LABEL_3;
    }
    lpVtbl = a2->lpVtbl;
    v15 = 0LL;
    v9 = ((__int64 (__fastcall *)(struct ID3D11Texture2D *, GUID *, __int64 *))lpVtbl->QueryInterface)(
           a2,
           &GUID_30961379_4609_4a41_998e_54fe567ee0c1,
           &v15);
    D3D12DeviceNoRef = v9;
    if ( v9 >= 0 )
    {
      v10 = v15;
      hObject = 0LL;
      v11 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, HANDLE *))(*(_QWORD *)v15 + 104LL);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        &hObject,
        0LL);
      v12 = v11(v10, 0LL, 0x10000000LL, 0LL, &hObject);
      D3D12DeviceNoRef = v12;
      if ( v12 >= 0 )
      {
        v12 = ((__int64 (__fastcall *)(struct ID3D12Device *, HANDLE, GUID *, struct ID3D12Resource **))v7->lpVtbl->OpenSharedHandle)(
                v7,
                hObject,
                &GUID_696442be_a72e_4059_bc79_5b5c98040fad,
                a3);
        D3D12DeviceNoRef = v12;
        if ( v12 >= 0 )
        {
          if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
            CloseHandle(hObject);
          D3D12DeviceNoRef = 0;
          goto LABEL_16;
        }
        v13 = 1707LL;
      }
      else
      {
        v13 = 1704LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\d3ddevice.cpp",
        (const char *)(unsigned int)v12);
      CDummyRemotingSwapChain::CPresentStats::~CPresentStats(&hObject);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6A2,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\d3ddevice.cpp",
        (const char *)(unsigned int)v9);
    }
LABEL_16:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v15);
    return D3D12DeviceNoRef;
  }
  v6 = 1690LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\d3ddevice.cpp",
    (const char *)D3D12DeviceNoRef);
  return D3D12DeviceNoRef;
}
