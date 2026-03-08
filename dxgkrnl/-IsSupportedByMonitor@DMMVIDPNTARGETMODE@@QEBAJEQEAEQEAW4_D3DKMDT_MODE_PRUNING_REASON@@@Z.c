/*
 * XREFs of ?IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C016E85C
 * Callers:
 *     BmlIsSupportedByMonitorTargetMode @ 0x1C016E808 (BmlIsSupportedByMonitorTargetMode.c)
 * Callees:
 *     ?IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z @ 0x1C0002890 (-IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONITOR__@@@Z @ 0x1C000935C (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONI.c)
 *     ??1?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@QEAA@XZ @ 0x1C00093B0 (--1-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?_IsModeInActiveSizeRange@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@PEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C03C8BBC (-_IsModeInActiveSizeRange@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_M.c)
 *     ?_IsModeInPixelRateRange@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@PEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C03C8CBC (-_IsModeInPixelRateRange@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MO.c)
 *     ?_IsModeSupportedByMonitorMode@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C03C8EB8 (-_IsModeSupportedByMonitorMode@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_.c)
 *     ?_IsSupportedModeInternal@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C03C8FEC (-_IsSupportedModeInternal@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_M.c)
 */

__int64 __fastcall DMMVIDPNTARGETMODE::IsSupportedByMonitor(
        DMMVIDPNTARGETMODE *this,
        char a2,
        unsigned __int8 *const a3,
        enum _D3DKMDT_MODE_PRUNING_REASON *const a4)
{
  DMMVIDPNTARGETMODE *v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r9
  char *v11; // r13
  __int64 v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // rax
  int v18; // r12d
  __int64 v19; // rdi
  unsigned __int8 v20; // r15
  _QWORD *v21; // rdx
  int v22; // esi
  _QWORD *i; // rax
  _QWORD *v24; // rdi
  unsigned __int8 v25; // di
  int IsSupportedModeInternal; // eax
  unsigned __int8 v27; // r13
  enum _D3DKMDT_MODE_PRUNING_REASON v28; // r15d
  __int64 v29; // rdi
  int v30; // ebx
  int IsModeInPixelRateRange; // eax
  int IsModeSupportedByMonitorMode; // eax
  int IsModeInActiveSizeRange; // eax
  __int64 v35; // rsi
  int v36; // eax
  int v37; // eax
  int v38; // eax
  unsigned __int8 v39; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int8 v40; // [rsp+31h] [rbp-37h]
  int v41; // [rsp+34h] [rbp-34h] BYREF
  enum _D3DKMDT_MODE_PRUNING_REASON v42; // [rsp+38h] [rbp-30h]
  __int64 v43; // [rsp+40h] [rbp-28h] BYREF
  _QWORD *v44; // [rsp+48h] [rbp-20h]
  __int64 v45; // [rsp+50h] [rbp-18h]

