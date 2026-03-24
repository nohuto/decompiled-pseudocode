/*
 * XREFs of MonitorSetScaleFactorOverride @ 0x1C02F553C
 * Callers:
 *     DxgkIddHandleSetDisplayConfig @ 0x1C025B8CC (DxgkIddHandleSetDisplayConfig.c)
 * Callees:
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0133648 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorSetScaleFactorOverride(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  struct _FAST_MUTEX *v11; // rcx
  __int64 v12; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct DXGMONITOR *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  struct DXGMONITOR *v21; // [rsp+30h] [rbp+8h] BYREF

  v4 = (unsigned int)a2;
  v6 = WdLogNewEntry5_WdTrace(a1, a2);
  *(_QWORD *)(v6 + 24) = v4;
  *(_QWORD *)(v6 + 32) = a1;
  if ( !a1 || (_DWORD)v4 == -1 )
    return 3221225485LL;
  v9 = *(_QWORD *)(a1 + 2696);
  if ( !v9 )
  {
    v10 = WdLogNewEntry5_WdAssertion(v8, v7);
    WdLogEvent5_WdAssertion(v10);
    v9 = *(_QWORD *)(a1 + 2696);
  }
  v11 = *(struct _FAST_MUTEX **)(v9 + 96);
  if ( !v11 )
  {
    v12 = WdLogNewEntry5_WdError(0LL, v7);
    *(_QWORD *)(v12 + 24) = a1;
    WdLogEvent5_WdError(v12);
    return 3221225485LL;
  }
  v21 = 0LL;
  if ( (int)MONITOR_MGR::_GetMonitorInstance(v11, (unsigned int)v4, 0, &v21) < 0 )
    return 3221225485LL;
  v16 = v21;
  if ( !v21 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v15, v14);
    WdLogEvent5_WdAssertion(v17);
    v20 = WdLogNewEntry5_WdAssertion(v19, v18);
    WdLogEvent5_WdAssertion(v20);
  }
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)((char *)v16 + 296), 1u);
  *((_DWORD *)v16 + 147) = a3;
  ExReleaseResourceLite((PERESOURCE)((char *)v16 + 296));
  KeLeaveCriticalRegion();
  return 0LL;
}
