/*
 * XREFs of rimOnPnpQueryRemove @ 0x1C01A1AA4
 * Callers:
 *     RIMDoOnPnpNotification @ 0x1C00A1E80 (RIMDoOnPnpNotification.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqd @ 0x1C004AB80 (WPP_RECORDER_AND_TRACE_SF_qqd.c)
 *     RIMCloseDev @ 0x1C004E108 (RIMCloseDev.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimOnPnpQueryRemove(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  __int64 v4; // rbx
  char v5; // si
  int v7; // edx
  unsigned int v8; // edi
  int v9; // r8d

  v3 = *(_DWORD *)(a2 + 184);
  v4 = a2;
  v5 = a1;
  if ( (v3 & 2) == 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    v3 = *(_DWORD *)(v4 + 184);
  }
  if ( (v3 & 0x2000) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      (_DWORD)gRimLog,
      4,
      1,
      23,
      (__int64)&WPP_3100a0ce65ca3ababb0b99fd70935186_Traceguids);
  }
  *(_DWORD *)(v4 + 184) &= ~2u;
  if ( (*(_DWORD *)(v4 + 184) & 0x40) != 0 )
  {
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
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
        24,
        (__int64)&WPP_3100a0ce65ca3ababb0b99fd70935186_Traceguids,
        v5,
        v4,
        0);
    }
    return 0LL;
  }
  else
  {
    v8 = RIMCloseDev(v4);
    LOBYTE(v7) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_qqd(
        WPP_GLOBAL_Control->AttachedDevice,
        v7,
        v9,
        (_DWORD)gRimLog,
        4,
        1,
        25,
        (__int64)&WPP_3100a0ce65ca3ababb0b99fd70935186_Traceguids,
        v5,
        v4,
        v8);
    }
    return v8;
  }
}
