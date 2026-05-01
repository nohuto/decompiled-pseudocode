/*
 * XREFs of _winrt::impl::delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::Windows::Foundation::IReference_bool_____lambda_a26f18ab584c88017ddfe4edd20bfc0d___::Invoke_::_1_::catch$4 @ 0x18013AE9A
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x180221C94 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::Windows::Foundation::IReference_bool_____lambda_a26f18ab584c88017ddfe4edd20bfc0d___::Invoke_::_1_::catch_4(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 40) = *(_DWORD *)winrt::to_hresult(a2 + 40);
  return 0LL;
}
