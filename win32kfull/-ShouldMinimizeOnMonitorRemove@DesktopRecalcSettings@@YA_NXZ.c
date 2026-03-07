bool __fastcall DesktopRecalcSettings::ShouldMinimizeOnMonitorRemove(DesktopRecalcSettings *this)
{
  int v1; // r10d
  bool v2; // bl
  char v3; // r8
  char v4; // dl
  const char *v5; // r9

  Feature_Emrbspi__private_ReportDeviceUsage(this);
  v1 = *(_DWORD *)UPDWORDPointer(8234LL);
  v2 = v1 == 0;
  v3 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
    || (v4 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v4 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v3 = 0;
  if ( v4 || v3 )
  {
    v5 = "Minimize";
    if ( v1 )
      v5 = "Migrate";
    WPP_RECORDER_AND_TRACE_SF_s(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v4,
      v3,
      (__int64)gFullLog,
      5u,
      0x17u,
      0x54u,
      (__int64)&WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids,
      v5);
  }
  return v2;
}
