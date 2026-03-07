bool __fastcall DxgMonitor::DisplayIdMonitorDescriptor::IsEotf2084Supported(
        DxgMonitor::DisplayIdMonitorDescriptor *this)
{
  __int128 v2; // [rsp+20h] [rbp-28h] BYREF
  int v3; // [rsp+30h] [rbp-18h]
  char v4; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  v3 = 0;
  v2 = 0LL;
  return (int)DisplayID_GetColorimetryData(
                (DxgMonitor::DisplayIdMonitorDescriptor *)((char *)this + 24),
                (struct DISPLAYID_COLORIMETRY_DATA *)&v4,
                (struct DISPLAY_COLOR_DEPTHS *)&v2) >= 0
      && (v4 & 0x40) != 0;
}
