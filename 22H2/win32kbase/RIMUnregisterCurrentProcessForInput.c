/*
 * XREFs of RIMUnregisterCurrentProcessForInput @ 0x1C0047D84
 * Callers:
 *     RIMOnProcessDestroy @ 0x1C0047D10 (RIMOnProcessDestroy.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0042360 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C0047F78 (WPP_RECORDER_SF_d.c)
 *     RIMUnregisterForInput @ 0x1C0054610 (RIMUnregisterForInput.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMUnregisterCurrentProcessForInput(__int64 a1)
{
  NTSTATUS v1; // ebx
  int v2; // edx
  struct _LIST_ENTRY *v3; // r15
  struct _LIST_ENTRY *i; // r14
  int v5; // edx
  _QWORD *v6; // rdi
  struct _LIST_ENTRY **p_Blink; // rdi
  struct _LIST_ENTRY *v9; // rax
  _QWORD *v10; // rsi
  int v11; // eax
  int v12; // edx
  _QWORD *v13; // [rsp+30h] [rbp-10h] BYREF
  struct _LIST_ENTRY *v14; // [rsp+38h] [rbp-8h]

  v1 = 0;
  v3 = *(struct _LIST_ENTRY **)PsGetCurrentProcessWin32Process(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v2, 1, 18, (__int64)&WPP_d20cf136c9a4320ea9528c837bf5ce2a_Traceguids);
  }
  v14 = (struct _LIST_ENTRY *)&v13;
  v13 = &v13;
  RIMLockExclusive((__int64)&gObListLock);
  for ( i = gObRimList.Flink; i != &gObRimList; i = i->Flink )
  {
    if ( !LOBYTE(i[4].Flink) && !BYTE1(i[4].Flink) && i[1].Flink == v3 )
    {
      p_Blink = &i[37].Blink;
      if ( i[38].Flink != (struct _LIST_ENTRY *)&i[37].Blink )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1328LL);
      if ( *p_Blink != (struct _LIST_ENTRY *)p_Blink )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1329LL);
      v1 = ObReferenceObjectByPointer(&i[-1], 3u, ExRawInputManagerObjectType, 0);
      if ( v1 < 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1335LL);
      v9 = v14;
      if ( v14->Flink != (struct _LIST_ENTRY *)&v13 )
        __fastfail(3u);
      i[38].Flink = v14;
      *p_Blink = (struct _LIST_ENTRY *)&v13;
      v9->Flink = (struct _LIST_ENTRY *)p_Blink;
      v14 = (struct _LIST_ENTRY *)((char *)i + 600);
    }
  }
  qword_1C0254458 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  v6 = v13;
  while ( v6 != &v13 )
  {
    v10 = v6 - 77;
    v11 = RIMUnregisterForInput(*(v6 - 68));
    v1 = v11;
    if ( v11 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = 3;
        WPP_RECORDER_SF_d((_DWORD)gRimLog, v12, 1, 19, (__int64)&WPP_d20cf136c9a4320ea9528c837bf5ce2a_Traceguids, v11);
      }
      v1 = 0;
    }
    v6 = (_QWORD *)*v6;
    ObfDereferenceObject(v10);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, v5, 1, 20, (__int64)&WPP_d20cf136c9a4320ea9528c837bf5ce2a_Traceguids, v1);
  }
  return (unsigned int)v1;
}
