/*
 * XREFs of ?NonDelegatingGetRuntimeClassName@?$root_implements@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@34@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@IEAAHPEAPEAX@Z @ 0x1800F6544
 * Callers:
 *     ?GetRuntimeClassName@?$produce_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUPinManager@implementation@Shell@Internal@34@Uhstring@4@U94@USecondaryTile@StartScreen@UI@34@PEFBU_ITEMIDLIST@@_N_NW4PINNEDLISTMODIFYCALLER@@VPinManagerRequestPinItem@PinManagerTelemetry@@V?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@V?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1800F5FA0 (-GetRuntimeClassName@-$produce_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Found.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18008F018 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?get@?$runtime_class_name@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@SA?AUhstring@3@XZ @ 0x1804D579C (-get@-$runtime_class_name@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@SA-AUhst.c)
 */

__int64 __fastcall winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::implementation::TabProxyWindow *>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Foundation::IAsyncInfo>::NonDelegatingGetRuntimeClassName(
        HSTRING a1,
        HSTRING *a2)
{
  HSTRING v3; // rax
  __int64 result; // rax
  HSTRING v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = a1;
  try
  {
    winrt::impl::runtime_class_name<winrt::Windows::Foundation::IAsyncOperation<bool>,void>::get(&v5);
    v3 = v5;
    v5 = 0LL;
    *a2 = v3;
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v5);
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v5);
  }
  return result;
}
