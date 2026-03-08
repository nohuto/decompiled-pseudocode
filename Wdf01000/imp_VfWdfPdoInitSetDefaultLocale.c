/*
 * XREFs of imp_VfWdfPdoInitSetDefaultLocale @ 0x1C00B62C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfPdoInitSetDefaultLocale(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        __int64 LocaleId)
{
  WdfVersion.Functions.pfnWdfPdoInitSetDefaultLocale(DriverGlobals, DeviceInit, LocaleId);
}
