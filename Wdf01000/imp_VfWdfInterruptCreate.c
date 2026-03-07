__int64 __fastcall imp_VfWdfInterruptCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_INTERRUPT_CONFIG *Configuration,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFINTERRUPT__ **Interrupt)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE__ *, _WDF_INTERRUPT_CONFIG *, _WDF_OBJECT_ATTRIBUTES *, WDFINTERRUPT__ **))WdfVersion.Functions.pfnWdfInterruptCreate)(
           DriverGlobals,
           Device,
           Configuration,
           Attributes,
           Interrupt);
}
