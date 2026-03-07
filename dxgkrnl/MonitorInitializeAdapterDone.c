__int64 __fastcall MonitorInitializeAdapterDone(
        PERESOURCE *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax
  MONITOR_MGR *v7; // rcx

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( !this )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
    WdLogSingleEntry0(1LL);
  result = (__int64)this[365];
  if ( result )
  {
    v7 = *(MONITOR_MGR **)(result + 112);
    if ( v7 )
      return MONITOR_MGR::_OnAdapterInitializationDone(v7, a2);
    WdLogSingleEntry1(2LL, this);
    return 3221225485LL;
  }
  return result;
}
