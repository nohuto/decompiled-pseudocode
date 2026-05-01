/*
 * XREFs of ??$make_pair@AEAV?$shared_ptr@VPinOperationContext@@@std@@AEAU?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@YA?AU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@0@AEAV?$shared_ptr@VPinOperationContext@@@0@AEAU?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@Z @ 0x180134380
 * Callers:
 *     _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent$_ResumeCoro$2 @ 0x18013E440 (_anonymous_namespace_--PinConsentPromptManager--RequestPinConsent$_ResumeCoro$2.c)
 * Callees:
 *     ??0?$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt@@QEAA@AEBU0123@@Z @ 0x18008171C (--0-$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt@@QEAA@AEBU0123@@Z.c)
 *     ??0?$shared_ptr@VPinRequestContext@@@std@@QEAA@AEBV01@@Z @ 0x180135568 (--0-$shared_ptr@VPinRequestContext@@@std@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall std::make_pair<std::shared_ptr<PinOperationContext> &,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>> &>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx
  __int64 *v4; // r8

  std::shared_ptr<PinRequestContext>::shared_ptr<PinRequestContext>(a1, a2);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<bool>::AsyncOperationCompletedHandler<bool>(
    (__int64 *)(v3 + 16),
    v4);
  return a1;
}
