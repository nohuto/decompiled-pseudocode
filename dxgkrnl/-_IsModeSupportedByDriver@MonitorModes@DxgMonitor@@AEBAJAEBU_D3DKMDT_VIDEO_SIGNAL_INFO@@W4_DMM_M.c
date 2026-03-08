/*
 * XREFs of ?_IsModeSupportedByDriver@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C03C8DCC
 * Callers:
 *     ?_IsSupportedModeInternal@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C03C8FEC (-_IsSupportedModeInternal@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_M.c)
 * Callees:
 *     ?HaveEquivalentMonitorFrequencyRequirements@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@0E@Z @ 0x1C000283C (-HaveEquivalentMonitorFrequencyRequirements@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DKMDT_VIDEO_SIGNAL_INF.c)
 */

__int64 __fastcall DxgMonitor::MonitorModes::_IsModeSupportedByDriver(
        __int64 a1,
        const struct _D3DKMDT_VIDEO_SIGNAL_INFO *a2,
        int a3,
        char a4,
        _BYTE *a5,
        _DWORD *a6)
{
  _QWORD *v9; // r14
  _QWORD *i; // rax
  _QWORD *v11; // rbx

  if ( (unsigned int)(a3 - 1) > 1 )
    WdLogSingleEntry0(1LL);
  if ( !a5 )
    WdLogSingleEntry0(1LL);
  if ( !a6 )
    WdLogSingleEntry0(1LL);
  v9 = (_QWORD *)(a1 + 128);
  *a6 = 0;
  for ( i = (_QWORD *)*v9; ; i = (_QWORD *)v11[12] )
  {
    if ( i == v9 )
      goto LABEL_15;
    v11 = i - 12;
    if ( !i )
      v11 = 0LL;
    if ( !v11 )
    {
LABEL_15:
      *a5 = 0;
      return 0LL;
    }
    if ( *((_DWORD *)v11 + 21) == 5
      && DMMVIDEOSIGNALMODE::HaveEquivalentMonitorFrequencyRequirements(
           a2,
           (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v11 + 1),
           a4) )
    {
      break;
    }
  }
  *a6 = 7;
  *a5 = 1;
  return 0LL;
}
