/*
 * XREFs of ZwDeleteWnfStateName @ 0x1403FB540
 * Callers:
 *     PspJobDelete @ 0x1402DD320 (PspJobDelete.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x140604C58 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     PspProcessDelete @ 0x140613B20 (PspProcessDelete.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14065CC90 (PspAllocateAndQueryNotificationChannel.c)
 *     PiUEventFreeClientRegistrationContext @ 0x140714E48 (PiUEventFreeClientRegistrationContext.c)
 *     PopFreeRegistration @ 0x140778D14 (PopFreeRegistration.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwDeleteWnfStateName(PCWNF_STATE_NAME StateName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(StateName);
}
