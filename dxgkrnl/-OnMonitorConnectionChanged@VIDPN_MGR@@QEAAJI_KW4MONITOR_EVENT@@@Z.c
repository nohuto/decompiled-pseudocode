/*
 * XREFs of ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C0213B3C
 * Callers:
 *     ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01E72A0 (-_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXG.c)
 * Callees:
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C0001D60 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C00034C8 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C0003C1C (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0007E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0007F94 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONITOR__@@@Z @ 0x1C000935C (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONI.c)
 *     ??1?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@QEAA@XZ @ 0x1C00093B0 (--1-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@QEAA@XZ.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x1C000949C (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0009534 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z @ 0x1C00226AC (-SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z.c)
 *     ?Invalidate@DMMVIDPNTOPOLOGY@@QEAAXXZ @ 0x1C0068BC4 (-Invalidate@DMMVIDPNTOPOLOGY@@QEAAXXZ.c)
 *     MonitorGetMonitorHandle @ 0x1C0171B54 (MonitorGetMonitorHandle.c)
 *     MonitorGetUsageClass @ 0x1C0171C64 (MonitorGetUsageClass.c)
 *     ?GetMonitorAndLinkHdrCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLINKINFO@@AEATMONITOR_AND_LINK_HDR_CAPS@@@Z @ 0x1C0171DE0 (-GetMonitorAndLinkHdrCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLINKINFO@@AEATM.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C017AB4C (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     MonitorIsMonitorVirtualModeDisabled @ 0x1C017FDC8 (MonitorIsMonitorVirtualModeDisabled.c)
 *     ?_GetLinkInfo@DXGMONITOR@@QEBAJPEAU_DXGK_MONITORLINKINFO@@@Z @ 0x1C01AE02C (-_GetLinkInfo@DXGMONITOR@@QEBAJPEAU_DXGK_MONITORLINKINFO@@@Z.c)
 *     MonitorReleaseMonitorHandle @ 0x1C01AE14C (MonitorReleaseMonitorHandle.c)
 *     MonitorGetNativeFlags @ 0x1C01D7E10 (MonitorGetNativeFlags.c)
 *     ?InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z @ 0x1C0213FF0 (-InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DI.c)
 *     ?CleanCachedIddDisplayConfigRequest@DXGSESSIONMGR@@QEAAJK@Z @ 0x1C0350280 (-CleanCachedIddDisplayConfigRequest@DXGSESSIONMGR@@QEAAJK@Z.c)
 */

