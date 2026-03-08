/*
 * XREFs of _anonymous_namespace_::InitializeInputSensorPass1Worker @ 0x1C009A5B4
 * Callers:
 *     InitializeSensorExplicitly @ 0x1C009A520 (InitializeSensorExplicitly.c)
 *     InitializeInputSensorsOnSharedThread @ 0x1C0217BF4 (InitializeInputSensorsOnSharedThread.c)
 * Callees:
 *     ?InitializeSensor@CBaseInput@@QEAAJXZ @ 0x1C0032000 (-InitializeSensor@CBaseInput@@QEAAJXZ.c)
 *     ?RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z @ 0x1C009A640 (-RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_sd @ 0x1C0217150 (WPP_RECORDER_AND_TRACE_SF_sd.c)
 */

__int64 __fastcall anonymous_namespace_::InitializeInputSensorPass1Worker(
        __int64 a1,
        struct IRegisterInputDispatcherObjects *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rsi
  int v8; // edx
  int v9; // ebx
  int v10; // r8d
  PDEVICE_OBJECT v12; // r9
  __int16 v13; // cx

  v5 = (int)a1;
  v6 = SGDGetUserSessionState(a1, a2, a3, a4);
  v7 = 6 * v5;
  v9 = CBaseInput::InitializeSensor(*(CBaseInput **)(v6 + 48 * v5 + 3304));
  if ( v9 < 0 )
  {
    v12 = WPP_GLOBAL_Control;
    LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = 10;
LABEL_20:
      WPP_RECORDER_AND_TRACE_SF_sd(
        v12->AttachedDevice,
        v8,
        v10,
        (_DWORD)v12,
        2,
        3,
        v13,
        (__int64)&WPP_269ea30dfa8339f595af44ee265b59c1_Traceguids,
        *(_QWORD *)(v6 + 8 * v7 + 3320),
        v9);
    }
  }
  else
  {
    v9 = CBaseInput::RegisterDispatcherObject(*(CBaseInput **)(v6 + 8 * v7 + 3304), a2);
    if ( v9 < 0 )
    {
      v12 = WPP_GLOBAL_Control;
      LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
      LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v13 = 11;
        goto LABEL_20;
      }
    }
  }
  return (unsigned int)v9;
}
