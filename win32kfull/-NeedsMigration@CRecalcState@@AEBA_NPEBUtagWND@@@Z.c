/*
 * XREFs of ?NeedsMigration@CRecalcState@@AEBA_NPEBUtagWND@@@Z @ 0x1C00FF140
 * Callers:
 *     ?CreateRecalcState@CRecalcState@@SAPEAV1@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcOption@@PEAW4ProcessingDecision@1@@Z @ 0x1C00FCDBC (-CreateRecalcState@CRecalcState@@SAPEAV1@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcOption@@.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C00FAFB4 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     ?MonitorDataFromId@CMonitorTopology@@QEBAPEBUMonitorData@1@AEBUMonitorId@1@@Z @ 0x1C00FF25C (-MonitorDataFromId@CMonitorTopology@@QEBAPEBUMonitorData@1@AEBUMonitorId@1@@Z.c)
 *     ?Compare@MonitorData@CMonitorTopology@@SA_NAEBU12@0@Z @ 0x1C01022AC (-Compare@MonitorData@CMonitorTopology@@SA_NAEBU12@0@Z.c)
 */

char __fastcall CRecalcState::NeedsMigration(CRecalcState *this, PETHREAD **a2)
{
  __int64 v2; // rsi
  char v5; // bl
  CMonitorTopology *v6; // rbp
  const struct CMonitorTopology::MonitorData *v7; // rdx
  char v9; // di
  char v10; // bl
  char v11; // di
  unsigned int ThreadId; // eax
  unsigned __int16 v13; // cx
  unsigned int v14; // [rsp+48h] [rbp-20h]

  v2 = *((_QWORD *)this + 9);
  if ( v2 )
  {
    v5 = 1;
    _InterlockedAdd((volatile signed __int32 *)qword_1C0361320, 1u);
    v6 = qword_1C0361320;
    v7 = CMonitorTopology::MonitorDataFromId(qword_1C0361320, (const struct CMonitorTopology::MonitorId *)(v2 + 44));
    if ( v7 )
    {
      if ( !*((_DWORD *)this + 7)
        && !*((_DWORD *)this + 8)
        && !*((_DWORD *)this + 10)
        && !*((_DWORD *)this + 9)
        && *((_DWORD *)v7 + 6) == *(_DWORD *)(v2 + 24)
        && *((_DWORD *)v7 + 7) == *(_DWORD *)(v2 + 28) )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
          || (v9 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
        {
          v9 = 0;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v5 = 0;
        }
        if ( !v9 && !v5 )
          goto LABEL_21;
        ThreadId = (unsigned int)PsGetThreadId(*a2[2]);
        v13 = 16;
LABEL_46:
        WPP_RECORDER_AND_TRACE_SF_qd(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v9,
          v5,
          (__int64)gFullLog,
          5u,
          0x17u,
          v13,
          (__int64)&WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids,
          *a2,
          ThreadId);
LABEL_21:
        v5 = 0;
        goto LABEL_7;
      }
      if ( CMonitorTopology::MonitorData::Compare((const struct CMonitorTopology::MonitorData *)v2, v7) )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
          || (v9 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
        {
          v9 = 0;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v5 = 0;
        }
        if ( !v9 && !v5 )
          goto LABEL_21;
        ThreadId = (unsigned int)PsGetThreadId(*a2[2]);
        v13 = 17;
        goto LABEL_46;
      }
    }
LABEL_7:
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v6, 0xFFFFFFFF) == 1 )
      Win32FreePool(v6);
    return v5;
  }
  v10 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
    || (v11 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v11 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v10 = 0;
  if ( v11 || v10 )
  {
    v14 = (unsigned int)PsGetThreadId(*a2[2]);
    WPP_RECORDER_AND_TRACE_SF_qd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v11,
      v10,
      (__int64)gFullLog,
      5u,
      0x17u,
      0xFu,
      (__int64)&WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids,
      *a2,
      v14);
  }
  return 0;
}
