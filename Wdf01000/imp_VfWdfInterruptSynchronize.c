__int64 __fastcall imp_VfWdfInterruptSynchronize(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFINTERRUPT__ *Interrupt,
        unsigned __int8 (__fastcall *Callback)(WDFINTERRUPT__ *, void *),
        void *Context)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFINTERRUPT__ *, unsigned __int8 (__fastcall *)(WDFINTERRUPT__ *, void *), void *))WdfVersion.Functions.pfnWdfInterruptSynchronize)(
           DriverGlobals,
           Interrupt,
           Callback,
           Context);
}
