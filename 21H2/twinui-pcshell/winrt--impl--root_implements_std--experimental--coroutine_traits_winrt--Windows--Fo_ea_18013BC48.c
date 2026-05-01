/*
 * XREFs of winrt::impl::root_implements_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____winrt::Windows::Foundation::IAsyncInfo_::NonDelegatingAddRef @ 0x18013BC48
 * Callers:
 *     winrt::impl::produce_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::AddRef @ 0x180137460 (winrt--impl--produce_base_std--experimental--coroutine_traits_winrt--Windows--Foundation--IAsync.c)
 *     winrt::impl::produce_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncInfo_void_::AddRef @ 0x180137480 (winrt--impl--produce_base_std--experimental--coroutine_traits_winrt--Windows--Found_ea_180137480.c)
 *     winrt::impl::root_implements_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____winrt::Windows::Foundation::IAsyncInfo_::query_interface @ 0x180145E30 (winrt--impl--root_implements_std--experimental--coroutine_traits_winrt--Windows--Fo_ea_180145E30.c)
 * Callees:
 *     ?atomic_compare_exchange_weak_explicit@std@@YA_NPEAU_Atomic_ullong@1@PEA_K_KW4memory_order@1@3@Z @ 0x1804D50CC (-atomic_compare_exchange_weak_explicit@std@@YA_NPEAU_Atomic_ullong@1@PEA_K_KW4memory_order@1@3@Z.c)
 */

__int64 __fastcall winrt::impl::root_implements_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____winrt::Windows::Foundation::IAsyncInfo_::NonDelegatingAddRef(
        __int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  unsigned int v3; // r8d
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v1 = a1 + 8;
  v2 = *(_QWORD *)(a1 + 8);
  v5 = v2;
  while ( v2 >= 0 )
  {
    if ( (unsigned __int8)std::atomic_compare_exchange_weak_explicit(v1, &v5, v2 + 1, 0LL, 0) )
      return v3;
    v2 = v5;
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(2 * v2 + 24));
}
