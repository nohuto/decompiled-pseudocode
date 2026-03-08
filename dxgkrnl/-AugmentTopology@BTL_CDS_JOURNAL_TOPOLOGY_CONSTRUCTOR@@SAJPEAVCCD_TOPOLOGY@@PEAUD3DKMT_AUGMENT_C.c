/*
 * XREFs of ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C03BA400
 * Callers:
 *     ?ApplyCdsjToPathModality@CDS_JOURNAL@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C03BA088 (-ApplyCdsjToPathModality@CDS_JOURNAL@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 *     ?_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@K@Z @ 0x1C03BB864 (-_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@K@Z.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0007E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00090C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00094C0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0009930 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000999C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z @ 0x1C000AC24 (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z.c)
 *     ?IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x1C000B000 (-IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     MonitorIsMonitorVirtualModeDisabled @ 0x1C017FDC8 (MonitorIsMonitorVirtualModeDisabled.c)
 *     ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@II_N11W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2W4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C01826C8 (-AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@II_N11W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2W4_D.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C01829E4 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C01ADA68 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C01B1660 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C01B3DBC (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?DisableDWMCloneAndDWMVirtualMode@CCD_TOPOLOGY@@QEAAJPEAU_LUID@@I@Z @ 0x1C03B67E0 (-DisableDWMCloneAndDWMVirtualMode@CCD_TOPOLOGY@@QEAAJPEAU_LUID@@I@Z.c)
 *     ?FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z @ 0x1C03B6CD4 (-FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z.c)
 *     ?RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z @ 0x1C03B704C (-RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z.c)
 *     ?RemoveCloneGroupByModality@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z @ 0x1C03B72B8 (-RemoveCloneGroupByModality@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z.c)
 *     ?FillPathDescriptor@CDS_JOURNAL@@SAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBUD3DKMT_AUGMENT_CDSJ@@_N2PEAVDXGADAPTER@@@Z @ 0x1C03BA9CC (-FillPathDescriptor@CDS_JOURNAL@@SAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBUD3DKMT_AUGMENT_CDSJ@.c)
 *     ?_AugmentVidPnTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C03BAABC (-_AugmentVidPnTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMT.c)
 */

