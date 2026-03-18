/*
 * XREFs of rimObsCheckForRegistrationConflicts @ 0x1C01AC5C4
 * Callers:
 *     rimObsAddInputObserver @ 0x1C01ACCEC (rimObsAddInputObserver.c)
 *     rimObsUpdateInputObserverRegistration @ 0x1C01AF70C (rimObsUpdateInputObserverRegistration.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMLockExclusive @ 0x1C0055140 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdd @ 0x1C0058FF8 (WPP_RECORDER_AND_TRACE_SF_qdd.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimObsIsObserverTarget @ 0x1C01AC8B8 (rimObsIsObserverTarget.c)
 *     WPP_RECORDER_AND_TRACE_SF_ss @ 0x1C01ACB68 (WPP_RECORDER_AND_TRACE_SF_ss.c)
 */

char __fastcall rimObsCheckForRegistrationConflicts(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r14d
  unsigned int v5; // r12d
  unsigned int v6; // esi
  char v7; // bp
  __int64 v8; // rbx
  int v9; // ebp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD *i; // rdi
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v19; // r15
  __int64 v20; // r10
  const char *v21; // r13
  char v22; // si
  char v23; // si
  char v24; // r12
  const char *v25; // rdx
  const char *v26; // rax
  int v28; // [rsp+20h] [rbp-78h]
  int v29; // [rsp+28h] [rbp-70h]
  int v30; // [rsp+30h] [rbp-68h]
  int v31; // [rsp+38h] [rbp-60h]
  char v32; // [rsp+A8h] [rbp+10h]

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = a1;
  if ( (unsigned int)a2 > 2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 687);
  v8 = SGDGetUserSessionState(a1, a2, a3, a4);
  RIMLockExclusive(v8 + 240);
  v9 = v7 & 2;
  for ( i = *(_QWORD **)(SGDGetUserSessionState(v11, v10, v12, v13) + 336); ; i = (_QWORD *)*i )
  {
    if ( i == (_QWORD *)(SGDGetUserSessionState(v15, v14, v17, v18) + 336) )
    {
      v22 = 1;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v20 = 0LL;
        LOBYTE(v14) = 0;
      }
      else
      {
        LOBYTE(v14) = 1;
        v20 = 0LL;
      }
      if ( (_BYTE)v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v14,
          v17,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          1,
          38,
          (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
        v20 = 0LL;
      }
      goto LABEL_37;
    }
    v19 = i - 2;
    if ( !v9 )
      break;
    if ( (unsigned int)rimObsIsObserverTarget(i - 2, v6, v5, v4) )
    {
      v21 = "existing observer exists";
      goto LABEL_16;
    }
LABEL_9:
    ;
  }
  if ( (v19[15] & 2) == 0 || !(unsigned int)rimObsIsObserverTarget(i - 2, v6, v5, v4) )
    goto LABEL_9;
  v21 = "existing exclusive observer exists";
LABEL_16:
  v23 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v24 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
  {
    v24 = v20;
  }
  v32 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    PsGetProcessId((PEPROCESS)v19[4]);
    PsGetThreadId((PETHREAD)v19[5]);
    WPP_RECORDER_AND_TRACE_SF_qdd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v24,
      v32,
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
      3u,
      1u,
      0x24u,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
    v20 = 0LL;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
  {
    v23 = v20;
  }
  if ( v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v25 = "shared";
    v26 = "exclusive";
    if ( v9 == (_DWORD)v20 )
      v26 = "shared";
    LOBYTE(v25) = v23;
    LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_ss(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)v25,
      v17,
      v18,
      v28,
      v29,
      v30,
      v31,
      (__int64)v26,
      (__int64)v21);
    v20 = 0LL;
  }
  v22 = v20;
LABEL_37:
  *(_QWORD *)(v8 + 248) = v20;
  ExReleasePushLockExclusiveEx(v8 + 240, 0LL);
  KeLeaveCriticalRegion();
  return v22;
}
