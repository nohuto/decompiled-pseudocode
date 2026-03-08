/*
 * XREFs of RIMDeviceClassNotify @ 0x1C0036400
 * Callers:
 *     <none>
 * Callees:
 *     RIMDeviceClassNotifyUsingAsyncPnpWorkNotification @ 0x1C0037A80 (RIMDeviceClassNotifyUsingAsyncPnpWorkNotification.c)
 */

__int64 __fastcall RIMDeviceClassNotify(PVOID NotificationStructure, PVOID Context)
{
  return RIMDeviceClassNotifyUsingAsyncPnpWorkNotification(NotificationStructure, Context);
}
