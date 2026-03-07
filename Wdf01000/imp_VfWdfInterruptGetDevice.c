WDFDEVICE__ *__fastcall imp_VfWdfInterruptGetDevice(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFINTERRUPT__ *Interrupt)
{
  return WdfVersion.Functions.pfnWdfInterruptGetDevice(DriverGlobals, Interrupt);
}
