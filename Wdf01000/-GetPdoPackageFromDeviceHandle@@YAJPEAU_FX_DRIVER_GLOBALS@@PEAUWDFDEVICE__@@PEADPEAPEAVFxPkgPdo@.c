__int64 __fastcall GetPdoPackageFromDeviceHandle(
        _FX_DRIVER_GLOBALS *CallersGlobals,
        WDFDEVICE__ *Device,
        char *FunctionName,
        FxPkgPdo **Package,
        _FX_DRIVER_GLOBALS **ObjectGlobals,
        FxDevice **OutDevice)
{
  unsigned int v8; // ebx
  FxDevice *v10; // r10
  __int64 v11; // r10
  _FX_DRIVER_GLOBALS *v12; // r11
  FxDevice *pDevice; // [rsp+40h] [rbp-18h] BYREF

  v8 = 0;
  pDevice = 0LL;
  FxObjectHandleGetPtr(CallersGlobals, Device, 0x1002u, (void **)&pDevice);
  v10 = pDevice;
  *ObjectGlobals = pDevice->m_Globals;
  if ( OutDevice )
    *OutDevice = v10;
  if ( FxDevice::IsPdo(v10) )
  {
    *Package = *(FxPkgPdo **)(v11 + 648);
  }
  else
  {
    WPP_IFR_SF_sq(v12, 2u, 0x12u, 0xAu, WPP_FxDevicePdoAPI_cpp_Traceguids, FunctionName, Device);
    return (unsigned int)-1073741811;
  }
  return v8;
}
