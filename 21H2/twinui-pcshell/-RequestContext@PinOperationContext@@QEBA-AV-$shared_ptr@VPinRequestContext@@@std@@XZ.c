/*
 * XREFs of ?RequestContext@PinOperationContext@@QEBA?AV?$shared_ptr@VPinRequestContext@@@std@@XZ @ 0x18013E218
 * Callers:
 *     _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent$_ResumeCoro$2 @ 0x18013E440 (_anonymous_namespace_--PinConsentPromptManager--RequestPinConsent$_ResumeCoro$2.c)
 * Callees:
 *     ??0?$shared_ptr@VPinRequestContext@@@std@@QEAA@AEBV01@@Z @ 0x180135568 (--0-$shared_ptr@VPinRequestContext@@@std@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall PinOperationContext::RequestContext(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // r8

  std::shared_ptr<PinRequestContext>::shared_ptr<PinRequestContext>(a2, a1);
  return v2;
}
