void __fastcall _DeviceUsageNotificationWorkItem(_DEVICE_OBJECT *DeviceObject, char *Context)
{
  *((_DWORD *)Context + 16) = SendDeviceUsageNotificationWorker(
                                *(MxDeviceObject **)Context,
                                *((FxIrp **)Context + 1),
                                *((FxIrp **)Context + 2),
                                Context[24]);
  KeSetEvent((PRKEVENT)(Context + 32), 0, 0);
}
