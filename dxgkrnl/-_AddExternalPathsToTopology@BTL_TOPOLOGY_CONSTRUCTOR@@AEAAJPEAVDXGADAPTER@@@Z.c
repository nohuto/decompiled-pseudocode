/*
 * XREFs of ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C03BBFE0
 * Callers:
 *     ?_AddExternalPathsAdaptersCallback@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C03BBFA0 (-_AddExternalPathsAdaptersCallback@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C00062B4 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0007E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0007F94 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00094C0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000999C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C017AB4C (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     MonitorIsMonitorVirtualModeDisabled @ 0x1C017FDC8 (MonitorIsMonitorVirtualModeDisabled.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C01829E4 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C01B1660 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C01B3BC0 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C01B3DBC (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1_N22@Z @ 0x1C03BC928 (-_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLO.c)
 *     ?_GetFirstBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C03BDB9C (-_GetFirstBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBVDMMVIDE.c)
 *     ?_GetNextBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBV2@AEBVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C03BDC38 (-_GetNextBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBV2@AEBVDM.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_AddExternalPathsToTopology(CCD_TOPOLOGY **this, struct DXGADAPTER *a2)
{
  CCD_TOPOLOGY **v3; // rbx
  VIDPN_MGR *v4; // r15
  __int64 v5; // rax
  unsigned int v6; // r14d
  DMMVIDPNTOPOLOGY *v7; // r13
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rdi
  struct DMMVIDPNTOPOLOGY *v11; // r12
  __int64 v12; // rax
  unsigned __int16 v13; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v15; // rbx
  int v16; // eax
  __int64 v17; // rbx
  bool v18; // r15
  bool v19; // r14
  const struct DMMVIDEOPRESENTTARGET *j; // rax
  unsigned int v21; // r10d
  __int64 v22; // rdi
  int v23; // eax
  __int64 v24; // r9
  __int64 v25; // r12
  char v26; // al
  char v27; // al
  char v28; // al
  int PathSourceFromTarget; // r10d
  unsigned int v30; // r10d
  struct DMMVIDPNTOPOLOGY *v31; // r11
  int v32; // eax
  const struct DMMVIDEOPRESENTTARGET *v33; // r13
  const struct DMMVIDEOPRESENTTARGET *i; // rax
  __int64 v35; // rcx
  unsigned int v36; // r10d
  __int64 v37; // rdi
  int IsMonitorVirtualModeDisabled; // eax
  __int64 v39; // r12
  char v40; // al
  char v41; // al
  __int64 v42; // rax
  unsigned int v43; // r10d
  DMMVIDPNTOPOLOGY *v44; // r11
  unsigned int v45; // r10d
  int v46; // eax
  __int64 v47; // rax
  int v48; // eax
  int v49; // eax
  int v51; // [rsp+54h] [rbp-25h]
  unsigned int v52; // [rsp+58h] [rbp-21h]
  DMMVIDPNTOPOLOGY *v53; // [rsp+60h] [rbp-19h]
  __int64 v54; // [rsp+68h] [rbp-11h] BYREF
  __int64 v55; // [rsp+70h] [rbp-9h] BYREF
  DMMVIDPNTOPOLOGY *v56; // [rsp+78h] [rbp-1h]
  VIDPN_MGR *v57; // [rsp+80h] [rbp+7h]
  _QWORD v58[9]; // [rsp+88h] [rbp+Fh] BYREF
  char v60; // [rsp+E8h] [rbp+6Fh]
  unsigned int v61; // [rsp+F0h] [rbp+77h] BYREF
  char v62; // [rsp+F8h] [rbp+7Fh]

  v3 = this;
  v4 = *(VIDPN_MGR **)(*((_QWORD *)a2 + 365) + 104LL);
  v57 = v4;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)v58, (__int64)v4);
  v5 = *((_QWORD *)a2 + 365);
  v6 = 0;
  v55 = 0LL;
  v7 = 0LL;
  v56 = 0LL;
  if ( *(_BYTE *)(v5 + 290) && (int)VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v4, &v55) >= 0 )
  {
    v8 = v55;
    if ( !v55 )
      WdLogSingleEntry0(1LL);
    v7 = (DMMVIDPNTOPOLOGY *)(v8 + 96);
    v3 = this;
    v56 = v7;
  }
  v54 = 0LL;
  v9 = VIDPN_MGR::CreateClientVidPn(v4, &v54);
  LODWORD(v10) = v9;
  if ( v9 < 0 )
  {
    WdLogSingleEntry4(2LL, v9, a2, *((int *)a2 + 102), *((unsigned int *)a2 + 101));
    goto LABEL_95;
  }
  v11 = (struct DMMVIDPNTOPOLOGY *)(v54 + 96);
  v53 = (DMMVIDPNTOPOLOGY *)(v54 + 96);
  if ( v54 == -96 )
  {
    WdLogSingleEntry4(2LL, -96LL, a2, *((int *)a2 + 102), *((unsigned int *)a2 + 101));
    LODWORD(v10) = -1073741823;
    goto LABEL_95;
  }
  while ( 1 )
  {
    v12 = *((_QWORD *)*v3 + 8);
    v13 = v12 ? *(_WORD *)(v12 + 20) : 0;
    if ( v6 >= v13 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(*v3, v6);
    v15 = PathDescriptor;
    if ( *((_DWORD *)PathDescriptor + 4) == *((_DWORD *)a2 + 101)
      && *((_DWORD *)PathDescriptor + 5) == *((_DWORD *)a2 + 102) )
    {
      v16 = VIDPN_MGR::AddPathToVidPnTopology(
              v4,
              v11,
              *((_DWORD *)PathDescriptor + 6),
              *((_DWORD *)PathDescriptor + 7),
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
              v6,
              0,
              D3DKMDT_MCC_IGNORE);
      LODWORD(v10) = v16;
      if ( v16 < 0 )
      {
        WdLogSingleEntry5(
          2LL,
          v16,
          *((int *)v15 + 5),
          *((unsigned int *)v15 + 4),
          *((unsigned int *)v15 + 6),
          *((unsigned int *)v15 + 7));
        goto LABEL_95;
      }
    }
    v3 = this;
    ++v6;
  }
  v51 = -1071774975;
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v4 + 15) + 72LL));
  v17 = *((_QWORD *)v4 + 15);
  v18 = 0;
  v60 = 0;
  v19 = 0;
  if ( !v7 )
  {
LABEL_52:
    for ( i = BTL_TOPOLOGY_CONSTRUCTOR::_GetFirstBestSecondaryTarget((const struct DMMVIDEOPRESENTTARGETSET *)v17);
          ;
          i = BTL_TOPOLOGY_CONSTRUCTOR::_GetNextBestSecondaryTarget(v33, (const struct DMMVIDEOPRESENTTARGETSET *)v17) )
    {
      v33 = i;
      if ( !i )
      {
        v49 = v51;
        if ( (_DWORD)v10 != -1071774975 )
          v49 = v10;
        LODWORD(v10) = v49;
        goto LABEL_93;
      }
      if ( DMMVIDPNTOPOLOGY::IsTargetInTopology(v53, *((_DWORD *)i + 6))
        || v36 == *((_DWORD *)this + 6)
        && *((_DWORD *)a2 + 101) == *((_DWORD *)this + 3)
        && *((_DWORD *)a2 + 102) == *((_DWORD *)this + 4)
        || !*((_QWORD *)v33 + 14) )
      {
        continue;
      }
      if ( v36 == -1 )
        goto LABEL_98;
      v37 = *((_QWORD *)a2 + 365);
      if ( !v37 )
        goto LABEL_97;
      LOBYTE(v61) = 0;
      IsMonitorVirtualModeDisabled = MonitorIsMonitorVirtualModeDisabled((__int64)a2, v36, &v61);
      v39 = IsMonitorVirtualModeDisabled;
      if ( IsMonitorVirtualModeDisabled == -1073741632 )
      {
        v40 = 0;
        LODWORD(v39) = 0;
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
            v39,
            0LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_74;
        }
        v40 = v61;
      }
      if ( v40 )
      {
        v19 = 1;
        v18 = 1;
      }
      else
      {
        v41 = *(_BYTE *)(v37 + 289);
        v19 = v41 == 0;
        v18 = *(_BYTE *)(v37 + 290) == 0;
        if ( v41 && (*(_DWORD *)(v37 + 24) & 0x20) != 0 )
        {
          v60 = 0;
          goto LABEL_74;
        }
      }
      v60 = 1;
LABEL_74:
      LODWORD(v10) = v39;
      if ( (int)v39 < 0 )
        goto LABEL_99;
      if ( *((_BYTE *)this + 10) && v18 )
        continue;
      v42 = *((_QWORD *)a2 + 365);
      v43 = 0;
      v61 = 0;
      LODWORD(v10) = v39;
      if ( !*(_DWORD *)(v42 + 96) )
        continue;
      v44 = v53;
      while ( DMMVIDPNTOPOLOGY::IsSourceInTopology(v44, v43) )
      {
LABEL_82:
        v47 = *((_QWORD *)a2 + 365);
        v43 = v45 + 1;
        v61 = v43;
        if ( v43 >= *(_DWORD *)(v47 + 96) )
          goto LABEL_88;
      }
      v46 = VIDPN_MGR::AddPathToVidPnTopology(
              v57,
              v44,
              v45,
              *((_DWORD *)v33 + 6),
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
              0xFFFFu,
              0,
              D3DKMDT_MCC_IGNORE);
      v10 = v46;
      if ( v46 == -1071774975 )
      {
        v45 = v61;
        v44 = v53;
        goto LABEL_82;
      }
      if ( v46 < 0 )
      {
        v35 = v61;
        goto LABEL_54;
      }
      LODWORD(v10) = BTL_TOPOLOGY_CONSTRUCTOR::_AddPathToTopology(
                       (BTL_TOPOLOGY_CONSTRUCTOR *)this,
                       (const struct _LUID *)((char *)a2 + 404),
                       v61,
                       *((_DWORD *)v33 + 6),
                       (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)v33 + 20),
                       (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)v33 + 21),
                       !v19,
                       !v18,
                       v60 == 0);
      v48 = v51;
      if ( (int)v10 >= 0 )
        v48 = v10;
      v51 = v48;
LABEL_88:
      ;
    }
  }
  for ( j = BTL_TOPOLOGY_CONSTRUCTOR::_GetFirstBestSecondaryTarget((const struct DMMVIDEOPRESENTTARGETSET *)v17);
        ;
        j = BTL_TOPOLOGY_CONSTRUCTOR::_GetNextBestSecondaryTarget(v33, (const struct DMMVIDEOPRESENTTARGETSET *)v17) )
  {
    v33 = j;
    if ( !j )
      goto LABEL_52;
    if ( !DMMVIDPNTOPOLOGY::IsTargetInTopology(v53, *((_DWORD *)j + 6))
      && (v21 != *((_DWORD *)this + 6)
       || *((_DWORD *)a2 + 101) != *((_DWORD *)this + 3)
       || *((_DWORD *)a2 + 102) != *((_DWORD *)this + 4))
      && *((_QWORD *)v33 + 14)
      && !*((_DWORD *)v33 + 23) )
    {
      break;
    }
LABEL_50:
    ;
  }
  if ( v21 == -1 )
    goto LABEL_98;
  v22 = *((_QWORD *)a2 + 365);
  if ( !v22 )
  {
LABEL_97:
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
LABEL_98:
    LODWORD(v10) = -1073741811;
LABEL_99:
    WdLogSingleEntry2(2LL, *((unsigned int *)v33 + 6), a2);
    goto LABEL_93;
  }
  LOBYTE(v61) = 0;
  v23 = MonitorIsMonitorVirtualModeDisabled((__int64)a2, v21, &v61);
  v25 = v23;
  if ( v23 == -1073741632 )
  {
    v26 = 0;
    LODWORD(v25) = 0;
  }
  else
  {
    if ( v23 < 0 )
    {
      WdLogSingleEntry1(1LL, v23);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"Unexpected return code 0x%I64x from MonitorIsMonitorVirtualModeDisabled()",
        v25,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_40;
    }
    v26 = v61;
  }
  if ( v26 )
  {
    v19 = 1;
    v18 = 1;
LABEL_35:
    v27 = 1;
    goto LABEL_41;
  }
  v28 = *(_BYTE *)(v22 + 289);
  v19 = v28 == 0;
  v18 = *(_BYTE *)(v22 + 290) == 0;
  if ( !v28 || (*(_DWORD *)(v22 + 24) & 0x20) == 0 )
    goto LABEL_35;
  v60 = 0;
LABEL_40:
  v27 = v60;
LABEL_41:
  v62 = v27;
  LODWORD(v10) = v25;
  if ( (int)v25 < 0 )
    goto LABEL_99;
  if ( *((_BYTE *)this + 10) )
  {
    v60 = v27;
    if ( v18 )
      goto LABEL_50;
  }
  PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(v56, (_QWORD *)*((unsigned int *)v33 + 6), this, v24);
  v52 = PathSourceFromTarget;
  LODWORD(v10) = v25;
  v60 = v62;
  if ( PathSourceFromTarget == -1 )
    goto LABEL_50;
  v60 = v62;
  if ( DMMVIDPNTOPOLOGY::IsSourceInTopology(v53, PathSourceFromTarget) )
    goto LABEL_50;
  v32 = VIDPN_MGR::AddPathToVidPnTopology(
          v57,
          v31,
          v30,
          *((_DWORD *)v33 + 6),
          (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
          0xFFFFu,
          0,
          D3DKMDT_MCC_IGNORE);
  v10 = v32;
  v60 = v62;
  if ( v32 == -1071774975 )
    goto LABEL_50;
  if ( v32 >= 0 )
  {
    LODWORD(v10) = BTL_TOPOLOGY_CONSTRUCTOR::_AddPathToTopology(
                     (BTL_TOPOLOGY_CONSTRUCTOR *)this,
                     (const struct _LUID *)((char *)a2 + 404),
                     v52,
                     *((_DWORD *)v33 + 6),
                     (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)v33 + 20),
                     (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)v33 + 21),
                     !v19,
                     !v18,
                     v62 == 0);
    v60 = v62;
    if ( (int)v10 >= 0 )
    {
      v51 = v10;
      v60 = v62;
    }
    goto LABEL_50;
  }
  v35 = v52;
LABEL_54:
  WdLogSingleEntry5(2LL, v10, *((int *)a2 + 102), *((unsigned int *)a2 + 101), v35, *((unsigned int *)v33 + 6));
LABEL_93:
  if ( v17 )
    ReferenceCounted::Release((ReferenceCounted *)(v17 + 64));
LABEL_95:
  auto_rc<DMMVIDPN>::reset(&v54, 0LL);
  auto_rc<DMMVIDPN>::reset(&v55, 0LL);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v58[0] + 40LL));
  return (unsigned int)v10;
}
