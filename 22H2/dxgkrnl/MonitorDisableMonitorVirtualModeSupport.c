/*
 * XREFs of MonitorDisableMonitorVirtualModeSupport @ 0x1C02F3BA0
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C0135B50 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00051D8 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0133648 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ @ 0x1C0133DF8 (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ.c)
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0214E58 (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
 *     ?_DisableVirtualModeSupport@DXGMONITOR@@QEAAJ_N@Z @ 0x1C02F934C (-_DisableVirtualModeSupport@DXGMONITOR@@QEAAJ_N@Z.c)
 */

__int64 __fastcall MonitorDisableMonitorVirtualModeSupport(
        DXGADAPTER ***a1,
        unsigned int a2,
        char a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  __int64 v4; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  DXGADAPTER **v11; // rax
  __int64 v12; // rax
  struct _FAST_MUTEX *v13; // rcx
  __int64 v14; // rax
  __int64 result; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // esi
  __int64 v19; // rax
  struct DXGMONITOR *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  DXGMONITOR *v26; // rcx
  bool v27; // zf
  struct DXGMONITOR *v28; // [rsp+50h] [rbp+8h] BYREF

  v4 = a2;
  if ( !a1 || a2 == -1 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)a1) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9, v8);
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = a1[337];
  if ( !v11 )
  {
    v12 = WdLogNewEntry5_WdAssertion(v9, v8);
    WdLogEvent5_WdAssertion(v12);
    v11 = a1[337];
  }
  v13 = (struct _FAST_MUTEX *)v11[12];
  if ( !v13 )
  {
    v14 = WdLogNewEntry5_WdError(0LL, v8);
    *(_QWORD *)(v14 + 24) = a1;
    WdLogEvent5_WdError(v14);
    return 3221225485LL;
  }
  v28 = 0LL;
  result = MONITOR_MGR::_GetMonitorInstance(v13, (unsigned int)v4, 1, &v28);
  v18 = result;
  if ( (_DWORD)result == -1073741275 )
  {
    v19 = WdLogNewEntry5_WdError(v17, v16);
    *(_QWORD *)(v19 + 24) = v4;
    *(_QWORD *)(v19 + 32) = a1;
    WdLogEvent5_WdError(v19);
    return 3221225664LL;
  }
  else if ( (int)result >= 0 )
  {
    v20 = v28;
    if ( !v28 || *((_DWORD *)v28 + 108) != 1 )
    {
      v21 = WdLogNewEntry5_WdAssertion(v17, v16);
      WdLogEvent5_WdAssertion(v21);
    }
    if ( !v20 )
    {
      v22 = WdLogNewEntry5_WdAssertion(v17, v16);
      WdLogEvent5_WdAssertion(v22);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v20 + 296), 1u);
    if ( (*((_DWORD *)v20 + 10) & 2) != 0 )
    {
      v25 = WdLogNewEntry5_WdError(v24, v23);
      *(_QWORD *)(v25 + 24) = v4;
      *(_QWORD *)(v25 + 32) = a1;
      WdLogEvent5_WdError(v25);
      v18 = -1073741790;
    }
    else if ( DXGMONITOR::_IsVirtualModeSuportDisabled(v20) && (v27 = a3 == 0, !a3)
           || !DXGMONITOR::_IsVirtualModeSuportDisabled(v26) && (v27 = a3 == 0, a3) )
    {
      v18 = DXGMONITOR::_DisableVirtualModeSupport(v20, !v27);
      if ( v18 >= 0 )
        ADAPTER_DISPLAY::RequestAsyncDisplaySwitchCallout(a1[337], 0LL, a4);
    }
    ExReleaseResourceLite((PERESOURCE)((char *)v20 + 296));
    KeLeaveCriticalRegion();
    return (unsigned int)v18;
  }
  return result;
}
