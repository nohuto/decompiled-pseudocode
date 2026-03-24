/*
 * XREFs of rimOnPnpRemoveCancelled @ 0x1C016DD00
 * Callers:
 *     RIMDoOnPnpNotification @ 0x1C00B3D38 (RIMDoOnPnpNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C00AC264 (WPP_RECORDER_SF_qqd.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimOnPnpRemoveCancelled(char a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rbx
  unsigned int v5; // edi
  void *v7; // rcx
  NTSTATUS v8; // eax
  void *v9; // rcx

  v2 = *(_DWORD *)(a2 + 184);
  v3 = a2;
  if ( (v2 & 4) == 0 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 646);
    v2 = *(_DWORD *)(v3 + 184);
  }
  if ( (v2 & 0x2000) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 647);
  v5 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 32, (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids);
  }
  *(_DWORD *)(v3 + 184) &= ~4u;
  if ( (*(_DWORD *)(v3 + 184) & 0x40) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_qqd(
        (_DWORD)gRimLog,
        a2,
        1,
        33,
        (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
        a1,
        v3,
        0);
    }
    return 0LL;
  }
  else
  {
    v7 = *(void **)(v3 + 248);
    if ( v7 )
    {
      v8 = IoUnregisterPlugPlayNotification(v7);
      v9 = *(void **)(v3 + 32);
      v5 = v8;
      *(_QWORD *)(v3 + 248) = 0LL;
      ObfDereferenceObject(v9);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_qqd(
        (_DWORD)gRimLog,
        a2,
        1,
        34,
        (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
        a1,
        v3,
        v5);
    }
    return v5;
  }
}
