/*
 * XREFs of RIMRegisterForDeviceClassNotifications @ 0x1C0034318
 * Callers:
 *     RIMDiscoverDevicesOfInputType @ 0x1C00374F8 (RIMDiscoverDevicesOfInputType.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
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
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1386LL);
  return IoRegisterPlugPlayNotification(
           EventCategoryDeviceInterfaceChange,
           1u,
           a3,
           a4,
           RIMDeviceClassNotify,
           Context,
           NotificationEntry);
}
