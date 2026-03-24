/*
 * XREFs of PopValidateContextMembership @ 0x14078E220
 * Callers:
 *     PopGetSettingNotificationName @ 0x140679824 (PopGetSettingNotificationName.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x14027F430 (RtlCheckTokenMembership.c)
 */

__int64 __fastcall PopValidateContextMembership(void *a1)
{
  RtlCheckTokenMembership(0LL, a1);
  return 3221225506LL;
}
