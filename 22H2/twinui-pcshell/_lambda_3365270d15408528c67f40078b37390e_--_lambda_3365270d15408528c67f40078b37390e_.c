/*
 * XREFs of _lambda_3365270d15408528c67f40078b37390e_::_lambda_3365270d15408528c67f40078b37390e_ @ 0x180134B9C
 * Callers:
 *     _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent$_ResumeCoro$2 @ 0x18013E2D0 (_anonymous_namespace_--PinConsentPromptManager--RequestPinConsent$_ResumeCoro$2.c)
 * Callees:
 *     ??0?$shared_ptr@VPinRequestContext@@@std@@QEAA@AEBV01@@Z @ 0x1801353F8 (--0-$shared_ptr@VPinRequestContext@@@std@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall lambda_3365270d15408528c67f40078b37390e_::_lambda_3365270d15408528c67f40078b37390e_(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v3; // r9

  *a1 = 0LL;
  a1[1] = 0LL;
  *a1 = *a2;
  a1[1] = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  std::shared_ptr<PinRequestContext>::shared_ptr<PinRequestContext>(a1 + 2, a3);
  return v3;
}
