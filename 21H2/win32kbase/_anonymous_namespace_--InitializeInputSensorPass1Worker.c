/*
 * XREFs of _anonymous_namespace_::InitializeInputSensorPass1Worker @ 0x1C0054C14
 * Callers:
 *     ActivateKSTInputProcessingHelper @ 0x1C0054AB4 (ActivateKSTInputProcessingHelper.c)
 *     InitializeInputSensorsOnSharedThread @ 0x1C01E7CD4 (InitializeInputSensorsOnSharedThread.c)
 * Callees:
 *     ?RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z @ 0x1C0054C90 (-RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z.c)
 *     ?InitializeSensor@CBaseInput@@QEAAJXZ @ 0x1C005DA50 (-InitializeSensor@CBaseInput@@QEAAJXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_sd @ 0x1C01E7350 (WPP_RECORDER_AND_TRACE_SF_sd.c)
 */

__int64 __fastcall anonymous_namespace_::InitializeInputSensorPass1Worker(
        int a1,
        struct IRegisterInputDispatcherObjects *a2)
{
  __int64 v3; // rdi
  int v4; // edx
  int v5; // ebx
  int v6; // r8d
  PDEVICE_OBJECT v8; // r9
  __int16 v9; // cx

  v3 = 6LL * a1;
  v5 = CBaseInput::InitializeSensor((CBaseInput *)s_rgSensorMap[6 * a1 + 3]);
  if ( v5 < 0 )
  {
    v8 = WPP_GLOBAL_Control;
    LOBYTE(v4) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = 10;
LABEL_20:
      WPP_RECORDER_AND_TRACE_SF_sd(
        v8->AttachedDevice,
        v4,
        v6,
        (_DWORD)v8,
        2,
        3,
        v9,
        (__int64)&WPP_437c9df7cf1c3a305e8fa8e06029d591_Traceguids,
        (__int64)s_rgSensorMap[v3 + 5],
        v5);
    }
  }
  else
  {
    v5 = CBaseInput::RegisterDispatcherObject((CBaseInput *)s_rgSensorMap[v3 + 3], a2);
    if ( v5 < 0 )
    {
      v8 = WPP_GLOBAL_Control;
      LOBYTE(v4) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
      LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v9 = 11;
        goto LABEL_20;
      }
    }
  }
  return (unsigned int)v5;
}
