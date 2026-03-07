__int64 __fastcall RIMHandleTTMDeviceRemoval(__int64 a1)
{
  int v2; // edx
  int v3; // r8d

  if ( !*(_BYTE *)SGDGetUserGdiSessionState(a1) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 147);
  if ( !*(_DWORD *)(a1 + 1312) )
    TtmNotifyDeviceDeparture(2LL, a1);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v2) = 0;
  }
  if ( (_BYTE)v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      v2,
      v3,
      (_DWORD)gRimLog,
      4,
      1,
      13,
      (__int64)&WPP_520c372abf713e449e1c94695c528942_Traceguids,
      0);
  }
  return 0LL;
}
