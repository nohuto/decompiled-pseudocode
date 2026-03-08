/*
 * XREFs of UserActivateMITInputProcessingHelper @ 0x1C021CA90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     InitializeInputSensorsOnSharedThread @ 0x1C0217BF4 (InitializeInputSensorsOnSharedThread.c)
 */

__int64 __fastcall UserActivateMITInputProcessingHelper(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  PDEVICE_OBJECT v4; // rcx
  unsigned int v5; // ebx
  char v6; // di
  int v7; // edx
  int v8; // esi
  int v9; // r8d

  v4 = WPP_GLOBAL_Control;
  v5 = 0;
  v6 = 1;
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
      (__int64)&WPP_57958f1c0af5359901bb86e3ae8a02de_Traceguids);
  if ( !*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 281);
  v8 = InitializeInputSensorsOnSharedThread((__int64)v4, a2, a3, a4);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || (LOBYTE(v7) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v7) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v6 = 0;
  if ( (_BYTE)v7 || v6 )
  {
    LOBYTE(v9) = v6;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v7,
      v9,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      2,
      21,
      (__int64)&WPP_57958f1c0af5359901bb86e3ae8a02de_Traceguids);
  }
  LOBYTE(v5) = v8 >= 0;
  return v5;
}
