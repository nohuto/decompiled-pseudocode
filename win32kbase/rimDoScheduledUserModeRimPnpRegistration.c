/*
 * XREFs of rimDoScheduledUserModeRimPnpRegistration @ 0x1C00D751C
 * Callers:
 *     RIMOnPnpNotification @ 0x1C00383E0 (RIMOnPnpNotification.c)
 * Callees:
 *     RIMDiscoverDevicesOfInputType @ 0x1C00374F8 (RIMDiscoverDevicesOfInputType.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimDoScheduledUserModeRimPnpRegistration(char *Object)
{
  char v2; // dl
  int v3; // ebx
  char v4; // dl
  char v6; // dl

  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v2 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v2 = 0;
  }
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (_DWORD)gRimLog,
      4,
      1,
      55,
      (__int64)&WPP_89c3e44078983ba1070baf237427a4e9_Traceguids);
  if ( *((_DWORD *)Object + 264) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1793LL);
  if ( (*((_DWORD *)Object + 21) & 0x20) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1794LL);
  v3 = RIMDiscoverDevicesOfInputType(Object);
  if ( v3 < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (v6 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v6 = 0;
    }
    if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v6,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (_DWORD)gRimLog,
        4,
        1,
        56,
        (__int64)&WPP_89c3e44078983ba1070baf237427a4e9_Traceguids);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v4 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v4 = 0;
  }
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v4,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (_DWORD)gRimLog,
      4,
      1,
      57,
      (__int64)&WPP_89c3e44078983ba1070baf237427a4e9_Traceguids);
  return (unsigned int)v3;
}
