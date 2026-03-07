__int64 __fastcall CD3DDevice::CreateSharedFence(
        CD3DDevice *this,
        const struct CResourceTag *a2,
        __int64 a3,
        struct CSharedFence **a4)
{
  int D3D12Resources; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  struct ID3D12Device *v10; // rsi
  __int64 v11; // r8
  HRESULT (__stdcall *OpenSharedHandle)(ID3D12Device *, HANDLE, const IID *const, void **); // rbx
  CSharedFence *v13; // rax
  CSharedFence *v14; // rax
  struct CSharedFence *v15; // rax
  int v16; // r9d
  unsigned int v18; // [rsp+20h] [rbp-30h]
  HANDLE hObject; // [rsp+30h] [rbp-20h] BYREF
  struct CSharedFence *v20; // [rsp+38h] [rbp-18h] BYREF
  struct ID3D11Fence *v21; // [rsp+40h] [rbp-10h] BYREF
  struct ID3D12Device *v22; // [rsp+48h] [rbp-8h] BYREF
  struct ID3D12Fence *v23; // [rsp+90h] [rbp+40h] BYREF

  v21 = 0LL;
  v23 = 0LL;
  v20 = 0LL;
  hObject = 0LL;
  D3D12Resources = CD3DDevice::EnsureBeginCreateD3D12Resources(this);
  v9 = D3D12Resources;
  if ( D3D12Resources < 0 )
  {
    v18 = 1903;
    goto LABEL_17;
  }
  D3D12Resources = CD3DDevice::GetD3D12DeviceNoRef(this, &v22);
  v9 = D3D12Resources;
  if ( D3D12Resources < 0 )
  {
    v18 = 1906;
    goto LABEL_17;
  }
  v10 = v22;
  if ( !v22 )
  {
    v9 = -2003292404;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2003292404, 0x776u, 0LL);
    goto LABEL_19;
  }
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    &hObject,
    0LL);
  D3D12Resources = CD3DDevice::CreateSharedHandleFence(this, a2, v11, &v21, &hObject, D3D11_FENCE_FLAG_NONE);
  v9 = D3D12Resources;
  if ( D3D12Resources < 0 )
  {
    v18 = 1916;
    goto LABEL_17;
  }
  OpenSharedHandle = v10->lpVtbl->OpenSharedHandle;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v23);
  D3D12Resources = ((__int64 (__fastcall *)(struct ID3D12Device *, HANDLE, GUID *, struct ID3D12Fence **))OpenSharedHandle)(
                     v10,
                     hObject,
                     &GUID_0a753dcf_c4d8_4b91_adf6_be5a60d95a76,
                     &v23);
  v9 = D3D12Resources;
  if ( D3D12Resources < 0 )
  {
    v18 = 1919;
LABEL_17:
    v16 = D3D12Resources;
    goto LABEL_18;
  }
  ((void (__fastcall *)(struct ID3D12Fence *, const GUID *, _QWORD, _QWORD))v23->lpVtbl->SetPrivateData)(
    v23,
    &WKPDID_D3DDebugObjectName,
    *((unsigned int *)a2 + 2),
    *(_QWORD *)a2);
  v13 = (CSharedFence *)DefaultHeap::Alloc(0x20uLL);
  if ( v13 )
    v14 = CSharedFence::CSharedFence(v13, v21, v23);
  else
    v14 = 0LL;
  wil::com_ptr_t<CSharedFence,wil::err_returncode_policy>::operator=(
    (__int64 *)&v20,
    (void (__fastcall ***)(_QWORD))v14);
  v15 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    *a4 = v15;
    goto LABEL_19;
  }
  v9 = -2147024882;
  v16 = -2147024882;
  v18 = 1929;
LABEL_18:
  MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v16, v18, 0LL);
LABEL_19:
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  wil::com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>::~com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>((__int64 *)&v20);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v23);
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v21);
  return v9;
}
