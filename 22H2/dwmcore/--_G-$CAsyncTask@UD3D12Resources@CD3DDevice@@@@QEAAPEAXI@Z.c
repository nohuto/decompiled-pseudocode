/*
 * XREFs of ??_G?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@QEAAPEAXI@Z @ 0x18023D54C
 * Callers:
 *     ??1CD3DDevice@@MEAA@XZ @ 0x18002A350 (--1CD3DDevice@@MEAA@XZ.c)
 *     CAsyncTask_CD3DDevice::D3D12Resources_::Start__lambda_88358cf897930614284adb3422b4c545___ @ 0x18023CEC4 (CAsyncTask_CD3DDevice--D3D12Resources_--Start__lambda_88358cf897930614284adb3422b4c545___.c)
 *     ?EnsureBeginCreateD3D12Resources@CD3DDevice@@AEAAJXZ @ 0x18023EF38 (-EnsureBeginCreateD3D12Resources@CD3DDevice@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180025150 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800426C0 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?Destroy@?$DestroyThreadPoolWork@$0A@@details@wil@@SAXPEAU_TP_WORK@@@Z @ 0x18023EE2C (-Destroy@-$DestroyThreadPoolWork@$0A@@details@wil@@SAXPEAU_TP_WORK@@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWork@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_WORK@@@Z @ 0x180240F3C (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThreadP.c)
 */

__int64 *__fastcall CAsyncTask<CD3DDevice::D3D12Resources>::`scalar deleting destructor'(__int64 *a1)
{
  __int64 v2; // rdx
  __int64 *v3; // rcx

  wil::details::unique_storage<wil::details::resource_policy<_TP_WORK *,void (*)(_TP_WORK *),&public: static void wil::details::DestroyThreadPoolWork<0>::Destroy(_TP_WORK *),wistd::integral_constant<unsigned __int64,0>,_TP_WORK *,_TP_WORK *,0,std::nullptr_t>>::reset(
    a1,
    0LL);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(a1 + 10);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(a1 + 9);
  v3 = (__int64 *)a1[8];
  if ( v3 )
  {
    LOBYTE(v2) = v3 != a1 + 1;
    (*(void (__fastcall **)(__int64 *, __int64))(*v3 + 32))(v3, v2);
    a1[8] = 0LL;
  }
  if ( *a1 )
    wil::details::DestroyThreadPoolWork<0>::Destroy();
  operator delete(a1);
  return a1;
}
