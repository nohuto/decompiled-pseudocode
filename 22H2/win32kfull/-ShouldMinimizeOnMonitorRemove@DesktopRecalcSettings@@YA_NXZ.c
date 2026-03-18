/*
 * XREFs of ?ShouldMinimizeOnMonitorRemove@DesktopRecalcSettings@@YA_NXZ @ 0x1C00C0158
 * Callers:
 *     ?StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z @ 0x1C00C03E0 (-StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z.c)
 *     ?MinimizeOnMonitorRemove@CRecalcState@@AEAA_NPEAUtagWND@@PEBUMonitorData@CMonitorTopology@@PEBVCRecalcContext@@@Z @ 0x1C0131BC0 (-MinimizeOnMonitorRemove@CRecalcState@@AEAA_NPEAUtagWND@@PEBUMonitorData@CMonitorTopology@@PEBVC.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1C005F1AC (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     Feature_Emrbspi__private_ReportDeviceUsage @ 0x1C013D754 (Feature_Emrbspi__private_ReportDeviceUsage.c)
 */

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
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
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
      7u,
      0x54u,
      (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids,
      v5);
  }
  return v2;
}
