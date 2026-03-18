/*
 * XREFs of rimOnPnpQueryRemove @ 0x1C019A980
 * Callers:
 *     RIMDoOnPnpNotification @ 0x1C0199BF8 (RIMDoOnPnpNotification.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMCloseDev @ 0x1C007AB28 (RIMCloseDev.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqd @ 0x1C007ABD0 (WPP_RECORDER_AND_TRACE_SF_qqd.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimOnPnpQueryRemove(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  char v3; // dl
  unsigned int v5; // edi
  char v6; // dl
  int v7; // [rsp+20h] [rbp-58h]

  v2 = a2;
  if ( (*(_DWORD *)(a2 + 184) & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 672);
  if ( (*(_DWORD *)(v2 + 184) & 0x2000) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 673);
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
      25,
      (__int64)&WPP_772c79a03a0531bfc5b802d15a9024f9_Traceguids);
  *(_DWORD *)(v2 + 184) &= ~2u;
  if ( (*(_DWORD *)(v2 + 184) & 0x40) != 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (v3 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v3 = 0;
    }
    if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_qqd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v3,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gRimLog,
        v7,
        1u,
        0x1Au,
        (__int64)&WPP_772c79a03a0531bfc5b802d15a9024f9_Traceguids);
    return 0LL;
  }
  else
  {
    v5 = RIMCloseDev(v2);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (v6 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v6 = 0;
    }
    if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_qqd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v6,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gRimLog,
        v7,
        1u,
        0x1Bu,
        (__int64)&WPP_772c79a03a0531bfc5b802d15a9024f9_Traceguids);
    return v5;
  }
}
