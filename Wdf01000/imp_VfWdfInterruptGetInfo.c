void __fastcall imp_VfWdfInterruptGetInfo(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFINTERRUPT__ *Interrupt,
        _WDF_INTERRUPT_INFO *Info)
{
  WdfVersion.Functions.pfnWdfInterruptGetInfo(DriverGlobals, Interrupt, Info);
}
