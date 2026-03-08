/*
 * XREFs of RIMUnregisterCurrentProcessForInput @ 0x1C0039554
 * Callers:
 *     RIMOnProcessDestroy @ 0x1C00394C0 (RIMOnProcessDestroy.c)
 * Callees:
 *     RIMUnregisterForInput @ 0x1C00326C0 (RIMUnregisterForInput.c)
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0039A10 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMUnregisterCurrentProcessForInput(__int64 a1)
{
  int v1; // ebx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v3; // r8
  __int64 *v4; // rdx
  __int64 v5; // r15
  PDEVICE_OBJECT v6; // rcx
  void *v7; // r9
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 *i; // r14
  __int64 v18; // rax
  int v19; // edx
  int v20; // r8d
  _QWORD *v21; // rdi
  _QWORD *v23; // rdi
  _QWORD *v24; // rax
  _QWORD *v25; // rsi
  int v26; // edx
  int v27; // r8d
  _QWORD *v28; // [rsp+50h] [rbp-10h] BYREF
  _QWORD **v29; // [rsp+58h] [rbp-8h]

  v1 = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v4 = (__int64 *)CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v4 = (__int64 *)(-(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process);
  v5 = *v4;
  v6 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v4) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v4) = 0;
  }
  v7 = &WPP_ac32a586e8cb36254fb1fb045aefff6a_Traceguids;
  LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)v4,
      v3,
      (_DWORD)gRimLog,
      4,
      1,
      18,
      (__int64)&WPP_ac32a586e8cb36254fb1fb045aefff6a_Traceguids);
  v29 = &v28;
  v28 = &v28;
  v8 = SGDGetUserSessionState(v6, v4, v3, v7);
  RIMLockExclusive(v8 + 240);
  for ( i = *(__int64 **)(SGDGetUserSessionState(v10, v9, v11, v12) + 304);
        i != (__int64 *)(SGDGetUserSessionState(v14, v13, v15, v16) + 304);
        i = (__int64 *)*i )
  {
    if ( !*((_BYTE *)i + 64) && !*((_BYTE *)i + 65) && i[2] == v5 )
    {
      v23 = i + 99;
      if ( (__int64 *)i[100] != i + 99 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1411LL);
      if ( (_QWORD *)*v23 != v23 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1412LL);
      v1 = ObReferenceObjectByPointer(i - 2, 3u, ExRawInputManagerObjectType, 0);
      if ( v1 < 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1418LL);
      v24 = v29;
      if ( *v29 != &v28 )
        __fastfail(3u);
      i[100] = (__int64)v29;
      v14 = &v28;
      *v23 = &v28;
      *v24 = v23;
      v29 = (_QWORD **)(i + 99);
    }
  }
  v18 = SGDGetUserSessionState(v14, v13, v15, v16);
  *(_QWORD *)(v18 + 248) = 0LL;
  ExReleasePushLockExclusiveEx(v18 + 240, 0LL);
  KeLeaveCriticalRegion();
  v21 = v28;
  while ( v21 != &v28 )
  {
    v25 = v21 - 101;
    v1 = RIMUnregisterForInput(*(v21 - 92));
    if ( v1 < 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v26) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(v26) = 0;
      }
      if ( (_BYTE)v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v27) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_d(
          WPP_GLOBAL_Control->AttachedDevice,
          v26,
          v27,
          (_DWORD)gRimLog,
          3,
          1,
          19,
          (__int64)&WPP_ac32a586e8cb36254fb1fb045aefff6a_Traceguids,
          v1);
      }
      v1 = 0;
    }
    v21 = (_QWORD *)*v21;
    ObfDereferenceObject(v25);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v19) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v19) = 0;
  }
  if ( (_BYTE)v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      v19,
      v20,
      (_DWORD)gRimLog,
      4,
      1,
      20,
      (__int64)&WPP_ac32a586e8cb36254fb1fb045aefff6a_Traceguids,
      v1);
  }
  return (unsigned int)v1;
}
