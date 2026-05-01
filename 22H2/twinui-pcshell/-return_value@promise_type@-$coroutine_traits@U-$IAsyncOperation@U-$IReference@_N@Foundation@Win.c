/*
 * XREFs of ?return_value@promise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBVPinConsentPromptContent@@@experimental@std@@QEAAX$$QEAU?$IReference@_N@Foundation@Windows@winrt@@@Z @ 0x18014D8AC
 * Callers:
 *     RequestNotificationPinConsentAsync$_ResumeCoro$2 @ 0x18014A690 (RequestNotificationPinConsentAsync$_ResumeCoro$2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,PinConsentPromptContent const &>::promise_type::return_value(
        __int64 a1,
        __int64 a2)
{
  return winrt::Windows::Foundation::IUnknown::operator=(a1 + 80, a2);
}
