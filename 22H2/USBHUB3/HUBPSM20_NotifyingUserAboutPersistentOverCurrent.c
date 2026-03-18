/*
 * XREFs of HUBPSM20_NotifyingUserAboutPersistentOverCurrent @ 0x1C0012170
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_GenerateUserNotificationForPersistentOverCurrent @ 0x1C008254C (HUBMISC_GenerateUserNotificationForPersistentOverCurrent.c)
 */

__int64 __fastcall HUBPSM20_NotifyingUserAboutPersistentOverCurrent(__int64 a1)
{
  HUBMISC_GenerateUserNotificationForPersistentOverCurrent(*(_QWORD *)(a1 + 960));
  return 3013LL;
}
