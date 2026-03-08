/*
 * XREFs of PoInitDriverServices @ 0x140B6ED88
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140B409E8 (IoInitSystemPreDrivers.c)
 * Callees:
 *     IoRegisterPlugPlayNotification @ 0x1406F4F30 (IoRegisterPlugPlayNotification.c)
 */

NTSTATUS (*PoInitDriverServices())()
{
  NTSTATUS (*result)(); // rax
  PVOID NotificationEntry; // [rsp+50h] [rbp+10h] BYREF

  NotificationEntry = 0LL;
  IoRegisterPlugPlayNotification(
    EventCategoryDeviceInterfaceChange,
    0,
    &GUID_DEVICE_THERMAL_ZONE,
    PnpDriverObject,
    (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)PopNotifyPolicyDevice,
    (PVOID)1,
    &NotificationEntry);
  NotificationEntry = 0LL;
  IoRegisterPlugPlayNotification(
    EventCategoryDeviceInterfaceChange,
    0,
    &GUID_DEVICE_BATTERY,
    PnpDriverObject,
    (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)PopNotifyPolicyDevice,
    (PVOID)2,
    &NotificationEntry);
  NotificationEntry = 0LL;
  IoRegisterPlugPlayNotification(
    EventCategoryDeviceInterfaceChange,
    0,
    &GUID_DEVICE_MEMORY,
    PnpDriverObject,
    (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)PopNotifyPolicyDevice,
    (PVOID)3,
    &NotificationEntry);
  NotificationEntry = 0LL;
  IoRegisterPlugPlayNotification(
    EventCategoryDeviceInterfaceChange,
    0,
    &GUID_DEVICE_ACPI_TIME,
    PnpDriverObject,
    (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)PopNotifyPolicyDevice,
    (PVOID)8,
    &NotificationEntry);
  NotificationEntry = 0LL;
  IoRegisterPlugPlayNotification(
    EventCategoryDeviceInterfaceChange,
    0,
    &GUID_DEVICE_FAN,
    PnpDriverObject,
    (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)PopNotifyPolicyDevice,
    (PVOID)9,
    &NotificationEntry);
  NotificationEntry = 0LL;
  IoRegisterPlugPlayNotification(
    EventCategoryDeviceInterfaceChange,
    1u,
    &GUID_DEVINTERFACE_HPMI,
    PnpDriverObject,
    (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)PopCadHpmiPnpNotification,
    0LL,
    &NotificationEntry);
  PopCadTriggerDriverLoadWorkItem.Parameter = 0LL;
  result = PopCadTriggerDriverLoad;
  PopCadTriggerDriverLoadWorkItem.List.Flink = 0LL;
  PopCadTriggerDriverLoadWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopCadTriggerDriverLoad;
  return result;
}
