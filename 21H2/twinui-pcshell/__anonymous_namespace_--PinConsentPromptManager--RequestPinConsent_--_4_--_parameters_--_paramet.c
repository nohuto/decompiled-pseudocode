/*
 * XREFs of __anonymous_namespace_::PinConsentPromptManager::RequestPinConsent_::_4_::_parameters_::_parameters_ @ 0x180134D88
 * Callers:
 *     _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent$_InitCoro$1 @ 0x18013E23C (_anonymous_namespace_--PinConsentPromptManager--RequestPinConsent$_InitCoro$1.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

_QWORD *__fastcall _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent_::_4_::_parameters_::_parameters_(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4)
{
  std::_Ref_count_base *v5; // rcx

  *a1 = a2;
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[1] = *a3;
  a1[2] = a3[1];
  a3[1] = 0LL;
  *a3 = 0LL;
  a1[3] = a4;
  v5 = (std::_Ref_count_base *)a3[1];
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  return a1;
}
