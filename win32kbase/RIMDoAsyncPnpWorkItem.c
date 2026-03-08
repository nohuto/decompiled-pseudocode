/*
 * XREFs of RIMDoAsyncPnpWorkItem @ 0x1C0036418
 * Callers:
 *     RIMOnAsyncPnpWorkNotification @ 0x1C0038B90 (RIMOnAsyncPnpWorkNotification.c)
 * Callees:
 *     RIMApiSetIsRemoteConnection @ 0x1C00364A8 (RIMApiSetIsRemoteConnection.c)
 *     RIMDeviceClassNotifyAsyncWorkItem @ 0x1C0037820 (RIMDeviceClassNotifyAsyncWorkItem.c)
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C007EBF0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     RIMDeviceNotifyAsyncWorkItem @ 0x1C01CFE1C (RIMDeviceNotifyAsyncWorkItem.c)
 */

__int64 __fastcall RIMDoAsyncPnpWorkItem(__int64 a1, __int64 a2)
{
  int v4; // edx
  int v5; // r8d
  int v6; // edx
  int v7; // r8d
  int v8; // eax

  if ( (unsigned int)RIMApiSetIsRemoteConnection() )
  {
    LOBYTE(v4) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v4,
        v5,
        (_DWORD)gRimLog,
        3,
        1,
        33,
        (__int64)&WPP_5233ecacf01533097438d072d8b1b1d6_Traceguids);
    }
  }
  else
  {
    RIMLockExclusive(a1 + 104);
    if ( *(_BYTE *)(a1 + 80) || *(_BYTE *)(a1 + 81) )
    {
      LOBYTE(v6) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          v6,
          v7,
          (_DWORD)gRimLog,
          3,
          1,
          32,
          (__int64)&WPP_5233ecacf01533097438d072d8b1b1d6_Traceguids,
          a1);
      }
    }
    else
    {
      v8 = *(_DWORD *)(a2 + 16);
      if ( v8 )
      {
        if ( v8 == 1 )
          RIMDeviceNotifyAsyncWorkItem(a2);
      }
      else
      {
        RIMDeviceClassNotifyAsyncWorkItem(a2);
      }
    }
    *(_QWORD *)(a1 + 112) = 0LL;
    ExReleasePushLockExclusiveEx(a1 + 104, 0LL);
    KeLeaveCriticalRegion();
  }
  return 0LL;
}