__int64 __fastcall VIDPN_MGR::OnMonitorConnectionChanged(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
  __int64 v6; // r13
  __int64 v7; // rbx
  struct HDXGMONITOR__ *v8; // rdi
  struct DMMVIDEOPRESENTTARGET *TargetById; // r15
  unsigned int v10; // ebx
  int MonitorHandle; // eax
  __int64 v12; // r9
  __int64 v13; // rsi
  unsigned int v14; // eax
  struct HDXGMONITOR__ *v15; // r11
  int NativeFlags; // eax
  __int64 v17; // rbx
  __int64 v18; // rdx
  char v19; // al
  char v20; // cl
  char v21; // al
  int UsageClass; // eax
  __int64 v23; // rbx
  int v24; // eax
  char v25; // cl
  char v26; // bl
  bool v27; // al
  DXGMONITOR *v28; // rdi
  int LinkInfo; // eax
  bool v30; // di
  __int64 v31; // rcx
  __int64 v32; // rbx
  int IsMonitorVirtualModeDisabled; // eax
  char v34; // al
  __int64 v35; // rbx
  struct HDXGMONITOR__ *v36; // rbx
  unsigned int PathSourceFromTarget; // edi
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  _QWORD *v39; // r8
  __int64 v40; // r9
  unsigned int v41; // edx
  const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *v42; // r8
  ADAPTER_DISPLAY *v43; // rbx
  struct _LUID *v44; // rdx
  DXGADAPTER *v45; // rcx
  __int64 v46; // rbx
  int v48; // esi
  __int64 v49; // rax
  struct DXGGLOBAL *Global; // rax
  int v51; // eax
  __int64 v52; // rdi
  __int64 v53; // rbx
  __int64 v54; // rcx
  __int64 v55; // rbx
  int v56; // eax
  char v57; // al
  bool v58; // al
  bool v59; // [rsp+50h] [rbp-30h] BYREF
  bool v60; // [rsp+51h] [rbp-2Fh] BYREF
  int v61; // [rsp+54h] [rbp-2Ch] BYREF
  DXGMONITOR *v62; // [rsp+58h] [rbp-28h] BYREF
  struct HDXGMONITOR__ *v63; // [rsp+60h] [rbp-20h]
  struct _DXGK_MONITORLINKINFO v64; // [rsp+68h] [rbp-18h] BYREF
  struct HDXGMONITOR__ *v65; // [rsp+C0h] [rbp+40h] BYREF

  v6 = a2;
  if ( *(struct _KTHREAD **)(a1 + 64) != KeGetCurrentThread() )
    WdLogSingleEntry0(1LL);
  _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(a1 + 120) + 72LL), 1u);
  v7 = *(_QWORD *)(a1 + 120);
  v8 = 0LL;
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v7, v6);
  if ( TargetById )
  {
    if ( v7 )
      ReferenceCounted::Release((ReferenceCounted *)(v7 + 64));
    v10 = *((_DWORD *)TargetById + 6);
    v63 = (struct HDXGMONITOR__ *)*((_QWORD *)TargetById + 14);
    v65 = 0LL;
    if ( !*(_QWORD *)(a1 + 8) )
      WdLogSingleEntry0(1LL);
    MonitorHandle = MonitorGetMonitorHandle(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL), v10, 0LL, TargetById, &v65);
    v13 = MonitorHandle;
    if ( MonitorHandle == -1073741275 )
    {
      v8 = v65;
      if ( v65 )
        WdLogSingleEntry0(1LL);
      LODWORD(v13) = 0;
    }
    else if ( MonitorHandle < 0 )
    {
      if ( !*(_QWORD *)(a1 + 8) )
        WdLogSingleEntry0(1LL);
      WdLogSingleEntry3(2LL, v6, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL), v13);
    }
    else
    {
      v8 = v65;
    }
    if ( v8 != v63 )
    {
      DMMVIDEOPRESENTTARGET::SetConnectedMonitor(TargetById, v8);
      v14 = *((_DWORD *)TargetById + 20) - 10;
      *((_BYTE *)TargetById + 413) = 1;
      if ( v14 <= 1 )
        *((_BYTE *)TargetById + 414) = 1;
      v15 = 0LL;
      if ( !v8 )
      {
        *(_WORD *)((char *)TargetById + 405) = 0;
        *((_DWORD *)TargetById + 23) = 0;
        *((_BYTE *)TargetById + 96) = 0;
        *((_BYTE *)TargetById + 412) = 1;
LABEL_44:
        v35 = *(_QWORD *)(a1 + 160);
        if ( v35 != a1 + 160 )
        {
          v36 = (struct HDXGMONITOR__ *)(v35 - 8);
          while ( v36 )
          {
            if ( DMMVIDPNTOPOLOGY::IsTargetInTopology((struct HDXGMONITOR__ *)((char *)v36 + 96), v6) )
            {
              DMMVIDPNTOPOLOGY::Invalidate((struct HDXGMONITOR__ *)((char *)v36 + 96));
              v15 = 0LL;
            }
            v49 = *((_QWORD *)v36 + 1);
            v36 = (struct HDXGMONITOR__ *)(v49 - 8);
            if ( v49 == a1 + 160 )
              v36 = v15;
          }
        }
        v65 = v15;
        PathSourceFromTarget = -1;
        ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef((VIDPN_MGR *)a1);
        auto_rc<DMMVIDPN const>::reset((__int64 *)&v65, (__int64)ClientCommittedVidPnRef);
        if ( v65 )
          PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(
                                   (struct HDXGMONITOR__ *)((char *)v65 + 96),
                                   (_QWORD *)(unsigned int)v6,
                                   v39,
                                   v40);
        auto_rc<DMMVIDPN const>::reset((__int64 *)&v65, 0LL);
        if ( !*(_QWORD *)(a1 + 8) )
          WdLogSingleEntry0(1LL);
        v43 = *(ADAPTER_DISPLAY **)(a1 + 8);
        ADAPTER_DISPLAY::InvalidateActiveVidPnDisplayModeListCache(v43, v41, v42);
        if ( PathSourceFromTarget != -1 )
          ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange((DXGADAPTER **)v43, PathSourceFromTarget, 1);
        v45 = (DXGADAPTER *)*((_QWORD *)v43 + 2);
        LODWORD(v65) = 0;
        if ( (*((_DWORD *)v45 + 109) & 0x100) != 0
          && DXGADAPTER::IsAdapterSessionized(v45, v44, (unsigned int *)&v65, 0LL) )
        {
          Global = DXGGLOBAL::GetGlobal();
          v51 = DXGSESSIONMGR::CleanCachedIddDisplayConfigRequest(*((DXGSESSIONMGR **)Global + 118), (unsigned int)v65);
          if ( v51 < 0 )
          {
            v52 = (unsigned int)v65;
            v53 = v51;
            WdLogSingleEntry2(2LL, (unsigned int)v65, v51);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to purge the cached IDD display config request for session 0x%I64x, (Status = 0x%I64x).",
              v52,
              v53,
              0LL,
              0LL,
              0LL);
          }
        }
        goto LABEL_53;
      }
      LOBYTE(v65) = 0;
      v59 = 0;
      v60 = 0;
      NativeFlags = MonitorGetNativeFlags((__int64)v8, (unsigned __int8 *)&v65, &v59, &v60);
      v17 = NativeFlags;
      if ( NativeFlags < 0 )
      {
        if ( !*(_QWORD *)(a1 + 8) )
          WdLogSingleEntry0(1LL);
        WdLogSingleEntry3(2LL, v6, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL), v17);
      }
      if ( !*(_QWORD *)(a1 + 8) )
        WdLogSingleEntry0(1LL);
      v18 = *(_QWORD *)(a1 + 8);
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v18 + 16) + 2920LL) + 289LL) )
      {
        if ( !v18 )
          WdLogSingleEntry0(1LL);
        v18 = *(_QWORD *)(a1 + 8);
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v18 + 16) + 2920LL) + 290LL) )
          goto LABEL_23;
      }
      if ( !v18 )
        WdLogSingleEntry0(1LL);
      v19 = 0;
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) + 216LL) + 64LL)
                                 + 40LL)
                     + 28LL) >= 0x4003u )
