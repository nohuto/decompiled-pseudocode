/*
 * XREFs of winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::rethrow_if_failed @ 0x1801460CC
 * Callers:
 *     winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::ErrorCode @ 0x180138FA8 (winrt--impl--promise_base_std--experimental--coroutine_traits_winrt--Windows--Found_ea_180138FA8.c)
 *     winrt::impl::produce_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____::GetResults @ 0x18013A1C0 (winrt--impl--produce_std--experimental--coroutine_traits_winrt--Windows--Foundation_ea_18013A1C0.c)
 * Callees:
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x18035C8D4 (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x18035EA98 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 */

__int64 __fastcall winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::rethrow_if_failed(
        __int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rax
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  result = (unsigned int)(*(_DWORD *)(a1 + 72) - 2);
  if ( (unsigned int)result <= 1 )
  {
    v2 = std::exception_ptr::exception_ptr((std::exception_ptr *)v3, (const struct std::exception_ptr *)(a1 + 32));
    std::rethrow_exception(v2);
    JUMPOUT(0x1801460F7LL);
  }
  return result;
}
