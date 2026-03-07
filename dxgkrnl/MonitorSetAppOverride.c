__int64 __fastcall MonitorSetAppOverride(
        struct HDXGMONITOR__ *a1,
        GUID *a2,
        struct _GUID *a3,
        unsigned int a4,
        unsigned __int64 a5,
        bool a6,
        struct _UNICODE_STRING *a7)
{
  __int64 v12; // rbx
  unsigned int v13; // edi
  __int64 v14; // rax
  GUID v15; // xmm1
  int v16; // eax
  unsigned int v17; // esi
  __int64 v18; // rax
  struct DXGGLOBAL *Global; // rax
  int v20; // edi
  struct _GUID v21; // [rsp+40h] [rbp-C0h] BYREF
  GUID Guid; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v23[10]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v24[14]; // [rsp+B0h] [rbp-50h] BYREF
  int v25; // [rsp+120h] [rbp+20h]

  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    return 3221225485LL;
  }
  v24[0] = &MonitorEventDeferral::`vftable';
  memset(&v24[1], 0, 0x68uLL);
  v25 = 0;
  MONITOR_MGR::AcquireMonitorExclusive(&v21, a1);
  v12 = *(_QWORD *)&v21.Data1;
  if ( *(_QWORD *)&v21.Data1 )
  {
    v14 = *(_QWORD *)(*(_QWORD *)&v21.Data1 + 168LL);
    v15 = *a2;
    v21 = *a3;
    Guid = v15;
    v24[1] = (v14 + 8) & -(__int64)(v14 != 0);
    v16 = DxgMonitor::MonitorUsageState::SetAppOverride(
            *(DxgMonitor::MonitorUsageState **)(v12 + 240),
            &Guid,
            &v21,
            a4,
            a5,
            a6,
            a7);
    v17 = v16;
    if ( v16 >= 0 )
    {
      v18 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_MONITOR_OVERRIDE_PSEUDO_SPECIALIZED.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_MONITOR_OVERRIDE_PSEUDO_SPECIALIZED.Data1 )
        v18 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_MONITOR_OVERRIDE_PSEUDO_SPECIALIZED.Data4;
      if ( !v18 )
      {
        Global = DXGGLOBAL::GetGlobal();
        DXGGLOBAL::RecordFeatureUsage((__int64)Global, 12, 1);
      }
      DXGMONITOR::OnUsageUpdated((DXGMONITOR *)v12, (struct DxgMonitor::IMonitorDeferredEventSource *)v24, 1);
      v20 = *(_DWORD *)(*(_QWORD *)(v12 + 240) + 16LL);
      ExReleaseResourceLite((PERESOURCE)(v12 + 24));
      KeLeaveCriticalRegion();
      memset(v23, 0, 0x48uLL);
      EtwActivityIdControl(3u, (LPGUID)&v23[1]);
      v23[8] = MEMORY[0xFFFFF78000000014];
      LODWORD(v23[3]) = 67;
      LOBYTE(v23[6]) = -1;
      LODWORD(v23[4]) = v20;
      MonitorEventDeferral::FlushEventsWithContext(
        (MonitorEventDeferral *)v24,
        (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v23);
      v13 = 0;
      goto LABEL_14;
    }
    WdLogSingleEntry1(2LL, v16);
    v13 = v17;
  }
  else
  {
    v13 = -1073741275;
    WdLogSingleEntry1(2LL, -1073741275LL);
  }
  if ( v12 )
  {
    ExReleaseResourceLite((PERESOURCE)(v12 + 24));
    KeLeaveCriticalRegion();
  }
LABEL_14:
  MonitorEventDeferral::~MonitorEventDeferral((MonitorEventDeferral *)v24);
  return v13;
}
