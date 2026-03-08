/*
 * XREFs of std::_Func_impl_no_alloc__lambda_88358cf897930614284adb3422b4c545__long_CD3DDevice::D3D12Resources___::_Do_call @ 0x18028B730
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     _anonymous_namespace_::CreateD3D12ResourcesInternal @ 0x1802896E0 (_anonymous_namespace_--CreateD3D12ResourcesInternal.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_88358cf897930614284adb3422b4c545__long_CD3DDevice::D3D12Resources___::_Do_call(
        __int64 a1,
        __int64 **a2)
{
  __int64 *v2; // rdi
  __int64 v4; // rcx
  IUnknown *v5; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  IUnknown *v8; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a2;
  v4 = *(_QWORD *)(a1 + 16);
  v7 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v5 = *(IUnknown **)(a1 + 8);
  v8 = v5;
  if ( v5 )
    ((void (__fastcall *)(IUnknown *))v5->lpVtbl->AddRef)(v5);
  return anonymous_namespace_::CreateD3D12ResourcesInternal(&v8, &v7, v2);
}
