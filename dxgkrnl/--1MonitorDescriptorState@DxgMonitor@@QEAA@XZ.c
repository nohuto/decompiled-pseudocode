/*
 * XREFs of ??1MonitorDescriptorState@DxgMonitor@@QEAA@XZ @ 0x1C03C720C
 * Callers:
 *     ?_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@IPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAUDXGKMON_USB4_HOSTROUTER_INFO@@@Z @ 0x1C01F90BC (-_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV-$unique_ptr@VIMonitorDriverInterface@DxgMoni.c)
 *     ??1DXGMONITOR@@UEAA@XZ @ 0x1C03C45DC (--1DXGMONITOR@@UEAA@XZ.c)
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z @ 0x1C03C4A88 (-_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z.c)
 *     ?CopyInstance@MonitorDescriptorState@DxgMonitor@@QEBA?AV?$unique_ptr@VMonitorDescriptorState@DxgMonitor@@U?$default_delete@VMonitorDescriptorState@DxgMonitor@@@wistd@@@wistd@@AEBVIMonitorComponentParent@2@AEBVIMonitorRegistry@2@@Z @ 0x1C03C7304 (-CopyInstance@MonitorDescriptorState@DxgMonitor@@QEBA-AV-$unique_ptr@VMonitorDescriptorState@Dxg.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DxgMonitor::MonitorDescriptorState::~MonitorDescriptorState(PERESOURCE Resource)
{
  ULONG *p_ActiveEntries; // rdi
  _QWORD *v3; // rax
  _QWORD *v4; // rcx
  _QWORD *v5; // rcx
  void (__fastcall ***ExclusiveWaiters)(PVOID, __int64); // rcx
  void (__fastcall ***SharedWaiters)(PVOID, __int64); // rcx
  void (__fastcall ***v8)(_QWORD, __int64); // rcx

  p_ActiveEntries = &Resource[1].ActiveEntries;
  if ( *(ULONG **)p_ActiveEntries != p_ActiveEntries )
  {
    WdLogSingleEntry1(2LL, Resource);
    while ( 1 )
    {
      v3 = *(_QWORD **)p_ActiveEntries;
      if ( *(ULONG **)p_ActiveEntries == p_ActiveEntries )
        break;
      if ( (ULONG *)v3[1] != p_ActiveEntries || (v4 = (_QWORD *)*v3, *(_QWORD **)(*v3 + 8LL) != v3) )
        __fastfail(3u);
      *(_QWORD *)p_ActiveEntries = v4;
      v4[1] = p_ActiveEntries;
      v5 = v3 - 4;
      if ( !v3 )
        v5 = 0LL;
      operator delete(v5);
    }
  }
  ExclusiveWaiters = (void (__fastcall ***)(PVOID, __int64))Resource[1].ExclusiveWaiters;
  Resource[1].ExclusiveWaiters = 0LL;
  if ( ExclusiveWaiters )
    (**ExclusiveWaiters)(ExclusiveWaiters, 1LL);
  SharedWaiters = (void (__fastcall ***)(PVOID, __int64))Resource[1].SharedWaiters;
  Resource[1].SharedWaiters = 0LL;
  if ( SharedWaiters )
    (**SharedWaiters)(SharedWaiters, 1LL);
  v8 = *(void (__fastcall ****)(_QWORD, __int64))&Resource[1].ActiveCount;
  *(_QWORD *)&Resource[1].ActiveCount = 0LL;
  if ( v8 )
    (**v8)(v8, 1LL);
  ExDeleteResourceLite(Resource);
}
