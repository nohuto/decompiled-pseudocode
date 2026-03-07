void __fastcall imp_VfWdfInterruptReleaseLock(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFINTERRUPT__ *Interrupt)
{
  WdfVersion.Functions.pfnWdfInterruptReleaseLock(DriverGlobals, Interrupt);
}
