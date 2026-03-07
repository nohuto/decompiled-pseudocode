bool __fastcall _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(
        _FX_DRIVER_GLOBALS *this,
        unsigned int Minor,
        unsigned int a3)
{
  _WDF_BIND_INFO *WdfBindInfo; // rax

  WdfBindInfo = this->WdfBindInfo;
  if ( WdfBindInfo->Version.Major > 1 )
    return 1;
  if ( WdfBindInfo->Version.Major == 1 )
    return WdfBindInfo->Version.Minor >= a3;
  return 0;
}
