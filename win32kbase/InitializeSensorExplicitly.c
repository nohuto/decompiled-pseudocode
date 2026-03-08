/*
 * XREFs of InitializeSensorExplicitly @ 0x1C009A520
 * Callers:
 *     ActivateKSTInputProcessingHelper @ 0x1C009A400 (ActivateKSTInputProcessingHelper.c)
 * Callees:
 *     _anonymous_namespace_::InitializeInputSensorPass1Worker @ 0x1C009A5B4 (_anonymous_namespace_--InitializeInputSensorPass1Worker.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_AND_TRACE_SF_sd @ 0x1C0217150 (WPP_RECORDER_AND_TRACE_SF_sd.c)
 */

__int64 __fastcall InitializeSensorExplicitly(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  PVOID DeviceObject; // rbx
  __int64 v5; // rdi
  int v6; // edx
  int v7; // ebx
  int v8; // r8d
  PDEVICE_OBJECT v10; // rcx
  int v11; // r9d

  DeviceObject = WPP_MAIN_CB.Queue.Wcb.DeviceObject;
  v5 = SGDGetUserSessionState(a1, a2, a3, a4);
  if ( !*(_QWORD *)(v5 + 3304) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1071LL);
  v7 = anonymous_namespace_::InitializeInputSensorPass1Worker(0LL, DeviceObject);
  if ( v7 < 0 )
  {
    v10 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
      || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v6) = 0;
    }
    LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = 13;
      goto LABEL_20;
    }
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v5 + 3304) + 16LL))(*(_QWORD *)(v5 + 3304));
    if ( v7 < 0 )
    {
      v10 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
        || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v6) = 0;
      }
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v11 = 12;
LABEL_20:
        WPP_RECORDER_AND_TRACE_SF_sd(
          v10->AttachedDevice,
          v6,
          v8,
          v11,
          2,
          3,
          v11,
          (__int64)&WPP_269ea30dfa8339f595af44ee265b59c1_Traceguids,
          *(_QWORD *)(v5 + 3320),
          v7);
      }
    }
  }
  return (unsigned int)v7;
}
