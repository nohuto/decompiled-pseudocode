/*
 * XREFs of RIMUnregisterCurrentProcessForInput @ 0x1C0043984
 * Callers:
 *     RIMOnProcessDestroy @ 0x1C0043910 (RIMOnProcessDestroy.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     RIMUnregisterForInput @ 0x1C0047ED0 (RIMUnregisterForInput.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMUnregisterCurrentProcessForInput(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  NTSTATUS v4; // esi
  int v5; // edx
  struct _LIST_ENTRY *v6; // rbp
  int v7; // r8d
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  __int64 v10; // r8
  struct _LIST_ENTRY *i; // r14
  int v12; // edx
  int v13; // r8d
  _QWORD *v14; // rbx
  struct _LIST_ENTRY **p_Blink; // rbx
  __int64 v17; // rcx
  struct _LIST_ENTRY *v18; // rax
  _QWORD *v19; // rdi
  int v20; // edx
  int v21; // r8d
  _QWORD *v22; // [rsp+50h] [rbp-18h] BYREF
  struct _LIST_ENTRY *v23; // [rsp+58h] [rbp-10h]

  v4 = 0;
  v6 = *(struct _LIST_ENTRY **)PsGetCurrentProcessWin32Process(a1, a2, a3, a4);
  LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v5,
      v7,
      (_DWORD)gRimLog,
      4,
      1,
      18,
      (__int64)&WPP_3978f76f04ea382a78ff91c50763c259_Traceguids);
  }
  v23 = (struct _LIST_ENTRY *)&v22;
  v22 = &v22;
  RIMLockExclusive((__int64)&gObListLock);
  for ( i = gObRimList.Flink; i != &gObRimList; i = i->Flink )
  {
    if ( !LOBYTE(i[4].Flink) && !BYTE1(i[4].Flink) && i[1].Flink == v6 )
    {
      p_Blink = &i[51].Blink;
      if ( i[52].Flink != (struct _LIST_ENTRY *)&i[51].Blink )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
      if ( *p_Blink != (struct _LIST_ENTRY *)p_Blink )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
      v4 = ObReferenceObjectByPointer(&i[-1], 3u, ExRawInputManagerObjectType, 0);
      if ( v4 < 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v8, v10);
      v18 = v23;
      if ( v23->Flink != (struct _LIST_ENTRY *)&v22 )
        __fastfail(3u);
      i[52].Flink = v23;
      v9 = &v22;
      *p_Blink = (struct _LIST_ENTRY *)&v22;
      v18->Flink = (struct _LIST_ENTRY *)p_Blink;
      v23 = (struct _LIST_ENTRY *)((char *)i + 824);
    }
  }
  qword_1C029A118 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  v14 = v22;
  while ( v14 != &v22 )
  {
    v19 = v14 - 105;
    v4 = RIMUnregisterForInput(*(v14 - 96));
    if ( v4 < 0 )
    {
      LOBYTE(v20) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      if ( (_BYTE)v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v21) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_D(
          WPP_GLOBAL_Control->AttachedDevice,
          v20,
          v21,
          (_DWORD)gRimLog,
          3,
          1,
          19,
          (__int64)&WPP_3978f76f04ea382a78ff91c50763c259_Traceguids,
          v4);
      }
      v4 = 0;
    }
    v14 = (_QWORD *)*v14;
    ObfDereferenceObject(v19);
  }
  LOBYTE(v12) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      v12,
      v13,
      (_DWORD)gRimLog,
      4,
      1,
      20,
      (__int64)&WPP_3978f76f04ea382a78ff91c50763c259_Traceguids,
      v4);
  }
  return (unsigned int)v4;
}
