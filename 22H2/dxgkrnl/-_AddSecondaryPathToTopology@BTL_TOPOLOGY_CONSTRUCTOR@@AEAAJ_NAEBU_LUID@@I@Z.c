/*
 * XREFs of ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C02EEBF0
 * Callers:
 *     ?_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C02EF42C (-_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x1C02EF524 (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 *     ?_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C02EFC00 (-_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C02EFCA8 (-_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003960 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004EC0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0006454 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007DF0 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0009364 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0009550 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C00097F0 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C000AB24 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000ADEC (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C0121C38 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C012EC80 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0133648 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ @ 0x1C0133DF8 (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C013D77C (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0141538 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0141710 (-CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C02DE508 (-DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1_N2@Z @ 0x1C02EEB90 (-_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLO.c)
 *     ?_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGET@@PEBV3@@Z @ 0x1C02F0208 (-_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGE.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_AddSecondaryPathToTopology(
        CCD_TOPOLOGY **this,
        __int64 a2,
        const struct _LUID *a3,
        unsigned int a4)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct DXGADAPTER *v12; // rsi
  _QWORD *v13; // rax
  struct DMMVIDEOPRESENTTARGET *v14; // rdi
  __int64 v15; // rdx
  VIDPN_MGR *v16; // r12
  int ClientVidPn; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  unsigned int i; // r14d
  __int64 v23; // rax
  unsigned __int16 v24; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v26; // rbx
  unsigned int v27; // r8d
  unsigned int v28; // r9d
  int v29; // eax
  int v30; // eax
  __int64 v31; // rcx
  _QWORD *v32; // rbx
  unsigned int v33; // r14d
  _QWORD *v34; // r13
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // r13
  __int64 v36; // r14
  __int64 v37; // rdx
  __int64 v38; // rcx
  bool v39; // r10
  __int64 v40; // r12
  struct _FAST_MUTEX *v41; // rcx
  __int64 v42; // rax
  int MonitorInstance; // eax
  __int64 v44; // rax
  __int64 v45; // rax
  struct DXGMONITOR *v46; // r14
  __int64 v47; // rax
  __int64 v48; // rax
  bool v49; // al
  __int64 v50; // rdx
  int IsTargetForceable; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  int v54; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  struct DMMVIDPNTOPOLOGY *v57; // r12
  unsigned int v58; // eax
  unsigned int v59; // ecx
  int v60; // eax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rax
  _QWORD *v64; // rax
  _QWORD *v65; // rax
  _QWORD *v66; // rax
  __int64 v67; // rdx
  bool v69; // [rsp+40h] [rbp-C0h]
  char IsVirtualModeSuportDisabled; // [rsp+41h] [rbp-BFh] BYREF
  bool v71; // [rsp+42h] [rbp-BEh]
  bool v72; // [rsp+43h] [rbp-BDh]
  bool v73; // [rsp+44h] [rbp-BCh]
  int v74; // [rsp+48h] [rbp-B8h]
  char v75; // [rsp+4Ch] [rbp-B4h]
  struct DMMVIDEOPRESENTTARGET *v76; // [rsp+50h] [rbp-B0h]
  int v77; // [rsp+58h] [rbp-A8h]
  unsigned int v78; // [rsp+5Ch] [rbp-A4h]
  __int64 v79; // [rsp+60h] [rbp-A0h] BYREF
  const struct DMMVIDPN *v80; // [rsp+68h] [rbp-98h] BYREF
  VIDPN_MGR *v81; // [rsp+70h] [rbp-90h]
  DMMVIDPNTOPOLOGY *v82; // [rsp+78h] [rbp-88h]
  struct DXGMONITOR *v83; // [rsp+80h] [rbp-80h] BYREF
  char *v84; // [rsp+88h] [rbp-78h]
  __int64 v85; // [rsp+90h] [rbp-70h] BYREF
  struct DXGADAPTER *v86; // [rsp+98h] [rbp-68h]
  unsigned __int64 v87; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v88[144]; // [rsp+B0h] [rbp-50h] BYREF

  v78 = a4;
  v75 = a2;
  LOBYTE(v77) = 0;
  Global = DXGGLOBAL::GetGlobal((__int64)this, a2);
  v8 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a3, &v87);
  v86 = v8;
  v12 = v8;
  if ( !v8 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, v9, v11);
    v13[3] = *this;
    v13[4] = *((_QWORD *)*this + 8);
    v13[5] = a3->HighPart;
    v13[6] = a3->LowPart;
    WdLogEvent5_WdWarning(v13);
    LODWORD(v14) = -1073741810;
    return (unsigned int)v14;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v88, v8, 0LL);
  LODWORD(v14) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v88, 0LL);
  if ( (int)v14 < 0 )
    goto LABEL_93;
  v84 = (char *)v12 + 2696;
  v81 = *(VIDPN_MGR **)(*((_QWORD *)v12 + 337) + 88LL);
  v16 = v81;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v85, (__int64)v81);
  v80 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn(v81, (__int64 *)&v80);
  v14 = (struct DMMVIDEOPRESENTTARGET *)ClientVidPn;
  if ( ClientVidPn < 0 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v19, v18);
    v20[3] = v14;
    v20[4] = v12;
    v20[5] = *((int *)v12 + 80);
    v20[6] = *((unsigned int *)v12 + 79);
    v20[7] = this;
LABEL_20:
    WdLogEvent5_WdError(v20);
    goto LABEL_92;
  }
  v82 = (const struct DMMVIDPN *)((char *)v80 + 96);
  if ( v80 == (const struct DMMVIDPN *)-96LL )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v19, v18);
    v21[3] = v12;
    v21[4] = *((int *)v12 + 80);
    v21[5] = *((unsigned int *)v12 + 79);
    v21[6] = this;
    WdLogEvent5_WdError(v21);
    LODWORD(v14) = -1073741823;
    goto LABEL_92;
  }
  for ( i = 0; ; ++i )
  {
    v23 = *((_QWORD *)*this + 8);
    v24 = v23 ? *(_WORD *)(v23 + 20) : 0;
    if ( i >= v24 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(*this, i);
    v26 = PathDescriptor;
    if ( *((_DWORD *)PathDescriptor + 4) == *((_DWORD *)v12 + 79)
      && *((_DWORD *)PathDescriptor + 5) == *((_DWORD *)v12 + 80) )
    {
      v27 = *((_DWORD *)PathDescriptor + 6);
      v28 = *((_DWORD *)PathDescriptor + 7);
      v29 = (unsigned __int8)v77;
      if ( v27 == a4 )
        v29 = 1;
      v77 = v29;
      v30 = VIDPN_MGR::AddPathToVidPnTopology(
              v16,
              v82,
              v27,
              v28,
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
              i,
              0,
              D3DKMDT_MCC_IGNORE);
      v14 = (struct DMMVIDEOPRESENTTARGET *)v30;
      if ( v30 < 0 )
      {
        v20 = (_QWORD *)WdLogNewEntry5_WdError(v31, v18);
        v20[3] = v14;
        v20[4] = *((int *)v26 + 5);
        v20[5] = *((unsigned int *)v26 + 4);
        v20[6] = *((unsigned int *)v26 + 6);
        v20[7] = *((unsigned int *)v26 + 7);
        goto LABEL_20;
      }
    }
  }
  _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)v16 + 10) + 72LL), 1u);
  v32 = (_QWORD *)*((_QWORD *)v16 + 10);
  v12 = v86;
  v14 = 0LL;
  v33 = -1;
  v73 = 0;
  v71 = 0;
  v76 = 0LL;
  v34 = (_QWORD *)v32[3];
  v74 = -1;
  v72 = 0;
  v69 = 0;
  if ( v34 == v32 + 3 || (NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v34 - 1)) == 0LL )
  {
LABEL_90:
    LODWORD(v14) = -1073741275;
    goto LABEL_91;
  }
  while ( 1 )
  {
    if ( *((_DWORD *)NextTarget + 22) )
      goto LABEL_54;
    v36 = *((unsigned int *)NextTarget + 6);
    if ( !DMMVIDPNTOPOLOGY::IsTargetInTopology(v82, *((_DWORD *)NextTarget + 6)) && (_DWORD)v36 != *((_DWORD *)this + 6) )
      break;
LABEL_53:
    v33 = v74;
LABEL_54:
    NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v32, NextTarget);
    if ( !NextTarget )
    {
      if ( v14 )
      {
        LODWORD(v14) = BTL_TOPOLOGY_CONSTRUCTOR::_AddPathToTopology(
                         (BTL_TOPOLOGY_CONSTRUCTOR *)this,
                         (struct _LUID *)((char *)v12 + 316),
                         v33,
                         *((_DWORD *)v76 + 6),
                         (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)v14 + 20),
                         (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)v14 + 21),
                         v73,
                         v72);
        goto LABEL_91;
      }
      goto LABEL_90;
    }
    v16 = v81;
  }
  if ( (_DWORD)v36 != -1 )
  {
    v40 = *(_QWORD *)v84;
    if ( !*(_QWORD *)v84 )
    {
      v63 = WdLogNewEntry5_WdError(v38, v37);
      *(_QWORD *)(v63 + 24) = 9262LL;
      WdLogEvent5_WdError(v63);
      LODWORD(v14) = -1073741811;
LABEL_80:
      v64 = (_QWORD *)WdLogNewEntry5_WdError(v38, v37);
      v64[3] = v12;
      v64[4] = *((unsigned int *)NextTarget + 6);
LABEL_81:
      WdLogEvent5_WdError(v64);
      goto LABEL_91;
    }
    v41 = *(struct _FAST_MUTEX **)(v40 + 96);
    IsVirtualModeSuportDisabled = 0;
    if ( !v41 )
    {
      v42 = WdLogNewEntry5_WdError(0LL, v37);
      *(_QWORD *)(v42 + 24) = v12;
      WdLogEvent5_WdError(v42);
      LODWORD(v14) = -1073741811;
LABEL_36:
      v45 = WdLogNewEntry5_WdAssertion(v38, v37);
      *(_QWORD *)(v45 + 24) = (int)v14;
      WdLogEvent5_WdAssertion(v45);
LABEL_47:
      v39 = v69;
      v16 = v81;
      goto LABEL_49;
    }
    v83 = 0LL;
    MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v41, (unsigned int)v36, 1, &v83);
    LODWORD(v14) = MonitorInstance;
    if ( MonitorInstance == -1073741275 )
    {
      v44 = WdLogNewEntry5_WdDmmEvent(v38);
      *(_QWORD *)(v44 + 24) = v36;
      *(_QWORD *)(v44 + 32) = v12;
      WdLogEvent5_WdDmmEvent(v44);
    }
    else
    {
      if ( MonitorInstance >= 0 )
      {
        v46 = v83;
        if ( !v83 || *((_DWORD *)v83 + 108) != 1 )
        {
          v47 = WdLogNewEntry5_WdAssertion(v38, v37);
          WdLogEvent5_WdAssertion(v47);
        }
        if ( !v46 )
        {
          v48 = WdLogNewEntry5_WdAssertion(v38, v37);
          WdLogEvent5_WdAssertion(v48);
        }
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite((PERESOURCE)((char *)v46 + 296), 1u);
        IsVirtualModeSuportDisabled = DXGMONITOR::_IsVirtualModeSuportDisabled(v46);
        ExReleaseResourceLite((PERESOURCE)((char *)v46 + 296));
        KeLeaveCriticalRegion();
        LODWORD(v14) = 0;
        goto LABEL_43;
      }
      if ( MonitorInstance != -1073741632 )
      {
LABEL_35:
        if ( (int)v14 < 0 )
          goto LABEL_36;
LABEL_43:
        if ( IsVirtualModeSuportDisabled )
        {
          v49 = 1;
          v71 = 1;
        }
        else
        {
          v49 = *(_BYTE *)(v40 + 250) == 0;
          v71 = *(_BYTE *)(v40 + 249) == 0;
        }
        v69 = v49;
        goto LABEL_47;
      }
    }
    LODWORD(v14) = 0;
    goto LABEL_35;
  }
  LODWORD(v14) = -1073741811;
LABEL_49:
  if ( (int)v14 < 0 )
    goto LABEL_80;
  if ( (_BYTE)v77 )
  {
    if ( !v39 )
    {
LABEL_52:
      v14 = v76;
      goto LABEL_53;
    }
  }
  else if ( *((_BYTE *)this + 10) && v39 )
  {
    goto LABEL_52;
  }
  if ( *((_QWORD *)NextTarget + 14) )
    goto LABEL_62;
  if ( !v75 )
    goto LABEL_52;
  v50 = *((unsigned int *)NextTarget + 6);
  IsVirtualModeSuportDisabled = 0;
  IsTargetForceable = DmmIsTargetForceable(v12, v50, (bool *)&IsVirtualModeSuportDisabled, 0);
  v14 = (struct DMMVIDEOPRESENTTARGET *)IsTargetForceable;
  if ( IsTargetForceable < 0 )
  {
    v64 = (_QWORD *)WdLogNewEntry5_WdError(v53, v52);
    v64[3] = v14;
    v64[4] = *((int *)v12 + 80);
    v64[5] = *((unsigned int *)v12 + 79);
    v64[6] = *((unsigned int *)NextTarget + 6);
    v64[7] = *((_QWORD *)*this + 8);
    goto LABEL_81;
  }
  if ( !IsVirtualModeSuportDisabled )
    goto LABEL_52;
LABEL_62:
  v14 = v76;
  if ( !BTL_TOPOLOGY_CONSTRUCTOR::_IsBetterSecondaryTarget(v12, NextTarget, v76) )
    goto LABEL_53;
  v79 = 0LL;
  v54 = VIDPN_MGR::CreateVidPnCopyForClient((__int64)v16, v80, &v79);
  v14 = (struct DMMVIDEOPRESENTTARGET *)v54;
  if ( v54 < 0 )
  {
    v65 = (_QWORD *)WdLogNewEntry5_WdError(v56, v55);
    v65[3] = v14;
    v65[4] = v12;
    v65[5] = *((int *)v12 + 80);
    v65[6] = *((unsigned int *)v12 + 79);
    v65[7] = this;
    goto LABEL_86;
  }
  v57 = (struct DMMVIDPNTOPOLOGY *)(v79 + 96);
  if ( v79 == -96 )
  {
    v66 = (_QWORD *)WdLogNewEntry5_WdError(v56, v55);
    v66[3] = v12;
    v66[4] = *((int *)v12 + 80);
    v66[5] = *((unsigned int *)v12 + 79);
    v66[6] = this;
    WdLogEvent5_WdError(v66);
    LODWORD(v14) = -1073741823;
  }
  else
  {
    v58 = v78;
    v33 = 0;
    if ( v78 != -1 )
      v33 = v78;
    while ( 1 )
    {
      if ( v58 == -1 )
      {
        v59 = *(_DWORD *)(*(_QWORD *)v84 + 80LL);
        v58 = v78;
      }
      else
      {
        v59 = v58 + 1;
      }
      if ( v33 >= v59 )
      {
        v14 = v76;
        v33 = v74;
        goto LABEL_78;
      }
      if ( v58 != -1 || !DMMVIDPNTOPOLOGY::IsSourceInTopology(v57, v33) )
      {
        v60 = VIDPN_MGR::AddPathToVidPnTopology(
                v81,
                v57,
                v33,
                *((_DWORD *)NextTarget + 6),
                (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                0xFFFFu,
                0,
                D3DKMDT_MCC_IGNORE);
        v14 = (struct DMMVIDEOPRESENTTARGET *)v60;
        if ( v60 != -1071774975 )
          break;
      }
      v58 = v78;
      ++v33;
    }
    if ( v60 >= 0 )
    {
      v14 = NextTarget;
      v76 = NextTarget;
      v73 = !v71;
      v74 = v33;
      v72 = !v69;
LABEL_78:
      auto_rc<DMMVIDPN>::reset(&v79, 0LL);
      goto LABEL_54;
    }
    v65 = (_QWORD *)WdLogNewEntry5_WdError(v62, v61);
    v65[3] = v14;
    v65[4] = *((int *)v12 + 80);
    v65[5] = *((unsigned int *)v12 + 79);
    v65[6] = v33;
    v65[7] = *((unsigned int *)NextTarget + 6);
LABEL_86:
    WdLogEvent5_WdError(v65);
  }
  auto_rc<DMMVIDPN>::reset(&v79, 0LL);
LABEL_91:
  ReferenceCounted::Release((ReferenceCounted *)(v32 + 8), v18);
LABEL_92:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v80, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v85 + 40), v67);
LABEL_93:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v88, v15);
  DXGADAPTER::ReleaseReference(v12);
  return (unsigned int)v14;
}
