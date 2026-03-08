/*
 * XREFs of CmPostCallbackNotification @ 0x1406BD1E4
 * Callers:
 *     CmpDoQueryKeyName @ 0x140243A70 (CmpDoQueryKeyName.c)
 * Callees:
 *     CmPostCallbackNotificationEx @ 0x1406BD240 (CmPostCallbackNotificationEx.c)
 */

__int64 __fastcall CmPostCallbackNotification(int a1, int a2, int a3, int a4, __int64 a5)
{
  return CmPostCallbackNotificationEx(a1, a2, a3, a4, 0LL, a5);
}
