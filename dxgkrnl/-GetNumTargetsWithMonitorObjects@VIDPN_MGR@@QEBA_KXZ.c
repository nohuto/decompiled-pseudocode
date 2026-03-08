/*
 * XREFs of ?GetNumTargetsWithMonitorObjects@VIDPN_MGR@@QEBA_KXZ @ 0x1C001F8C4
 * Callers:
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C02027E0 (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVD.c)
 * Callees:
 *     MonitorGetNumConnectedMonitor @ 0x1C016A9D8 (MonitorGetNumConnectedMonitor.c)
 */

unsigned __int64 __fastcall VIDPN_MGR::GetNumTargetsWithMonitorObjects(VIDPN_MGR *this)
{
  unsigned int v2; // ebx
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  v2 = 1;
  if ( !*((_QWORD *)this + 1) )
    WdLogSingleEntry0(1LL);
  if ( (int)MonitorGetNumConnectedMonitor(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL), &v4) < 0 )
    WdLogSingleEntry0(1LL);
  if ( v4 > 1 )
    return v4;
  return v2;
}
