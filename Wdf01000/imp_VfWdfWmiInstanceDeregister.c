void __fastcall imp_VfWdfWmiInstanceDeregister(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFWMIINSTANCE__ *WmiInstance)
{
  WdfVersion.Functions.pfnWdfWmiInstanceDeregister(DriverGlobals, WmiInstance);
}
