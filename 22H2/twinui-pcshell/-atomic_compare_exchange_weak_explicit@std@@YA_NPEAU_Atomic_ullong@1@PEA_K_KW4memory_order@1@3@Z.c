/*
 * XREFs of ?atomic_compare_exchange_weak_explicit@std@@YA_NPEAU_Atomic_ullong@1@PEA_K_KW4memory_order@1@3@Z @ 0x1804D4D3C
 * Callers:
 *     ?NonDelegatingAddRef@?$root_implements@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUPinManager@implementation@Shell@Internal@34@Uhstring@4@U94@USecondaryTile@StartScreen@UI@34@PEFBU_ITEMIDLIST@@_N_NW4PINNEDLISTMODIFYCALLER@@VPinManagerPinItemToTaskbarShim@PinManagerTelemetry@@V?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@V?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@IEAAIXZ @ 0x1800F6378 (-NonDelegatingAddRef@-$root_implements@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Fo.c)
 *     ?make_weak_ref@?$root_implements@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@34@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x180101360 (-make_weak_ref@-$root_implements@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundati.c)
 *     ?subtract_reference@?$root_implements@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUPinManager@implementation@Shell@Internal@34@V?$shared_ptr@VPinOperationContext@@@std@@_N@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@IEAAIXZ @ 0x180101810 (-subtract_reference@-$root_implements@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Fou.c)
 *     winrt::impl::root_implements_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____winrt::Windows::Foundation::IAsyncInfo_::NonDelegatingAddRef @ 0x18013BAD8 (winrt--impl--root_implements_std--experimental--coroutine_traits_winrt--Windows--Fo_ea_18013BAD8.c)
 *     winrt::impl::root_implements_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____winrt::Windows::Foundation::IAsyncInfo_::make_weak_ref @ 0x1801458A4 (winrt--impl--root_implements_std--experimental--coroutine_traits_winrt--Windows--Fo_ea_1801458A4.c)
 *     ?make_weak_ref@?$root_implements@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUPinManager@implementation@Shell@Internal@34@Uhstring@4@U94@USecondaryTile@StartScreen@UI@34@PEFBU_ITEMIDLIST@@_N_NW4PINNEDLISTMODIFYCALLER@@VPinManagerPinItemToTaskbarShim@PinManagerTelemetry@@V?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@V?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x180145A00 (-make_weak_ref@-$root_implements@Upromise_type@-$coroutine_traits@U-$IAsyncOperatio_ea_180145A00.c)
 *     winrt::impl::root_implements_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____winrt::Windows::Foundation::IAsyncInfo_::subtract_reference @ 0x18014636C (winrt--impl--root_implements_std--experimental--coroutine_traits_winrt--Windows--Fo_ea_18014636C.c)
 * Callees:
 *     <none>
 */

bool __fastcall std::atomic_compare_exchange_weak_explicit(
        volatile signed __int64 *a1,
        signed __int64 *a2,
        signed __int64 a3,
        int a4,
        int a5)
{
  int v6; // eax
  int v7; // ecx
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  signed __int64 v11; // rtt

  v6 = `std::_Memory_order_upper_bound'::`2'::_Upper[6 * a4 + a5];
  if ( !v6 )
    goto LABEL_9;
  if ( v6 <= 0 )
  {
LABEL_7:
    v7 = 0;
    return v7 != 0;
  }
  if ( v6 < 4 )
  {
LABEL_9:
    v11 = *a2;
    v8 = _InterlockedCompareExchange64(a1, a3, *a2);
    if ( v11 == v8 )
    {
      v7 = 1;
      return v7 != 0;
    }
    goto LABEL_6;
  }
  v7 = 1;
  if ( (unsigned int)(v6 - 4) > 1 )
    goto LABEL_7;
  v9 = *a2;
  v8 = _InterlockedCompareExchange64(a1, a3, *a2);
  if ( v9 != v8 )
  {
LABEL_6:
    *a2 = v8;
    goto LABEL_7;
  }
  return v7 != 0;
}
