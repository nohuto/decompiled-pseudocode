/*
 * XREFs of ?_IsSupportedModeInternal@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C03C8FEC
 * Callers:
 *     ?IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C016E85C (-IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z.c)
 *     ?IsSupportedByMonitor@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@IQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C01FFDF0 (-IsSupportedByMonitor@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMO.c)
 * Callees:
 *     ?_IsModeInActiveSizeRange@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@PEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C03C8BBC (-_IsModeInActiveSizeRange@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_M.c)
 *     ?_IsModeInPixelRateRange@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@PEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C03C8CBC (-_IsModeInPixelRateRange@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MO.c)
 *     ?_IsModeSupportedByDriver@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C03C8DCC (-_IsModeSupportedByDriver@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_M.c)
 *     ?_IsModeSupportedByMonitorMode@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C03C8EB8 (-_IsModeSupportedByMonitorMode@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_.c)
 */

__int64 __fastcall DxgMonitor::MonitorModes::_IsSupportedModeInternal(
        __int64 a1,
        struct _D3DKMDT_VIDEO_SIGNAL_INFO *a2,
        int a3,
        char a4,
        bool *a5,
        int *a6)
{
  int IsModeSupportedByDriver; // eax
  __int64 v11; // rsi
  int IsModeInPixelRateRange; // eax
  int v14; // eax
  int IsModeSupportedByMonitorMode; // eax
  int v16; // eax
  int IsModeInActiveSizeRange; // eax
  int v18; // eax

  if ( (unsigned int)(a3 - 1) > 1 )
    WdLogSingleEntry0(1LL);
  if ( !a5 )
    WdLogSingleEntry0(1LL);
  if ( !a6 )
    WdLogSingleEntry0(1LL);
  *a6 = 0;
  IsModeSupportedByDriver = DxgMonitor::MonitorModes::_IsModeSupportedByDriver(a1, a2, a3, a4, a5, a6);
  v11 = IsModeSupportedByDriver;
  if ( IsModeSupportedByDriver < 0 )
    goto LABEL_8;
  if ( *a5 )
    return 0LL;
  if ( *a6 )
    WdLogSingleEntry0(1LL);
  if ( a4 )
  {
LABEL_19:
    IsModeSupportedByMonitorMode = DxgMonitor::MonitorModes::_IsModeSupportedByMonitorMode(a1, a2, a3, a4, a5, a6);
    v11 = IsModeSupportedByMonitorMode;
    if ( IsModeSupportedByMonitorMode >= 0 )
    {
      v16 = *a6;
      if ( *a5 )
      {
        if ( !v16 )
          goto LABEL_28;
        return 0LL;
      }
      if ( v16 )
        WdLogSingleEntry0(1LL);
      IsModeInActiveSizeRange = DxgMonitor::MonitorModes::_IsModeInActiveSizeRange(a1, a2, a3, (char *)a5, a6);
      v11 = IsModeInActiveSizeRange;
      if ( IsModeInActiveSizeRange >= 0 )
      {
        v18 = *a6;
        if ( !*a5 )
        {
          if ( v18 )
            WdLogSingleEntry0(1LL);
          *a5 = 0;
          *a6 = 1;
          return 0LL;
        }
        if ( !v18 )
          goto LABEL_28;
        return 0LL;
      }
    }
LABEL_8:
    WdLogSingleEntry1(2LL, v11);
    return (unsigned int)v11;
  }
  IsModeInPixelRateRange = DxgMonitor::MonitorModes::_IsModeInPixelRateRange(a1, (__int64)a2, a3, a5, a6);
  v11 = IsModeInPixelRateRange;
  if ( IsModeInPixelRateRange < 0 )
    goto LABEL_8;
  v14 = *a6;
  if ( *a5 )
  {
    if ( v14 )
      WdLogSingleEntry0(1LL);
    goto LABEL_19;
  }
  if ( !v14 )
LABEL_28:
    WdLogSingleEntry0(1LL);
  return 0LL;
}
