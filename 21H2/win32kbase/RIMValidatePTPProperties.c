/*
 * XREFs of RIMValidatePTPProperties @ 0x1C01B7D4C
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0190190 (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0196000 (RIMVirtCreatePointerDeviceInfo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMValidatePTPProperties(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  int v4; // esi
  unsigned int v5; // edi

  v3 = a2;
  v4 = a1;
  v5 = -1073741668;
  if ( *(_DWORD *)(a2 + 24) != 7 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( v4 == 3 && (*(_DWORD *)(v3 + 360) & 0x80u) != 0 && *(_DWORD *)(v3 + 768) <= 6u )
  {
    return 0;
  }
  else
  {
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        a2,
        a3,
        (_DWORD)gRimLog,
        3,
        1,
        10,
        (__int64)&WPP_26e1085b54653ae3afd03bd178f52632_Traceguids);
    }
  }
  return v5;
}
