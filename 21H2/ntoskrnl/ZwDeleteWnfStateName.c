/*
 * XREFs of ZwDeleteWnfStateName @ 0x14041D320
 * Callers:
 *     PspJobDelete @ 0x140207100 (PspJobDelete.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x140678C4C (PspAllocateAndQueryNotificationChannel.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x1406C32B0 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     PiUEventFreeClientRegistrationContext @ 0x1406DD8D0 (PiUEventFreeClientRegistrationContext.c)
 *     PspProcessDelete @ 0x1407E0F30 (PspProcessDelete.c)
 *     PopFreeRegistration @ 0x1407EC1B0 (PopFreeRegistration.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwDeleteWnfStateName(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
