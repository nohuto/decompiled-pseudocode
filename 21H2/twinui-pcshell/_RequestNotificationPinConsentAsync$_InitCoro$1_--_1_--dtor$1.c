/*
 * XREFs of _RequestNotificationPinConsentAsync$_InitCoro$1_::_1_::dtor$1 @ 0x18014A7BD
 * Callers:
 *     <none>
 * Callees:
 *     ?_DestructPromise@?$_Resumable_helper_traits@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBVPinConsentPromptContent@@@experimental@std@@SAXPEAX@Z @ 0x18014D3C0 (-_DestructPromise@-$_Resumable_helper_traits@U-$IAsyncOperation@U-$IReference@_N@Foundation@Wind.c)
 */

__int64 __fastcall RequestNotificationPinConsentAsync__InitCoro_1_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return std::experimental::_Resumable_helper_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,PinConsentPromptContent const &>::_DestructPromise(*(_QWORD *)(a2 + 120));
}
