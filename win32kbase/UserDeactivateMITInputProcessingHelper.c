__int64 __fastcall UserDeactivateMITInputProcessingHelper(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  PDEVICE_OBJECT v4; // rcx
  char v5; // bl
  __int64 result; // rax
  int v7; // edx
  int v8; // r8d

  v4 = WPP_GLOBAL_Control;
  v5 = 1;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType);
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      2,
      22,
      (__int64)&WPP_57958f1c0af5359901bb86e3ae8a02de_Traceguids);
  result = (__int64)UninitializeInputSensorsOnSharedThread((__int64)v4, a2, a3, a4);
  LOBYTE(v7) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (result = HIDWORD(WPP_GLOBAL_Control->Timer), (result & 2) != 0)
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v5 = 0;
  if ( (_BYTE)v7 || v5 )
  {
    LOBYTE(v8) = v5;
    return WPP_RECORDER_AND_TRACE_SF_(
             WPP_GLOBAL_Control->AttachedDevice,
             v7,
             v8,
             WPP_GLOBAL_Control->DeviceExtension,
             5,
             2,
             23,
             (__int64)&WPP_57958f1c0af5359901bb86e3ae8a02de_Traceguids);
  }
  return result;
}