LABEL_23:
        v19 = 1;
      v20 = (char)v65;
      *((_BYTE *)TargetById + 405) = (_BYTE)v65;
      if ( v19 || !v20 || (v21 = 1, !v59) )
        v21 = 0;
      *((_BYTE *)TargetById + 406) = v21;
      v61 = 0;
      LOBYTE(v65) = 0;
      UsageClass = MonitorGetUsageClass((__int64)v8, &v61, &v65);
      v23 = UsageClass;
      if ( UsageClass < 0 )
      {
        if ( !*(_QWORD *)(a1 + 8) )
          WdLogSingleEntry0(1LL);
        WdLogSingleEntry3(2LL, v6, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL), v23);
        v24 = 0;
        v25 = 0;
      }
      else
      {
        v24 = v61;
        v25 = (char)v65;
      }
      *((_DWORD *)TargetById + 23) = v24;
      v26 = 0;
      v27 = v60;
      *((_BYTE *)TargetById + 96) = v25;
      *((_BYTE *)TargetById + 412) = v27;
      LODWORD(v65) = 0;
      MONITOR_MGR::AcquireMonitorShared(&v62, (__int64)v8);
      v28 = v62;
      if ( v62 )
      {
        *(_QWORD *)&v64.UsageHints.0 = 0LL;
        v64.DitheringSupport.Value = 0;
        LinkInfo = DXGMONITOR::_GetLinkInfo(v62, &v64);
        if ( LinkInfo == -1073741275 )
        {
          RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>((__int64 *)&v62);
          goto LABEL_32;
        }
        if ( LinkInfo >= 0 )
        {
          DxgMonitor::MonitorColorState::GetMonitorAndLinkHdrCapable(
            *((DxgMonitor::MonitorColorState **)v28 + 28),
            &v64,
            (union MONITOR_AND_LINK_HDR_CAPS *)&v65);
          ExReleaseResourceLite((PERESOURCE)((char *)v28 + 24));
          KeLeaveCriticalRegion();
          v26 = (char)v65;
          goto LABEL_32;
        }
        v48 = LinkInfo;
      }
      else
      {
        v48 = -1073741275;
        WdLogSingleEntry1(2LL, -1073741275LL);
      }
      RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>((__int64 *)&v62);
      if ( !*(_QWORD *)(a1 + 8) )
        WdLogSingleEntry0(1LL);
      WdLogSingleEntry3(2LL, v6, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL), v48);
      v26 = 0;
