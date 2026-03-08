/*
 * XREFs of InitializeInputSensorsOnSharedThread @ 0x1C0217BF4
 * Callers:
 *     UserActivateMITInputProcessingHelper @ 0x1C021CA90 (UserActivateMITInputProcessingHelper.c)
 * Callees:
 *     _anonymous_namespace_::InitializeInputSensorPass1Worker @ 0x1C009A5B4 (_anonymous_namespace_--InitializeInputSensorPass1Worker.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_AND_TRACE_SF_sd @ 0x1C0217150 (WPP_RECORDER_AND_TRACE_SF_sd.c)
 */

__int64 __fastcall InitializeInputSensorsOnSharedThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebp
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r14
  unsigned int v8; // esi
  _DWORD *v9; // rdi
  char v10; // bl
  int v11; // edx
  unsigned int v12; // esi
  _QWORD *i; // rdi
  int v14; // r8d
  int v15; // r9d
  int v16; // edx

  v4 = -1073741823;
  v7 = SGDGetUserSessionState(a1, a2, a3, a4);
  v8 = 0;
  v9 = (_DWORD *)(v7 + 3296);
  v10 = 1;
  while ( 1 )
  {
    if ( (unsigned int)(*v9 - 1) > 1 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1119);
    if ( *v9 == 2 )
    {
      v4 = anonymous_namespace_::InitializeInputSensorPass1Worker(
             v8,
             *(struct IRegisterInputDispatcherObjects **)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters,
             v5,
             v6);
      if ( v4 < 0 )
        break;
    }
    ++v8;
    v9 += 12;
    if ( v8 >= 3 )
      goto LABEL_15;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
    || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
  {
    LOBYTE(v11) = 0;
  }
  if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_sd(
      WPP_GLOBAL_Control->AttachedDevice,
      v11,
      v5,
      14,
      2,
      3,
      14,
      (__int64)&WPP_269ea30dfa8339f595af44ee265b59c1_Traceguids,
      *(_QWORD *)(v7 + 48LL * v8 + 3320),
      v4);
  }
LABEL_15:
  v12 = 0;
  for ( i = (_QWORD *)(v7 + 3304); ; i += 6 )
  {
    if ( *((_DWORD *)i - 2) == 2 )
    {
      v4 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 16LL))(*i);
      if ( v4 < 0 )
        break;
    }
    if ( ++v12 >= 3 )
      return (unsigned int)v4;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
  {
    v10 = 0;
  }
  if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v16 = 15;
    LOBYTE(v16) = v10;
    LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_sd(
      WPP_GLOBAL_Control->AttachedDevice,
      v16,
      v14,
      v15,
      2,
      3,
      15,
      (__int64)&WPP_269ea30dfa8339f595af44ee265b59c1_Traceguids,
      *(_QWORD *)(v7 + 48LL * v12 + 3320),
      v4);
  }
  return (unsigned int)v4;
}
