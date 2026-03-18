/*
 * XREFs of RIMActivatePointerDeviceDeadzone @ 0x1C01886E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?ActivateTelemetrySession@RIMDeadzone@@QEAAXH@Z @ 0x1C01A1EF8 (-ActivateTelemetrySession@RIMDeadzone@@QEAAXH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMActivatePointerDeviceDeadzone(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r14d
  unsigned int v4; // ebx
  PDEVICE_OBJECT v6; // rcx
  __int64 v7; // rbp
  _DWORD *v8; // rdi
  unsigned int v9; // ebx

  v3 = a3;
  v4 = a2;
  v6 = WPP_GLOBAL_Control;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      (_DWORD)gRimLog,
      4,
      1,
      36,
      (__int64)&WPP_3a0f0d76a8e8385ab6cfb42384993437_Traceguids);
  if ( (*(_DWORD *)(a1 + 200) & 0x80u) == 0 )
  {
    v9 = -1073741811;
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        a2,
        a3,
        (_DWORD)gRimLog,
        3,
        1,
        37,
        (__int64)&WPP_3a0f0d76a8e8385ab6cfb42384993437_Traceguids);
    }
  }
  else if ( v4 < 5 && (_mm_lfence(), v7 = v4, (v8 = *(_DWORD **)(a1 + 8LL * v4 + 408)) != 0LL) )
  {
    v9 = 0;
    if ( v8[2] )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, a2, a3);
    if ( v8[4] )
      v8[10] = v3;
    else
      v9 = -1073741823;
    RIMDeadzone::ActivateTelemetrySession(*(RIMDeadzone **)(a1 + 8 * v7 + 408), v3);
  }
  else
  {
    v9 = -1073741811;
  }
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      (_DWORD)gRimLog,
      4,
      1,
      38,
      (__int64)&WPP_3a0f0d76a8e8385ab6cfb42384993437_Traceguids,
      v9);
  }
  return v9;
}
