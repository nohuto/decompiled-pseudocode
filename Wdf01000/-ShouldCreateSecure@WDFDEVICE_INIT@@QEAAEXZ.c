unsigned __int8 __fastcall WDFDEVICE_INIT::ShouldCreateSecure(WDFDEVICE_INIT *this)
{
  if ( !this->Security.DeviceClassSet && !this->Security.Sddl )
  {
    if ( !this->DeviceName && (this->Characteristics & 0x80u) == 0 )
      return 0;
    if ( this->InitType == FxDeviceInitTypePdo )
    {
      WPP_IFR_SF_q(this->DriverGlobals, 3u, 0x12u, 0xDu, WPP_FxDeviceInit_cpp_Traceguids, this->Driver);
      return 0;
    }
  }
  return 1;
}
