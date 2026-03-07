__int64 __fastcall MonitorGetDeviceObject(__int64 a1, __int64 a2, struct _FILE_OBJECT **a3, struct _DEVICE_OBJECT **a4)
{
  __int64 v5; // rbx
  __int64 v8; // rax
  DxgMonitor::MonitorPnpState **v9; // rbx
  unsigned int DeviceObject; // edi
  DxgMonitor::MonitorPnpState **v12; // [rsp+30h] [rbp+8h] BYREF

  v5 = (unsigned int)a2;
  v8 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  *(_QWORD *)(v8 + 24) = v5;
  *(_QWORD *)(v8 + 32) = a1;
  if ( !a1 || (_DWORD)v5 == -1 )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    return 3221225485LL;
  }
  else
  {
    MONITOR_MGR::AcquireMonitorShared((struct DXGMONITOR **)&v12, a1, v5);
    v9 = v12;
    if ( v12 )
    {
      DeviceObject = DxgMonitor::MonitorPnpState::GetDeviceObject(v12[25], a3, a4);
    }
    else
    {
      DeviceObject = -1073741275;
      WdLogSingleEntry1(2LL, -1073741275LL);
    }
    if ( v9 )
    {
      ExReleaseResourceLite((PERESOURCE)(v9 + 3));
      KeLeaveCriticalRegion();
    }
    return DeviceObject;
  }
}
