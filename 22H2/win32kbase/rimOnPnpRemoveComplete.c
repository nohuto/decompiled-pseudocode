/*
 * XREFs of rimOnPnpRemoveComplete @ 0x1C0052D38
 * Callers:
 *     RIMRemoveDevOfInputType @ 0x1C0005FFC (RIMRemoveDevOfInputType.c)
 *     RIMDirectPnpRemoveDevicesOfType @ 0x1C0053760 (RIMDirectPnpRemoveDevicesOfType.c)
 *     RIMOnPnpNotification @ 0x1C00549C0 (RIMOnPnpNotification.c)
 *     RIMDoOnPnpNotification @ 0x1C00B3D38 (RIMDoOnPnpNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C00AC264 (WPP_RECORDER_SF_qqd.c)
 *     RIMCloseDev @ 0x1C00AC34C (RIMCloseDev.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimOnPnpRemoveComplete(char a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rbx
  unsigned int v5; // eax
  int v6; // edx
  void *v7; // rcx
  unsigned int v8; // edi
  NTSTATUS v9; // eax
  void *v10; // rcx
  unsigned int v11; // eax

  v2 = *(_DWORD *)(a2 + 184);
  v3 = a2;
  if ( (v2 & 8) == 0 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 557LL);
    v2 = *(_DWORD *)(v3 + 184);
  }
  if ( (v2 & 0x2000) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 558LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 26, (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids);
  }
  *(_DWORD *)(v3 + 184) &= ~8u;
  if ( (*(_DWORD *)(v3 + 184) & 0x40) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_qqd(
        (_DWORD)gRimLog,
        a2,
        1,
        27,
        (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
        a1,
        v3,
        0);
    }
    return 0LL;
  }
  else
  {
    v5 = RIMCloseDev(v3);
    v7 = *(void **)(v3 + 248);
    v8 = v5;
    if ( v7 )
    {
      v9 = IoUnregisterPlugPlayNotification(v7);
      *(_DWORD *)(v3 + 200) &= ~0x20u;
      v8 = v9;
      v10 = *(void **)(v3 + 32);
      v11 = *(_DWORD *)(v3 + 184) & 0xFFFFFB7F | 0x400;
      *(_QWORD *)(v3 + 248) = 0LL;
      *(_DWORD *)(v3 + 184) = v11;
      ObfDereferenceObject(v10);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_qqd(
        (_DWORD)gRimLog,
        v6,
        1,
        28,
        (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
        a1,
        v3,
        v8);
    }
    return v8;
  }
}
