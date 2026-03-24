/*
 * XREFs of MonitorGetEdidBaseBlockPtr @ 0x1C02F408C
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C02B0498 (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00051D8 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0133648 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_GetEdidBaseBlockPtr@DXGMONITOR@@QEBAPEBXXZ @ 0x1C0133DD0 (-_GetEdidBaseBlockPtr@DXGMONITOR@@QEBAPEBXXZ.c)
 */

const void *__fastcall MonitorGetEdidBaseBlockPtr(DXGADAPTER *this, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  struct _FAST_MUTEX *v10; // rcx
  __int64 v11; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct DXGMONITOR *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  const void *EdidBaseBlockPtr; // rax
  struct _ERESOURCE *v21; // rcx
  const void *v22; // rbx
  struct DXGMONITOR *v23; // [rsp+30h] [rbp+8h] BYREF

  v2 = (unsigned int)a2;
  v4 = WdLogNewEntry5_WdTrace(this, a2);
  *(_QWORD *)(v4 + 24) = v2;
  *(_QWORD *)(v4 + 32) = this;
  if ( !this || (_DWORD)v2 == -1 )
    return 0LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6, v5);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *((_QWORD *)this + 337);
  if ( !v8 )
  {
    v9 = WdLogNewEntry5_WdAssertion(v6, v5);
    WdLogEvent5_WdAssertion(v9);
    v8 = *((_QWORD *)this + 337);
  }
  v10 = *(struct _FAST_MUTEX **)(v8 + 96);
  if ( !v10 )
  {
    v11 = WdLogNewEntry5_WdError(0LL, v5);
    *(_QWORD *)(v11 + 24) = this;
    WdLogEvent5_WdError(v11);
    return 0LL;
  }
  v23 = 0LL;
  if ( (int)MONITOR_MGR::_GetMonitorInstance(v10, (unsigned int)v2, 0, &v23) < 0 )
    return 0LL;
  v15 = v23;
  if ( !v23 )
  {
    v16 = WdLogNewEntry5_WdAssertion(v14, v13);
    WdLogEvent5_WdAssertion(v16);
    v19 = WdLogNewEntry5_WdAssertion(v18, v17);
    WdLogEvent5_WdAssertion(v19);
  }
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)((char *)v15 + 296), 1u);
  EdidBaseBlockPtr = DXGMONITOR::_GetEdidBaseBlockPtr(v15);
  v21 = (struct _ERESOURCE *)((char *)v15 + 296);
  v22 = EdidBaseBlockPtr;
  ExReleaseResourceLite(v21);
  KeLeaveCriticalRegion();
  return v22;
}
