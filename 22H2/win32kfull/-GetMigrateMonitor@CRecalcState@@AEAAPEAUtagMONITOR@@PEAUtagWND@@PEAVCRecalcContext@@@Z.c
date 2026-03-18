/*
 * XREFs of ?GetMigrateMonitor@CRecalcState@@AEAAPEAUtagMONITOR@@PEAUtagWND@@PEAVCRecalcContext@@@Z @ 0x1C00C1668
 * Callers:
 *     ?xxxMigrate@CRecalcState@@QEAAXPEAUtagWND@@PEAVCRecalcContext@@@Z @ 0x1C00C1394 (-xxxMigrate@CRecalcState@@QEAAXPEAUtagWND@@PEAVCRecalcContext@@@Z.c)
 * Callees:
 *     ?GetMonitorFromId@CMonitorTopology@@SAPEAUtagMONITOR@@AEBUMonitorId@1@@Z @ 0x1C00C1800 (-GetMonitorFromId@CMonitorTopology@@SAPEAUtagMONITOR@@AEBUMonitorId@1@@Z.c)
 *     ?MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z @ 0x1C00C3074 (-MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00E4884 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00E4E9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?MinimizeOnMonitorRemove@CRecalcState@@AEAA_NPEAUtagWND@@PEBUMonitorData@CMonitorTopology@@PEBVCRecalcContext@@@Z @ 0x1C0131BC0 (-MinimizeOnMonitorRemove@CRecalcState@@AEAA_NPEAUtagWND@@PEBUMonitorData@CMonitorTopology@@PEBVC.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

struct tagMONITOR *__fastcall CRecalcState::GetMigrateMonitor(
        CRecalcState *this,
        struct tagWND *a2,
        struct CRecalcContext *a3)
{
  __int64 v6; // rdx
  CMonitorTopology *v7; // rcx
  bool v8; // zf
  struct tagRECT *v9; // rax
  struct tagRECT *v10; // rdx
  const struct CMonitorTopology::MonitorData *v11; // rax
  int v12; // r8d
  int v13; // r9d
  const struct CMonitorTopology::MonitorData *v14; // r13
  struct tagMONITOR *result; // rax
  int v16; // edx
  int v17; // r8d
  int v18; // r9d
  char v19; // bl
  int v20; // edx
  int v21; // r8d
  int v22; // r9d
  PDEVICE_OBJECT v23; // rcx
  char v24; // bl
  int v25; // edx
  struct tagRECT v26; // [rsp+50h] [rbp-38h] BYREF

  if ( !*((_QWORD *)this + 9) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1165LL);
  v6 = *((_QWORD *)a2 + 5);
  v7 = (CMonitorTopology *)*((_QWORD *)this + 2);
  v8 = (*(_BYTE *)(v6 + 31) & 0x20) == 0;
  v9 = (struct tagRECT *)(v6 + 88);
  v10 = (struct tagRECT *)((char *)this + 44);
  if ( v8 )
    v10 = v9;
  v26 = *v10;
  v11 = CMonitorTopology::MonitorDataFromRect(v7, a2, &v26);
  v14 = v11;
  if ( !v11 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (v24 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v24 = 0;
    }
    if ( v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v25 = 46;
      LOBYTE(v25) = v24;
      LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_q(
        WPP_GLOBAL_Control->AttachedDevice,
        v25,
        v12,
        v13,
        2,
        7,
        46,
        (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids,
        *(_QWORD *)a2);
    }
    *((_DWORD *)a3 + 1) = 2;
    return 0LL;
  }
  result = CMonitorTopology::GetMonitorFromId((const struct CMonitorTopology::MonitorData *)((char *)v11 + 44));
  if ( result )
    return result;
  v19 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v16) = 0;
  }
  if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v16,
      v17,
      v18,
      4,
      7,
      47,
      (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids);
  }
  if ( CRecalcState::MinimizeOnMonitorRemove(this, a2, v14, a3) )
  {
    *((_DWORD *)a3 + 1) = 3;
    return 0LL;
  }
  v23 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v19 = 0;
  }
  if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v20) = v19;
    LOBYTE(v21) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v20,
      v21,
      v22,
      4,
      7,
      48,
      (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids);
  }
  return *(struct tagMONITOR **)(GetDispInfo(v23) + 96);
}
