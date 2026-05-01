/*
 * XREFs of ?await_ready@awaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@QEBA_NXZ @ 0x18014D264
 * Callers:
 *     RequestNotificationPinConsentAsync$_ResumeCoro$2 @ 0x18014A690 (RequestNotificationPinConsentAsync$_ResumeCoro$2.c)
 * Callees:
 *     WINRT_WaitForSingleObject @ 0x180090C7E (WINRT_WaitForSingleObject.c)
 */

bool __fastcall `winrt::resume_on_signal'::`2'::awaitable::await_ready(__int64 a1)
{
  return WINRT_WaitForSingleObject(*(HANDLE *)(a1 + 16), 0) == 0;
}
