/*
 * XREFs of ?make_weak_ref@?$root_implements@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUPinManager@implementation@Shell@Internal@34@Uhstring@4@U94@USecondaryTile@StartScreen@UI@34@PEFBU_ITEMIDLIST@@_N_NW4PINNEDLISTMODIFYCALLER@@VPinManagerPinItemToTaskbarShim@PinManagerTelemetry@@V?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@V?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x180145B70
 * Callers:
 *     ?query_interface@?$root_implements@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUPinManager@implementation@Shell@Internal@34@Uhstring@4@U94@USecondaryTile@StartScreen@UI@34@PEFBU_ITEMIDLIST@@_N_NW4PINNEDLISTMODIFYCALLER@@VPinManagerRequestPinItem@PinManagerTelemetry@@V?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@V?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x180145FAC (-query_interface@-$root_implements@Upromise_type@-$coroutine_traits@U-$IAsyncOperat_ea_180145FAC.c)
 *     ?query_interface@?$root_implements@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBVPinConsentPromptContent@@@experimental@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x18014D7F0 (-query_interface@-$root_implements@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@U-$IRefer.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004D4F4 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?atomic_compare_exchange_weak_explicit@std@@YA_NPEAU_Atomic_ullong@1@PEA_K_KW4memory_order@1@3@Z @ 0x1804D50CC (-atomic_compare_exchange_weak_explicit@std@@YA_NPEAU_Atomic_ullong@1@PEA_K_KW4memory_order@1@3@Z.c)
 */

__int64 __fastcall winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::implementation::PinManager *,winrt::hstring,winrt::hstring,winrt::Windows::UI::StartScreen::SecondaryTile,_ITEMIDLIST const __unaligned *,bool,bool,enum PINNEDLISTMODIFYCALLER,PinManagerTelemetry::PinManagerPinItemToTaskbarShim,tip::tip_test<tip::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>,tip::test_watcher<tip::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Foundation::IAsyncInfo>::make_weak_ref(
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
