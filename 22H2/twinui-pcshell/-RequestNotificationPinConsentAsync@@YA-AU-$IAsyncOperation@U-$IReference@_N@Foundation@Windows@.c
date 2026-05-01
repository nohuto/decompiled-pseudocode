/*
 * XREFs of ?RequestNotificationPinConsentAsync@@YA?AU?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBVPinConsentPromptContent@@@Z @ 0x18014D034
 * Callers:
 *     _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent$_ResumeCoro$2 @ 0x18013E2D0 (_anonymous_namespace_--PinConsentPromptManager--RequestPinConsent$_ResumeCoro$2.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800904CC (--2@YAPEAX_K@Z.c)
 *     RequestNotificationPinConsentAsync$_InitCoro$1 @ 0x18014A504 (RequestNotificationPinConsentAsync$_InitCoro$1.c)
 */

__int64 *__fastcall RequestNotificationPinConsentAsync(__int64 *a1, __int64 a2)
{
  void *v4; // rax
  unsigned int v6; // [rsp+4E0h] [rbp+8h] BYREF

  v4 = operator new(0x4A8uLL);
  v6 = 0;
  RequestNotificationPinConsentAsync__InitCoro_1(&v6, (__int64)v4 + 96, a1, a2);
  return a1;
}
