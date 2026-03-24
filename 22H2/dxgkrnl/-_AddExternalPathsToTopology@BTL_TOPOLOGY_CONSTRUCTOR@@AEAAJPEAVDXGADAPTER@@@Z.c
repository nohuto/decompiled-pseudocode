/*
 * XREFs of ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C02EE0A0
 * Callers:
 *     ?_AddExternalPathsAdaptersCallback@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C02EE060 (-_AddExternalPathsAdaptersCallback@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003960 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0006454 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0009364 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0009550 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C000AB24 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000ADEC (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C011BED4 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C012EC80 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0133648 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ @ 0x1C0133DF8 (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C013D77C (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0141538 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C014164C (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1_N2@Z @ 0x1C02EEB90 (-_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLO.c)
 *     ?_GetFirstBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C02EFF54 (-_GetFirstBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBVDMMVIDE.c)
 *     ?_GetNextBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBV2@AEBVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C02EFFFC (-_GetNextBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBV2@AEBVDM.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_AddExternalPathsToTopology(
        BTL_TOPOLOGY_CONSTRUCTOR *this,
        struct DXGADAPTER *a2)
{
  BTL_TOPOLOGY_CONSTRUCTOR *v3; // r12
  VIDPN_MGR *v4; // r13
  __int64 v5; // rax
  unsigned int v6; // r14d
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rax
  unsigned __int16 v19; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v21; // rbx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rbx
  bool v26; // r13
  const struct DMMVIDEOPRESENTTARGET *i; // rax
  __int64 v28; // r15
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r13
  struct _FAST_MUTEX *v32; // rcx
  char IsVirtualModeSuportDisabled; // r12
  __int64 v34; // rax
  int MonitorInstance; // eax
  __int64 v36; // rax
  __int64 v37; // rax
  struct DXGMONITOR *v38; // r15
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned int PathSourceFromTarget; // eax
  __int64 v42; // r15
  struct DMMVIDPNTOPOLOGY *v43; // r10
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  int v47; // eax
  const struct DMMVIDEOPRESENTTARGET *v48; // r14
  const struct DMMVIDEOPRESENTTARGET *FirstBestSecondaryTarget; // rax
  __int64 v50; // rdx
  __int64 v51; // rax
  _QWORD *v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // r14
  __int64 v56; // rdx
  __int64 v57; // rcx
  struct DMMVIDPNTOPOLOGY *v58; // r10
  __int64 v59; // r13
  struct _FAST_MUTEX *v60; // rcx
  char v61; // r12
  __int64 v62; // rax
  int v63; // eax
  __int64 v64; // rax
  __int64 v65; // rax
  struct DXGMONITOR *v66; // r14
  __int64 v67; // rax
  __int64 v68; // rax
  unsigned int v69; // r14d
  int v70; // eax
  __int64 v71; // rdx
  __int64 v72; // rcx
  int v73; // eax
  const struct DMMVIDEOPRESENTTARGET *v74; // r15
  int v75; // eax
  __int64 v76; // rdx
  __int64 v78; // rax
  struct DMMVIDPNTOPOLOGY *v79; // [rsp+40h] [rbp-29h]
  __int64 v80; // [rsp+48h] [rbp-21h] BYREF
  __int64 v81; // [rsp+50h] [rbp-19h] BYREF
  struct DXGMONITOR *v82; // [rsp+58h] [rbp-11h] BYREF
  DMMVIDPNTOPOLOGY *v83; // [rsp+60h] [rbp-9h]
  struct DXGMONITOR *v84; // [rsp+68h] [rbp-1h] BYREF
  VIDPN_MGR *v85; // [rsp+70h] [rbp+7h]
  __int64 v86[9]; // [rsp+78h] [rbp+Fh] BYREF
  bool v88; // [rsp+D8h] [rbp+6Fh]
  bool v89; // [rsp+E0h] [rbp+77h]
  int v90; // [rsp+E8h] [rbp+7Fh]

  v3 = this;
  v4 = *(VIDPN_MGR **)(*((_QWORD *)a2 + 337) + 88LL);
  v85 = v4;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(v86, (__int64)v4);
  v5 = *((_QWORD *)a2 + 337);
  v6 = 0;
  v81 = 0LL;
  v7 = 0LL;
  v83 = 0LL;
  if ( *(_BYTE *)(v5 + 250) && (int)VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v4, &v81) >= 0 )
  {
    v10 = v81;
    if ( !v81 )
    {
      v11 = WdLogNewEntry5_WdAssertion(v9, v8);
      WdLogEvent5_WdAssertion(v11);
    }
    v7 = v10 + 96;
    v83 = (DMMVIDPNTOPOLOGY *)(v10 + 96);
  }
  v80 = 0LL;
  v12 = VIDPN_MGR::CreateClientVidPn(v4, &v80);
  v15 = v12;
  if ( v12 < 0 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13);
    v16[3] = v15;
    v16[4] = a2;
    v16[5] = *((int *)a2 + 80);
    v16[6] = *((unsigned int *)a2 + 79);
LABEL_19:
    WdLogEvent5_WdError(v16);
    goto LABEL_114;
  }
  v79 = (struct DMMVIDPNTOPOLOGY *)(v80 + 96);
  if ( v80 == -96 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13);
    v17[3] = -96LL;
    v17[4] = a2;
    v17[5] = *((int *)a2 + 80);
    v17[6] = *((unsigned int *)a2 + 79);
    WdLogEvent5_WdError(v17);
    LODWORD(v15) = -1073741823;
    goto LABEL_114;
  }
  while ( 1 )
  {
    v18 = *(_QWORD *)(*(_QWORD *)v3 + 64LL);
    v19 = v18 ? *(_WORD *)(v18 + 20) : 0;
    if ( v6 >= v19 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(*(CCD_TOPOLOGY **)v3, v6);
    v21 = PathDescriptor;
    if ( *((_DWORD *)PathDescriptor + 4) == *((_DWORD *)a2 + 79)
      && *((_DWORD *)PathDescriptor + 5) == *((_DWORD *)a2 + 80) )
    {
      v22 = VIDPN_MGR::AddPathToVidPnTopology(
              v4,
              v79,
              *((_DWORD *)PathDescriptor + 6),
              *((_DWORD *)PathDescriptor + 7),
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
              v6,
              0,
              D3DKMDT_MCC_IGNORE);
      v15 = v22;
      if ( v22 < 0 )
      {
        v16 = (_QWORD *)WdLogNewEntry5_WdError(v24, v23);
        v16[3] = v15;
        v16[4] = *((int *)v21 + 5);
        v16[5] = *((unsigned int *)v21 + 4);
        v16[6] = *((unsigned int *)v21 + 6);
        v16[7] = *((unsigned int *)v21 + 7);
        goto LABEL_19;
      }
    }
    ++v6;
  }
  v90 = -1071774975;
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v4 + 10) + 72LL));
  v25 = *((_QWORD *)v4 + 10);
  v26 = 0;
  v89 = 0;
  v88 = 0;
  if ( v7 )
  {
    for ( i = BTL_TOPOLOGY_CONSTRUCTOR::_GetFirstBestSecondaryTarget((const struct DMMVIDEOPRESENTTARGETSET *)v25);
          ;
          i = BTL_TOPOLOGY_CONSTRUCTOR::_GetNextBestSecondaryTarget(v48, (const struct DMMVIDEOPRESENTTARGETSET *)v25) )
    {
      v48 = i;
      if ( !i )
        goto LABEL_62;
      v28 = *((unsigned int *)i + 6);
      if ( DMMVIDPNTOPOLOGY::IsTargetInTopology(v79, *((_DWORD *)i + 6))
        || (_DWORD)v28 == *((_DWORD *)v3 + 6)
        && *((_DWORD *)a2 + 79) == *((_DWORD *)v3 + 3)
        && *((_DWORD *)a2 + 80) == *((_DWORD *)v3 + 4)
        || !*((_QWORD *)v48 + 14)
        || *((_DWORD *)v48 + 22) )
      {
        continue;
      }
      if ( (_DWORD)v28 != -1 )
        break;
      LODWORD(v15) = -1073741811;
LABEL_50:
      if ( (int)v15 < 0 )
        goto LABEL_64;
      if ( !*((_BYTE *)v3 + 10) || !v26 )
      {
        PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(v83, *((unsigned int *)v48 + 6));
        v42 = PathSourceFromTarget;
        if ( PathSourceFromTarget != -1 && !DMMVIDPNTOPOLOGY::IsSourceInTopology(v79, PathSourceFromTarget) )
        {
          v44 = VIDPN_MGR::AddPathToVidPnTopology(
                  v85,
                  v43,
                  v42,
                  *((_DWORD *)v48 + 6),
                  (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                  0xFFFFu,
                  0,
                  D3DKMDT_MCC_IGNORE);
          v15 = v44;
          if ( v44 != -1071774975 )
          {
            if ( v44 < 0 )
            {
              v52 = (_QWORD *)WdLogNewEntry5_WdError(v46, v45);
              v52[3] = v15;
              v52[4] = *((int *)a2 + 80);
              v52[5] = *((unsigned int *)a2 + 79);
              v52[6] = v42;
              v54 = *((unsigned int *)v48 + 6);
LABEL_66:
              v52[7] = v54;
              goto LABEL_118;
            }
            LODWORD(v15) = BTL_TOPOLOGY_CONSTRUCTOR::_AddPathToTopology(
                             v3,
                             (const struct _LUID *)((char *)a2 + 316),
                             v42,
                             *((_DWORD *)v48 + 6),
                             (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)v48 + 20),
                             (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)v48 + 21),
                             !v89,
                             !v26);
            v47 = v90;
            if ( (int)v15 >= 0 )
              v47 = v15;
            v90 = v47;
          }
        }
      }
    }
    v31 = *((_QWORD *)a2 + 337);
    if ( !v31 )
    {
      v51 = WdLogNewEntry5_WdError(v30, v29);
      *(_QWORD *)(v51 + 24) = 9262LL;
      WdLogEvent5_WdError(v51);
      LODWORD(v15) = -1073741811;
LABEL_64:
      v52 = (_QWORD *)WdLogNewEntry5_WdError(v30, v29);
      v53 = *((unsigned int *)v48 + 6);
LABEL_117:
      v52[4] = a2;
      v52[3] = v53;
LABEL_118:
      WdLogEvent5_WdError(v52);
      goto LABEL_112;
    }
    v32 = *(struct _FAST_MUTEX **)(v31 + 96);
    IsVirtualModeSuportDisabled = 0;
    if ( !v32 )
    {
      v34 = WdLogNewEntry5_WdError(0LL, v29);
      *(_QWORD *)(v34 + 24) = a2;
      WdLogEvent5_WdError(v34);
      LODWORD(v15) = -1073741811;
LABEL_38:
      v37 = WdLogNewEntry5_WdAssertion(v30, v29);
      *(_QWORD *)(v37 + 24) = (int)v15;
      WdLogEvent5_WdAssertion(v37);
LABEL_48:
      v3 = this;
      v26 = v88;
      goto LABEL_50;
    }
    v82 = 0LL;
    MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v32, (unsigned int)v28, 1, &v82);
    LODWORD(v15) = MonitorInstance;
    if ( MonitorInstance == -1073741275 )
    {
      v36 = WdLogNewEntry5_WdDmmEvent(v30);
      *(_QWORD *)(v36 + 24) = v28;
      *(_QWORD *)(v36 + 32) = a2;
      WdLogEvent5_WdDmmEvent(v36);
    }
    else
    {
      if ( MonitorInstance >= 0 )
      {
        v38 = v82;
        if ( !v82 || *((_DWORD *)v82 + 108) != 1 )
        {
          v39 = WdLogNewEntry5_WdAssertion(v30, v29);
          WdLogEvent5_WdAssertion(v39);
        }
        if ( !v38 )
        {
          v40 = WdLogNewEntry5_WdAssertion(v30, v29);
          WdLogEvent5_WdAssertion(v40);
        }
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite((PERESOURCE)((char *)v38 + 296), 1u);
        IsVirtualModeSuportDisabled = DXGMONITOR::_IsVirtualModeSuportDisabled(v38);
        ExReleaseResourceLite((PERESOURCE)((char *)v38 + 296));
        KeLeaveCriticalRegion();
        LODWORD(v15) = 0;
        goto LABEL_45;
      }
      if ( MonitorInstance != -1073741632 )
      {
LABEL_37:
        if ( (int)v15 < 0 )
          goto LABEL_38;
LABEL_45:
        if ( IsVirtualModeSuportDisabled )
        {
          v88 = 1;
          v89 = 1;
        }
        else
        {
          v88 = *(_BYTE *)(v31 + 250) == 0;
          v89 = *(_BYTE *)(v31 + 249) == 0;
        }
        goto LABEL_48;
      }
    }
    LODWORD(v15) = 0;
    goto LABEL_37;
  }
LABEL_62:
  FirstBestSecondaryTarget = BTL_TOPOLOGY_CONSTRUCTOR::_GetFirstBestSecondaryTarget((const struct DMMVIDEOPRESENTTARGETSET *)v25);
LABEL_108:
  v74 = FirstBestSecondaryTarget;
  if ( FirstBestSecondaryTarget )
  {
    v55 = *((unsigned int *)FirstBestSecondaryTarget + 6);
    if ( DMMVIDPNTOPOLOGY::IsTargetInTopology(v79, *((_DWORD *)FirstBestSecondaryTarget + 6))
      || (_DWORD)v55 == *((_DWORD *)v3 + 6)
      && *((_DWORD *)a2 + 79) == *((_DWORD *)v3 + 3)
      && *((_DWORD *)a2 + 80) == *((_DWORD *)v3 + 4)
      || !*((_QWORD *)v74 + 14) )
    {
      goto LABEL_107;
    }
    if ( (_DWORD)v55 == -1 )
    {
      LODWORD(v15) = -1073741811;
      goto LABEL_94;
    }
    v59 = *((_QWORD *)a2 + 337);
    if ( !v59 )
    {
      v78 = WdLogNewEntry5_WdError(v57, v56);
      *(_QWORD *)(v78 + 24) = 9262LL;
      WdLogEvent5_WdError(v78);
      LODWORD(v15) = -1073741811;
LABEL_116:
      v52 = (_QWORD *)WdLogNewEntry5_WdError(v57, v56);
      v53 = *((unsigned int *)v74 + 6);
      goto LABEL_117;
    }
    v60 = *(struct _FAST_MUTEX **)(v59 + 96);
    v61 = 0;
    if ( !v60 )
    {
      v62 = WdLogNewEntry5_WdError(0LL, v56);
      *(_QWORD *)(v62 + 24) = a2;
      WdLogEvent5_WdError(v62);
      LODWORD(v15) = -1073741811;
LABEL_82:
      v65 = WdLogNewEntry5_WdAssertion(v57, v56);
      *(_QWORD *)(v65 + 24) = (int)v15;
      WdLogEvent5_WdAssertion(v65);
LABEL_92:
      v3 = this;
      v58 = v79;
LABEL_94:
      if ( (int)v15 < 0 )
        goto LABEL_116;
      if ( *((_BYTE *)v3 + 10) && v88 )
        goto LABEL_107;
      v69 = 0;
      if ( !*(_DWORD *)(*((_QWORD *)a2 + 337) + 80LL) )
        goto LABEL_107;
      while ( 1 )
      {
        if ( !DMMVIDPNTOPOLOGY::IsSourceInTopology(v58, v69) )
        {
          v70 = VIDPN_MGR::AddPathToVidPnTopology(
                  v85,
                  v58,
                  v69,
                  *((_DWORD *)v74 + 6),
                  (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                  0xFFFFu,
                  0,
                  D3DKMDT_MCC_IGNORE);
          v15 = v70;
          if ( v70 != -1071774975 )
          {
            if ( v70 < 0 )
            {
              v52 = (_QWORD *)WdLogNewEntry5_WdError(v72, v71);
              v52[3] = v15;
              v52[4] = *((int *)a2 + 80);
              v52[5] = *((unsigned int *)a2 + 79);
              v52[6] = v69;
              v54 = *((unsigned int *)v74 + 6);
              goto LABEL_66;
            }
            LODWORD(v15) = BTL_TOPOLOGY_CONSTRUCTOR::_AddPathToTopology(
                             v3,
                             (const struct _LUID *)((char *)a2 + 316),
                             v69,
                             *((_DWORD *)v74 + 6),
                             (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)v74 + 20),
                             (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)v74 + 21),
                             !v89,
                             !v88);
            v73 = v90;
            if ( (int)v15 >= 0 )
              v73 = v15;
            v90 = v73;
LABEL_107:
            FirstBestSecondaryTarget = BTL_TOPOLOGY_CONSTRUCTOR::_GetNextBestSecondaryTarget(
                                         v74,
                                         (const struct DMMVIDEOPRESENTTARGETSET *)v25);
            goto LABEL_108;
          }
          v58 = v79;
        }
        if ( ++v69 >= *(_DWORD *)(*((_QWORD *)a2 + 337) + 80LL) )
          goto LABEL_107;
      }
    }
    v84 = 0LL;
    v63 = MONITOR_MGR::_GetMonitorInstance(v60, (unsigned int)v55, 1, &v84);
    LODWORD(v15) = v63;
    if ( v63 == -1073741275 )
    {
      v64 = WdLogNewEntry5_WdDmmEvent(v57);
      *(_QWORD *)(v64 + 24) = v55;
      *(_QWORD *)(v64 + 32) = a2;
      WdLogEvent5_WdDmmEvent(v64);
    }
    else
    {
      if ( v63 >= 0 )
      {
        v66 = v84;
        if ( !v84 || *((_DWORD *)v84 + 108) != 1 )
        {
          v67 = WdLogNewEntry5_WdAssertion(v57, v56);
          WdLogEvent5_WdAssertion(v67);
        }
        if ( !v66 )
        {
          v68 = WdLogNewEntry5_WdAssertion(v57, v56);
          WdLogEvent5_WdAssertion(v68);
        }
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite((PERESOURCE)((char *)v66 + 296), 1u);
        v61 = DXGMONITOR::_IsVirtualModeSuportDisabled(v66);
        ExReleaseResourceLite((PERESOURCE)((char *)v66 + 296));
        KeLeaveCriticalRegion();
        LODWORD(v15) = 0;
        goto LABEL_89;
      }
      if ( v63 != -1073741632 )
      {
LABEL_81:
        if ( (int)v15 < 0 )
          goto LABEL_82;
LABEL_89:
        if ( v61 )
        {
          v88 = 1;
          v89 = 1;
        }
        else
        {
          v88 = *(_BYTE *)(v59 + 250) == 0;
          v89 = *(_BYTE *)(v59 + 249) == 0;
        }
        goto LABEL_92;
      }
    }
    LODWORD(v15) = 0;
    goto LABEL_81;
  }
  v75 = v90;
  if ( (_DWORD)v15 != -1071774975 )
    v75 = v15;
  LODWORD(v15) = v75;
LABEL_112:
  if ( v25 )
    ReferenceCounted::Release((ReferenceCounted *)(v25 + 64), v50);
LABEL_114:
  auto_rc<DMMVIDPN>::reset(&v80, 0LL);
  auto_rc<DMMVIDPN>::reset(&v81, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v86[0] + 40), v76);
  return (unsigned int)v15;
}
