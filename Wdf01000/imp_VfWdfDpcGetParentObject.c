void *__fastcall imp_VfWdfDpcGetParentObject(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDPC__ *Dpc)
{
  return WdfVersion.Functions.pfnWdfDpcGetParentObject(DriverGlobals, Dpc);
}
