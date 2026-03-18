/*
 * XREFs of ?GetMonitorFromId@CMonitorTopology@@SAPEAUtagMONITOR@@AEBUMonitorId@1@@Z @ 0x1C00680B0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateSharedHandle @ 0x1C0030048 (HMValidateSharedHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     AreHashesEqual @ 0x1C00681D0 (AreHashesEqual.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct tagMONITOR *__fastcall CMonitorTopology::GetMonitorFromId(const struct CMonitorTopology::MonitorId *a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rsi
  __int64 i; // rbp
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  bool v12; // bl
  int v13; // edx

  if ( *((_BYTE *)a1 + 21) )
  {
    v2 = qword_1C02965B0;
    v3 = 0LL;
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)qword_1C02965B0 + 2); i = (unsigned int)(i + 1) )
    {
      if ( (unsigned __int8)AreHashesEqual((char *)&v2[9 * i + 7] + 4, a1) )
      {
        if ( v3 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
        v3 = HMValidateSharedHandle(v2[9 * i + 2], v5);
        if ( !v3 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
      }
      v2 = qword_1C02965B0;
    }
    return (struct tagMONITOR *)v3;
  }
  else
  {
    v12 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000000) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = 14;
      LOBYTE(v13) = v12;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v13,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        3,
        27,
        14,
        (__int64)&WPP_7ce4f07ab0303d88d561900b9efa555c_Traceguids);
    }
    return 0LL;
  }
}
