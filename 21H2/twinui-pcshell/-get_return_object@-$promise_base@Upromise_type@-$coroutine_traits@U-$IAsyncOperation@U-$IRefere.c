/*
 * XREFs of ?get_return_object@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBVPinConsentPromptContent@@@experimental@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEBA?AU?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@3@XZ @ 0x180101460
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TrySetWindowThumbnailAsync$_InitCoro$1 @ 0x1800FE9D8 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--TrySetWindowThumbnailAsync$_Ini.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_InitCoro$1_PinManagerTelemetry::PinManagerPinItemToTaskbarShim_ @ 0x18012A5BC (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_InitCoro.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_InitCoro$1_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x18012A9A8 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAs_ea_18012A9A8.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog$_InitCoro$1 @ 0x1801402D4 (winrt--Windows--Internal--Shell--implementation--PinManager--ShowPinDialog$_InitCoro$1.c)
 *     RequestNotificationPinConsentAsync$_InitCoro$1 @ 0x18014A674 (RequestNotificationPinConsentAsync$_InitCoro$1.c)
 * Callees:
 *     ??0?$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt@@QEAA@AEBU0123@@Z @ 0x18008171C (--0-$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt@@QEAA@AEBU0123@@Z.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A130C (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 */

__int64 *__fastcall winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,PinConsentPromptContent const &>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,void>::get_return_object(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a1 + 16;
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<bool>::AsyncOperationCompletedHandler<bool>(a2, &v4);
  v4 = 0LL;
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v4);
  return a2;
}