__int64 __fastcall BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR::AugmentTopology(
        struct CCD_TOPOLOGY *this,
        struct D3DKMT_AUGMENT_CDSJ *a2,
        char a3)
{
  const struct _LUID *v3; // r14
  unsigned int v4; // esi
  unsigned int v8; // ebx
  char IsPrimaryClonePathByModality; // di
  __int64 v10; // rax
  unsigned __int16 v11; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v12; // rax
  int v13; // r8d
  _DWORD *v14; // r11
  _DWORD *v15; // rcx
  bool v16; // r9
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v17; // r11
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v20; // rax
  struct DXGADAPTER *v21; // r12
  __int64 v22; // rax
  int v23; // eax
  unsigned int v24; // r14d
  __int64 v25; // rax
  unsigned __int16 v26; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v28; // rbx
  int v29; // eax
  VIDPN_MGR *v30; // rcx
  unsigned int v31; // edx
  __int64 v32; // rbx
  int IsMonitorVirtualModeDisabled; // eax
  char v34; // al
  bool v35; // dl
  bool v36; // r8
  char v37; // al
  char v38; // r9
  int v39; // r9d
  int v40; // r8d
  bool v41; // r9
  char v42; // [rsp+28h] [rbp-D8h]
  char v43; // [rsp+30h] [rbp-D0h]
  int v44; // [rsp+38h] [rbp-C8h]
  int v45; // [rsp+40h] [rbp-C0h]
  char v46[4]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int i; // [rsp+64h] [rbp-9Ch] BYREF
  struct DMMVIDPNTOPOLOGY *v48; // [rsp+68h] [rbp-98h] BYREF
  __int64 v49; // [rsp+70h] [rbp-90h] BYREF
  char *v50; // [rsp+78h] [rbp-88h]
  VIDPN_MGR *v51; // [rsp+80h] [rbp-80h]
  __int64 v52; // [rsp+88h] [rbp-78h] BYREF
  struct DXGADAPTER *v53; // [rsp+90h] [rbp-70h]
  unsigned __int64 v54; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v55[144]; // [rsp+A0h] [rbp-60h] BYREF

  *((_DWORD *)a2 + 4) = -1;
  v3 = (const struct _LUID *)((char *)a2 + 4);
  v4 = 0;
  *((_DWORD *)a2 + 5) = -2;
  *((_DWORD *)a2 + 6) = -2;
  if ( (*(_DWORD *)a2 & 8) != 0 )
    CCD_TOPOLOGY::DisableDWMCloneAndDWMVirtualMode(this, (struct _LUID *)((char *)a2 + 4), *((_DWORD *)a2 + 3));
  v8 = 0;
  IsPrimaryClonePathByModality = 1;
  while ( 1 )
  {
    v10 = *((_QWORD *)this + 8);
    if ( v10 )
      v11 = *(_WORD *)(v10 + 20);
    else
      v11 = 0;
    if ( v8 >= v11 )
    {
      if ( !a3 )
        return 3223192377LL;
      Global = DXGGLOBAL::GetGlobal();
      v20 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *v3, &v54);
      v53 = v20;
      v21 = v20;
      if ( !v20 )
      {
        WdLogSingleEntry4(3LL, this, *((_QWORD *)this + 8), *((int *)a2 + 2), v3->LowPart);
        LODWORD(v3) = -1073741810;
        return (unsigned int)v3;
      }
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v55, v20, 0LL);
      LODWORD(v3) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v55, 0LL);
      if ( (int)v3 < 0 )
      {
LABEL_67:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v55);
        DXGADAPTER::ReleaseReference(v21);
        return (unsigned int)v3;
      }
      v50 = (char *)v21 + 2920;
      v22 = *((_QWORD *)v21 + 365);
      if ( !v22 )
      {
        LODWORD(v3) = -1073741637;
        WdLogSingleEntry3(3LL, *((int *)a2 + 2), *((unsigned int *)a2 + 1), -1073741637LL);
        goto LABEL_67;
      }
      v51 = *(VIDPN_MGR **)(v22 + 104);
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v52, (__int64)v51);
      v49 = 0LL;
      v23 = VIDPN_MGR::CreateClientVidPn(v51, &v49);
      LODWORD(v3) = v23;
      if ( v23 < 0 )
      {
        WdLogSingleEntry5(2LL, v23, *((int *)v21 + 102), *((unsigned int *)v21 + 101), this, *((_QWORD *)this + 8));
LABEL_49:
        auto_rc<DMMVIDPN>::reset(&v49, 0LL);
        DXGFASTMUTEX::Release((struct _KTHREAD **)(v52 + 40));
        goto LABEL_67;
      }
      v48 = (struct DMMVIDPNTOPOLOGY *)(v49 + 96);
      if ( v49 == -96 )
      {
        WdLogSingleEntry5(2LL, v21, *((int *)v21 + 102), *((unsigned int *)v21 + 101), this, *((_QWORD *)this + 8));
        LODWORD(v3) = -1073741823;
        goto LABEL_49;
      }
      v24 = 0;
      for ( i = 0; ; i = v24 )
      {
        v25 = *((_QWORD *)this + 8);
        v26 = v25 ? *(_WORD *)(v25 + 20) : 0;
        if ( v24 >= v26 )
          break;
        PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, v24);
        v28 = PathDescriptor;
        if ( *((_DWORD *)PathDescriptor + 4) == *((_DWORD *)v21 + 101)
          && *((_DWORD *)PathDescriptor + 5) == *((_DWORD *)v21 + 102) )
        {
          v29 = VIDPN_MGR::AddPathToVidPnTopology(
                  v51,
                  v48,
                  *((_DWORD *)PathDescriptor + 6),
                  *((_DWORD *)PathDescriptor + 7),
                  (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                  v24,
                  0,
                  D3DKMDT_MCC_IGNORE);
          LODWORD(v3) = v29;
          if ( v29 < 0 )
          {
            WdLogSingleEntry5(
              2LL,
              v29,
              *((int *)v28 + 5),
              *((unsigned int *)v28 + 4),
              *((unsigned int *)v28 + 6),
              *((unsigned int *)v28 + 7));
            goto LABEL_49;
          }
          v24 = i;
        }
        ++v24;
      }
      LODWORD(v3) = BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR::_AugmentVidPnTopology(v48, a2);
      if ( (int)v3 < 0 )
        goto LABEL_49;
      v30 = v51;
      _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)v51 + 15) + 72LL), 1u);
      v31 = *((_DWORD *)a2 + 4);
      v32 = *((_QWORD *)v30 + 15);
      v21 = v53;
      if ( v31 == -1 )
        goto LABEL_45;
      v50 = *(char **)v50;
      if ( !v50 )
      {
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
LABEL_45:
        LODWORD(v3) = -1073741811;
        goto LABEL_46;
      }
      v46[0] = 0;
      IsMonitorVirtualModeDisabled = MonitorIsMonitorVirtualModeDisabled((__int64)v53, v31, v46);
      v3 = (const struct _LUID *)IsMonitorVirtualModeDisabled;
      if ( IsMonitorVirtualModeDisabled == -1073741632 )
      {
        v34 = 0;
        LODWORD(v3) = 0;
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
            (__int64)v3,
            0LL,
            0LL,
            0LL,
            0LL);
          v35 = 0;
          v36 = 0;
          goto LABEL_60;
        }
        v34 = v46[0];
      }
      if ( v34 )
      {
        v35 = 1;
        v36 = 1;
LABEL_58:
        v38 = 0;
        goto LABEL_61;
      }
      v37 = v50[289];
      v35 = v37 == 0;
      v36 = v50[290] == 0;
      if ( !v37 || (*((_DWORD *)v50 + 6) & 0x20) == 0 )
        goto LABEL_58;
