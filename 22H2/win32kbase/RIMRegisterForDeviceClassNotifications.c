/*
 * XREFs of RIMRegisterForDeviceClassNotifications @ 0x1C005732C
 * Callers:
 *     RIMDiscoverDevicesOfInputType @ 0x1C0053D04 (RIMDiscoverDevicesOfInputType.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

NTSTATUS __fastcall RIMRegisterForDeviceClassNotifications(
        __int64 a1,
        __int64 a2,
        void *a3,
        struct _DRIVER_OBJECT *a4,
        __int64 a5,
        PVOID Context,
        PVOID *NotificationEntry)
{
  if ( !a4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1505LL);
  return IoRegisterPlugPlayNotification(
           EventCategoryDeviceInterfaceChange,
           1u,
           a3,
           a4,
           (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)RIMDeviceClassNotify,
           Context,
           NotificationEntry);
}
