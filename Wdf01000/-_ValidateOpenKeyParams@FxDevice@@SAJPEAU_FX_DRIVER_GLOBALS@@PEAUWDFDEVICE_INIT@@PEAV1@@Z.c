__int64 __fastcall FxDevice::_ValidateOpenKeyParams(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        FxDevice *Device)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( !DeviceInit )
  {
    if ( Device )
      return v3;
    goto LABEL_5;
  }
  if ( Device )
  {
LABEL_5:
    v3 = -1073741811;
    WPP_IFR_SF_D(FxDriverGlobals, 2u, 0x12u, 0x17u, WPP_FxDevice_cpp_Traceguids, 0xC000000D);
    FxVerifierDbgBreakPoint(FxDriverGlobals);
  }
  return v3;
}
