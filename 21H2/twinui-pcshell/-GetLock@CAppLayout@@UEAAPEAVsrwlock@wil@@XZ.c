/*
 * XREFs of ?GetLock@CAppLayout@@UEAAPEAVsrwlock@wil@@XZ @ 0x18008ED10
 * Callers:
 *     RequestNotificationPinConsentAsync$_ResumeCoro$2 @ 0x18014A800 (RequestNotificationPinConsentAsync$_ResumeCoro$2.c)
 * Callees:
 *     <none>
 */

struct wil::srwlock *__fastcall CAppLayout::GetLock(CAppLayout *this)
{
  return (CAppLayout *)((char *)this + 24);
}
