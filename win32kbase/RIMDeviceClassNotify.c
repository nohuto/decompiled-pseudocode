__int64 __fastcall RIMDeviceClassNotify(PVOID NotificationStructure, PVOID Context)
{
  return RIMDeviceClassNotifyUsingAsyncPnpWorkNotification(NotificationStructure, Context);
}
