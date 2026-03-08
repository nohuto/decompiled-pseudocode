/*
 * XREFs of ?GetMigrateMonitor@CRecalcState@@AEAAPEAUtagMONITOR@@PEAUtagWND@@PEAVCRecalcContext@@@Z @ 0x1C00FB688
 * Callers:
 *     ?xxxMigrate@CRecalcState@@QEAAXPEAUtagWND@@PEAVCRecalcContext@@@Z @ 0x1C00FB37C (-xxxMigrate@CRecalcState@@QEAAXPEAUtagWND@@PEAVCRecalcContext@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C003E064 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C003E900 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?GetMonitorFromId@CMonitorTopology@@SAPEAUtagMONITOR@@AEBUMonitorId@1@@Z @ 0x1C00FB828 (-GetMonitorFromId@CMonitorTopology@@SAPEAUtagMONITOR@@AEBUMonitorId@1@@Z.c)
 *     ?MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z @ 0x1C00FE8D0 (-MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z.c)
 *     ?MinimizeOnMonitorRemove@CRecalcState@@AEAA_NPEAUtagWND@@PEBUMonitorData@CMonitorTopology@@PEBVCRecalcContext@@@Z @ 0x1C01296A8 (-MinimizeOnMonitorRemove@CRecalcState@@AEAA_NPEAUtagWND@@PEBUMonitorData@CMonitorTopology@@PEBVC.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
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
  __int64 v12; // r9
  struct tagMONITOR *result; // rax
  int v14; // edx
  int v15; // r8d
  int v16; // r9d
  char v17; // bl
  int v18; // edx
  int v19; // r8d
  int v20; // r9d
  PDEVICE_OBJECT v21; // rcx
  char v22; // bl
  struct tagRECT v23; // [rsp+50h] [rbp-38h] BYREF
  struct CMonitorTopology::MonitorData *v24; // [rsp+90h] [rbp+8h]

  if ( !*((_QWORD *)this + 9) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1165LL);
  v6 = *((_QWORD *)a2 + 5);
  v7 = (CMonitorTopology *)*((_QWORD *)this + 2);
  v8 = (*(_BYTE *)(v6 + 31) & 0x20) == 0;
  v9 = (struct tagRECT *)(v6 + 88);
  v10 = (struct tagRECT *)((char *)this + 44);
  if ( v8 )
    v10 = v9;
  v23 = *v10;
  v11 = CMonitorTopology::MonitorDataFromRect(v7, a2, &v23);
  v24 = v11;
  if ( !v11 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
      || (v22 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v22 = 0;
    }
    if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v22,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        v12,
        2u,
        0x17u,
        0x2Eu,
        (__int64)&WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids,
        *(_QWORD *)a2);
    *((_DWORD *)a3 + 1) = 2;
    return 0LL;
  }
  result = CMonitorTopology::GetMonitorFromId((const struct CMonitorTopology::MonitorData *)((char *)v11 + 44));
  if ( result )
    return result;
  v17 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
    || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v14) = 0;
  }
  if ( (_BYTE)v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v14,
      v15,
      v16,
      4,
      23,
      47,
      (__int64)&WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids);
  }
  if ( CRecalcState::MinimizeOnMonitorRemove(this, a2, v24, a3) )
  {
    *((_DWORD *)a3 + 1) = 3;
    return 0LL;
  }
  v21 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v17 = 0;
  }
  if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v18) = v17;
    LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v18,
      v19,
      v20,
      4,
      23,
      48,
      (__int64)&WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids);
  }
  return *(struct tagMONITOR **)(GetDispInfo(v21) + 96);
}
