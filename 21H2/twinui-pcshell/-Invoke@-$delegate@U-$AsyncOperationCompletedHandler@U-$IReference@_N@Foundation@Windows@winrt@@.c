/*
 * XREFs of ?Invoke@?$delegate@U?$AsyncOperationCompletedHandler@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@V_lambda_e5b45a8e7f2c7ec847f24290172a79dc_@@@impl@winrt@@UEAAHPEAXH@Z @ 0x18013AED0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6DC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::delegate<winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Foundation::IReference<bool>>,_lambda_e5b45a8e7f2c7ec847f24290172a79dc_>::Invoke(
        __int64 a1)
{
  unsigned int v1; // eax
  __int64 result; // rax
  int v3; // [rsp+40h] [rbp-28h] BYREF
  _QWORD v4[2]; // [rsp+48h] [rbp-20h] BYREF

  v4[0] = 0LL;
  v4[1] = *(_QWORD *)(a1 + 8);
  v1 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(void (***)(void)), _QWORD *, void *, int, _QWORD))(**(_QWORD **)(a1 + 16) + 24LL))(
         *(_QWORD *)(a1 + 16),
         _lambda_54b66c8acde6d03bc095a0ebbc80a1f1_::_lambda_invoker_cdecl_,
         v4,
         &winrt::impl::guid_storage<winrt::impl::ICallbackWithNoReentrancyToApplicationSTA>::value,
         5,
         0LL);
  try
  {
    winrt::check_hresult(v1);
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v3);
  }
  return result;
}
