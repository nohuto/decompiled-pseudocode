WDFDEVICE__ *__fastcall imp_VfWdfChildListGetDevice(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFCHILDLIST__ *ChildList)
{
  return WdfVersion.Functions.pfnWdfChildListGetDevice(DriverGlobals, ChildList);
}