LABEL_32:
      v30 = 0;
      *((_BYTE *)TargetById + 419) = v26 & 1;
      if ( !*(_QWORD *)(a1 + 8) )
        WdLogSingleEntry0(1LL);
      v31 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
      if ( v31 && (_DWORD)v6 != -1 )
      {
        v32 = *(_QWORD *)(v31 + 2920);
        if ( v32 )
        {
          LOBYTE(v65) = 0;
          IsMonitorVirtualModeDisabled = MonitorIsMonitorVirtualModeDisabled(v31, v6, &v65);
          v13 = IsMonitorVirtualModeDisabled;
          v15 = 0LL;
          if ( IsMonitorVirtualModeDisabled == -1073741632 )
          {
            v34 = 0;
            LODWORD(v13) = 0;
          }
          else
          {
            if ( IsMonitorVirtualModeDisabled < 0 )
            {
              WdLogSingleEntry1(1LL, IsMonitorVirtualModeDisabled);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"Unexpected return code 0x%I64x from MonitorIsMonitorVirtualModeDisabled()",
                v13,
                0LL,
                0LL,
                0LL,
                0LL);
              v15 = 0LL;
              goto LABEL_42;
            }
            v34 = (char)v65;
          }
          if ( v34 )
            v30 = 1;
          else
            v30 = *(_BYTE *)(v32 + 289) == 0;
LABEL_42:
          if ( (int)v13 >= 0 )
          {
LABEL_43:
            *((_BYTE *)TargetById + 407) = !v30;
            goto LABEL_44;
          }
LABEL_87:
          if ( !*(_QWORD *)(a1 + 8) )
            WdLogSingleEntry0(1LL);
          WdLogSingleEntry3(2LL, v6, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL), (int)v13);
          v15 = 0LL;
          LODWORD(v13) = 0;
          goto LABEL_43;
        }
        WdLogSingleEntry1(2LL, 9698LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"The selected adapter is render-only",
          9698LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      LODWORD(v13) = -1073741811;
      goto LABEL_87;
    }
    if ( a4 == 10 )
    {
      v61 = 0;
      LOBYTE(v65) = 0;
      if ( (int)MonitorGetUsageClass((__int64)v8, &v61, &v65) >= 0 )
      {
        *((_DWORD *)TargetById + 23) = v61;
        *((_BYTE *)TargetById + 96) = (_BYTE)v65;
      }
      if ( !*(_QWORD *)(a1 + 8) )
        WdLogSingleEntry0(1LL);
      v54 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
      if ( !v54 || (_DWORD)v6 == -1 )
        goto LABEL_113;
      v55 = *(_QWORD *)(v54 + 2920);
      if ( v55 )
      {
LABEL_119:
        LOBYTE(v65) = 0;
        v56 = MonitorIsMonitorVirtualModeDisabled(v54, v6, &v65);
        v13 = v56;
        if ( v56 == -1073741632 )
        {
          v57 = 0;
          LODWORD(v13) = 0;
        }
        else
        {
          if ( v56 < 0 )
          {
            WdLogSingleEntry1(1LL, v56);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"Unexpected return code 0x%I64x from MonitorIsMonitorVirtualModeDisabled()",
              v13,
              0LL,
              0LL,
              0LL,
              0LL);
            v58 = 1;
            goto LABEL_127;
          }
          v57 = (char)v65;
        }
        if ( v57 )
          v58 = 0;
        else
          v58 = *(_BYTE *)(v55 + 289) != 0;
LABEL_127:
        if ( (int)v13 >= 0 )
        {
          *((_BYTE *)TargetById + 407) = v58;
          goto LABEL_53;
        }
LABEL_113:
        LODWORD(v13) = 0;
LABEL_53:
        v46 = (__int64)v63;
        if ( v63 )
        {
          if ( !*(_QWORD *)(a1 + 8) )
            WdLogSingleEntry0(1LL);
          MonitorReleaseMonitorHandle(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL), v46, TargetById, v12);
        }
        return (unsigned int)v13;
      }
      WdLogSingleEntry1(2LL, 9698LL);
    }
    else
    {
      if ( a4 != 11 )
        goto LABEL_53;
      if ( !*(_QWORD *)(a1 + 8) )
        WdLogSingleEntry0(1LL);
      v54 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
      if ( !v54 || (_DWORD)v6 == -1 )
        goto LABEL_113;
      v55 = *(_QWORD *)(v54 + 2920);
      if ( v55 )
        goto LABEL_119;
      WdLogSingleEntry1(2LL, 9698LL);
    }
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The selected adapter is render-only",
      9698LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_113;
  }
  WdLogSingleEntry2(2LL, v6, a1);
  if ( v7 )
    ReferenceCounted::Release((ReferenceCounted *)(v7 + 64));
  return 3223192325LL;
}
