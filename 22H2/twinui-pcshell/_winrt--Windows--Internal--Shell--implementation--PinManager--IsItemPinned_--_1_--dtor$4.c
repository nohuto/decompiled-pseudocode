/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::PinManager::IsItemPinned_::_1_::dtor$4 @ 0x18013B15C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::IsItemPinned_::_1_::dtor_4(
        __int64 a1,
        __int64 a2)
{
  return wistd::unique_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(a2 + 112);
}
