/*
 * XREFs of ??0?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@QEAA@AEBU01@@Z @ 0x180135510
 * Callers:
 *     _anonymous_namespace_::PinConsentPromptManager::_PinConsentPromptManager @ 0x18013614C (_anonymous_namespace_--PinConsentPromptManager--_PinConsentPromptManager.c)
 *     _anonymous_namespace_::PinConsentPromptManager::IsPromptOutstandingForPinOperation @ 0x18013B9E0 (_anonymous_namespace_--PinConsentPromptManager--IsPromptOutstandingForPinOperation.c)
 * Callees:
 *     ??0?$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt@@QEAA@AEBU0123@@Z @ 0x18008171C (--0-$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt@@QEAA@AEBU0123@@Z.c)
 *     ??0?$shared_ptr@VPinRequestContext@@@std@@QEAA@AEBV01@@Z @ 0x180135568 (--0-$shared_ptr@VPinRequestContext@@@std@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall std::pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>::pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx

  std::shared_ptr<PinRequestContext>::shared_ptr<PinRequestContext>(a1, a2);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<bool>::AsyncOperationCompletedHandler<bool>(
    (__int64 *)(v4 + 16),
    (__int64 *)(v3 + 16));
  return a1;
}
