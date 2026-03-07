__int64 __fastcall imp_VfWdfIoResourceListGetCount(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFIORESLIST__ *ResourceList)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFIORESLIST__ *))WdfVersion.Functions.pfnWdfIoResourceListGetCount)(
           DriverGlobals,
           ResourceList);
}
