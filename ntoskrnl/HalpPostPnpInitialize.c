/*
 * XREFs of HalpPostPnpInitialize @ 0x1408020CC
 * Callers:
 *     HalpAddDevice @ 0x140802640 (HalpAddDevice.c)
 * Callees:
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     IoRegisterPlugPlayNotification @ 0x1406F4F30 (IoRegisterPlugPlayNotification.c)
 *     HalpInitializeSecondaryInterruptServices @ 0x140B35558 (HalpInitializeSecondaryInterruptServices.c)
 */

NTSTATUS HalpPostPnpInitialize()
{
  NTSTATUS result; // eax
  PVOID NotificationEntry; // [rsp+50h] [rbp+8h] BYREF

  NotificationEntry = 0LL;
  HalpInitializeSecondaryInterruptServices();
  KeInitializeEvent(&HalpDynamicDeviceInterfaceLock, SynchronizationEvent, 1u);
  result = IoRegisterPlugPlayNotification(
             EventCategoryDeviceInterfaceChange,
             1u,
             HalpDynamicDeviceInterfaces,
             HalpDriverObject,
             HalpDynamicDeviceInterfaceNotification,
             0LL,
             &NotificationEntry);
  HalpDynamicDevicesReady = 1;
  return result;
}
