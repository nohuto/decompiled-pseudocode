/*
 * XREFs of MonitorGetMonitorOrientationsFromTarget @ 0x1C01AA154
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAPEBU_D3DKMT_DISPLAYMODE@@PEAE@Z @ 0x1C01A9CE0 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?AddingMonitorOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W42@I@Z @ 0x1C01B02FC (-AddingMonitorOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W42@I@Z.c)
 * Callees:
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C01AAC00 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 MonitorGetMonitorOrientationsFromTarget(__int64 a1, unsigned int a2, _DWORD *a3, ...)
{
  unsigned int v3; // edi
  MONITOR_MGR *v7; // rcx
  struct DXGMONITOR *v8; // rbx
  int v9; // eax
  struct DXGMONITOR *v11; // [rsp+48h] [rbp+20h] BYREF
  va_list va; // [rsp+48h] [rbp+20h]
  va_list va1; // [rsp+50h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v11 = va_arg(va1, struct DXGMONITOR *);
  v3 = 0;
  if ( a1 && a2 != -1 )
  {
    if ( !*(_QWORD *)(a1 + 2920) )
      WdLogSingleEntry0(1LL);
    v7 = *(MONITOR_MGR **)(*(_QWORD *)(a1 + 2920) + 112LL);
    if ( v7 )
    {
      v11 = 0LL;
      if ( (int)MONITOR_MGR::_GetMonitorInstance(v7, a2, 1u, (struct DXGMONITOR **)va) >= 0 )
      {
        v8 = v11;
        if ( v11 )
        {
          KeEnterCriticalRegion();
          ExAcquireResourceSharedLite((PERESOURCE)((char *)v8 + 24), 1u);
          if ( a3 )
          {
            v9 = 0;
            if ( *((_DWORD *)v8 + 84) != *((_DWORD *)v8 + 82) )
              v9 = *((_DWORD *)v8 + 84);
            *a3 = v9;
          }
          ExReleaseResourceLite((PERESOURCE)((char *)v8 + 24));
          KeLeaveCriticalRegion();
          return v3;
        }
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, a1);
    }
    v3 = -1073741275;
    WdLogSingleEntry1(2LL, -1073741275LL);
    return v3;
  }
  return 3221225485LL;
}
