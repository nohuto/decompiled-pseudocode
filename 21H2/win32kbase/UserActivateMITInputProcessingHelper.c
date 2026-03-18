/*
 * XREFs of UserActivateMITInputProcessingHelper @ 0x1C01EB9F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     InitializeInputSensorsOnSharedThread @ 0x1C01E7CD4 (InitializeInputSensorsOnSharedThread.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall UserActivateMITInputProcessingHelper(__int64 a1, __int64 a2, __int64 a3)
{
  PDEVICE_OBJECT v3; // rcx
  unsigned int v4; // ebx
  char v5; // di
  int v6; // edx
  int v7; // esi
  int v8; // r8d

  v3 = WPP_GLOBAL_Control;
  v4 = 0;
  v5 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      2,
      20,
      (__int64)&WPP_165f3abe42b33c15c83f02aac2ca9a71_Traceguids);
  if ( !gpIOCPDispatcher )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, a2, a3);
  v7 = InitializeInputSensorsOnSharedThread((__int64)v3, a2, a3);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v6) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v5 = 0;
  if ( (_BYTE)v6 || v5 )
  {
    LOBYTE(v8) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v6,
      v8,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      2,
      21,
      (__int64)&WPP_165f3abe42b33c15c83f02aac2ca9a71_Traceguids);
  }
  LOBYTE(v4) = v7 >= 0;
  return v4;
}