  v7 = this;
  if ( !a3 )
    WdLogSingleEntry0(1LL);
  if ( !a4 )
    WdLogSingleEntry0(1LL);
  *a3 = 0;
  *a4 = D3DKMDT_MPR_UNINITIALIZED;
  if ( !*((_QWORD *)v7 + 5) )
    WdLogSingleEntry0(1LL);
  v8 = *((_QWORD *)v7 + 5);
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL, v7);
    return 3223192337LL;
  }
  v9 = *(_QWORD *)(v8 + 112);
  if ( !v9 )
  {
    WdLogSingleEntry1(2LL, v8);
    return 3223192337LL;
  }
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 96) + 112LL);
  v45 = v10;
  if ( !v10 )
  {
    WdLogSingleEntry2(3LL, *(unsigned int *)(v9 + 24), v7);
    return 3223192376LL;
  }
  v11 = (char *)v7 + 72;
  if ( v7 == (DMMVIDPNTARGETMODE *)-72LL )
  {
    v30 = -1073741811;
  }
  else
  {
    MONITOR_MGR::AcquireMonitorShared(&v43, v10);
    v12 = v43;
    if ( v43 )
    {
      v13 = *(_QWORD *)(v43 + 232);
      v42 = D3DKMDT_MPR_UNINITIALIZED;
      v41 = 0;
      v40 = 0;
      v14 = *(_QWORD *)(v13 + 232);
      v39 = 0;
      v43 = v13;
      if ( ((*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v14 + 40LL))(v14) == 1
         || (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v13 + 232) + 40LL))(*(_QWORD *)(v13 + 232)) == 2
         || (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v13 + 232) + 40LL))(*(_QWORD *)(v13 + 232)) == 3
         || (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v13 + 232) + 40LL))(*(_QWORD *)(v13 + 232)) == 14)
        && (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v13 + 232) + 104LL))(*(_QWORD *)(v13 + 232)) )
      {
        WdLogSingleEntry1(7LL, v13);
        v28 = D3DKMDT_MPR_ALLCAPS;
        LODWORD(v29) = 0;
        v27 = 1;
        goto LABEL_56;
      }
      v16 = *(unsigned int *)(v13 + 112);
      if ( (unsigned int)(v16 - 1) <= 1 )
      {
        LOBYTE(v15) = a2;
        IsSupportedModeInternal = DxgMonitor::MonitorModes::_IsSupportedModeInternal(
                                    v13,
                                    (char *)v7 + 72,
                                    v16,
                                    v15,
                                    &v39,
                                    &v41);
        v27 = v39;
        v28 = v41;
LABEL_55:
        LODWORD(v29) = IsSupportedModeInternal;
        goto LABEL_56;
      }
      if ( (_DWORD)v16 != 3 )
        WdLogSingleEntry0(1LL);
      v17 = *(_QWORD *)(v13 + 128);
      v18 = 0;
      v41 = 0;
      v44 = (_QWORD *)(v13 + 128);
      while ( v17 != v13 + 128 )
      {
        v19 = v17 - 96;
        if ( !v17 )
          v19 = 0LL;
        if ( !v19 )
          break;
        if ( *(_DWORD *)(v19 + 84) == 5
          && *((_DWORD *)v11 + 3) == *(_DWORD *)(v19 + 20)
          && *((_DWORD *)v11 + 4) == *(_DWORD *)(v19 + 24)
          && (((unsigned __int8)v11[48] ^ *(_BYTE *)(v19 + 56)) & 7) == 0
          && (a2
           || DMMVIDEOSIGNALMODE::IsFreqWithinToleranceRange(
                (const struct _D3DDDI_RATIONAL *)(v11 + 20),
                (const struct _D3DDDI_RATIONAL *)(v19 + 28),
                300)) )
        {
          v18 = 7;
          v20 = 1;
          v41 = 7;
          goto LABEL_33;
        }
        v17 = *(_QWORD *)(v19 + 96);
      }
      v20 = 0;
