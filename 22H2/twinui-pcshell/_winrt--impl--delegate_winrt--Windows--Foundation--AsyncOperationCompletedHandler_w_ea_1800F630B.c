/*
 * XREFs of _winrt::impl::delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType___lambda_563ef2cba1e039dda91c2deec08b635f___::Invoke_::_1_::catch$0 @ 0x1800F630B
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x180221AE4 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType___lambda_563ef2cba1e039dda91c2deec08b635f___::Invoke_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 96) = *(_DWORD *)winrt::to_hresult(a2 + 96);
  return 0LL;
}
