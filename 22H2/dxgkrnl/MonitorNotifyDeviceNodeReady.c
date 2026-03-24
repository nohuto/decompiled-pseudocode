/*
 * XREFs of MonitorNotifyDeviceNodeReady @ 0x1C01838B8
 * Callers:
 *     DpiPdoDispatchPnp @ 0x1C0165A20 (DpiPdoDispatchPnp.c)
 *     DpiPdoHandleChildConnectionChange @ 0x1C0178898 (DpiPdoHandleChildConnectionChange.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0002910 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?_GetAttachedPhysicalMonitor@DXGMONITOR@@QEAAPEAV1@XZ @ 0x1C005DF18 (-_GetAttachedPhysicalMonitor@DXGMONITOR@@QEAAPEAV1@XZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0133648 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C0148D38 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0180460 (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_GetMonitorDiagInfo@DXGMONITOR@@QEAAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C018323C (-_GetMonitorDiagInfo@DXGMONITOR@@QEAAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z.c)
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z @ 0x1C02F9F68 (-_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z.c)
 */

__int64 __fastcall MonitorNotifyDeviceNodeReady(PERESOURCE *this, unsigned int a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  PERESOURCE v11; // rax
  struct _FAST_MUTEX *SpinLock; // r14
  struct DXGMONITOR *AttachedPhysicalMonitor; // rsi
  int MonitorInstance; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  DXGMONITOR *v17; // rdi
  int v18; // ebx
  int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // esi
  struct DXGMONITOR *v23; // rdi
  __int64 v24; // r8
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  DXGMONITOR *v34; // [rsp+30h] [rbp-69h] BYREF
  struct DXGMONITOR *v35; // [rsp+38h] [rbp-61h] BYREF
  _OWORD v36[2]; // [rsp+40h] [rbp-59h] BYREF
  _QWORD v37[10]; // [rsp+60h] [rbp-39h] BYREF

  v3 = a2;
  memset(v37, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v37[1]);
  v37[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v37[3]) = 8;
  LOBYTE(v37[6]) = -1;
  v8 = WdLogNewEntry5_WdTrace(v7, v6);
  *(_QWORD *)(v8 + 24) = v3;
  *(_QWORD *)(v8 + 32) = this;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    v26 = WdLogNewEntry5_WdAssertion(v10, v9);
    WdLogEvent5_WdAssertion(v26);
  }
  v11 = this[337];
  if ( !v11 )
  {
    v27 = WdLogNewEntry5_WdAssertion(v10, v9);
    WdLogEvent5_WdAssertion(v27);
    v11 = this[337];
  }
  SpinLock = (struct _FAST_MUTEX *)v11->SpinLock;
  if ( !SpinLock )
  {
    v28 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v28 + 24) = this;
    WdLogEvent5_WdError(v28);
    return 3221225485LL;
  }
  v34 = 0LL;
  AttachedPhysicalMonitor = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(SpinLock, (unsigned int)v3, 0, &v34);
  v17 = v34;
  v18 = MonitorInstance;
  if ( MonitorInstance < 0 )
  {
    if ( v34 )
    {
      v30 = WdLogNewEntry5_WdAssertion(v16, v15);
      WdLogEvent5_WdAssertion(v30);
    }
    if ( v18 == -1073741275 )
      goto LABEL_27;
    v31 = WdLogNewEntry5_WdAssertion(v16, v15);
    WdLogEvent5_WdAssertion(v31);
  }
  else
  {
    if ( !v34 )
    {
      v29 = WdLogNewEntry5_WdAssertion(v16, v15);
      WdLogEvent5_WdAssertion(v29);
    }
    if ( *((_DWORD *)v17 + 108) == 1 )
    {
      AttachedPhysicalMonitor = v17;
      v17 = 0LL;
    }
    else
    {
      AttachedPhysicalMonitor = DXGMONITOR::_GetAttachedPhysicalMonitor(v17, v15);
    }
  }
  if ( !AttachedPhysicalMonitor || *((_QWORD *)AttachedPhysicalMonitor + 7) != a3 )
  {
LABEL_27:
    v33 = WdLogNewEntry5_WdDmmEvent(v16);
    *(_QWORD *)(v33 + 24) = v3;
    WdLogEvent5_WdDmmEvent(v33);
    return 3221226021LL;
  }
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)((char *)AttachedPhysicalMonitor + 296), 1u);
  v19 = DXGMONITOR::_OnMonitorDeviceNodeReady(AttachedPhysicalMonitor, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v37);
  ExReleaseResourceLite((PERESOURCE)((char *)AttachedPhysicalMonitor + 296));
  KeLeaveCriticalRegion();
  if ( v19 >= 0 && v17 )
  {
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite((PERESOURCE)((char *)v17 + 296), 1u);
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)AttachedPhysicalMonitor + 296), 1u);
    DXGMONITOR::_CopyMonitorInformation(v17, AttachedPhysicalMonitor);
    ExReleaseResourceLite((PERESOURCE)((char *)AttachedPhysicalMonitor + 296));
    KeLeaveCriticalRegion();
    ExReleaseResourceLite((PERESOURCE)((char *)v17 + 296));
    KeLeaveCriticalRegion();
  }
  v35 = 0LL;
  memset(v36, 0, sizeof(v36));
  v22 = MONITOR_MGR::_GetMonitorInstance(SpinLock, (unsigned int)v3, 1, &v35);
  if ( v22 >= 0 )
  {
    v23 = v35;
    if ( !v35 )
    {
      v32 = WdLogNewEntry5_WdAssertion(v21, v20);
      WdLogEvent5_WdAssertion(v32);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v23 + 296), 1u);
    DXGMONITOR::_GetMonitorDiagInfo(v23, (struct _DXGK_DIAG_MONITOR_MGR_EXTRA_INFO *)v36, v24);
    ExReleaseResourceLite((PERESOURCE)((char *)v23 + 296));
    KeLeaveCriticalRegion();
  }
  MONITOR_MGR::_LogMonitorPresentEvent((__int64)SpinLock, 7LL, v3, v22, v36);
  return (unsigned int)v22;
}
