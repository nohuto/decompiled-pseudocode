/*
 * XREFs of imp_VfWdfPdoInitSetEventCallbacks @ 0x1C00B62E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfPdoInitSetEventCallbacks(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_PDO_EVENT_CALLBACKS *DispatchTable)
{
  WdfVersion.Functions.pfnWdfPdoInitSetEventCallbacks(DriverGlobals, DeviceInit, DispatchTable);
}
