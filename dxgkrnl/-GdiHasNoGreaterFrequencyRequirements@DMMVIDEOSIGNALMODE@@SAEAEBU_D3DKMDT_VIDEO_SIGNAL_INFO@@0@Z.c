/*
 * XREFs of ?GdiHasNoGreaterFrequencyRequirements@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@0@Z @ 0x1C006BEEC
 * Callers:
 *     ?_IsModeSupportedByMonitorMode@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C03C8EB8 (-_IsModeSupportedByMonitorMode@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_.c)
 * Callees:
 *     ?GetTruncatedMonitorVSyncFreq@DMMVIDEOSIGNALMODE@@SAIAEBU_D3DDDI_RATIONAL@@@Z @ 0x1C006BF88 (-GetTruncatedMonitorVSyncFreq@DMMVIDEOSIGNALMODE@@SAIAEBU_D3DDDI_RATIONAL@@@Z.c)
 */

bool __fastcall DMMVIDEOSIGNALMODE::GdiHasNoGreaterFrequencyRequirements(
        const struct _D3DKMDT_VIDEO_SIGNAL_INFO *a1,
        const struct _D3DKMDT_VIDEO_SIGNAL_INFO *a2)
{
  UINT cx; // eax
  bool v4; // di
  D3DDDI_RATIONAL *p_VSyncFreq; // rsi
  const struct _D3DDDI_RATIONAL *v6; // rcx
  __int64 v7; // r10
  char v8; // r11
  unsigned int TruncatedMonitorVSyncFreq; // eax
  unsigned int v10; // r9d

  cx = a1->ActiveSize.cx;
  v4 = cx < a2->ActiveSize.cx || cx == a2->ActiveSize.cx && a1->ActiveSize.cy <= a2->ActiveSize.cy;
  p_VSyncFreq = &a1->VSyncFreq;
  if ( DMMVIDEOSIGNALMODE::GetTruncatedMonitorVSyncFreq(&a1->VSyncFreq) < 0x38
    || DMMVIDEOSIGNALMODE::GetTruncatedMonitorVSyncFreq(v6) > 0x3D )
  {
    DMMVIDEOSIGNALMODE::GetTruncatedMonitorVSyncFreq(&a2->VSyncFreq);
    TruncatedMonitorVSyncFreq = DMMVIDEOSIGNALMODE::GetTruncatedMonitorVSyncFreq(p_VSyncFreq);
    if ( TruncatedMonitorVSyncFreq > v10 )
      v8 = 0;
  }
  return v4 && v8 && ((*(_BYTE *)&a2->AdditionalSignalInfo ^ *(_BYTE *)(v7 + 48)) & 7) == 0;
}
