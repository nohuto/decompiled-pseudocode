/*
 * XREFs of ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C019B43C
 * Callers:
 *     ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01796D0 (-_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXG.c)
 * Callees:
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C00024E8 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0006454 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C0006764 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0009364 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000951C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C000D994 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z @ 0x1C002426C (-SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z.c)
 *     ?Invalidate@DMMVIDPNTOPOLOGY@@QEAAXXZ @ 0x1C005C6F4 (-Invalidate@DMMVIDPNTOPOLOGY@@QEAAXXZ.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C011BED4 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     MonitorGetMonitorHandle @ 0x1C0133530 (MonitorGetMonitorHandle.c)
 *     MonitorGetNativeFlags @ 0x1C0133A54 (MonitorGetNativeFlags.c)
 *     MonitorIsMonitorAndLinkHDRCapable @ 0x1C01355E8 (MonitorIsMonitorAndLinkHDRCapable.c)
 *     MonitorReleaseMonitorHandle @ 0x1C0139140 (MonitorReleaseMonitorHandle.c)
 *     MonitorGetUsageClass @ 0x1C0149F54 (MonitorGetUsageClass.c)
 *     ?InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z @ 0x1C019B718 (-InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DI.c)
 *     ?CleanCachedIddDisplayConfigRequest@DXGSESSIONMGR@@QEAAJK@Z @ 0x1C029ED34 (-CleanCachedIddDisplayConfigRequest@DXGSESSIONMGR@@QEAAJK@Z.c)
 */

