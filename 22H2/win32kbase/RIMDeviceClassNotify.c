/*
 * XREFs of RIMDeviceClassNotify @ 0x1C00C3A20
 * Callers:
 *     <none>
 * Callees:
 *     RIMDeviceClassNotifyUsingAsyncPnpWorkNotification @ 0x1C00C3A38 (RIMDeviceClassNotifyUsingAsyncPnpWorkNotification.c)
 */

__int64 __fastcall RIMDeviceClassNotify(PVOID NotificationStructure, PVOID Context)
{
  return RIMDeviceClassNotifyUsingAsyncPnpWorkNotification(NotificationStructure, Context);
}
