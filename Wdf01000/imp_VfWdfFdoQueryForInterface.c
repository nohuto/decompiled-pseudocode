__int64 __fastcall imp_VfWdfFdoQueryForInterface(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Fdo,
        const _GUID *InterfaceType,
        _INTERFACE *Interface,
        unsigned __int16 Size,
        unsigned __int16 Version,
        void *InterfaceSpecificData)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE__ *, const _GUID *, _INTERFACE *, unsigned __int16, unsigned __int16, void *))WdfVersion.Functions.pfnWdfFdoQueryForInterface)(
           DriverGlobals,
           Fdo,
           InterfaceType,
           Interface,
           Size,
           Version,
           InterfaceSpecificData);
}
