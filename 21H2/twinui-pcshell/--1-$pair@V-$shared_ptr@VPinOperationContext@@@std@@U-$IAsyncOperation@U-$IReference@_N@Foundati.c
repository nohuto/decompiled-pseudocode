/*
 * XREFs of ??1?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@QEAA@XZ @ 0x180135E18
 * Callers:
 *     ??$_Destroy_range@V?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@@std@@@std@@YAXPEAU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@0@0AEAV?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@@0@@Z @ 0x180132D64 (--$_Destroy_range@V-$allocator@U-$pair@V-$shared_ptr@VPinOperationContext@@@std@@U-$IAsyncOperat.c)
 *     _anonymous_namespace_::PinConsentPromptManager::_PinConsentPromptManager @ 0x18013614C (_anonymous_namespace_--PinConsentPromptManager--_PinConsentPromptManager.c)
 *     _anonymous_namespace_::PinConsentPromptManager::IsPromptOutstandingForPinOperation @ 0x18013B9E0 (_anonymous_namespace_--PinConsentPromptManager--IsPromptOutstandingForPinOperation.c)
 *     _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent$_ResumeCoro$2 @ 0x18013E440 (_anonymous_namespace_--PinConsentPromptManager--RequestPinConsent$_ResumeCoro$2.c)
 *     __anonymous_namespace_::PinConsentPromptManager::RequestPinConsent$_ResumeCoro$2_::_1_::dtor$5 @ 0x18013F8ED (__anonymous_namespace_--PinConsentPromptManager--RequestPinConsent$_ResumeCoro$2_--_1_--dtor$5.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A130C (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 */

void __fastcall std::pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>::~pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>(
        __int64 a1)
{
  std::_Ref_count_base *v2; // rcx

  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)(a1 + 16));
  v2 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
}
