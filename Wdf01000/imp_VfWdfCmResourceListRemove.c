void __fastcall imp_VfWdfCmResourceListRemove(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFCMRESLIST__ *List, __int64 Index)
{
  WdfVersion.Functions.pfnWdfCmResourceListRemove(DriverGlobals, List, Index);
}
