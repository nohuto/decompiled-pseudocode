WDFDEVICE__ *__fastcall imp_VfWdfIoQueueGetDevice(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFQUEUE__ *Queue)
{
  return WdfVersion.Functions.pfnWdfIoQueueGetDevice(DriverGlobals, Queue);
}
