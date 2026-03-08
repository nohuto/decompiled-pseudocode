/*
 * XREFs of ?_IsModeSupportedByMonitorMode@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C03C8EB8
 * Callers:
 *     ?IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C016E85C (-IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z.c)
 *     ?IsSupportedByMonitor@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@IQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C01FFDF0 (-IsSupportedByMonitor@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMO.c)
 *     ?_IsSupportedModeInternal@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C03C8FEC (-_IsSupportedModeInternal@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_M.c)
 * Callees:
 *     ?HaveEquivalentMonitorFrequencyRequirements@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@0E@Z @ 0x1C000283C (-HaveEquivalentMonitorFrequencyRequirements@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DKMDT_VIDEO_SIGNAL_INF.c)
 *     ?GdiHasNoGreaterFrequencyRequirements@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@0@Z @ 0x1C006BEEC (-GdiHasNoGreaterFrequencyRequirements@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@0@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorModes::_IsModeSupportedByMonitorMode(
        __int64 a1,
        const struct _D3DKMDT_VIDEO_SIGNAL_INFO *a2,
        int a3,
        char a4,
        bool *a5,
        _DWORD *a6)
{
  _QWORD *v10; // r15
  _QWORD *i; // rax
  int v12; // edi
  const struct _D3DKMDT_VIDEO_SIGNAL_INFO *v13; // rdx
  bool HaveEquivalentMonitorFrequencyRequirements; // al
  _QWORD *v15; // rbx

  if ( (unsigned int)(a3 - 1) > 1 )
    WdLogSingleEntry0(1LL);
  if ( !a5 )
    WdLogSingleEntry0(1LL);
  if ( !a6 )
    WdLogSingleEntry0(1LL);
  v10 = (_QWORD *)(a1 + 128);
  *a6 = 0;
  for ( i = (_QWORD *)*v10; ; i = (_QWORD *)v15[12] )
  {
    if ( i == v10 )
      goto LABEL_18;
    v15 = i - 12;
    if ( !i )
      v15 = 0LL;
    if ( !v15 )
    {
LABEL_18:
      *a5 = 0;
      return 0LL;
    }
    v12 = *((_DWORD *)v15 + 21);
    if ( v12 != 5 )
    {
      v13 = (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v15 + 1);
      if ( a3 == 2 )
      {
        HaveEquivalentMonitorFrequencyRequirements = DMMVIDEOSIGNALMODE::HaveEquivalentMonitorFrequencyRequirements(
                                                       a2,
                                                       v13,
                                                       a4);
        v12 = *((_DWORD *)v15 + 21);
      }
      else
      {
        HaveEquivalentMonitorFrequencyRequirements = DMMVIDEOSIGNALMODE::GdiHasNoGreaterFrequencyRequirements(a2, v13);
      }
      *a5 = HaveEquivalentMonitorFrequencyRequirements;
      if ( HaveEquivalentMonitorFrequencyRequirements )
        break;
    }
  }
  switch ( v12 )
  {
    case 2:
      *a6 = 2;
      return 0LL;
    case 3:
      *a6 = 4;
      return 0LL;
    case 1:
      *a6 = 6;
      return 0LL;
  }
  WdLogSingleEntry1(2LL, v12);
  return 3223192354LL;
}
