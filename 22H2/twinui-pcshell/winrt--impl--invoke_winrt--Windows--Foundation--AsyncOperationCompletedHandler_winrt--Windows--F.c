/*
 * XREFs of winrt::impl::invoke_winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::Windows::Foundation::IReference_bool____winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void__enum_winrt::Windows::Foundation::AsyncStatus_ @ 0x18013402C
 * Callers:
 *     winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::Completed @ 0x180137D8C (winrt--impl--promise_base_std--experimental--coroutine_traits_winrt--Windows--Found_ea_180137D8C.c)
 *     winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::set_completed @ 0x180146248 (winrt--impl--promise_base_std--experimental--coroutine_traits_winrt--Windows--Found_ea_180146248.c)
 * Callees:
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A12EC (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ??R?$AsyncOperationCompletedHandler@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@QEBAXAEBU?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@123@AEBW4AsyncStatus@123@@Z @ 0x180136FE8 (--R-$AsyncOperationCompletedHandler@U-$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windo.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall winrt::impl::invoke_winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::Windows::Foundation::IReference_bool____winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void__enum_winrt::Windows::Foundation::AsyncStatus_(
        __int64 a1,
        __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2 + 16;
  try
  {
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Foundation::IReference<bool>>::operator()();
    v4 = 0LL;
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v4);
  }
  catch ( ... )
  {
    v3 = *(_DWORD *)winrt::to_hresult(&v4);
    WINRT_RoTransformError(v3, 0LL, 0LL);
    return v3 != -2147417848 && v3 != -2147023174 && v3 != -1996357631;
  }
  return 1;
}
