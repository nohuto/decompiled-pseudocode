/*
 * XREFs of ?_IsSupportedModeInternal@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C011E870
 * Callers:
 *     ?IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C011E6B8 (-IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z.c)
 * Callees:
 *     ?_IsModeInActiveSizeRange@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@PEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C02FC98C (-_IsModeInActiveSizeRange@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_A.c)
 *     ?_IsModeInPixelRateRange@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@PEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C02FCAB8 (-_IsModeInPixelRateRange@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_AL.c)
 *     ?_IsModeSupportedByMonitorMode@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C02FCBF4 (-_IsModeSupportedByMonitorMode@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUN.c)
 */

__int64 __fastcall DXGMONITOR::_IsSupportedModeInternal(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        char *a4,
        int *a5,
        unsigned __int8 a6)
{
  unsigned __int128 v6; // rax
  _DWORD *v9; // rdi
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // rax
  char v13; // al
  unsigned int v14; // eax
  __int64 v15; // rbx
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // r10
  unsigned __int64 v18; // r11
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // r9
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  int IsModeInPixelRateRange; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rbx
  int v34; // eax
  __int64 v35; // rax
  int IsModeSupportedByMonitorMode; // eax
  __int64 v37; // rax
  int IsModeInActiveSizeRange; // eax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax

  *((_QWORD *)&v6 + 1) = a2;
  v9 = (_DWORD *)*((_QWORD *)&v6 + 1);
  v10 = a1;
  if ( a3 - 1 > 1 )
  {
    v24 = WdLogNewEntry5_WdAssertion(a1, *((_QWORD *)&v6 + 1));
    WdLogEvent5_WdAssertion(v24);
  }
  if ( !a4 )
  {
    v25 = WdLogNewEntry5_WdAssertion(a1, *((_QWORD *)&v6 + 1));
    WdLogEvent5_WdAssertion(v25);
  }
  if ( !a5 )
  {
    v26 = WdLogNewEntry5_WdAssertion(a1, *((_QWORD *)&v6 + 1));
    WdLogEvent5_WdAssertion(v26);
  }
  *a5 = 0;
  if ( a3 - 1 > 1 )
  {
    v27 = WdLogNewEntry5_WdAssertion(a1, *((_QWORD *)&v6 + 1));
    WdLogEvent5_WdAssertion(v27);
  }
  if ( !a4 )
  {
    v28 = WdLogNewEntry5_WdAssertion(a1, *((_QWORD *)&v6 + 1));
    WdLogEvent5_WdAssertion(v28);
  }
  v11 = *(_QWORD *)(v10 + 216);
  if ( v11 == v10 + 216 )
    goto LABEL_21;
  a1 = v11 - 96;
  if ( !v11 )
    a1 = 0LL;
  if ( !a1 )
  {
LABEL_21:
    v13 = 0;
  }
  else
  {
    while ( 1 )
    {
      if ( *(_DWORD *)(a1 + 84) == 5 && v9[3] == *(_DWORD *)(a1 + 20) && v9[4] == *(_DWORD *)(a1 + 24) )
      {
        *((_QWORD *)&v6 + 1) = (unsigned int)(v9[12] ^ *(_DWORD *)(a1 + 56));
        if ( ((*((_BYTE *)v9 + 48) ^ *(_BYTE *)(a1 + 56)) & 7) == 0 )
        {
          if ( a6 )
            break;
          v14 = v9[6];
          if ( v14 && *(_DWORD *)(a1 + 32) )
          {
            v15 = *(unsigned int *)(a1 + 28);
            v16 = 100000LL * (unsigned int)v9[5];
            v17 = v14 == 1000LL ? v16 / 0x3E8 : v16 / v14;
            v18 = *(unsigned int *)(a1 + 32);
            v19 = 99700 * v15;
            if ( v18 == 1000 )
            {
              v6 = v19 * (unsigned __int128)0x624DD2F1A9FBE77uLL;
              v20 = v19 / 0x3E8;
            }
            else
            {
              *((_QWORD *)&v6 + 1) = v19 % v18;
              v20 = v19 / v18;
            }
            if ( v17 >= v20 )
            {
              v21 = 100300 * v15;
              if ( v18 == 1000 )
              {
                v6 = v21 * (unsigned __int128)0x624DD2F1A9FBE77uLL;
                v22 = v21 / 0x3E8;
              }
              else
              {
                *((_QWORD *)&v6 + 1) = v21 % v18;
                v22 = v21 / v18;
              }
              if ( v17 <= v22 )
                break;
            }
          }
        }
      }
      v12 = *(_QWORD *)(a1 + 96);
      if ( v12 != v10 + 216 )
      {
        a1 = v12 - 96;
        if ( !v12 )
          a1 = 0LL;
        if ( a1 )
          continue;
      }
      goto LABEL_21;
    }
    *a5 = 7;
    v13 = 1;
  }
  *a4 = v13;
  if ( v13 )
    return 0LL;
  if ( *a5 )
  {
    v29 = WdLogNewEntry5_WdAssertion(a1, *((_QWORD *)&v6 + 1));
    WdLogEvent5_WdAssertion(v29);
  }
  if ( !a6 )
  {
    IsModeInPixelRateRange = DXGMONITOR::_IsModeInPixelRateRange(v10, v9, a3, a4, a5);
    v33 = IsModeInPixelRateRange;
    if ( IsModeInPixelRateRange < 0 )
      goto LABEL_57;
    v34 = *a5;
    if ( !*a4 )
      goto LABEL_58;
    if ( v34 )
    {
      v35 = WdLogNewEntry5_WdAssertion(v32, v31);
      WdLogEvent5_WdAssertion(v35);
    }
  }
  IsModeSupportedByMonitorMode = DXGMONITOR::_IsModeSupportedByMonitorMode(v10, v9, a3, a6, a4, a5);
  v33 = IsModeSupportedByMonitorMode;
  if ( IsModeSupportedByMonitorMode >= 0 )
  {
    v34 = *a5;
    if ( *a4 )
      goto LABEL_58;
    if ( v34 )
    {
      v37 = WdLogNewEntry5_WdAssertion(v32, v31);
      WdLogEvent5_WdAssertion(v37);
    }
    IsModeInActiveSizeRange = DXGMONITOR::_IsModeInActiveSizeRange(v10, v9, a3, a4, a5);
    v33 = IsModeInActiveSizeRange;
    if ( IsModeInActiveSizeRange >= 0 )
    {
      v34 = *a5;
      if ( !*a4 )
      {
        if ( v34 )
        {
          v39 = WdLogNewEntry5_WdAssertion(v32, v31);
          WdLogEvent5_WdAssertion(v39);
        }
        *a4 = 0;
        *a5 = 1;
        return 0LL;
      }
LABEL_58:
      if ( !v34 )
      {
        v41 = WdLogNewEntry5_WdAssertion(v32, v31);
        WdLogEvent5_WdAssertion(v41);
      }
      return 0LL;
    }
  }
LABEL_57:
  v40 = WdLogNewEntry5_WdError(v32, v31);
  *(_QWORD *)(v40 + 24) = v33;
  WdLogEvent5_WdError(v40);
  return (unsigned int)v33;
}
