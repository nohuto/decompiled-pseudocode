/*
 * XREFs of ?_IsModeInActiveSizeRange@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@PEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C03C8BBC
 * Callers:
 *     ?IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C016E85C (-IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z.c)
 *     ?IsSupportedByMonitor@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@IQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C01FFDF0 (-IsSupportedByMonitor@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMO.c)
 *     ?_IsSupportedModeInternal@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C03C8FEC (-_IsSupportedModeInternal@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_M.c)
 * Callees:
 *     SupportedVideoSignal @ 0x1C03C839C (SupportedVideoSignal.c)
 */

__int64 __fastcall DxgMonitor::MonitorModes::_IsModeInActiveSizeRange(
        __int64 a1,
        _DWORD *a2,
        int a3,
        char *a4,
        _DWORD *a5)
{
  __int64 v9; // rcx
  __int64 i; // rax
  int *v11; // rbx
  char v13; // al

  if ( (unsigned int)(a3 - 1) > 1 )
    WdLogSingleEntry0(1LL);
  if ( !a4 )
    WdLogSingleEntry0(1LL);
  if ( !a5 )
    WdLogSingleEntry0(1LL);
  v9 = a1 + 176;
  *a5 = 0;
  for ( i = *(_QWORD *)(a1 + 176); ; i = *((_QWORD *)v11 + 6) )
  {
    if ( i == v9 )
      goto LABEL_14;
    v11 = (int *)(i - 48);
    if ( !i )
      v11 = 0LL;
    if ( !v11 )
    {
LABEL_14:
      *a4 = 0;
      return 0LL;
    }
    if ( v11[9] == 1 )
      break;
  }
  v13 = SupportedVideoSignal(a2, (unsigned int *)v11, a3);
  *a4 = v13;
  if ( !v13 )
    return 0LL;
  if ( *v11 == 4 )
  {
    *a5 = 8;
    return 0LL;
  }
  WdLogSingleEntry1(2LL, *v11);
  return 3223192348LL;
}
