/*
 * XREFs of ?IsRequestThroughTrustedProcess@PinRequestContext@@QEBA_NXZ @ 0x18013B920
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$2_PinManagerTelemetry::PinManagerPinItemToTaskbarShim_ @ 0x18012AC30 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_ResumeCo.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$2_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x18012E2A0 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAs_ea_18012E2A0.c)
 * Callees:
 *     <none>
 */

bool __fastcall PinRequestContext::IsRequestThroughTrustedProcess(PinRequestContext *this)
{
  return *((_BYTE *)this + 40);
}
