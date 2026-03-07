__int64 __fastcall imp_VfWdfCmResourceListInsertDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCMRESLIST__ *List,
        _CM_PARTIAL_RESOURCE_DESCRIPTOR *Descriptor,
        __int64 Index)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFCMRESLIST__ *, _CM_PARTIAL_RESOURCE_DESCRIPTOR *, __int64))WdfVersion.Functions.pfnWdfCmResourceListInsertDescriptor)(
           DriverGlobals,
           List,
           Descriptor,
           Index);
}
