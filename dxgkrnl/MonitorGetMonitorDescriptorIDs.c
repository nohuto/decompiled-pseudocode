__int64 __fastcall MonitorGetMonitorDescriptorIDs(
        __int64 a1,
        __int64 a2,
        struct _DXGK_GENERIC_DESCRIPTOR *a3,
        __int64 a4)
{
  __int64 v5; // rbx
  __int64 v7; // rax
  DxgMonitor::MonitorDescriptorState **v8; // rbx
  unsigned int MonitorDescriptorPnpIds; // edi
  DxgMonitor::MonitorDescriptorState **v11; // [rsp+30h] [rbp+8h] BYREF

  v5 = (unsigned int)a2;
  v7 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  *(_QWORD *)(v7 + 24) = v5;
  *(_QWORD *)(v7 + 32) = a1;
  if ( !a1 || !a3 || (_DWORD)v5 == -1 )
    return 3221225485LL;
  MONITOR_MGR::AcquireMonitorShared((struct DXGMONITOR **)&v11, a1, v5);
  v8 = v11;
  if ( v11 )
  {
    MonitorDescriptorPnpIds = DxgMonitor::MonitorDescriptorState::GetMonitorDescriptorPnpIds(v11[27], a3);
  }
  else
  {
    MonitorDescriptorPnpIds = -1073741275;
    WdLogSingleEntry1(2LL, -1073741275LL);
  }
  if ( v8 )
  {
    ExReleaseResourceLite((PERESOURCE)(v8 + 3));
    KeLeaveCriticalRegion();
  }
  return MonitorDescriptorPnpIds;
}
