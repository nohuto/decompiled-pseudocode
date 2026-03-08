/*
 * XREFs of rimOnPnpRemoveCancelled @ 0x1C01C8770
 * Callers:
 *     RIMDoOnPnpNotification @ 0x1C00872A8 (RIMDoOnPnpNotification.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqd @ 0x1C0089624 (WPP_RECORDER_AND_TRACE_SF_qqd.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimOnPnpRemoveCancelled(char a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v4; // edi
  void *v6; // rcx
  NTSTATUS v7; // eax
  void *v8; // rcx

  v2 = a2;
  if ( (*(_DWORD *)(a2 + 184) & 4) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 805);
  if ( (*(_DWORD *)(v2 + 184) & 0x2000) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 806);
  v4 = 0;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (_DWORD)gRimLog,
      4,
      1,
      34,
      (__int64)&WPP_89c3e44078983ba1070baf237427a4e9_Traceguids);
  *(_DWORD *)(v2 + 184) &= ~4u;
  if ( (*(_DWORD *)(v2 + 184) & 0x40) != 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(a2) = 0;
    }
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_qqd(
        WPP_GLOBAL_Control->AttachedDevice,
        a2,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (_DWORD)gRimLog,
        4,
        1,
        35,
        (__int64)&WPP_89c3e44078983ba1070baf237427a4e9_Traceguids,
        a1,
        v2,
        0);
    return 0LL;
  }
  else
  {
    v6 = *(void **)(v2 + 248);
    if ( v6 )
    {
      v7 = IoUnregisterPlugPlayNotification(v6);
      v8 = *(void **)(v2 + 32);
      v4 = v7;
      *(_QWORD *)(v2 + 248) = 0LL;
      ObfDereferenceObject(v8);
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(a2) = 0;
    }
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_qqd(
        WPP_GLOBAL_Control->AttachedDevice,
        a2,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (_DWORD)gRimLog,
        4,
        1,
        36,
        (__int64)&WPP_89c3e44078983ba1070baf237427a4e9_Traceguids,
        a1,
        v2,
        v4);
    return v4;
  }
}
