/*
 * XREFs of RIMValidatePTPProperties @ 0x1C0181DB4
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C015C02C (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0160150 (RIMVirtCreatePointerDeviceInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMValidatePTPProperties(int a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v4; // edi

  v2 = a2;
  v4 = -1073741668;
  if ( *(_DWORD *)(a2 + 24) != 7 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 21);
  if ( a1 == 3 && (*(_DWORD *)(v2 + 312) & 0x80u) != 0 && *(_DWORD *)(v2 + 720) <= 6u )
  {
    return 0;
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 3;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 10, (__int64)&WPP_09f3a69173bf3f521b10e986f86340e6_Traceguids);
  }
  return v4;
}
