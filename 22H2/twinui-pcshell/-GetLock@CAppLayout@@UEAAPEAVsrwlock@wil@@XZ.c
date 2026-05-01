/*
 * XREFs of ?GetLock@CAppLayout@@UEAAPEAVsrwlock@wil@@XZ @ 0x18008ECF0
 * Callers:
 *     RequestNotificationPinConsentAsync$_ResumeCoro$2 @ 0x18014A690 (RequestNotificationPinConsentAsync$_ResumeCoro$2.c)
 * Callees:
 *     <none>
 */

struct wil::srwlock *__fastcall CAppLayout::GetLock(CAppLayout *this)
{
  return (CAppLayout *)((char *)this + 24);
}
