char __fastcall DXGADAPTER::DriverSupportSetTimingsFromVidPn(DXGADAPTER *this)
{
  int IsEnabledDeviceUsage; // eax
  char v3; // r8
  bool v4; // zf
  int v5; // eax

  IsEnabledDeviceUsage = Feature_EnableIddCx110__private_IsEnabledDeviceUsage();
  v3 = 0;
  v4 = IsEnabledDeviceUsage == 0;
  v5 = *((_DWORD *)this + 638);
  if ( v4 )
  {
    if ( v5 < 8704 || *((_DWORD *)this + 524) < 0x7007u || !*((_QWORD *)this + 144) )
      return v3;
  }
  else
  {
    if ( v5 < 8704 || *((_DWORD *)this + 524) < 0x7007u || !*((_QWORD *)this + 144) )
      return v3;
    if ( !*((_QWORD *)this + 366) )
      return 1;
  }
  if ( *((_QWORD *)this + 128) )
    return 1;
  return v3;
}
