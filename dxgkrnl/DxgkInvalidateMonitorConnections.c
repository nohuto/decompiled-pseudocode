/*
 * XREFs of DxgkInvalidateMonitorConnections @ 0x1C01C24B0
 * Callers:
 *     DxgkCompleteTopologyTransition @ 0x1C01C3FC0 (DxgkCompleteTopologyTransition.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F7070 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F751C (-HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCEN.c)
 *     DxgkHandleForceProjectionMonitor @ 0x1C02F7E30 (DxgkHandleForceProjectionMonitor.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C01BA77C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C01D8 (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISP.c)
 */

__int64 __fastcall DxgkInvalidateMonitorConnections(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int CurrentProcessSessionId; // eax
  __int64 v10; // rcx
  __int64 v11; // r8
  int v13; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v14; // [rsp+58h] [rbp-A8h]
  char v15; // [rsp+60h] [rbp-A0h]
  _QWORD v16[12]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v17[10]; // [rsp+D0h] [rbp-30h] BYREF

  memset(v17, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v17[1]);
  v13 = -1;
  v14 = 0LL;
  v17[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v17[3]) = 37;
  LOBYTE(v17[6]) = -1;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v15 = 1;
    v13 = 2165;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, &EventProfilerEnter, v3, 2165);
  }
  else
  {
    v15 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v13, 2165);
  WdLogSingleEntry1(4LL, a1);
  if ( (a1 & 3) == 0 )
  {
    WdLogSingleEntry1(1LL, 2836LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"((i_Parameter & INVALIDATE_MONITOR_CONNECTIONS_EMERGENCY_ONLY) != 0) || ((i_Parameter & INVALIDATE_MONITO"
                "R_CONNECTIONS_PATH_PERSIST) != 0)",
      2836LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v4 = DisplayConfigHandleMonitorInvalidation(a1, 0LL, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v17);
  memset(v16, 0, sizeof(v16));
  LODWORD(v16[6]) |= 2u;
  memset(&v16[1], 0, 36);
  v16[0] = 0x6000000002LL;
  v16[7] = a1;
  LODWORD(v16[10]) = v4;
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v6, v5, v7, v8);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v16, CurrentProcessSessionId);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v13);
  if ( v15 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v10, &EventProfilerExit, v11, v13);
  return v4;
}
