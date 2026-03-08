/*
 * XREFs of ?_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C03C37E4
 * Callers:
 *     MonitorRemovePhysicalMonitor @ 0x1C03BFFD0 (MonitorRemovePhysicalMonitor.c)
 * Callees:
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C000A280 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C006B0E4 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C01AAC00 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@UEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01E77F0 (-_IssueMonitorEvent@MONITOR_MGR@@UEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C01FBCA0 (-_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0225178 (-_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@.c)
 *     ?_ChangeLIDStatus@DXGMONITOR@@QEAAX_N@Z @ 0x1C03C4934 (-_ChangeLIDStatus@DXGMONITOR@@QEAAX_N@Z.c)
 *     ?_SetAttachedPhysicalMonitor@DXGMONITOR@@QEAAXPEAV1@@Z @ 0x1C03C5474 (-_SetAttachedPhysicalMonitor@DXGMONITOR@@QEAAXPEAV1@@Z.c)
 *     ?ReportHpdDepartureSkipped@MonitorUsb4State@DxgMonitor@@QEAAXXZ @ 0x1C03C640C (-ReportHpdDepartureSkipped@MonitorUsb4State@DxgMonitor@@QEAAXXZ.c)
 */

__int64 __fastcall MONITOR_MGR::_HandleRemovePhysicalMonitor(
        MONITOR_MGR *this,
        unsigned int a2,
        char a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  __int64 v4; // rsi
  int MonitorInstance; // ebx
  __int64 v9; // rbp
  DXGMONITOR *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  DxgMonitor::MonitorUsb4State *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // rax
  int v24; // r14d
  DXGMONITOR *v25; // rcx
  _QWORD *v26; // rcx
  DXGMONITOR *v27[5]; // [rsp+30h] [rbp-28h] BYREF
  int v28; // [rsp+68h] [rbp+10h] BYREF

  v4 = a2;
  if ( a2 == -1 )
    WdLogSingleEntry0(1LL);
  v27[0] = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(this, v4, 0, v27);
  v9 = 2LL;
  if ( MonitorInstance < 0 )
    goto LABEL_17;
  v10 = v27[0];
  if ( !v27[0] )
    WdLogSingleEntry0(1LL);
  if ( (*((_BYTE *)v10 + 176) & 2) != 0 )
  {
    DXGMONITOR::_ChangeLIDStatus(v10, 0);
    if ( a3 )
    {
      v15 = WdLogNewEntry5_WdTrace(v12, v11, v13, v14);
      *(_QWORD *)(v15 + 24) = v4;
      *(_QWORD *)(v15 + 32) = this;
      return 0LL;
    }
  }
  v17 = (DxgMonitor::MonitorUsb4State *)*((_QWORD *)v10 + 33);
  if ( !*((_BYTE *)v17 + 8) || !*((_BYTE *)v17 + 56) )
  {
    v24 = *((_DWORD *)v10 + 78);
    if ( v24 == 1 )
    {
      if ( (int)MONITOR_MGR::_RemoveMonitorFromList(this, v10) < 0 )
        WdLogSingleEntry0(1LL);
      v26 = (_QWORD *)((char *)this + 8);
      if ( *(_DWORD *)(*((_QWORD *)v10 + 30) + 16LL) )
        v9 = 5LL;
      v24 = 1;
    }
    else
    {
      v25 = v10;
      v10 = (DXGMONITOR *)*((_QWORD *)v10 + 40);
      DXGMONITOR::_SetAttachedPhysicalMonitor(v25, 0LL);
      if ( !v10 )
      {
        MonitorInstance = -1073741275;
LABEL_17:
        WdLogSingleEntry2(2LL, v4, this);
        return (unsigned int)MonitorInstance;
      }
      v9 = 3LL;
      v26 = (_QWORD *)((char *)this + 8);
    }
    MONITOR_MGR::_IssueMonitorEvent(v26, *((_DWORD *)v10 + 45), 0, v9, v24, (__int64)a4);
    return MONITOR_MGR::_DestroyPhysicalMonitor(this, v10, a4);
  }
  DxgMonitor::MonitorUsb4State::ReportHpdDepartureSkipped(v17);
  DxgkLogCodePointPacket(
    0x7Bu,
    *((_DWORD *)v10 + 45),
    0,
    0,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 404LL));
  if ( (unsigned int)dword_1C013A8A8 > 5 )
  {
    v22 = *(_QWORD *)(*((_QWORD *)this + 3) + 16LL);
    v27[0] = *(DXGMONITOR **)(v22 + 404);
    v28 = *((_DWORD *)v10 + 45);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v22,
      byte_1C00A0F35,
      v20,
      v21,
      (__int64)&v28,
      (__int64)v27);
  }
  v23 = WdLogNewEntry5_WdTrace(v19, v18, v20, v21);
  *(_QWORD *)(v23 + 24) = v4;
  *(_QWORD *)(v23 + 32) = this;
  return 128LL;
}
