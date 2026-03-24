/*
 * XREFs of ?_IsModeSupportedByMonitorMode@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C02FCBF4
 * Callers:
 *     ?_IsSupportedModeInternal@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C011E870 (-_IsSupportedModeInternal@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_A.c)
 * Callees:
 *     ?HaveEquivalentMonitorFrequencyRequirements@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@0E@Z @ 0x1C000B6E4 (-HaveEquivalentMonitorFrequencyRequirements@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DKMDT_VIDEO_SIGNAL_INF.c)
 *     ?GetTruncatedMonitorVSyncFreq@DMMVIDEOSIGNALMODE@@SAIAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C005E798 (-GetTruncatedMonitorVSyncFreq@DMMVIDEOSIGNALMODE@@SAIAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_IsModeSupportedByMonitorMode(
        __int64 a1,
        __int64 a2,
        int a3,
        char a4,
        bool *a5,
        _DWORD *a6)
{
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 i; // rax
  bool HaveEquivalentMonitorFrequencyRequirements; // al
  __int64 v16; // rdx
  __int64 v17; // rcx
  char v18; // r10
  unsigned int TruncatedMonitorVSyncFreq; // eax
  unsigned int v20; // r11d
  bool v21; // cc
  char v22; // al
  __int64 v23; // rbx
  int v25; // eax
  __int64 v26; // rax

  if ( (unsigned int)(a3 - 1) > 1 )
  {
    v10 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !a5 )
  {
    v11 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !a6 )
  {
    v12 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v12);
  }
  v13 = a1 + 216;
  for ( i = *(_QWORD *)(a1 + 216); ; i = *(_QWORD *)(v23 + 96) )
  {
    if ( i == v13 )
      goto LABEL_24;
    v23 = i - 96;
    if ( !i )
      v23 = 0LL;
    if ( !v23 )
    {
LABEL_24:
      *a5 = 0;
      return 0LL;
    }
    if ( *(_DWORD *)(v23 + 84) != 5 )
    {
      if ( a3 == 2 )
      {
        HaveEquivalentMonitorFrequencyRequirements = DMMVIDEOSIGNALMODE::HaveEquivalentMonitorFrequencyRequirements(
                                                       (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)a2,
                                                       (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v23 + 8),
                                                       a4);
      }
      else
      {
        v17 = (unsigned int)DMMVIDEOSIGNALMODE::GetTruncatedMonitorVSyncFreq((const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)a2)
            - 56;
        if ( (unsigned int)v17 <= 5
          || (TruncatedMonitorVSyncFreq = DMMVIDEOSIGNALMODE::GetTruncatedMonitorVSyncFreq((const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v23 + 8)),
              v21 = v20 <= TruncatedMonitorVSyncFreq,
              v22 = 0,
              v21) )
        {
          v22 = 1;
        }
        if ( !v18
          || !v22
          || (HaveEquivalentMonitorFrequencyRequirements = 1,
              v17 = (unsigned int)(*(_DWORD *)(a2 + 48) ^ *(_DWORD *)(v23 + 56)),
              ((*(_BYTE *)(a2 + 48) ^ *(_BYTE *)(v23 + 56)) & 7) != 0) )
        {
          HaveEquivalentMonitorFrequencyRequirements = 0;
        }
      }
      *a5 = HaveEquivalentMonitorFrequencyRequirements;
      if ( HaveEquivalentMonitorFrequencyRequirements )
        break;
    }
  }
  v25 = *(_DWORD *)(v23 + 84);
  switch ( v25 )
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
  v26 = WdLogNewEntry5_WdError(v17, v16);
  *(_QWORD *)(v26 + 24) = *(int *)(v23 + 84);
  WdLogEvent5_WdError(v26);
  return 3223192354LL;
}
