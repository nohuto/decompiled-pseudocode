/*
 * XREFs of imp_VfWdfPdoInitRemovePowerDependencyOnParent @ 0x1C00B62A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfPdoInitRemovePowerDependencyOnParent(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit)
{
  WdfVersion.Functions.pfnWdfPdoInitRemovePowerDependencyOnParent(DriverGlobals, DeviceInit);
}
