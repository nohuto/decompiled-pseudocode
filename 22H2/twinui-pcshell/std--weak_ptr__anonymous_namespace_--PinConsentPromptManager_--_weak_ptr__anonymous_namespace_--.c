/*
 * XREFs of std::weak_ptr__anonymous_namespace_::PinConsentPromptManager_::_weak_ptr__anonymous_namespace_::PinConsentPromptManager_ @ 0x180135F4C
 * Callers:
 *     _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent$_ResumeCoro$2 @ 0x18013E2D0 (_anonymous_namespace_--PinConsentPromptManager--RequestPinConsent$_ResumeCoro$2.c)
 *     __anonymous_namespace_::PinConsentPromptManager::RequestPinConsent$_ResumeCoro$2_::_1_::dtor$6 @ 0x18013F7AC (__anonymous_namespace_--PinConsentPromptManager--RequestPinConsent$_ResumeCoro$2_--_1_--dtor$6.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18020F990 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::weak_ptr__anonymous_namespace_::PinConsentPromptManager_::_weak_ptr__anonymous_namespace_::PinConsentPromptManager_(
        __int64 a1)
{
  std::_Ref_count_base *v1; // rcx

  v1 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v1 )
    std::_Ref_count_base::_Decwref(v1);
}
