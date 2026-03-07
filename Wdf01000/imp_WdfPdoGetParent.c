WDFDEVICE__ *__fastcall imp_WdfPdoGetParent(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  signed int _a1; // eax
  FxDevice *pDevice; // [rsp+40h] [rbp+8h] BYREF
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+50h] [rbp+18h] BYREF
  FxPkgPdo *pPkgPdo; // [rsp+58h] [rbp+20h] BYREF

  pFxDriverGlobals = 0LL;
  pPkgPdo = 0LL;
  pDevice = 0LL;
  _a1 = GetPdoPackageFromDeviceHandle(
          (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
          Device,
          "imp_WdfPdoGetParent",
          &pPkgPdo,
          &pFxDriverGlobals,
          &pDevice);
  if ( _a1 >= 0 )
    return (WDFDEVICE__ *)FxObject::GetObjectHandleUnchecked(pDevice->m_ParentDevice);
  WPP_IFR_SF_D(pFxDriverGlobals, 2u, 0x12u, 0xDu, WPP_FxDevicePdoAPI_cpp_Traceguids, _a1);
  return 0LL;
}
