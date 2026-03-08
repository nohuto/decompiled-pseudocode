/*
 * XREFs of ?GetMonitorFromId@CMonitorTopology@@SAPEAUtagMONITOR@@AEBUMonitorId@1@@Z @ 0x1C00FB828
 * Callers:
 *     ?GetMigrateMonitor@CRecalcState@@AEAAPEAUtagMONITOR@@PEAUtagWND@@PEAVCRecalcContext@@@Z @ 0x1C00FB688 (-GetMigrateMonitor@CRecalcState@@AEAAPEAUtagMONITOR@@PEAUtagWND@@PEAVCRecalcContext@@@Z.c)
 *     ?MinimizeOnMonitorRemove@CRecalcState@@AEAA_NPEAUtagWND@@PEBUMonitorData@CMonitorTopology@@PEBVCRecalcContext@@@Z @ 0x1C01296A8 (-MinimizeOnMonitorRemove@CRecalcState@@AEAA_NPEAUtagWND@@PEBUMonitorData@CMonitorTopology@@PEBVC.c)
 *     ?xxxFullscreenRestore@CRecalcState@@QEAAXPEAUtagWND@@AEBVCMonitorTopology@@PEAVCRecalcContext@@@Z @ 0x1C0229464 (-xxxFullscreenRestore@CRecalcState@@QEAAXPEAUtagWND@@AEBVCMonitorTopology@@PEAVCRecalcContext@@@.c)
 *     ?xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4State@1@UtagRECT@@3W4ApplyOption@1@PEAK@Z @ 0x1C023FD9C (-xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C003E064 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     AreHashesEqual @ 0x1C00FF42C (AreHashesEqual.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

struct tagMONITOR *__fastcall CMonitorTopology::GetMonitorFromId(
        const struct CMonitorTopology::MonitorId *a1,
        __int64 a2,
        __int64 a3,
        int a4)
{
  CMonitorTopology *v5; // rdi
  __int64 v6; // rbp
  unsigned int v7; // esi
  __int64 v8; // rdx
  __int64 v9; // r9
  bool v11; // bl
  int v12; // edx

  if ( *((_BYTE *)a1 + 21) )
  {
    v5 = qword_1C0361320;
    v6 = 0LL;
    v7 = 0;
    if ( *((_DWORD *)qword_1C0361320 + 2) )
    {
      while ( !(unsigned __int8)AreHashesEqual((char *)v5 + 72 * v7 + 60, a1, a3) )
      {
        v5 = qword_1C0361320;
        if ( ++v7 >= *((_DWORD *)qword_1C0361320 + 2) )
          return (struct tagMONITOR *)v6;
      }
      v6 = ValidateHmonitor(*((_QWORD *)v5 + 9 * v7 + 2), v8, a3, v9);
      if ( !v6 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 264LL);
    }
    return (struct tagMONITOR *)v6;
  }
  else
  {
    v11 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = 14;
      LOBYTE(v12) = v11;
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v12,
        a3,
        a4,
        3,
        23,
        14,
        (__int64)&WPP_aeca42301358371308ca40d05b2a9235_Traceguids);
    }
    return 0LL;
  }
}
