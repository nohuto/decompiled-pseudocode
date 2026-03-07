void __fastcall MONITOR_MGR::_EnterMonitorPendingState(MONITOR_MGR *this)
{
  __int64 v2; // rdx
  int v3; // ecx

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 3) + 16LL)) )
    WdLogSingleEntry0(1LL);
  v2 = *((_QWORD *)this + 83);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 20);
    *(_DWORD *)(v2 + 20) = v3 + 1;
    if ( !v3 )
      KeClearEvent((PRKEVENT)(*((_QWORD *)this + 83) + 24LL));
  }
}
