/*
 * XREFs of ?IsRequestThroughTrustedProcess@PinRequestContext@@QEBA_NXZ @ 0x18013BA90
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$2_PinManagerTelemetry::PinManagerPinItemToTaskbarShim_ @ 0x18012ADA0 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_ResumeCo.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$2_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x18012E410 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAs_ea_18012E410.c)
 * Callees:
 *     <none>
 */

bool __fastcall PinRequestContext::IsRequestThroughTrustedProcess(PinRequestContext *this)
{
  return *((_BYTE *)this + 40);
}
