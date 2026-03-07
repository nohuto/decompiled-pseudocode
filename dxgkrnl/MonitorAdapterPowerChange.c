__int64 __fastcall MonitorAdapterPowerChange(PERESOURCE *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // rcx

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( !this )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
    WdLogSingleEntry0(1LL);
  result = (__int64)this[365];
  if ( result )
  {
    v7 = *(_QWORD *)(result + 112);
    if ( v7 )
      return MONITOR_MGR::_DestroyAllSameTypeSimulatedMonitor(v7, 3, 1, a3);
    WdLogSingleEntry1(2LL, this);
    return 3221225485LL;
  }
  return result;
}
