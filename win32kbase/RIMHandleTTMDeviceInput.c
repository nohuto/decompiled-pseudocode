__int64 __fastcall RIMHandleTTMDeviceInput(__int64 a1)
{
  _BOOL8 v2; // r8
  int v3; // edx
  int v4; // r8d

  if ( !*(_BYTE *)SGDGetUserGdiSessionState(a1) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 201);
  v2 = (unsigned int)RIMIsWakeCapableDevice(a1) != 0;
  TtmNotifyDeviceInput(2LL, a1, v2);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v3) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v3) = 0;
  }
  if ( (_BYTE)v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      v3,
      v4,
      (_DWORD)gRimLog,
      4,
      1,
      15,
      (__int64)&WPP_520c372abf713e449e1c94695c528942_Traceguids,
      0);
  }
  return 0LL;
}
