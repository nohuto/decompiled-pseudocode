/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::Foundation::IInspectable___lambda_c5e85cbf5d6483b8d295c64a0af9bf90___::Invoke @ 0x18014A0E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt@@QEAA@AEBU0123@@Z @ 0x18008171C (--0-$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt@@QEAA@AEBU0123@@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _lambda_c5e85cbf5d6483b8d295c64a0af9bf90_::operator() @ 0x180147F1C (_lambda_c5e85cbf5d6483b8d295c64a0af9bf90_--operator().c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::Foundation::IInspectable___lambda_c5e85cbf5d6483b8d295c64a0af9bf90___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rdi
  __int64 *v4; // rbx
  __int64 result; // rax
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+28h] [rbp-20h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h] BYREF
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  v9 = a2;
  v8 = a3;
  v3 = a1 + 8;
  v4 = winrt::Windows::Foundation::AsyncOperationCompletedHandler<bool>::AsyncOperationCompletedHandler<bool>(&v7, &v8);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<bool>::AsyncOperationCompletedHandler<bool>(&v6, &v9);
  try
  {
    lambda_c5e85cbf5d6483b8d295c64a0af9bf90_::operator()(v3, &v6, v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v6);
  }
  return result;
}
