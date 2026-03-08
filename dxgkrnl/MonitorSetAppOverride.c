/*
 * XREFs of MonitorSetAppOverride @ 0x1C03C03F8
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01AB2A0 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?AcquireMonitorExclusive@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@PEAUHDXGMONITOR__@@@Z @ 0x1C0001EBC (-AcquireMonitorExclusive@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@PEAUHDXGMONIT.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?FlushEventsWithContext@MonitorEventDeferral@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01F84CC (-FlushEventsWithContext@MonitorEventDeferral@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ??1MonitorEventDeferral@@UEAA@XZ @ 0x1C01FB908 (--1MonitorEventDeferral@@UEAA@XZ.c)
 *     ?OnUsageUpdated@DXGMONITOR@@QEAAXAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z @ 0x1C0201834 (-OnUsageUpdated@DXGMONITOR@@QEAAXAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z.c)
 *     ?RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z @ 0x1C020C7CC (-RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z.c)
 *     ?SetAppOverride@MonitorUsageState@DxgMonitor@@QEAAJU_GUID@@0I_K_NPEBU_UNICODE_STRING@@@Z @ 0x1C03C9E7C (-SetAppOverride@MonitorUsageState@DxgMonitor@@QEAAJU_GUID@@0I_K_NPEBU_UNICODE_STRING@@@Z.c)
 */

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
