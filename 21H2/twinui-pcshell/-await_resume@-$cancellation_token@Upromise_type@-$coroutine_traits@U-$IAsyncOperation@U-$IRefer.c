/*
 * XREFs of ?await_resume@?$cancellation_token@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBVPinConsentPromptContent@@@experimental@std@@@impl@winrt@@QEBA?AU123@XZ @ 0x18014D3F4
 * Callers:
 *     RequestNotificationPinConsentAsync$_ResumeCoro$2 @ 0x18014A800 (RequestNotificationPinConsentAsync$_ResumeCoro$2.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall winrt::impl::cancellation_token<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,PinConsentPromptContent const &>::promise_type>::await_resume(
        _QWORD *a1,
        _QWORD *a2)
{
  *a2 = *a1;
  return a2;
}
