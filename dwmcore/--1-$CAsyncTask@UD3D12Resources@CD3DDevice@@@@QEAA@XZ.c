/*
 * XREFs of ??1?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@QEAA@XZ @ 0x180288ED0
 * Callers:
 *     ??1CD3DDevice@@MEAA@XZ @ 0x1800EDCB4 (--1CD3DDevice@@MEAA@XZ.c)
 *     ??1?$unique_ptr@V?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@U?$default_delete@V?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@@std@@@std@@QEAA@XZ @ 0x180288F50 (--1-$unique_ptr@V-$CAsyncTask@UD3D12Resources@CD3DDevice@@@@U-$default_delete@V-$CAsyncTask@UD3D.c)
 *     ?EnsureBeginCreateD3D12Resources@CD3DDevice@@AEAAJXZ @ 0x18028A06C (-EnsureBeginCreateD3D12Resources@CD3DDevice@@AEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1D3D12Resources@CD3DDevice@@QEAA@XZ @ 0x180288F80 (--1D3D12Resources@CD3DDevice@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWork@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_WORK@@@Z @ 0x18028B910 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThreadP.c)
 */

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
