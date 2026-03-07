void __fastcall WDFDEVICE_INIT::AssignIoType(WDFDEVICE_INIT *this, _WDF_IO_TYPE_CONFIG *IoTypeConfig)
{
  _WDF_DEVICE_IO_TYPE _a1; // eax

  _a1 = IoTypeConfig->ReadWriteIoType;
  if ( _a1 && _a1 <= WdfDeviceIoDirect )
  {
    this->ReadWriteIoType = _a1;
  }
  else
  {
    WPP_IFR_SF_dd(this->DriverGlobals, 2u, 0x12u, 0xAu, WPP_FxDeviceInitKm_cpp_Traceguids, _a1, -1073741811);
    FxVerifierDbgBreakPoint(this->DriverGlobals);
  }
}
