void __fastcall MONITOR_MGR::_LeaveMonitorPendingState(MONITOR_MGR *this)
{
  __int64 v2; // rax

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 3) + 16LL)) )
    WdLogSingleEntry0(1LL);
  v2 = *((_QWORD *)this + 83);
  if ( v2 )
  {
    if ( (*(_DWORD *)(v2 + 20))-- == 1 )
      KeSetEvent((PRKEVENT)(*((_QWORD *)this + 83) + 24LL), 0, 0);
  }
}
