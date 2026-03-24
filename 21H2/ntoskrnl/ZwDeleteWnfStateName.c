/*
 * XREFs of ZwDeleteWnfStateName @ 0x1403FBEC0
 * Callers:
 *     PspJobDelete @ 0x140287530 (PspJobDelete.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x140604C58 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     PspProcessDelete @ 0x1406136C0 (PspProcessDelete.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14067F620 (PspAllocateAndQueryNotificationChannel.c)
 *     PiUEventFreeClientRegistrationContext @ 0x1406E15A8 (PiUEventFreeClientRegistrationContext.c)
 *     PopFreeRegistration @ 0x140778E14 (PopFreeRegistration.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwDeleteWnfStateName(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
