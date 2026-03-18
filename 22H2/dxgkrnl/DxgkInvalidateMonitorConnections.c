/*
 * XREFs of DxgkInvalidateMonitorConnections @ 0x1C0185240
 * Callers:
 *     DxgkCompleteTopologyTransition @ 0x1C01E4810 (DxgkCompleteTopologyTransition.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02FBEA0 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02FC34C (-HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCEN.c)
 *     DxgkHandleForceProjectionMonitor @ 0x1C02FCC60 (DxgkHandleForceProjectionMonitor.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A61C (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B0F0 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C0028640 (memset.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C017CDCC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0182344 (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISP.c)
 */

__int64 __fastcall DxgkInvalidateMonitorConnections(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  unsigned int v4; // edi
  __int64 v5; // rcx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v7; // rcx
  __int64 v8; // r8
  int v10; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v11; // [rsp+58h] [rbp-A8h]
  char v12; // [rsp+60h] [rbp-A0h]
  _QWORD v13[12]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v14[10]; // [rsp+D0h] [rbp-30h] BYREF

  memset(v14, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v14[1]);
  v10 = -1;
  v11 = 0LL;
  v14[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v14[3]) = 37;
  LOBYTE(v14[6]) = -1;
  if ( (qword_1C013F870 & 2) != 0 )
  {
    v12 = 1;
    v10 = 2165;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, &EventProfilerEnter, v3, 2165);
  }
  else
  {
    v12 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v10, 2165);
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
  v4 = DisplayConfigHandleMonitorInvalidation(a1, 0LL, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v14);
  memset(v13, 0, sizeof(v13));
  LODWORD(v13[6]) |= 2u;
  memset(&v13[1], 0, 36);
  v13[0] = 0x6000000002LL;
  v13[7] = a1;
  LODWORD(v13[10]) = v4;
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v5);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v13, CurrentProcessSessionId);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v10);
  if ( v12 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v7, &EventProfilerExit, v8, v10);
  return v4;
}
