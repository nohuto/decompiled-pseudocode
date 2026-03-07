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
