/*
 * XREFs of MonitorSetUsageClass @ 0x1C02F5688
 * Callers:
 *     ?DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0221B50 (-DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00051D8 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0133648 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0179C8C (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x1C0185724 (-_CreateTtmDevice@DXGMONITOR@@QEAAJXZ.c)
 *     ?_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ @ 0x1C02F930C (-_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ.c)
 */

__int64 __fastcall MonitorSetUsageClass(DXGADAPTER *a1, unsigned int a2, int a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  struct _FAST_MUTEX *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  struct DXGMONITOR *v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // r15d
  char v22; // r13
  __int64 v23; // rdx
  int TtmDevice; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rsi
  __int64 v28; // rax
  struct DXGMONITOR *v29; // [rsp+70h] [rbp+8h] BYREF
  __int64 v30; // [rsp+88h] [rbp+20h]

  v30 = a4;
  v4 = a2;
  if ( !a1 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9, v8);
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = *((_QWORD *)a1 + 337);
  if ( !v11 )
  {
    v12 = WdLogNewEntry5_WdAssertion(v9, v8);
    WdLogEvent5_WdAssertion(v12);
    v11 = *((_QWORD *)a1 + 337);
  }
  v13 = *(struct _FAST_MUTEX **)(v11 + 96);
  if ( !v13 )
  {
    v14 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v14 + 24) = a1;
    WdLogEvent5_WdError(v14);
    return 3221225485LL;
  }
  v29 = 0LL;
  result = MONITOR_MGR::_GetMonitorInstance(v13, (unsigned int)v4, 1, &v29);
  if ( (_DWORD)result == -1073741275 )
  {
    v17 = WdLogNewEntry5_WdError(v16, v15);
    *(_QWORD *)(v17 + 24) = v4;
    *(_QWORD *)(v17 + 32) = a1;
    WdLogEvent5_WdError(v17);
    return 3221225664LL;
  }
  if ( (int)result >= 0 )
  {
    v18 = v29;
    if ( !v29 )
    {
      v19 = WdLogNewEntry5_WdAssertion(v16, v15);
      WdLogEvent5_WdAssertion(v19);
    }
    if ( *((_DWORD *)v18 + 108) != 1 )
    {
      v20 = WdLogNewEntry5_WdAssertion(v16, v15);
      WdLogEvent5_WdAssertion(v20);
    }
    v21 = *((_DWORD *)v18 + 148);
    v22 = *((_BYTE *)v18 + 596);
    if ( a3 != v21 )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite((PERESOURCE)((char *)v18 + 296), 1u);
      *((_DWORD *)v18 + 148) = a3;
      *((_BYTE *)v18 + 596) = 0;
      LODWORD(v29) = *((_DWORD *)v18 + 108);
      if ( a3 )
      {
        DXGMONITOR::_DestroyTtmDevice(v18);
      }
      else
      {
        TtmDevice = DXGMONITOR::_CreateTtmDevice(v18, v23);
        v27 = TtmDevice;
        if ( TtmDevice < 0 )
        {
          *((_DWORD *)v18 + 148) = v21;
          *((_BYTE *)v18 + 596) = v22;
          v28 = WdLogNewEntry5_WdError(v26, v25);
          *(_QWORD *)(v28 + 24) = v27;
          WdLogEvent5_WdError(v28);
          ExReleaseResourceLite((PERESOURCE)((char *)v18 + 296));
          KeLeaveCriticalRegion();
          return (unsigned int)v27;
        }
      }
      ExReleaseResourceLite((PERESOURCE)((char *)v18 + 296));
      KeLeaveCriticalRegion();
      MONITOR_MGR::_IssueMonitorEvent(v13, (unsigned int)v4, 10, (a3 != 0) + 1LL, (unsigned int)v29, v30);
    }
    return 0LL;
  }
  return result;
}
