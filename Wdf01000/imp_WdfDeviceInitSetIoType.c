void __fastcall imp_WdfDeviceInitSetIoType(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_DEVICE_IO_TYPE IoType)
{
  _WDF_IO_TYPE_CONFIG ioTypeConfig; // [rsp+20h] [rbp-18h] BYREF
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  ioTypeConfig.DirectTransferThreshold = 0;
  ioTypeConfig.Size = 16;
  ioTypeConfig.DeviceControlIoType = WdfDeviceIoBuffered;
  ioTypeConfig.ReadWriteIoType = IoType;
  WDFDEVICE_INIT::AssignIoType(DeviceInit, &ioTypeConfig);
}
