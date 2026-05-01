/*
 * XREFs of _winrt::impl::produce_winrt::Windows::Internal::Shell::implementation::PinManager_winrt::Windows::Internal::Shell::IPinManager_::IsItemPinned_::_1_::catch$5 @ 0x18013B04C
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x180221C94 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::produce_winrt::Windows::Internal::Shell::implementation::PinManager_winrt::Windows::Internal::Shell::IPinManager_::IsItemPinned_::_1_::catch_5(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 32) = *(_DWORD *)winrt::to_hresult(a2 + 32);
  return 0LL;
}
