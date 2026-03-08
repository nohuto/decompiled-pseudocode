/*
 * XREFs of ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C017A1D0
 * Callers:
 *     _BtlPreAcquireSharedAccess_&BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_FindAnchorAdaptersCallback_0_1_ @ 0x1C017DEA0 (_BtlPreAcquireSharedAccess_-BTL_TOPOLOGY_CONSTRUCTOR--_ANCHOR_INFO--_FindAnchorAdaptersCallback_.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0007E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00094C0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000999C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?IsMonitorConnected@DMMVIDEOPRESENTTARGET@@QEBAEPEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C017A5C0 (-IsMonitorConnected@DMMVIDEOPRESENTTARGET@@QEBAEPEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?_GetPostAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SA?AW4_POST_ADAPTER_PREFERENCE@12@AEBVDXGADAPTER@@@Z @ 0x1C017A638 (-_GetPostAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SA-AW4_POST_ADAPTER_PREFERENCE.c)
 *     ?_GetAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SA?AW4_ADAPTER_PREFERENCE@12@AEBVDXGADAPTER@@@Z @ 0x1C017A654 (-_GetAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SA-AW4_ADAPTER_PREFERENCE@12@AEBVD.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C017AB4C (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     MonitorIsMonitorVirtualModeDisabled @ 0x1C017FDC8 (MonitorIsMonitorVirtualModeDisabled.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0182810 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C01829E4 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C01A1F18 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C01A23D0 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C01B3BC0 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C01B3DBC (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?_GetVmtPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA?AW4_VMT_PREFERENCE@1@W4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C03BDD40 (-_GetVmtPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA-AW4_VMT_PREFERENCE@1@W4_DMM_VIDPN_MONITOR_TYPE@@.c)
 *     ?_GetVotPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA?AW4_VOT_PREFERENCE@1@AEBVDXGADAPTER@@W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@W4_DXGK_CHILD_DEVICE_HPD_AWARENESS@@E@Z @ 0x1C03BDD8C (-_GetVotPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA-AW4_VOT_PREFERENCE@1@AEBVDXGADAPTER@@W4_D3DKMDT_.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_FindAnchorAdaptersCallback(
        struct DXGADAPTER *a1,
        _DWORD *a2)
{
  _DWORD *v2; // r12
  __int64 v4; // rcx
  __int64 v5; // rdx
  VIDPN_MGR *v6; // rdi
  __int64 v7; // rax
  int ClientVidPn; // eax
  __int64 v9; // r14
  __int64 v10; // rbx
  __int64 v11; // r15
  __int64 v12; // r15
  unsigned int PathSourceFromTarget; // r13d
  struct DMMVIDPNTOPOLOGY *v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rdi
  int IsMonitorVirtualModeDisabled; // eax
  char v18; // al
  bool v19; // r8
  bool v20; // r9
  char v21; // r8
  bool v22; // zf
  __int64 v23; // r8
  char v24; // r9
  char v25; // dl
  DMMVIDPNTOPOLOGY *v26; // rdx
  unsigned int v27; // edx
  DMMVIDPNTOPOLOGY *v28; // r13
  __int64 v29; // rax
  int VmtPreference; // eax
  int v32; // edx
  __int64 v33; // r9
  bool v34; // al
  char v35; // al
  int v36; // r14d
  unsigned int v37; // eax
  int VotPreference; // eax
  __int64 v39; // r9
  int v40; // r13d
  int v41; // eax
  int v42; // r11d
  bool v43; // [rsp+50h] [rbp-39h]
  bool v44; // [rsp+51h] [rbp-38h]
  unsigned int v45; // [rsp+54h] [rbp-35h] BYREF
  DMMVIDPNTOPOLOGY *v46; // [rsp+58h] [rbp-31h]
  int v47; // [rsp+60h] [rbp-29h]
  __int64 v48; // [rsp+68h] [rbp-21h] BYREF
  __int64 v49; // [rsp+70h] [rbp-19h] BYREF
  DMMVIDPNTOPOLOGY *v50; // [rsp+78h] [rbp-11h]
  __int64 v51; // [rsp+80h] [rbp-9h]
  VIDPN_MGR *v52; // [rsp+88h] [rbp-1h]
  __int64 v53; // [rsp+90h] [rbp+7h] BYREF
  _BYTE v54[72]; // [rsp+98h] [rbp+Fh] BYREF
  char v56; // [rsp+108h] [rbp+7Fh] BYREF

  v2 = a2;
  v47 = ((__int64 (*)(void))BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_GetAdapterPreference)();
  if ( v47 < *(_DWORD *)(v5 + 36) )
    return 0LL;
  v6 = *(VIDPN_MGR **)(*(_QWORD *)(v4 + 2920) + 104LL);
  v52 = v6;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v53, (__int64)v6);
  v7 = *((_QWORD *)a1 + 365);
  v49 = 0LL;
  v50 = 0LL;
  if ( *(_BYTE *)(v7 + 290) && (int)VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v6) >= 0 )
  {
    WdLogSingleEntry0(1LL);
    v50 = (DMMVIDPNTOPOLOGY *)96;
  }
  v48 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn(v6);
  LODWORD(v9) = ClientVidPn;
  if ( ClientVidPn < 0 )
  {
    WdLogSingleEntry5(2LL, ClientVidPn, a1, *((int *)a1 + 102), *((unsigned int *)a1 + 101), v2);
    goto LABEL_30;
  }
  v46 = (DMMVIDPNTOPOLOGY *)(v48 + 96);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v6 + 15) + 72LL));
  v10 = *((_QWORD *)v6 + 15);
  LODWORD(v9) = 0;
  v51 = v10;
  v44 = 0;
  v43 = 0;
  v11 = *(_QWORD *)(v10 + 24);
  if ( v11 == v10 + 24 )
    goto LABEL_28;
  v12 = v11 - 8;
  if ( !v12 )
    goto LABEL_28;
  while ( 1 )
  {
    v45 = 0;
    if ( !DMMVIDEOPRESENTTARGET::IsMonitorConnected((DMMVIDEOPRESENTTARGET *)v12, (enum _DMM_VIDPN_MONITOR_TYPE *)&v45)
      || *(_DWORD *)(v12 + 92) )
    {
      goto LABEL_25;
    }
    if ( v2[9] < (int)BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_GetAdapterPreference(a1) )
      goto LABEL_11;
    BTL_TOPOLOGY_CONSTRUCTOR::_GetVmtPreference(v45);
    VmtPreference = BTL_TOPOLOGY_CONSTRUCTOR::_GetVmtPreference((unsigned int)v2[8]);
    if ( v32 == VmtPreference )
    {
      v35 = *((_BYTE *)v2 + 49);
      if ( *(_BYTE *)(v12 + 412) )
      {
        if ( !v35 )
          goto LABEL_25;
      }
      else if ( v35 )
      {
        goto LABEL_11;
      }
      v36 = *((_DWORD *)a1 + 101);
      if ( *(_QWORD *)v2 != *(_QWORD *)((char *)a1 + 404) || (v37 = *(_DWORD *)(v12 + 124), v37 == v2[7]) )
      {
        LOBYTE(v33) = 1;
        VotPreference = BTL_TOPOLOGY_CONSTRUCTOR::_GetVotPreference(
                          a1,
                          *(unsigned int *)(v12 + 84),
                          *(unsigned int *)(v12 + 100),
                          v33);
        LOBYTE(v39) = 1;
        v40 = VotPreference;
        v41 = BTL_TOPOLOGY_CONSTRUCTOR::_GetVotPreference(a1, (unsigned int)v2[5], (unsigned int)v2[6], v39);
        if ( v40 == v41 )
        {
          if ( v42 == v36 && v2[1] == *((_DWORD *)a1 + 102) )
          {
            LODWORD(v9) = 0;
            goto LABEL_25;
          }
          LODWORD(v9) = 0;
          if ( (int)BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_GetPostAdapterPreference(a1) >= v2[11] )
            goto LABEL_25;
          goto LABEL_11;
        }
        v34 = v40 < v41;
      }
      else
      {
        v34 = v37 < v2[7];
      }
      LODWORD(v9) = 0;
    }
    else
    {
      v34 = v32 < VmtPreference;
    }
    if ( !v34 )
      goto LABEL_25;
LABEL_11:
    if ( !v50
      || (PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(v50, *(_DWORD *)(v12 + 24)),
          PathSourceFromTarget == -1) )
    {
      v14 = v46;
    }
    else
    {
      v14 = v46;
      if ( (int)VIDPN_MGR::AddPathToVidPnTopology(
                  v6,
                  v46,
                  PathSourceFromTarget,
                  *(_DWORD *)(v12 + 24),
                  (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                  0xFFFFu,
                  0,
                  D3DKMDT_MCC_IGNORE) >= 0 )
        goto LABEL_14;
    }
    PathSourceFromTarget = 0;
    if ( *(_DWORD *)(*((_QWORD *)a1 + 365) + 96LL) )
    {
      do
      {
        if ( (int)VIDPN_MGR::AddPathToVidPnTopology(
                    v6,
                    v14,
                    PathSourceFromTarget,
                    *(_DWORD *)(v12 + 24),
                    (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                    0xFFFFu,
                    0,
                    D3DKMDT_MCC_IGNORE) >= 0 )
          break;
        ++PathSourceFromTarget;
      }
      while ( PathSourceFromTarget < *(_DWORD *)(*((_QWORD *)a1 + 365) + 96LL) );
      v10 = v51;
      v2 = a2;
    }
LABEL_14:
    v15 = *(unsigned int *)(v12 + 24);
    if ( (_DWORD)v15 == -1 )
      goto LABEL_63;
    v16 = *((_QWORD *)a1 + 365);
    if ( !v16 )
      break;
    v56 = 0;
    IsMonitorVirtualModeDisabled = MonitorIsMonitorVirtualModeDisabled(a1, v15, &v56);
    v9 = IsMonitorVirtualModeDisabled;
    if ( IsMonitorVirtualModeDisabled == -1073741632 )
    {
      v18 = 0;
      LODWORD(v9) = 0;
LABEL_19:
      if ( v18 )
      {
        v19 = 1;
        v20 = 1;
      }
      else
      {
        v19 = *(_BYTE *)(v16 + 289) == 0;
        v20 = *(_BYTE *)(v16 + 290) == 0;
      }
      goto LABEL_21;
    }
    if ( IsMonitorVirtualModeDisabled >= 0 )
    {
      v18 = v56;
      goto LABEL_19;
    }
    WdLogSingleEntry1(1LL, IsMonitorVirtualModeDisabled);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"Unexpected return code 0x%I64x from MonitorIsMonitorVirtualModeDisabled()",
      v9,
      0LL,
      0LL,
      0LL,
      0LL);
    v19 = v44;
    v20 = v43;
LABEL_21:
    v43 = v20;
    v44 = v19;
    if ( (int)v9 < 0 )
      goto LABEL_64;
    *(_QWORD *)v2 = *(_QWORD *)((char *)a1 + 404);
    v2[2] = PathSourceFromTarget;
    v2[3] = *(_DWORD *)(v12 + 24);
    v2[4] = *(_DWORD *)(v12 + 80);
    v2[5] = *(_DWORD *)(v12 + 84);
    v2[6] = *(_DWORD *)(v12 + 100);
    v2[7] = *(_DWORD *)(v12 + 124);
    v2[8] = v45;
    v2[9] = v47;
    *((_BYTE *)v2 + 40) = *(_BYTE *)(v12 + 405);
    v2[11] = BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_GetPostAdapterPreference(a1);
    LODWORD(v9) = 0;
    v22 = v21 == 0;
    LOBYTE(v23) = 2;
    *((_BYTE *)v2 + 41) = v22;
    v22 = v25 == 0;
    v26 = v46;
    *((_BYTE *)v2 + 48) = v24 == 0;
    *((_BYTE *)v2 + 42) = v22;
    *((_BYTE *)v2 + 49) = *(_BYTE *)(v12 + 412);
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(v54, (char *)v26 + 56, v23);
    v27 = PathSourceFromTarget;
    v28 = v46;
    if ( (int)DMMVIDPNTOPOLOGY::RemovePath(v46, v27, *(_DWORD *)(v12 + 24), 0LL) < 0 || *((_QWORD *)v28 + 5) )
      WdLogSingleEntry0(1LL);
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v54);
    v6 = v52;
LABEL_25:
    v29 = *(_QWORD *)(v12 + 8);
    v12 = v29 - 8;
    if ( v29 == v10 + 24 )
      v12 = 0LL;
    if ( !v12 )
      goto LABEL_28;
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
LABEL_63:
  LODWORD(v9) = -1073741811;
LABEL_64:
  WdLogSingleEntry3(2LL, *(unsigned int *)(v12 + 24), *((int *)a1 + 102), *((unsigned int *)a1 + 101));
LABEL_28:
  if ( v10 )
    ReferenceCounted::Release((ReferenceCounted *)(v10 + 64));
LABEL_30:
  auto_rc<DMMVIDPN>::reset(&v48, 0LL);
  auto_rc<DMMVIDPN>::reset(&v49, 0LL);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v53 + 40));
  return (unsigned int)v9;
}
