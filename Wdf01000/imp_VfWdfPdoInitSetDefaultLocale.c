void __fastcall imp_VfWdfPdoInitSetDefaultLocale(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        __int64 LocaleId)
{
  WdfVersion.Functions.pfnWdfPdoInitSetDefaultLocale(DriverGlobals, DeviceInit, LocaleId);
}
