/*
 * XREFs of ?Invoke@?$delegate@U?$TypedEventHandler@UPackageCatalog@ApplicationModel@Windows@winrt@@UPackageUpdatingEventArgs@234@@Foundation@Windows@winrt@@V_lambda_505d7d8dd5d02cda7c2ed4b2e362c386_@@@impl@winrt@@UEAAHPEAX0@Z @ 0x180124590
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt@@QEAA@AEBU0123@@Z @ 0x18008171C (--0-$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt@@QEAA@AEBU0123@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::PackageCatalog,winrt::Windows::ApplicationModel::PackageUpdatingEventArgs>,_lambda_505d7d8dd5d02cda7c2ed4b2e362c386_>::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  void (*v3)(void); // rbx
  __int64 result; // rax
  __int64 v5; // [rsp+50h] [rbp+8h] BYREF
  __int64 v6; // [rsp+58h] [rbp+10h] BYREF
  __int64 v7; // [rsp+60h] [rbp+18h] BYREF
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF

  v7 = a3;
  v6 = a2;
  v3 = *(void (**)(void))(a1 + 16);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<bool>::AsyncOperationCompletedHandler<bool>(&v5, &v7);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<bool>::AsyncOperationCompletedHandler<bool>(&v8, &v6);
  try
  {
    v3();
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v5);
  }
  return result;
}
