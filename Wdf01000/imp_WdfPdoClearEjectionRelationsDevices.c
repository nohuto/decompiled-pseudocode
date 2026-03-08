/*
 * XREFs of imp_WdfPdoClearEjectionRelationsDevices @ 0x1C0021B70
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPdoPackageFromDeviceHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEADPEAPEAVFxPkgPdo@@PEAPEAU1@PEAPEAVFxDevice@@@Z @ 0x1C00031D0 (-GetPdoPackageFromDeviceHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEADPEAPEAVFxPkgPdo@.c)
 *     ?ClearEjectionDevicesList@FxPkgPdo@@QEAAXXZ @ 0x1C0068A20 (-ClearEjectionDevicesList@FxPkgPdo@@QEAAXXZ.c)
 */

void __fastcall imp_WdfPdoClearEjectionRelationsDevices(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  FxPkgPdo *pPkgPdo; // [rsp+40h] [rbp+8h] BYREF
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+50h] [rbp+18h] BYREF

  pFxDriverGlobals = 0LL;
  pPkgPdo = 0LL;
  if ( (int)GetPdoPackageFromDeviceHandle(
              (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
              Device,
              "imp_WdfPdoClearEjectionRelationsDevices",
              &pPkgPdo,
              &pFxDriverGlobals,
              0LL) >= 0 )
    FxPkgPdo::ClearEjectionDevicesList(pPkgPdo);
}
