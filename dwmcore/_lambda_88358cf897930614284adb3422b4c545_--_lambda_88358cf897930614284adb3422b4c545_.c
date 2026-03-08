/*
 * XREFs of _lambda_88358cf897930614284adb3422b4c545_::_lambda_88358cf897930614284adb3422b4c545_ @ 0x180288D7C
 * Callers:
 *     CAsyncTask_CD3DDevice::D3D12Resources_::Start__lambda_88358cf897930614284adb3422b4c545___ @ 0x180288B2C (CAsyncTask_CD3DDevice--D3D12Resources_--Start__lambda_88358cf897930614284adb3422b4c545___.c)
 *     std::_Func_impl_no_alloc__lambda_88358cf897930614284adb3422b4c545__long_CD3DDevice::D3D12Resources___::_Copy @ 0x18028B690 (std--_Func_impl_no_alloc__lambda_88358cf897930614284adb3422b4c545__long_CD3DDevice-_ea_18028B690.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall lambda_88358cf897930614284adb3422b4c545_::_lambda_88358cf897930614284adb3422b4c545_(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  v4 = *a2;
  *a1 = *a2;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v5 = a2[1];
  a1[1] = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  return a1;
}
