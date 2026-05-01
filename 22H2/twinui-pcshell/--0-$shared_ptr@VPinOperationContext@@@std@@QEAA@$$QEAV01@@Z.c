/*
 * XREFs of ??0?$shared_ptr@VPinOperationContext@@@std@@QEAA@$$QEAV01@@Z @ 0x1801353CC
 * Callers:
 *     _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent$_InitCoro$1 @ 0x18013E0CC (_anonymous_namespace_--PinConsentPromptManager--RequestPinConsent$_InitCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog$_InitCoro$1 @ 0x180140164 (winrt--Windows--Internal--Shell--implementation--PinManager--ShowPinDialog$_InitCoro$1.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::shared_ptr<PinOperationContext>::shared_ptr<PinOperationContext>(_QWORD *a1, _QWORD *a2)
{
  _QWORD *result; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  *a1 = *a2;
  a1[1] = a2[1];
  result = a1;
  *a2 = 0LL;
  a2[1] = 0LL;
  return result;
}
