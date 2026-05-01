/*
 * XREFs of __anonymous_namespace_::PinConsentPromptManager::RequestPinConsent$_ResumeCoro$2_::_1_::dtor$5 @ 0x18013F8ED
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@QEAA@XZ @ 0x180135E18 (--1-$pair@V-$shared_ptr@VPinOperationContext@@@std@@U-$IAsyncOperation@U-$IReference@_N@Foundati.c)
 */

void __fastcall _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent__ResumeCoro_2_::_1_::dtor_5(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 1368) = *(_QWORD *)(a2 + 1424) + 64LL;
  std::pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>::~pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>(*(_QWORD *)(a2 + 1368));
}
