/*
 * XREFs of ?await_resume@awaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@QEBA_NXZ @ 0x18014D408
 * Callers:
 *     RequestNotificationPinConsentAsync$_ResumeCoro$2 @ 0x18014A800 (RequestNotificationPinConsentAsync$_ResumeCoro$2.c)
 * Callees:
 *     <none>
 */

bool __fastcall `winrt::resume_on_signal'::`2'::awaitable::await_resume(__int64 a1)
{
  return *(_DWORD *)(a1 + 24) == 0;
}