LABEL_33:
      v39 = v20;
      if ( v20 )
        goto LABEL_34;
      if ( v18 )
        WdLogSingleEntry0(1LL);
      if ( !a2 )
      {
        IsModeInPixelRateRange = DxgMonitor::MonitorModes::_IsModeInPixelRateRange(v13, v11, 2LL, &v39, &v41);
        v29 = IsModeInPixelRateRange;
        if ( IsModeInPixelRateRange < 0 )
          goto LABEL_86;
        v20 = v39;
        if ( !v39 )
        {
          v18 = v41;
          if ( v41 )
            goto LABEL_34;
          goto LABEL_85;
        }
        if ( v41 )
          WdLogSingleEntry0(1LL);
      }
      LOBYTE(v15) = a2;
      IsModeSupportedByMonitorMode = DxgMonitor::MonitorModes::_IsModeSupportedByMonitorMode(
                                       v13,
                                       v11,
                                       2LL,
                                       v15,
                                       &v39,
                                       &v41);
      v29 = IsModeSupportedByMonitorMode;
      if ( IsModeSupportedByMonitorMode < 0 )
        goto LABEL_86;
      v20 = v39;
      if ( v39 )
      {
        v18 = v41;
        if ( v41 )
          goto LABEL_34;
      }
      else
      {
        if ( v41 )
          WdLogSingleEntry0(1LL);
        IsModeInActiveSizeRange = DxgMonitor::MonitorModes::_IsModeInActiveSizeRange(v13, v11, 2LL, &v39, &v41);
        v29 = IsModeInActiveSizeRange;
        if ( IsModeInActiveSizeRange < 0 )
          goto LABEL_86;
        v20 = v39;
        if ( !v39 )
        {
          if ( v41 )
            WdLogSingleEntry0(1LL);
          v20 = 0;
          v18 = 1;
LABEL_34:
          v21 = v44;
          v22 = 0;
          v41 = 0;
          for ( i = (_QWORD *)*v44; i != v21; i = (_QWORD *)v24[12] )
          {
            v24 = i - 12;
            if ( !i )
              v24 = 0LL;
            if ( !v24 )
              break;
            if ( *((_DWORD *)v24 + 21) == 5
              && *((_DWORD *)v11 + 3) == *((_DWORD *)v24 + 5)
              && *((_DWORD *)v11 + 4) == *((_DWORD *)v24 + 6)
              && (((unsigned __int8)v11[48] ^ *((_BYTE *)v24 + 56)) & 7) == 0 )
            {
              if ( a2
                || DMMVIDEOSIGNALMODE::IsFreqWithinToleranceRange(
                     (const struct _D3DDDI_RATIONAL *)(v11 + 20),
                     (const struct _D3DDDI_RATIONAL *)((char *)v24 + 28),
                     300) )
              {
                v22 = 7;
                v25 = 1;
                v41 = 7;
                goto LABEL_48;
              }
              v21 = v44;
            }
          }
          v25 = 0;
LABEL_48:
          v39 = v25;
          if ( v25 )
            goto LABEL_49;
          if ( v22 )
            WdLogSingleEntry0(1LL);
          v35 = v43;
          if ( !a2 )
          {
            v36 = DxgMonitor::MonitorModes::_IsModeInPixelRateRange(v43, v11, 1LL, &v39, &v41);
            v29 = v36;
            if ( v36 < 0 )
              goto LABEL_86;
            v25 = v39;
            if ( !v39 )
            {
              v22 = v41;
              if ( !v41 )
LABEL_109:
                WdLogSingleEntry0(1LL);
LABEL_49:
              if ( v20 != v25 )
              {
                WdLogSingleEntry5(7LL, v43, v20, v18, v25, v22);
                WdLogSingleEntry5(
                  7LL,
                  *((unsigned int *)v11 + 3),
                  *((unsigned int *)v11 + 4),
                  *((unsigned int *)v11 + 5),
                  *((unsigned int *)v11 + 6),
                  (int)(*((_DWORD *)v11 + 12) << 29) >> 29);
                WdLogSingleEntry3(7LL, *((unsigned int *)v11 + 7), *((unsigned int *)v11 + 8), *((_QWORD *)v11 + 5));
              }
              IsSupportedModeInternal = 0;
              if ( v25 || (v27 = 0, v20) )
                v27 = 1;
              v28 = v18;
              v7 = this;
              if ( v25 )
                v28 = v22;
              goto LABEL_55;
            }
            if ( v41 )
              WdLogSingleEntry0(1LL);
          }
          LOBYTE(v15) = a2;
          v37 = DxgMonitor::MonitorModes::_IsModeSupportedByMonitorMode(v35, v11, 1LL, v15, &v39, &v41);
          v29 = v37;
          if ( v37 >= 0 )
          {
            v25 = v39;
            if ( v39 )
            {
              v22 = v41;
              if ( !v41 )
                goto LABEL_109;
              goto LABEL_49;
            }
            if ( v41 )
              WdLogSingleEntry0(1LL);
            v38 = DxgMonitor::MonitorModes::_IsModeInActiveSizeRange(v35, v11, 1LL, &v39, &v41);
            v29 = v38;
            if ( v38 >= 0 )
            {
              v25 = v39;
              if ( !v39 )
              {
                if ( v41 )
                  WdLogSingleEntry0(1LL);
                v25 = 0;
                v22 = 1;
                goto LABEL_49;
              }
              v22 = v41;
              if ( !v41 )
                goto LABEL_109;
              goto LABEL_49;
            }
          }
LABEL_86:
          WdLogSingleEntry1(2LL, v29);
          v28 = v42;
          v7 = this;
          v27 = v40;
LABEL_56:
          ExReleaseResourceLite((PERESOURCE)(v12 + 24));
          KeLeaveCriticalRegion();
          v30 = v29;
          if ( (int)v29 >= 0 )
          {
            *a3 = v27;
            *a4 = v28;
            return 0LL;
          }
          goto LABEL_117;
        }
        v18 = v41;
        if ( v41 )
          goto LABEL_34;
      }
LABEL_85:
      WdLogSingleEntry0(1LL);
      goto LABEL_34;
    }
    v30 = -1073741275;
    WdLogSingleEntry1(2LL, -1073741275LL);
    RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>(&v43);
  }
LABEL_117:
  WdLogSingleEntry3(2LL, v7, v45, v30);
  return (unsigned int)v30;
}
