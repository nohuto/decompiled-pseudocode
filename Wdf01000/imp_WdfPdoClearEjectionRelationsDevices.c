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
