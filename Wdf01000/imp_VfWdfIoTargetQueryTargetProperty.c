__int64 __fastcall imp_VfWdfIoTargetQueryTargetProperty(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget,
        __int64 DeviceProperty,
        __int64 BufferLength,
        void *PropertyBuffer,
        unsigned int *ResultLength)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFIOTARGET__ *, __int64, __int64, void *, unsigned int *))WdfVersion.Functions.pfnWdfIoTargetQueryTargetProperty)(
           DriverGlobals,
           IoTarget,
           DeviceProperty,
           BufferLength,
           PropertyBuffer,
           ResultLength);
}
