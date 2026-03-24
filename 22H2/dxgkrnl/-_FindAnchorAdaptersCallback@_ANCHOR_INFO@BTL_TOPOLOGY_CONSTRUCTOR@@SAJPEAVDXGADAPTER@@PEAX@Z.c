/*
 * XREFs of ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0140C6C
 * Callers:
 *     _BtlPreAcquireSharedAccess_&BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_FindAnchorAdaptersCallback_0_1_ @ 0x1C0140B60 (_BtlPreAcquireSharedAccess_-BTL_TOPOLOGY_CONSTRUCTOR--_ANCHOR_INFO--_FindAnchorAdaptersCallback_.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003960 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0006454 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0009550 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000ADEC (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C011BED4 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C011CDA0 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C011CEC8 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C012EC80 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0133648 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ @ 0x1C0133DF8 (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ.c)
 *     ?IsMonitorConnected@DMMVIDEOPRESENTTARGET@@QEBAEPEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C01410C0 (-IsMonitorConnected@DMMVIDEOPRESENTTARGET@@QEBAEPEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0141140 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?_GetPostAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SA?AW4_POST_ADAPTER_PREFERENCE@12@AEBVDXGADAPTER@@@Z @ 0x1C0141388 (-_GetPostAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SA-AW4_POST_ADAPTER_PREFERENCE.c)
 *     ?_GetAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SA?AW4_ADAPTER_PREFERENCE@12@AEBVDXGADAPTER@@@Z @ 0x1C01413A4 (-_GetAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SA-AW4_ADAPTER_PREFERENCE@12@AEBVD.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0141538 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C014164C (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?_GetVmtPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA?AW4_VMT_PREFERENCE@1@W4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C02F0110 (-_GetVmtPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA-AW4_VMT_PREFERENCE@1@W4_DMM_VIDPN_MONITOR_TYPE@@.c)
 *     ?_GetVotPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA?AW4_VOT_PREFERENCE@1@AEBVDXGADAPTER@@W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@W4_DXGK_CHILD_DEVICE_HPD_AWARENESS@@E@Z @ 0x1C02F015C (-_GetVotPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA-AW4_VOT_PREFERENCE@1@AEBVDXGADAPTER@@W4_D3DKMDT_.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_FindAnchorAdaptersCallback(
        struct DXGADAPTER *a1,
        _DWORD *a2)
{
  _DWORD *v2; // r15
  __int64 v4; // rcx
  __int64 v5; // rdx
  struct VIDPN_MGR *v6; // r13
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  int ClientVidPn; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DXGMONITOR *v13; // r8
  __int64 v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // r14
  struct DXGMONITOR *v17; // r14
  unsigned __int8 IsMonitorConnected; // al
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v22; // rcx
  unsigned int PathSourceFromTarget; // eax
  struct DMMVIDPNTOPOLOGY *v24; // rdi
  unsigned int v25; // r12d
  int v26; // eax
  __int64 v27; // r13
  __int64 v28; // rax
  struct _FAST_MUTEX *v29; // rcx
  int MonitorInstance; // eax
  struct DXGMONITOR *v31; // r13
  int v32; // eax
  DMMVIDPNTOPOLOGY *v33; // rdx
  __int64 v34; // r9
  unsigned int v35; // edx
  DMMVIDPNTOPOLOGY *v36; // r12
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  _QWORD *v41; // rax
  int VmtPreference; // eax
  __int64 v43; // r9
  bool v44; // al
  char v45; // al
  unsigned int v46; // eax
  int VotPreference; // eax
  __int64 v48; // r9
  int v49; // edi
  int v50; // eax
  int v51; // r10d
  int v52; // r11d
  int PostAdapterPreference; // eax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  _QWORD *v60; // rax
  __int64 v61; // [rsp+20h] [rbp-69h]
  char IsVirtualModeSuportDisabled; // [rsp+40h] [rbp-49h]
  unsigned int v63; // [rsp+44h] [rbp-45h] BYREF
  DMMVIDPNTOPOLOGY *v64; // [rsp+48h] [rbp-41h]
  int v65; // [rsp+50h] [rbp-39h]
  __int64 v66; // [rsp+58h] [rbp-31h] BYREF
  __int64 v67; // [rsp+60h] [rbp-29h] BYREF
  DMMVIDPNTOPOLOGY *v68; // [rsp+68h] [rbp-21h]
  struct DXGMONITOR *v69; // [rsp+70h] [rbp-19h] BYREF
  __int64 v70; // [rsp+78h] [rbp-11h]
  __int64 v71; // [rsp+80h] [rbp-9h]
  struct VIDPN_MGR *v72; // [rsp+88h] [rbp-1h]
  __int64 v73; // [rsp+90h] [rbp+7h] BYREF
  _BYTE v74[72]; // [rsp+98h] [rbp+Fh] BYREF
  bool v76; // [rsp+100h] [rbp+77h]
  bool v77; // [rsp+108h] [rbp+7Fh]

  v2 = a2;
  v65 = ((__int64 (*)(void))BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_GetAdapterPreference)();
  if ( v65 < *(_DWORD *)(v5 + 36) )
    return 0LL;
  v6 = *(struct VIDPN_MGR **)(*(_QWORD *)(v4 + 2696) + 88LL);
  v72 = v6;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v73, (__int64)v6);
  v7 = *((_QWORD *)a1 + 337);
  v67 = 0LL;
  v68 = 0LL;
  if ( *(_BYTE *)(v7 + 250) && (int)VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v6) >= 0 )
  {
    v40 = WdLogNewEntry5_WdAssertion(v9, v8);
    WdLogEvent5_WdAssertion(v40);
    v68 = (DMMVIDPNTOPOLOGY *)96;
  }
  v66 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn(v6);
  LODWORD(v13) = 0;
  v14 = ClientVidPn;
  if ( ClientVidPn < 0 )
  {
    v41 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11);
    v41[3] = v14;
    v41[4] = a1;
    v41[5] = *((int *)a1 + 80);
    v41[6] = *((unsigned int *)a1 + 79);
    v41[7] = v2;
    WdLogEvent5_WdError(v41);
    goto LABEL_14;
  }
  v64 = (DMMVIDPNTOPOLOGY *)(v66 + 96);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v6 + 10) + 72LL));
  v15 = *((_QWORD *)v6 + 10);
  v70 = v15;
  v76 = 0;
  v77 = 0;
  v16 = *(_QWORD *)(v15 + 24);
  if ( v16 == v15 + 24 || (v17 = (struct DXGMONITOR *)(v16 - 8)) == 0LL )
  {
LABEL_12:
    LODWORD(v14) = (_DWORD)v13;
    goto LABEL_13;
  }
  while ( 1 )
  {
    v63 = (unsigned int)v13;
    IsMonitorConnected = DMMVIDEOPRESENTTARGET::IsMonitorConnected(v17, (enum _DMM_VIDPN_MONITOR_TYPE *)&v63);
    v13 = 0LL;
    if ( IsMonitorConnected )
    {
      if ( !*((_DWORD *)v17 + 22) )
        break;
    }
LABEL_9:
    v19 = *((_QWORD *)v17 + 1);
    v17 = (struct DXGMONITOR *)(v19 - 8);
    if ( v19 == v15 + 24 )
      v17 = v13;
    if ( !v17 )
      goto LABEL_12;
  }
  if ( v2[9] < (int)BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_GetAdapterPreference(a1, v11, 0LL) )
    goto LABEL_17;
  BTL_TOPOLOGY_CONSTRUCTOR::_GetVmtPreference(v63);
  VmtPreference = BTL_TOPOLOGY_CONSTRUCTOR::_GetVmtPreference((unsigned int)v2[8]);
  if ( (_DWORD)v11 != VmtPreference )
  {
    v44 = (int)v11 < VmtPreference;
    goto LABEL_63;
  }
  v45 = *((_BYTE *)v2 + 49);
  if ( *((_BYTE *)v17 + 412) == (_BYTE)v13 )
  {
    if ( v45 )
      goto LABEL_17;
  }
  else if ( !v45 )
  {
    goto LABEL_9;
  }
  if ( *v2 == *((_DWORD *)a1 + 79) && v2[1] == *((_DWORD *)a1 + 80) )
  {
    v46 = *((_DWORD *)v17 + 31);
    if ( v46 != v2[7] )
    {
      v44 = v46 < v2[7];
      goto LABEL_63;
    }
  }
  LOBYTE(v43) = 1;
  VotPreference = BTL_TOPOLOGY_CONSTRUCTOR::_GetVotPreference(
                    a1,
                    *((unsigned int *)v17 + 21),
                    *((unsigned int *)v17 + 24),
                    v43);
  LOBYTE(v48) = 1;
  v49 = VotPreference;
  v50 = BTL_TOPOLOGY_CONSTRUCTOR::_GetVotPreference(a1, (unsigned int)v2[5], (unsigned int)v2[6], v48);
  if ( v49 != v50 )
  {
    v44 = v49 < v50;
    v13 = 0LL;
    goto LABEL_63;
  }
  if ( v51 == v52 && v2[1] == *((_DWORD *)a1 + 80) )
  {
LABEL_36:
    v13 = 0LL;
    goto LABEL_9;
  }
  PostAdapterPreference = BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_GetPostAdapterPreference(a1);
  v13 = 0LL;
  if ( PostAdapterPreference >= v2[11] )
  {
    v44 = 0;
LABEL_63:
    if ( !v44 )
      goto LABEL_9;
  }
LABEL_17:
  if ( v68 )
  {
    PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(v68, *((unsigned int *)v17 + 6));
    v24 = v64;
    v25 = PathSourceFromTarget;
    if ( PathSourceFromTarget == -1 )
    {
      v13 = 0LL;
    }
    else
    {
      v26 = VIDPN_MGR::AddPathToVidPnTopology(
              v6,
              v64,
              PathSourceFromTarget,
              *((_DWORD *)v17 + 6),
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
              0xFFFFu,
              0,
              D3DKMDT_MCC_IGNORE);
      v13 = 0LL;
      if ( v26 >= 0 )
        goto LABEL_20;
    }
  }
  else
  {
    v24 = v64;
  }
  v25 = (unsigned int)v13;
  if ( *(_DWORD *)(*((_QWORD *)a1 + 337) + 80LL) > (unsigned int)v13 )
  {
    do
    {
      if ( (int)VIDPN_MGR::AddPathToVidPnTopology(
                  v6,
                  v24,
                  v25,
                  *((_DWORD *)v17 + 6),
                  (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                  0xFFFFu,
                  0,
                  D3DKMDT_MCC_IGNORE) >= 0 )
        break;
      ++v25;
    }
    while ( v25 < *(_DWORD *)(*((_QWORD *)a1 + 337) + 80LL) );
    v15 = v70;
    v13 = 0LL;
    v2 = a2;
  }
LABEL_20:
  v27 = *((unsigned int *)v17 + 6);
  if ( (_DWORD)v27 == -1 )
  {
    LODWORD(v14) = -1073741811;
    goto LABEL_32;
  }
  v28 = *((_QWORD *)a1 + 337);
  v71 = v28;
  if ( v28 )
  {
    v29 = *(struct _FAST_MUTEX **)(v28 + 96);
    IsVirtualModeSuportDisabled = (char)v13;
    if ( !v29 )
    {
      v54 = WdLogNewEntry5_WdError(0LL, v11);
      *(_QWORD *)(v54 + 24) = a1;
      WdLogEvent5_WdError(v54);
      LODWORD(v14) = -1073741811;
LABEL_69:
      v55 = WdLogNewEntry5_WdAssertion(v22, v11);
      *(_QWORD *)(v55 + 24) = (int)v14;
      WdLogEvent5_WdAssertion(v55);
LABEL_32:
      if ( (int)v14 < 0 )
        goto LABEL_77;
      *(_QWORD *)v2 = *(_QWORD *)((char *)a1 + 316);
      v2[2] = v25;
      v2[3] = *((_DWORD *)v17 + 6);
      v2[4] = *((_DWORD *)v17 + 20);
      v2[5] = *((_DWORD *)v17 + 21);
      v2[6] = *((_DWORD *)v17 + 24);
      v2[7] = *((_DWORD *)v17 + 31);
      v2[8] = v63;
      v2[9] = v65;
      *((_BYTE *)v2 + 40) = *((_BYTE *)v17 + 405);
      v32 = BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_GetPostAdapterPreference(a1);
      v33 = v64;
      v2[11] = v32;
      *((_BYTE *)v2 + 41) = !v76;
      *((_BYTE *)v2 + 48) = !v77;
      *((_BYTE *)v2 + 49) = *((_BYTE *)v17 + 412);
      ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
        (__int64)v74,
        (__int64)v33 + 56,
        2u,
        v34,
        v61,
        255LL);
      v35 = v25;
      v36 = v64;
      if ( (int)DMMVIDPNTOPOLOGY::RemovePath(v64, v35, *((_DWORD *)v17 + 6), 0LL) < 0 || *((_QWORD *)v36 + 5) )
      {
        v58 = WdLogNewEntry5_WdAssertion(v38, v37);
        WdLogEvent5_WdAssertion(v58);
      }
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v74, v37);
      v6 = v72;
      goto LABEL_36;
    }
    v69 = v13;
    MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v29, (unsigned int)v27, 1, &v69);
    LODWORD(v14) = MonitorInstance;
    if ( MonitorInstance == -1073741275 )
    {
      v39 = WdLogNewEntry5_WdDmmEvent(v22);
      *(_QWORD *)(v39 + 24) = v27;
      *(_QWORD *)(v39 + 32) = a1;
      WdLogEvent5_WdDmmEvent(v39);
    }
    else
    {
      if ( MonitorInstance >= 0 )
      {
        v31 = v69;
        if ( !v69 || *((_DWORD *)v69 + 108) != 1 )
        {
          v56 = WdLogNewEntry5_WdAssertion(v22, v11);
          WdLogEvent5_WdAssertion(v56);
        }
        if ( !v31 )
        {
          v57 = WdLogNewEntry5_WdAssertion(v22, v11);
          WdLogEvent5_WdAssertion(v57);
        }
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite((PERESOURCE)((char *)v31 + 296), 1u);
        IsVirtualModeSuportDisabled = DXGMONITOR::_IsVirtualModeSuportDisabled(v31);
        ExReleaseResourceLite((PERESOURCE)((char *)v31 + 296));
        KeLeaveCriticalRegion();
        LODWORD(v14) = 0;
        goto LABEL_30;
      }
      if ( MonitorInstance != -1073741632 )
        goto LABEL_43;
    }
    LODWORD(v14) = 0;
LABEL_43:
    if ( (int)v14 >= 0 )
    {
LABEL_30:
      if ( IsVirtualModeSuportDisabled )
      {
        v77 = 1;
        v76 = 1;
      }
      else
      {
        v77 = *(_BYTE *)(v71 + 250) == 0;
        v76 = *(_BYTE *)(v71 + 249) == 0;
      }
      goto LABEL_32;
    }
    goto LABEL_69;
  }
  v59 = WdLogNewEntry5_WdError(v22, v11);
  *(_QWORD *)(v59 + 24) = 9262LL;
  WdLogEvent5_WdError(v59);
  LODWORD(v14) = -1073741811;
LABEL_77:
  v60 = (_QWORD *)WdLogNewEntry5_WdError(v22, v11);
  v60[3] = *((unsigned int *)v17 + 6);
  v60[4] = *((int *)a1 + 80);
  v60[5] = *((unsigned int *)a1 + 79);
  WdLogEvent5_WdError(v60);
LABEL_13:
  ReferenceCounted::Release((ReferenceCounted *)(v15 + 64), v11);
LABEL_14:
  auto_rc<DMMVIDPN>::reset(&v66, 0LL);
  auto_rc<DMMVIDPN>::reset(&v67, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v73 + 40), v20);
  return (unsigned int)v14;
}
