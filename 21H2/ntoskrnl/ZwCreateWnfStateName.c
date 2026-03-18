/*
 * XREFs of ZwCreateWnfStateName @ 0x14041D180
 * Callers:
 *     ExpTrackTableInsertLimit @ 0x14063BE80 (ExpTrackTableInsertLimit.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x140678C4C (PspAllocateAndQueryNotificationChannel.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x1406C32B0 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     PopCreateNotificationName @ 0x1406E7694 (PopCreateNotificationName.c)
 *     PiUEventInitClientRegistrationContext @ 0x14078DAB0 (PiUEventInitClientRegistrationContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateWnfStateName(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
