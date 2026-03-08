/*
 * XREFs of ?_DeviceUsageNotificationWorkItem@@YAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C0081180
 * Callers:
 *     <none>
 * Callees:
 *     ?SendDeviceUsageNotificationWorker@@YAJPEAVMxDeviceObject@@PEAVFxIrp@@1E@Z @ 0x1C00810A8 (-SendDeviceUsageNotificationWorker@@YAJPEAVMxDeviceObject@@PEAVFxIrp@@1E@Z.c)
 */

void __fastcall _DeviceUsageNotificationWorkItem(_DEVICE_OBJECT *DeviceObject, char *Context)
{
  *((_DWORD *)Context + 16) = SendDeviceUsageNotificationWorker(
                                *(MxDeviceObject **)Context,
                                *((FxIrp **)Context + 1),
                                *((FxIrp **)Context + 2),
                                Context[24]);
  KeSetEvent((PRKEVENT)(Context + 32), 0, 0);
}
