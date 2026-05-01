/*
 * XREFs of winrt::impl::root_implements_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____winrt::Windows::Foundation::IAsyncInfo_::make_weak_ref @ 0x180145A14
 * Callers:
 *     winrt::impl::root_implements_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____winrt::Windows::Foundation::IAsyncInfo_::query_interface @ 0x180145E30 (winrt--impl--root_implements_std--experimental--coroutine_traits_winrt--Windows--Fo_ea_180145E30.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004D4F4 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?atomic_compare_exchange_weak_explicit@std@@YA_NPEAU_Atomic_ullong@1@PEA_K_KW4memory_order@1@3@Z @ 0x1804D50CC (-atomic_compare_exchange_weak_explicit@std@@YA_NPEAU_Atomic_ullong@1@PEA_K_KW4memory_order@1@3@Z.c)
 */

__int64 __fastcall winrt::impl::root_implements_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____winrt::Windows::Foundation::IAsyncInfo_::make_weak_ref(
        _QWORD *a1)
{
  _QWORD *v1; // r15
  __int64 v3; // rsi
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  char v7; // al
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v12; // [rsp+38h] [rbp-30h] BYREF

  v1 = a1 + 1;
  v3 = a1[1];
  v11 = v3;
  if ( v3 >= 0 )
  {
    v5 = (unsigned __int64)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v5 )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 16LL))(a1);
      *(_DWORD *)(v5 + 24) = v3;
      *(_QWORD *)(v5 + 8) = &winrt::impl::weak_source<1>::`vftable';
      *(_QWORD *)v5 = &winrt::impl::weak_ref<1>::`vftable';
      *(_QWORD *)(v5 + 16) = v6;
      *(_DWORD *)(v5 + 28) = 1;
    }
    else
    {
      v5 = 0LL;
    }
    v12 = v5;
    if ( v5 )
    {
      v7 = std::atomic_compare_exchange_weak_explicit(v1, &v11, (v5 >> 1) | 0x8000000000000000uLL, 4LL, 0);
      while ( 1 )
      {
        if ( v7 )
        {
          _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 24), 1u);
          return v12 + 8;
        }
        v9 = v11;
        if ( v11 < 0 )
          break;
        _InterlockedExchange((volatile __int32 *)(v5 + 24), v11);
        v7 = std::atomic_compare_exchange_weak_explicit(v1, &v11, v8, 4LL, 0);
        v5 = v12;
      }
      _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v11 + 24), 1u);
      v10 = 2 * v9 + 8;
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v12);
      return v10;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v3 + 24), 1u);
    return 2 * v3 + 8;
  }
}
