/*
 * XREFs of winrt::impl::root_implements_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____winrt::Windows::Foundation::IAsyncInfo_::subtract_reference @ 0x1801464DC
 * Callers:
 *     winrt::impl::root_implements_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____winrt::Windows::Foundation::IAsyncInfo_::_root_implements_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____winrt::Windows::Foundation::IAsyncInfo_ @ 0x180135EB8 (winrt--impl--root_implements_std--experimental--coroutine_traits_winrt--Windows--Foundation--IAs.c)
 *     winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::Release @ 0x18013E0D8 (winrt--impl--promise_base_std--experimental--coroutine_traits_winrt--Windows--Found_ea_18013E0D8.c)
 *     winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::final_suspend_awaiter::await_suspend @ 0x180145248 (winrt--impl--promise_base_std--experimental--coroutine_traits_winrt--Windows--Found_ea_180145248.c)
 * Callees:
 *     ?atomic_compare_exchange_weak_explicit@std@@YA_NPEAU_Atomic_ullong@1@PEA_K_KW4memory_order@1@3@Z @ 0x1804D50CC (-atomic_compare_exchange_weak_explicit@std@@YA_NPEAU_Atomic_ullong@1@PEA_K_KW4memory_order@1@3@Z.c)
 */

__int64 __fastcall winrt::impl::root_implements_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____winrt::Windows::Foundation::IAsyncInfo_::subtract_reference(
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
    if ( (unsigned __int8)std::atomic_compare_exchange_weak_explicit(v1, &v5, v2 - 1, 3LL, 0) )
      return v3;
    v2 = v5;
  }
  return winrt::impl::weak_ref<1>::decrement_strong(2 * v2);
}
