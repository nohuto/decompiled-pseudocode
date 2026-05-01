/*
 * XREFs of std::experimental::_Resumable_helper_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::_ConstructPromise @ 0x180144864
 * Callers:
 *     _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent$_InitCoro$1 @ 0x18013E23C (_anonymous_namespace_--PinConsentPromptManager--RequestPinConsent$_InitCoro$1.c)
 * Callees:
 *     memset_0 @ 0x180090978 (memset_0.c)
 */

__int64 (__fastcall **__fastcall std::experimental::_Resumable_helper_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const___::_ConstructPromise(
        __int64 a1,
        __int64 a2,
        int a3))()
{
  __int64 v3; // rbx
  __int64 (__fastcall **result)(); // rax

  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = a3 != 0 ? 2 : 65538;
  v3 = a1 - 96;
  memset_0((void *)(a1 - 96), 0, 0x58uLL);
  *(_QWORD *)(v3 + 16) = off_180508C98;
  *(_QWORD *)(v3 + 24) = off_180508CE0;
  *(_QWORD *)(v3 + 8) = 1LL;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *(_QWORD *)v3 = &off_180508D38;
  __ExceptionPtrCreate((void *)(v3 + 32));
  *(_QWORD *)(v3 + 48) = 0LL;
  *(_QWORD *)(v3 + 56) = 0LL;
  *(_QWORD *)(v3 + 64) = 0LL;
  *(_DWORD *)(v3 + 72) = 0;
  *(_BYTE *)(v3 + 76) = 0;
  result = &off_180508D78;
  *(_QWORD *)v3 = &off_180508D78;
  *(_QWORD *)(v3 + 80) = 0LL;
  return result;
}
