char __fastcall rimObsCheckForRegistrationConflicts(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r12
  unsigned int v5; // r14d
  unsigned int v6; // r15d
  unsigned int v7; // esi
  char v8; // bp
  __int64 v9; // rbx
  int v10; // ebp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *i; // rdi
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // r13
  const char *v21; // rax
  char v22; // si
  char v24; // si
  char ProcessId; // di
  char ThreadId; // al
  int v27; // r8d
  int v28; // edx
  const char *v29; // rax
  int v30; // edx
  int v31; // [rsp+20h] [rbp-88h]
  int v32; // [rsp+28h] [rbp-80h]
  int v33; // [rsp+30h] [rbp-78h]
  int v34; // [rsp+38h] [rbp-70h]
  __int64 v35; // [rsp+60h] [rbp-48h]
  bool v36; // [rsp+B8h] [rbp+10h]

  v4 = 0;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = a1;
  if ( (unsigned int)a2 > 2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 687);
  v9 = SGDGetUserSessionState(a1, a2, a3, a4);
  RIMLockExclusive(v9 + 240);
  v10 = v8 & 2;
  for ( i = *(_QWORD **)(SGDGetUserSessionState(v12, v11, v13, v14) + 336); ; i = (_QWORD *)*i )
  {
    if ( i == (_QWORD *)(SGDGetUserSessionState(v16, v15, v18, v19) + 336) )
    {
      v22 = 1;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
        || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v15) = 0;
      }
      if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v15,
          v18,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          23,
          38,
          (__int64)&WPP_7ab93bf750ea39448eb6692bed3f413c_Traceguids);
      }
      goto LABEL_18;
    }
    v20 = i - 2;
    if ( !v10 )
      break;
    if ( (unsigned int)rimObsIsObserverTarget(i - 2, v7, v6, v5) )
    {
      v21 = "existing observer exists";
      goto LABEL_20;
    }
LABEL_9:
    ;
  }
  if ( (v20[15] & 2) == 0 || !(unsigned int)rimObsIsObserverTarget(i - 2, v7, v6, v5) )
    goto LABEL_9;
  v21 = "existing exclusive observer exists";
LABEL_20:
  v35 = (__int64)v21;
  v24 = 1;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    v4 = 1;
  }
  v36 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    ProcessId = (unsigned __int8)PsGetProcessId((PEPROCESS)v20[4]);
    ThreadId = (unsigned __int8)PsGetThreadId((PETHREAD)v20[5]);
    LOBYTE(v27) = v36;
    LOBYTE(v28) = v4;
    WPP_RECORDER_AND_TRACE_SF_qdd(
      WPP_GLOBAL_Control->AttachedDevice,
      v28,
      v27,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      3,
      23,
      36,
      (__int64)&WPP_7ab93bf750ea39448eb6692bed3f413c_Traceguids,
      (char)v20,
      ThreadId,
      ProcessId);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
    || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
  {
    v24 = 0;
  }
  if ( v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v29 = "exclusive";
    if ( !v10 )
      v29 = "shared";
    v30 = v35;
    LOBYTE(v30) = v24;
    LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_ss(
      WPP_GLOBAL_Control->AttachedDevice,
      v30,
      v18,
      v19,
      v31,
      v32,
      v33,
      v34,
      (__int64)v29,
      v35);
  }
  v22 = 0;
LABEL_18:
  *(_QWORD *)(v9 + 248) = 0LL;
  ExReleasePushLockExclusiveEx(v9 + 240, 0LL);
  KeLeaveCriticalRegion();
  return v22;
}
