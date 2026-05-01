/*
 * XREFs of _winrt::impl::produce_winrt::Windows::Internal::Shell::implementation::PinManager_winrt::Windows::Internal::Shell::IPinManager_::RequestPinItemAsync_::_1_::catch$12 @ 0x18013FB81
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x180221C94 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::produce_winrt::Windows::Internal::Shell::implementation::PinManager_winrt::Windows::Internal::Shell::IPinManager_::RequestPinItemAsync_::_1_::catch_12(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 48) = *(_DWORD *)winrt::to_hresult(a2 + 48);
  return 0LL;
}
