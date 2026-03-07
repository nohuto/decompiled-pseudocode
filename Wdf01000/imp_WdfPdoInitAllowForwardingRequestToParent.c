void __fastcall imp_WdfPdoInitAllowForwardingRequestToParent(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit)
{
  _FX_DRIVER_GLOBALS *v3; // rdi
  signed int _a1; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  v3 = DeviceInit->DriverGlobals;
  _a1 = FxVerifierCheckIrqlLevel(DeviceInit->DriverGlobals, 0);
  if ( _a1 >= 0 )
  {
    if ( DeviceInit->InitType == FxDeviceInitTypePdo )
    {
      DeviceInit->Pdo.ForwardRequestToParent = 1;
    }
    else
    {
      WPP_IFR_SF_D(v3, 2u, 0x12u, 0x47u, WPP_FxDeviceInitApi_cpp_Traceguids, _a1);
      FxVerifierDbgBreakPoint(v3);
    }
  }
}
