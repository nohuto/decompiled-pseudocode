void __fastcall ACPIBusIrpSetSystemPowerComplete(
        ULONG_PTR DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        _QWORD *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  __int64 DeviceExtension; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension(DeviceObject);
  Context[7] = 0LL;
  ACPIDeviceIrpCompleteRequest(DeviceExtension, Context, (unsigned int)IoStatus->Status);
}
