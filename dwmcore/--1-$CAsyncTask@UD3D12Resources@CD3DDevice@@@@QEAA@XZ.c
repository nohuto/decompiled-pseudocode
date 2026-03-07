void __fastcall CAsyncTask<CD3DDevice::D3D12Resources>::~CAsyncTask<CD3DDevice::D3D12Resources>(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  struct _TP_WORK *v4; // rbx

  wil::details::unique_storage<wil::details::resource_policy<_TP_WORK *,void (*)(_TP_WORK *),&public: static void wil::details::DestroyThreadPoolWork<0>::Destroy(_TP_WORK *),wistd::integral_constant<unsigned __int64,0>,_TP_WORK *,_TP_WORK *,0,std::nullptr_t>>::reset(
    a1,
    0LL);
  CD3DDevice::D3D12Resources::~D3D12Resources((CD3DDevice::D3D12Resources *)(a1 + 72));
  v2 = *(_QWORD *)(a1 + 64);
  v3 = a1 + 8;
  if ( v2 )
  {
    LOBYTE(v3) = v2 != v3;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 32LL))(v2, v3);
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  v4 = *(struct _TP_WORK **)a1;
  if ( v4 )
  {
    WaitForThreadpoolWorkCallbacks(v4, 1);
    CloseThreadpoolWork(v4);
  }
}
