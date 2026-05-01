/*
 * XREFs of _winrt::impl::delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::Windows::Foundation::IReference_bool_____lambda_e5b45a8e7f2c7ec847f24290172a79dc___::Invoke_::_1_::catch$0 @ 0x18013ADD8
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x180221AE4 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::Windows::Foundation::IReference_bool_____lambda_e5b45a8e7f2c7ec847f24290172a79dc___::Invoke_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 64) = *(_DWORD *)winrt::to_hresult(a2 + 64);
  return 0LL;
}