LABEL_60:
      v38 = 1;
LABEL_61:
      if ( (int)v3 >= 0 )
      {
        v45 = *((_DWORD *)a2 + 6);
        v44 = *((_DWORD *)a2 + 5);
        v43 = v38;
        v39 = *((_DWORD *)a2 + 4);
        v42 = !v36;
        v40 = *((_DWORD *)a2 + 3);
        v48 = 0LL;
        LODWORD(v3) = CCD_TOPOLOGY::AddPathDescriptor(
                        (__int64)this,
                        (__int64 *)((char *)a2 + 4),
                        v40,
                        v39,
                        !v35,
                        v42,
                        v43,
                        v44,
                        v45,
                        0,
                        (__int64 *)&v48);
        if ( (int)v3 >= 0 )
        {
          if ( (int)CCD_TOPOLOGY::FindPathDescriptorByTarget(
                      this,
                      (const struct _LUID *)v48 + 2,
                      *((_DWORD *)v48 + 7),
                      &i) >= 0 )
          {
            CCD_TOPOLOGY::RegulateCloneGroupIdForNewPath(this, i);
            IsPrimaryClonePathByModality = CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, i);
          }
          CDS_JOURNAL::FillPathDescriptor(v48, a2, IsPrimaryClonePathByModality, v41, v21);
        }
        goto LABEL_47;
      }
LABEL_46:
      WdLogSingleEntry3(2LL, *((unsigned int *)a2 + 4), *((int *)a2 + 2), *((unsigned int *)a2 + 1));
LABEL_47:
      if ( v32 )
        ReferenceCounted::Release((ReferenceCounted *)(v32 + 64));
      goto LABEL_49;
    }
    v12 = CCD_TOPOLOGY::GetPathDescriptor(this, v8);
    if ( CCD_TOPOLOGY::IsMatchingSource(v12, v3, *((_DWORD *)a2 + 3)) )
      break;
    ++v8;
  }
  v15 = (_DWORD *)*((_QWORD *)a2 + 4);
  *((_DWORD *)a2 + 4) = v14[7];
  *((_DWORD *)a2 + 5) = v14[22];
  *((_DWORD *)a2 + 6) = v14[23];
  if ( v15 )
  {
    if ( (v15[18] & 0x180000) != 0x180000 || v15[43] || v15[44] )
    {
      if ( !CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, v8) )
        return 3223192371LL;
      CDS_JOURNAL::FillPathDescriptor(v17, a2, 1, v16, 0LL);
    }
    else
    {
      return (unsigned int)CCD_TOPOLOGY::RemoveCloneGroupByModality(this, v3, v13);
    }
  }
  return v4;
}
