/*
 * XREFs of ZwDeleteWnfStateName @ 0x140413EF0
 * Callers:
 *     PspJobDelete @ 0x140291AD0 (PspJobDelete.c)
 *     PopFreeRegistration @ 0x14067F624 (PopFreeRegistration.c)
 *     PspProcessDelete @ 0x140704DD0 (PspProcessDelete.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1407512E4 (PspAllocateAndQueryNotificationChannel.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x1407825CC (PspAllocateAndQueryProcessNotificationChannel.c)
 *     PiUEventFreeClientRegistrationContext @ 0x14078DA7C (PiUEventFreeClientRegistrationContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwDeleteWnfStateName(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
