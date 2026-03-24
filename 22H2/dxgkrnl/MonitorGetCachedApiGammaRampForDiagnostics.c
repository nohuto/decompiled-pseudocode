/*
 * XREFs of MonitorGetCachedApiGammaRampForDiagnostics @ 0x1C02F3FC4
 * Callers:
 *     ?Initialize@VIDPNTARGETINFO@@QEAAJPEAVDXGADAPTER@@PEBVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C02BBC90 (-Initialize@VIDPNTARGETINFO@@QEAAJPEAVDXGADAPTER@@PEBVDMMVIDEOPRESENTTARGET@@@Z.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0009DB4 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?GetCachedGammaRampForDiagnostics@DXGMONITOR@@QEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_DXGKRNL_SAMPLED_GAMMA@@@Z @ 0x1C02FBA24 (-GetCachedGammaRampForDiagnostics@DXGMONITOR@@QEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_DXGKRNL_SAMPLED_G.c)
 */

__int64 __fastcall MonitorGetCachedApiGammaRampForDiagnostics(
        struct HDXGMONITOR__ *a1,
        struct _DXGK_DIAG_BLACK_SCREEN_DXGKRNL_SAMPLED_GAMMA *a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  DXGMONITOR *v6; // rbx
  __int64 v7; // rax
  unsigned int CachedGammaRampForDiagnostics; // eax
  struct _ERESOURCE *v9; // rcx
  unsigned int v10; // ebx
  DXGMONITOR *v11; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  v11 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v11);
  if ( (int)result >= 0 )
  {
    v6 = v11;
    if ( !v11 )
    {
      v7 = WdLogNewEntry5_WdAssertion(v5, v4);
      WdLogEvent5_WdAssertion(v7);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v6 + 296), 1u);
    CachedGammaRampForDiagnostics = DXGMONITOR::GetCachedGammaRampForDiagnostics(v6, a2);
    v9 = (struct _ERESOURCE *)((char *)v6 + 296);
    v10 = CachedGammaRampForDiagnostics;
    ExReleaseResourceLite(v9);
    KeLeaveCriticalRegion();
    return v10;
  }
  return result;
}