__int64 __fastcall VIDPN_MGR::OnMonitorConnectionChanged(_QWORD *a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rsi
  __int64 v12; // rcx
  __int64 v13; // r12
  unsigned int v14; // ebx
  int MonitorHandle; // eax
  struct _LUID *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r14
  struct HDXGMONITOR__ *v19; // rbx
  unsigned int v20; // eax
  __int64 v21; // r11
  int NativeFlags; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r15
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  char v29; // al
  unsigned __int8 v30; // cl
  char v31; // al
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r12
  int v36; // eax
  char v37; // cl
  bool v38; // al
  int IsMonitorAndLinkHDRCapable; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  char v42; // al
  __int64 v43; // rbx
  _QWORD *v44; // rcx
  __int64 v45; // rax
  unsigned int PathSourceFromTarget; // r15d
  __int64 v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rcx
  const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *v50; // r8
  ADAPTER_DISPLAY *v51; // rbx
  DXGADAPTER *v52; // rcx
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  _QWORD *v60; // rbx
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  _QWORD *v65; // r14
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  _QWORD *v71; // r14
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rcx
  _QWORD *v76; // rbx
  __int64 v77; // rax
  __int64 v78; // rax
  _QWORD *v79; // rax
  __int64 v80; // rax
  __int64 v81; // rcx
  struct DXGGLOBAL *Global; // rax
  int v83; // eax
  __int64 v84; // rcx
  __int64 v85; // rbx
  __int64 v86; // rax
  int UsageClass; // eax
  __int64 v88; // rcx
  __int64 v89; // rax
  bool v90; // [rsp+30h] [rbp-30h] BYREF
  bool v91; // [rsp+31h] [rbp-2Fh] BYREF
  _BYTE v92[2]; // [rsp+32h] [rbp-2Eh] BYREF
  int v93; // [rsp+34h] [rbp-2Ch] BYREF
  unsigned int v94; // [rsp+38h] [rbp-28h] BYREF
  unsigned int v95; // [rsp+3Ch] [rbp-24h] BYREF
  int v96; // [rsp+40h] [rbp-20h] BYREF
  __int64 v97; // [rsp+48h] [rbp-18h] BYREF
  struct HDXGMONITOR__ *v98; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int8 v99; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v100; // [rsp+B0h] [rbp+50h] BYREF

  v100 = a3;
  v6 = (unsigned int)a2;
  if ( *(struct _KTHREAD **)(a1[5] + 16LL) != KeGetCurrentThread() )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v7);
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1[10] + 72LL));
  v8 = a1[10];
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v8, (unsigned int)v6);
  if ( TargetById )
  {
    if ( v8 )
      ReferenceCounted::Release((ReferenceCounted *)(v8 + 64), v9);
    v12 = a1[1];
    v13 = *((_QWORD *)TargetById + 14);
    v14 = *((_DWORD *)TargetById + 6);
    v97 = v13;
    v98 = 0LL;
    if ( !v12 )
    {
      v56 = WdLogNewEntry5_WdAssertion(0LL, v9);
      WdLogEvent5_WdAssertion(v56);
      v12 = a1[1];
    }
    MonitorHandle = MonitorGetMonitorHandle(*(_QWORD *)(v12 + 16), v14, 0, TargetById, &v98);
    v18 = MonitorHandle;
    if ( MonitorHandle == -1073741275 )
    {
      v19 = v98;
      LODWORD(v18) = 0;
      if ( v98 )
      {
        v57 = WdLogNewEntry5_WdAssertion(v17, v16);
        WdLogEvent5_WdAssertion(v57);
      }
    }
    else if ( MonitorHandle < 0 )
    {
      v60 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16);
      v60[3] = v6;
      v61 = a1[1];
      if ( !v61 )
      {
        v62 = WdLogNewEntry5_WdAssertion(v59, v58);
        WdLogEvent5_WdAssertion(v62);
        v61 = a1[1];
      }
      v60[4] = *(_QWORD *)(v61 + 16);
      v60[5] = v18;
      WdLogEvent5_WdError(v60);
      v19 = 0LL;
      v98 = 0LL;
    }
    else
    {
      v19 = v98;
    }
    if ( v19 == (struct HDXGMONITOR__ *)v13 )
    {
      if ( a4 == 10 )
      {
        v96 = 0;
        v92[0] = 0;
        UsageClass = MonitorGetUsageClass(v19, &v96, v92);
        LODWORD(v18) = UsageClass;
        if ( UsageClass < 0 )
        {
          LODWORD(v18) = 0;
        }
        else
        {
          *((_DWORD *)TargetById + 22) = v96;
          *((_BYTE *)TargetById + 92) = v92[0];
        }
      }
    }
    else
    {
      DMMVIDEOPRESENTTARGET::SetConnectedMonitor(TargetById, v19);
      v20 = *((_DWORD *)TargetById + 20) - 10;
      *((_BYTE *)TargetById + 413) = 1;
      if ( v20 <= 1 )
        *((_BYTE *)TargetById + 414) = 1;
      v21 = 0LL;
      if ( v19 )
      {
        v99 = 0;
        v90 = 0;
        v91 = 0;
        NativeFlags = MonitorGetNativeFlags(v19, &v99, &v90, &v91);
        v25 = NativeFlags;
        if ( NativeFlags < 0 )
        {
          v65 = (_QWORD *)WdLogNewEntry5_WdError(v24, v23);
          v65[3] = v6;
          v66 = a1[1];
          if ( !v66 )
          {
            v67 = WdLogNewEntry5_WdAssertion(v64, v63);
            WdLogEvent5_WdAssertion(v67);
            v66 = a1[1];
          }
          v65[4] = *(_QWORD *)(v66 + 16);
          v65[5] = v25;
          WdLogEvent5_WdError(v65);
        }
        v26 = a1[1];
        if ( !v26 )
        {
          v68 = WdLogNewEntry5_WdAssertion(v24, v23);
          WdLogEvent5_WdAssertion(v68);
          v26 = a1[1];
        }
        v27 = *(_QWORD *)(v26 + 16);
        v28 = *(_QWORD *)(v27 + 2696);
        if ( *(_BYTE *)(v28 + 249) && *(_BYTE *)(v28 + 250)
          || (v29 = 0, *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v27 + 216) + 64LL) + 40LL) + 28LL) >= 0x4003u) )
        {
          v29 = 1;
        }
        v30 = v99;
        *((_BYTE *)TargetById + 405) = v99;
        if ( v29 || !v30 || (v31 = 1, !v90) )
          v31 = 0;
        *((_BYTE *)TargetById + 406) = v31;
        v93 = 0;
        LOBYTE(v100) = 0;
        v32 = MonitorGetUsageClass(v19, &v93, &v100);
        v35 = v32;
        if ( v32 < 0 )
        {
          v71 = (_QWORD *)WdLogNewEntry5_WdError(v34, v33);
          v71[3] = v6;
          v72 = a1[1];
          if ( !v72 )
          {
            v73 = WdLogNewEntry5_WdAssertion(v70, v69);
            WdLogEvent5_WdAssertion(v73);
            v72 = a1[1];
          }
          v71[4] = *(_QWORD *)(v72 + 16);
          v71[5] = v35;
          WdLogEvent5_WdError(v71);
          v36 = 0;
          v37 = 0;
          v93 = 0;
          LOBYTE(v100) = 0;
        }
        else
        {
          v36 = v93;
          v37 = v100;
        }
        *((_DWORD *)TargetById + 22) = v36;
        v38 = v91;
        *((_BYTE *)TargetById + 92) = v37;
        *((_BYTE *)TargetById + 412) = v38;
        v94 = 0;
        IsMonitorAndLinkHDRCapable = MonitorIsMonitorAndLinkHDRCapable(v19, &v94);
        v21 = 0LL;
        v18 = IsMonitorAndLinkHDRCapable;
        if ( IsMonitorAndLinkHDRCapable < 0 )
        {
          v76 = (_QWORD *)WdLogNewEntry5_WdError(v41, v40);
          v76[3] = v6;
          v77 = a1[1];
          if ( !v77 )
          {
            v78 = WdLogNewEntry5_WdAssertion(v75, v74);
            WdLogEvent5_WdAssertion(v78);
            v77 = a1[1];
          }
          v76[4] = *(_QWORD *)(v77 + 16);
          v76[5] = v18;
          WdLogEvent5_WdError(v76);
          v21 = 0LL;
          v42 = 0;
          LODWORD(v18) = 0;
          v94 = 0;
        }
        else
        {
          v42 = v94;
        }
        v13 = v97;
        *((_BYTE *)TargetById + 419) = v42 & 1;
      }
      else
      {
        *(_WORD *)((char *)TargetById + 405) = 0;
        *((_DWORD *)TargetById + 22) = 0;
        *((_BYTE *)TargetById + 92) = 0;
        *((_BYTE *)TargetById + 412) = 1;
      }
      v43 = 0LL;
      v44 = (_QWORD *)a1[15];
      if ( v44 != a1 + 15 )
        v43 = (__int64)(v44 - 1);
      while ( v43 )
      {
        if ( DMMVIDPNTOPOLOGY::IsTargetInTopology((DMMVIDPNTOPOLOGY *)(v43 + 96), v6) )
        {
          DMMVIDPNTOPOLOGY::Invalidate((DMMVIDPNTOPOLOGY *)(v43 + 96));
          v21 = 0LL;
        }
        v79 = *(_QWORD **)(v43 + 8);
        v43 = (__int64)(v79 - 1);
        if ( v79 == a1 + 15 )
          v43 = v21;
      }
      v45 = a1[11];
      PathSourceFromTarget = -1;
      v97 = v21;
      if ( v45 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v45 + 32));
        v47 = a1[11];
      }
      else
      {
        v47 = v21;
      }
      auto_rc<DMMVIDPN const>::reset(&v97, v47);
      if ( v97 )
        PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(
                                 (DMMVIDPNTOPOLOGY *)(v97 + 96),
                                 (unsigned int)v6);
      auto_rc<DMMVIDPN const>::reset(&v97, 0LL);
      v51 = (ADAPTER_DISPLAY *)a1[1];
      if ( !v51 )
      {
        v80 = WdLogNewEntry5_WdAssertion(v49, v48);
        WdLogEvent5_WdAssertion(v80);
        v51 = (ADAPTER_DISPLAY *)a1[1];
      }
      ADAPTER_DISPLAY::InvalidateActiveVidPnDisplayModeListCache(v51, v48, v50);
      if ( PathSourceFromTarget != -1 )
        ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange((DXGADAPTER **)v51, PathSourceFromTarget, 1);
      v52 = (DXGADAPTER *)*((_QWORD *)v51 + 2);
      v95 = 0;
      if ( (*((_DWORD *)v52 + 87) & 0x100) != 0 && DXGADAPTER::IsAdapterSessionized(v52, v16, &v95, 0LL) )
      {
        Global = DXGGLOBAL::GetGlobal(v81, (__int64)v16);
        v83 = DXGSESSIONMGR::CleanCachedIddDisplayConfigRequest(*((DXGSESSIONMGR **)Global + 102), v95);
        v85 = v83;
        if ( v83 < 0 )
        {
          v86 = WdLogNewEntry5_WdError(v84, v16);
          *(_QWORD *)(v86 + 24) = v95;
          *(_QWORD *)(v86 + 32) = v85;
          WdLogEvent5_WdError(v86);
        }
      }
    }
    if ( v13 )
    {
      v88 = a1[1];
      if ( !v88 )
      {
        v89 = WdLogNewEntry5_WdAssertion(0LL, v16);
        WdLogEvent5_WdAssertion(v89);
        v88 = a1[1];
      }
      MonitorReleaseMonitorHandle(*(_QWORD *)(v88 + 16), v13, TargetById);
    }
    return (unsigned int)v18;
  }
  else
  {
    v54 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v54 + 24) = v6;
    *(_QWORD *)(v54 + 32) = a1;
    WdLogEvent5_WdError(v54);
    if ( v8 )
      ReferenceCounted::Release((ReferenceCounted *)(v8 + 64), v55);
    return 3223192325LL;
  }
}
