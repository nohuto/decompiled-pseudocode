/*
 * XREFs of MonitorSerializeMonitorPresentEvents @ 0x1C03C014C
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C03A61F8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C03A6C1C (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_SerializeMonitorPresentEvent@MONITOR_MGR@@QEAAJPEA_KPEAU_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION@@@Z @ 0x1C03C412C (-_SerializeMonitorPresentEvent@MONITOR_MGR@@QEAAJPEA_KPEAU_DMM_MONITORPRESENCEEVENTSET_SERIALIZA.c)
 */

__int64 __fastcall MonitorSerializeMonitorPresentEvents(
        DXGADAPTER *a1,
        unsigned __int64 *a2,
        struct _DMM_MONITORPRESENCEEVENTSET_SERIALIZATION *a3)
{
  __int64 v6; // rax
  MONITOR_MGR *v8; // rcx

  if ( !a1 || !a2 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
    WdLogSingleEntry0(1LL);
  v6 = *((_QWORD *)a1 + 365);
  if ( !v6 )
  {
    WdLogSingleEntry1(2LL, a1);
    return 3221225659LL;
  }
  v8 = *(MONITOR_MGR **)(v6 + 112);
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL, a1);
    return 3221225485LL;
  }
  return MONITOR_MGR::_SerializeMonitorPresentEvent(v8, a2, a3);
}
