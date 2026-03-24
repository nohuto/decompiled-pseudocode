/*
 * XREFs of MonitorGetPreferredScaleFactor @ 0x1C014CC64
 * Callers:
 *     ?GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z @ 0x1C014CBB0 (-GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00051D8 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0133648 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetPreferredScaleFactor(DXGADAPTER *a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  struct _FAST_MUTEX *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct DXGMONITOR *v12; // rbx
  int v13; // eax
  struct _ERESOURCE *v14; // rcx
  unsigned int v15; // ebx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  struct DXGMONITOR *v25; // [rsp+30h] [rbp+8h] BYREF

  v3 = (unsigned int)a2;
  if ( !a1 || (_DWORD)a2 == -1 )
  {
    v19 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v19 + 24) = -1073741811LL;
    goto LABEL_18;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v7, v6);
    WdLogEvent5_WdAssertion(v17);
  }
  v8 = *((_QWORD *)a1 + 337);
  if ( !v8 )
  {
    v18 = WdLogNewEntry5_WdAssertion(v7, v6);
    WdLogEvent5_WdAssertion(v18);
    v8 = *((_QWORD *)a1 + 337);
  }
  v9 = *(struct _FAST_MUTEX **)(v8 + 96);
  if ( !v9 )
  {
    v19 = WdLogNewEntry5_WdError(0LL, v6);
    *(_QWORD *)(v19 + 24) = a1;
LABEL_18:
    WdLogEvent5_WdError(v19);
    return 3221225485LL;
  }
  v25 = 0LL;
  if ( (int)MONITOR_MGR::_GetMonitorInstance(v9, (unsigned int)v3, 1, &v25) < 0 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10);
    v20[4] = a1;
    v15 = -1073741275;
    v20[5] = -1073741275LL;
    v20[3] = v3;
    WdLogEvent5_WdError(v20);
  }
  else
  {
    v12 = v25;
    if ( !v25 )
    {
      v21 = WdLogNewEntry5_WdAssertion(v11, v10);
      WdLogEvent5_WdAssertion(v21);
      v24 = WdLogNewEntry5_WdAssertion(v23, v22);
      WdLogEvent5_WdAssertion(v24);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v12 + 296), 1u);
    v13 = *((_DWORD *)v12 + 147);
    if ( !v13 )
      v13 = *((_DWORD *)v12 + 146);
    *a3 = v13;
    v14 = (struct _ERESOURCE *)((char *)v12 + 296);
    v15 = v13 == 0 ? 0xC0000001 : 0;
    ExReleaseResourceLite(v14);
    KeLeaveCriticalRegion();
  }
  return v15;
}
