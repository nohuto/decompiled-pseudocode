void __fastcall imp_VfWdfIoResourceListRemove(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESLIST__ *ResourceList,
        __int64 Index)
{
  WdfVersion.Functions.pfnWdfIoResourceListRemove(DriverGlobals, ResourceList, Index);
}
