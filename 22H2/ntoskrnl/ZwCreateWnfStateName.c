/*
 * XREFs of ZwCreateWnfStateName @ 0x14041C0E0
 * Callers:
 *     ExpTrackTableInsertLimit @ 0x140608C0C (ExpTrackTableInsertLimit.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14069F068 (PspAllocateAndQueryNotificationChannel.c)
 *     PiUEventInitClientRegistrationContext @ 0x1407821E4 (PiUEventInitClientRegistrationContext.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x1407D1644 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     PopCreateNotificationName @ 0x1407E3790 (PopCreateNotificationName.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateWnfStateName(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
