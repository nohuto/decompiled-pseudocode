/*
 * XREFs of rimObsCheckForRegistrationConflicts @ 0x1C01B2B84
 * Callers:
 *     rimObsAddInputObserver @ 0x1C01B320C (rimObsAddInputObserver.c)
 *     rimObsUpdateInputObserverRegistration @ 0x1C01B59EC (rimObsUpdateInputObserverRegistration.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qDD @ 0x1C0034434 (WPP_RECORDER_AND_TRACE_SF_qDD.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     rimObsIsObserverTarget @ 0x1C01B2DF8 (rimObsIsObserverTarget.c)
 *     WPP_RECORDER_AND_TRACE_SF_ss @ 0x1C01B3088 (WPP_RECORDER_AND_TRACE_SF_ss.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall rimObsCheckForRegistrationConflicts(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v5; // esi
  unsigned int v6; // ebx
  char v7; // r12
  struct _LIST_ENTRY *Flink; // r10
  struct _LIST_ENTRY *v9; // r11
  int v10; // r12d
  struct _LIST_ENTRY *v11; // r15
  int v12; // r9d
  const char *v13; // rax
  char v14; // di
  bool v15; // r13
  char ProcessId; // bl
  char ThreadId; // al
  int v18; // r8d
  int v19; // edx
  const char *v20; // rax
  int v21; // edx
  int v23; // [rsp+20h] [rbp-78h]
  int v24; // [rsp+28h] [rbp-70h]
  int v25; // [rsp+30h] [rbp-68h]
  int v26; // [rsp+38h] [rbp-60h]
  __int64 v27; // [rsp+60h] [rbp-38h]
  bool v28; // [rsp+A0h] [rbp+8h]

  v5 = a3;
  v6 = a2;
  v7 = a1;
  if ( (unsigned int)a2 > 2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  Flink = gObRimInputObserverList.Flink;
  v9 = &gObRimInputObserverList;
  v10 = v7 & 2;
  while ( 1 )
  {
    if ( Flink == v9 )
    {
      LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          a2,
          a3,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          23,
          38,
          (__int64)&WPP_43d878ddf4c53d03f90242c2d3f0d36e_Traceguids);
      }
      return 1;
    }
    v11 = Flink - 1;
    if ( !v10 )
      break;
    if ( (unsigned int)rimObsIsObserverTarget(&Flink[-1], v6, v5, a4) )
    {
      v13 = "existing observer exists";
      goto LABEL_16;
    }
LABEL_9:
    Flink = Flink->Flink;
  }
  if ( ((__int64)v11[7].Blink & 2) == 0 || !(unsigned int)rimObsIsObserverTarget(&Flink[-1], v6, v5, a4) )
    goto LABEL_9;
  v13 = "existing exclusive observer exists";
LABEL_16:
  v27 = (__int64)v13;
  v14 = 1;
  v15 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
  v28 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    ProcessId = (unsigned __int8)PsGetProcessId((PEPROCESS)v11[2].Flink);
    ThreadId = (unsigned __int8)PsGetThreadId((PETHREAD)v11[2].Blink);
    LOBYTE(v18) = v28;
    LOBYTE(v19) = v15;
    WPP_RECORDER_AND_TRACE_SF_qDD(
      WPP_GLOBAL_Control->AttachedDevice,
      v19,
      v18,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      3,
      23,
      36,
      (__int64)&WPP_43d878ddf4c53d03f90242c2d3f0d36e_Traceguids,
      (char)v11,
      ThreadId,
      ProcessId);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
    || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
  {
    v14 = 0;
  }
  if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v20 = "exclusive";
    if ( !v10 )
      v20 = "shared";
    v21 = v27;
    LOBYTE(v21) = v14;
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_ss(
      WPP_GLOBAL_Control->AttachedDevice,
      v21,
      a3,
      v12,
      v23,
      v24,
      v25,
      v26,
      (__int64)v20,
      v27);
  }
  return 0;
}
