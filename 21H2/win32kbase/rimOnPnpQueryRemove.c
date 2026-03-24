/*
 * XREFs of rimOnPnpQueryRemove @ 0x1C016DC78
 * Callers:
 *     RIMDoOnPnpNotification @ 0x1C00B39F8 (RIMDoOnPnpNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C00ABD64 (WPP_RECORDER_SF_qqd.c)
 *     RIMCloseDev @ 0x1C00ABE4C (RIMCloseDev.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimOnPnpQueryRemove(char a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rbx
  unsigned int v6; // eax
  int v7; // edx
  unsigned int v8; // edi

  v2 = *(_DWORD *)(a2 + 184);
  v3 = a2;
  if ( (v2 & 2) == 0 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 515);
    v2 = *(_DWORD *)(v3 + 184);
  }
  if ( (v2 & 0x2000) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 516);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 23, (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids);
  }
  *(_DWORD *)(v3 + 184) &= ~2u;
  if ( (*(_DWORD *)(v3 + 184) & 0x40) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_qqd(
        (_DWORD)gRimLog,
        a2,
        1,
        24,
        (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
        a1,
        v3,
        0);
    }
    return 0LL;
  }
  else
  {
    v6 = RIMCloseDev(v3);
    v8 = v6;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_qqd(
        (_DWORD)gRimLog,
        v7,
        1,
        25,
        (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
        a1,
        v3,
        v6);
    }
    return v8;
  }
}
