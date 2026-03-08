/*
 * XREFs of ?GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z @ 0x1C0171AB4
 * Callers:
 *     ?DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C016ABF0 (-DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 *     ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z @ 0x1C017151C (-_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z.c)
 *     ?GetMonitorIdFromTargetId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG@Z @ 0x1C01C1D84 (-GetMonitorIdFromTargetId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG@Z.c)
 *     ?AcquireMonitorSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_DXGDMM_MONITORSOURCEMODESET_INTERFACE@@@Z @ 0x1C03AF680 (-AcquireMonitorSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3.c)
 *     ?IsUsingDefaultMonitorProfile@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXIPEAE@Z @ 0x1C03B1030 (-IsUsingDefaultMonitorProfile@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXIPEAE@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0007E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C00094F4 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     MonitorGetMonitorHandle @ 0x1C0171B54 (MonitorGetMonitorHandle.c)
 */

__int64 __fastcall VIDPN_MGR::GetConnectedMonitorHandle(VIDPN_MGR *this, unsigned int a2, struct HDXGMONITOR__ **a3)
{
  __int64 v3; // rbp
  __int64 v6; // rbx
  __int64 v7; // r10
  unsigned int MonitorHandle; // edi

  v3 = a2;
  if ( !a3 )
    WdLogSingleEntry0(1LL);
  *a3 = 0LL;
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 15) + 72LL));
  v6 = *((_QWORD *)this + 15);
  if ( IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v6, v3) )
  {
    if ( !v7 )
      WdLogSingleEntry0(1LL);
    MonitorHandle = MonitorGetMonitorHandle(
                      *(_QWORD *)(*((_QWORD *)this + 1) + 16LL),
                      (unsigned int)v3,
                      0LL,
                      1313891414LL,
                      a3);
  }
  else
  {
    if ( !v7 )
      WdLogSingleEntry0(1LL);
    WdLogSingleEntry2(2LL, v3, *(_QWORD *)(*((_QWORD *)this + 1) + 16LL));
    MonitorHandle = -1071774971;
  }
  if ( v6 )
    ReferenceCounted::Release((ReferenceCounted *)(v6 + 64));
  return MonitorHandle;
}
