/*
 * XREFs of rimOnPnpRemoveComplete @ 0x1C0030730
 * Callers:
 *     RIMDirectPnpRemoveDevicesOfType @ 0x1C002F1B0 (RIMDirectPnpRemoveDevicesOfType.c)
 *     RIMOnPnpNotification @ 0x1C00383E0 (RIMOnPnpNotification.c)
 *     RIMDoOnPnpNotification @ 0x1C00872A8 (RIMDoOnPnpNotification.c)
 *     RIMRemoveDevOfInputType @ 0x1C00C986C (RIMRemoveDevOfInputType.c)
 * Callees:
 *     RIMCloseDev @ 0x1C00308E4 (RIMCloseDev.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqd @ 0x1C0089624 (WPP_RECORDER_AND_TRACE_SF_qqd.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimOnPnpRemoveComplete(char a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned int v5; // eax
  int v6; // edx
  int v7; // r8d
  void *v8; // rcx
  unsigned int v9; // edi
  NTSTATUS v10; // eax
  void *v11; // rcx
  unsigned int v12; // eax

  v3 = a2;
  if ( (*(_DWORD *)(a2 + 184) & 8) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 716LL);
  if ( (*(_DWORD *)(v3 + 184) & 0x2000) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 717LL);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      (_DWORD)gRimLog,
      4,
      1,
      28,
      (__int64)&WPP_89c3e44078983ba1070baf237427a4e9_Traceguids);
  *(_DWORD *)(v3 + 184) &= ~8u;
  if ( (*(_DWORD *)(v3 + 184) & 0x40) != 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(a2) = 0;
    }
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_qqd(
        WPP_GLOBAL_Control->AttachedDevice,
        a2,
        a3,
        (_DWORD)gRimLog,
        4,
        1,
        29,
        (__int64)&WPP_89c3e44078983ba1070baf237427a4e9_Traceguids,
        a1,
        v3,
        0);
    }
    return 0LL;
  }
  else
  {
    v5 = RIMCloseDev(v3, a2, a3, &WPP_89c3e44078983ba1070baf237427a4e9_Traceguids);
    v8 = *(void **)(v3 + 248);
    v9 = v5;
    if ( v8 )
    {
      v10 = IoUnregisterPlugPlayNotification(v8);
      *(_DWORD *)(v3 + 200) &= ~0x20u;
      v9 = v10;
      v11 = *(void **)(v3 + 32);
      v12 = *(_DWORD *)(v3 + 184) & 0xFFFFFB7F | 0x400;
      *(_QWORD *)(v3 + 248) = 0LL;
      *(_DWORD *)(v3 + 184) = v12;
      ObfDereferenceObject(v11);
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v6) = 0;
    }
    if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_qqd(
        WPP_GLOBAL_Control->AttachedDevice,
        v6,
        v7,
        (_DWORD)gRimLog,
        4,
        1,
        30,
        (__int64)&WPP_89c3e44078983ba1070baf237427a4e9_Traceguids,
        a1,
        v3,
        v9);
    }
    return v9;
  }
}
