/*
 * XREFs of MonitorGetMonitorDescriptorIDs @ 0x1C01827EC
 * Callers:
 *     DpiPdoGetDeviceIdFromDescriptor @ 0x1C01826FC (DpiPdoGetDeviceIdFromDescriptor.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00051D8 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0133648 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_GetMonitorDescriptorIDs@DXGMONITOR@@QEAAJPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z @ 0x1C0182FF4 (-_GetMonitorDescriptorIDs@DXGMONITOR@@QEAAJPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z.c)
 */

__int64 __fastcall MonitorGetMonitorDescriptorIDs(DXGADAPTER *this, __int64 a2, struct _DXGK_GENERIC_DESCRIPTOR *a3)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  struct _FAST_MUTEX *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  int MonitorInstance; // edi
  struct DXGMONITOR *v14; // rdi
  int MonitorDescriptorIDs; // eax
  struct _ERESOURCE *v16; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  struct DXGMONITOR *v25; // [rsp+30h] [rbp+8h] BYREF

  v4 = (unsigned int)a2;
  v6 = WdLogNewEntry5_WdTrace(this, a2);
  *(_QWORD *)(v6 + 24) = v4;
  *(_QWORD *)(v6 + 32) = this;
  if ( !this || !a3 || (_DWORD)v4 == -1 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v8, v7);
    WdLogEvent5_WdAssertion(v18);
  }
  v9 = *((_QWORD *)this + 337);
  if ( !v9 )
  {
    v19 = WdLogNewEntry5_WdAssertion(v8, v7);
    WdLogEvent5_WdAssertion(v19);
    v9 = *((_QWORD *)this + 337);
  }
  v10 = *(struct _FAST_MUTEX **)(v9 + 96);
  if ( !v10 )
  {
    v20 = WdLogNewEntry5_WdError(0LL, v7);
    *(_QWORD *)(v20 + 24) = this;
    WdLogEvent5_WdError(v20);
    return 3221225485LL;
  }
  v25 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v10, (unsigned int)v4, 1, &v25);
  if ( MonitorInstance >= 0 )
  {
    v14 = v25;
    if ( !v25 )
    {
      v21 = WdLogNewEntry5_WdAssertion(v12, v11);
      WdLogEvent5_WdAssertion(v21);
      v24 = WdLogNewEntry5_WdAssertion(v23, v22);
      WdLogEvent5_WdAssertion(v24);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v14 + 296), 1u);
    MonitorDescriptorIDs = DXGMONITOR::_GetMonitorDescriptorIDs(v14, a3);
    v16 = (struct _ERESOURCE *)((char *)v14 + 296);
    MonitorInstance = MonitorDescriptorIDs;
    ExReleaseResourceLite(v16);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)MonitorInstance;
}
