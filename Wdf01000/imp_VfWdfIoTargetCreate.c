__int64 __fastcall imp_VfWdfIoTargetCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_OBJECT_ATTRIBUTES *IoTargetAttributes,
        WDFIOTARGET__ **IoTarget)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE__ *, _WDF_OBJECT_ATTRIBUTES *, WDFIOTARGET__ **))WdfVersion.Functions.pfnWdfIoTargetCreate)(
           DriverGlobals,
           Device,
           IoTargetAttributes,
           IoTarget);
}
