/*
 * XREFs of _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_0_1_ @ 0x1C016C8B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003960 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0006454 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00074F0 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007B84 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007BE0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007DF0 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0009550 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C00097F0 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0009D98 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000ADEC (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ??1?$auto_rc@$$CBVDMMVIDEOPRESENTTARGETSET@@@@QEAA@XZ @ 0x1C00499E4 (--1-$auto_rc@$$CBVDMMVIDEOPRESENTTARGETSET@@@@QEAA@XZ.c)
 *     DxgkIsMSBDDFallbackEnabled @ 0x1C0052924 (DxgkIsMSBDDFallbackEnabled.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C011CDA0 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C011CEC8 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C012EC80 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z @ 0x1C013A244 (-_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z.c)
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C013C858 (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0141140 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0141538 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C014164C (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 */

__int64 __fastcall BtlPreAcquireSharedAccess__CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_0_1_(
        struct DXGADAPTER *a1,
        CCD_BTL_ACTIVE_PATHS_COLLECTOR *this)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rdi
  struct VIDPN_MGR *v9; // rdi
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct DMMVIDPN *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct DMMVIDPNTOPOLOGY *v20; // r12
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rbx
  _QWORD *v24; // r8
  __int64 v25; // r13
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v32; // rdx
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rax
  __int64 v37; // rdx
  _QWORD *v39; // rax
  __int64 v40; // rdx
  _QWORD *v41; // rbx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rax
  _QWORD *v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rdx
  _QWORD *v51; // r14
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rdx
  _QWORD *v59; // r14
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rdx
  _QWORD *v66; // rbx
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rax
  _QWORD *v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rdx
  _QWORD *v76; // r14
  __int64 v77; // rcx
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rcx
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // [rsp+20h] [rbp-E0h]
  unsigned int v87; // [rsp+40h] [rbp-C0h]
  struct DMMVIDPN *v88; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v89; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v90; // [rsp+58h] [rbp-A8h]
  __int64 v91; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v92; // [rsp+68h] [rbp-98h] BYREF
  DMMVIDPNTOPOLOGY *v93; // [rsp+70h] [rbp-90h]
  _BYTE v94[8]; // [rsp+78h] [rbp-88h] BYREF
  struct DXGADAPTER *v95; // [rsp+80h] [rbp-80h]
  char v96; // [rsp+88h] [rbp-78h]
  _BYTE v97[32]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v98[144]; // [rsp+B0h] [rbp-50h] BYREF

  v95 = a1;
  v96 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v94);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v94);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v98, a1, 0LL);
  v4 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v98, 0LL);
  LODWORD(v7) = v4;
  if ( v4 < 0 )
  {
    if ( v4 != -1073741130 )
      goto LABEL_34;
    v39 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5);
    v39[3] = a1;
    v39[4] = *((int *)a1 + 80);
    v39[5] = *((unsigned int *)a1 + 79);
    v39[6] = this;
    goto LABEL_41;
  }
  if ( *((_BYTE *)a1 + 2609)
    || DXGADAPTER::IsBddFallbackDriver(a1) && !DxgkIsMSBDDFallbackEnabled()
    || (v8 = *((_QWORD *)a1 + 337)) == 0 )
  {
LABEL_41:
    LODWORD(v7) = 0;
    goto LABEL_34;
  }
  v9 = *(struct VIDPN_MGR **)(v8 + 88);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v89, (__int64)v9);
  v88 = 0LL;
  ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v9, (__int64 *)&v88);
  v7 = ClientVidPnFromLastClientCommitedVidPn;
  if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
  {
    v41 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11);
    v41[3] = v7;
    v41[4] = v9;
    v42 = *(_QWORD *)this;
    v41[5] = *(_QWORD *)this;
    v43 = *((_QWORD *)v9 + 1);
    if ( !v43 )
    {
      v44 = WdLogNewEntry5_WdAssertion(v42, v40);
      WdLogEvent5_WdAssertion(v44);
      v43 = *((_QWORD *)v9 + 1);
    }
    v45 = *(int *)(*(_QWORD *)(v43 + 16) + 320LL);
    v41[6] = v45;
    v46 = *((_QWORD *)v9 + 1);
    if ( !v46 )
    {
      v47 = WdLogNewEntry5_WdAssertion(v45, v40);
      WdLogEvent5_WdAssertion(v47);
      v46 = *((_QWORD *)v9 + 1);
    }
    v41[7] = *(unsigned int *)(*(_QWORD *)(v46 + 16) + 316LL);
    v48 = v41;
    goto LABEL_50;
  }
  v14 = v88;
  v93 = (struct DMMVIDPN *)((char *)v88 + 96);
  if ( v88 == (struct DMMVIDPN *)-96LL )
  {
    v51 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v13);
    v51[3] = -96LL;
    v51[4] = this;
    v52 = *(_QWORD *)this;
    v51[5] = *(_QWORD *)this;
    v53 = *((_QWORD *)v9 + 1);
    if ( !v53 )
    {
      v54 = WdLogNewEntry5_WdAssertion(v52, v50);
      WdLogEvent5_WdAssertion(v54);
      v53 = *((_QWORD *)v9 + 1);
    }
    v55 = *(int *)(*(_QWORD *)(v53 + 16) + 320LL);
    v51[6] = v55;
    v56 = *((_QWORD *)v9 + 1);
    if ( !v56 )
    {
      v57 = WdLogNewEntry5_WdAssertion(v55, v50);
      WdLogEvent5_WdAssertion(v57);
      v56 = *((_QWORD *)v9 + 1);
    }
    v51[7] = *(unsigned int *)(*(_QWORD *)(v56 + 16) + 316LL);
    WdLogEvent5_WdWarning(v51);
    goto LABEL_33;
  }
  LODWORD(v7) = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPn(this, v88, 1);
  if ( (int)v7 < 0 )
  {
    v59 = (_QWORD *)WdLogNewEntry5_WdError(v16, v15);
    v59[3] = v14;
    v59[4] = this;
    v60 = *(_QWORD *)this;
    v59[5] = *(_QWORD *)this;
    v61 = *((_QWORD *)v9 + 1);
    if ( !v61 )
    {
      v62 = WdLogNewEntry5_WdAssertion(v60, v58);
      WdLogEvent5_WdAssertion(v62);
      v61 = *((_QWORD *)v9 + 1);
    }
    v63 = *(int *)(*(_QWORD *)(v61 + 16) + 320LL);
    v59[6] = v63;
    v64 = *((_QWORD *)v9 + 1);
    if ( !v64 )
    {
      v49 = WdLogNewEntry5_WdAssertion(v63, v58);
      WdLogEvent5_WdAssertion(v49);
      v64 = *((_QWORD *)v9 + 1);
    }
    v59[7] = *(unsigned int *)(*(_QWORD *)(v64 + 16) + 316LL);
    v48 = v59;
LABEL_50:
    WdLogEvent5_WdError(v48);
    goto LABEL_33;
  }
  v91 = 0LL;
  v17 = VIDPN_MGR::CreateClientVidPn(v9, &v91);
  v7 = v17;
  if ( v17 < 0 )
  {
    v66 = (_QWORD *)WdLogNewEntry5_WdError(v19, v18);
    v66[3] = v7;
    v66[4] = v9;
    v67 = *(_QWORD *)this;
    v66[5] = *(_QWORD *)this;
    v68 = *((_QWORD *)v9 + 1);
    if ( !v68 )
    {
      v69 = WdLogNewEntry5_WdAssertion(v67, v65);
      WdLogEvent5_WdAssertion(v69);
      v68 = *((_QWORD *)v9 + 1);
    }
    v70 = *(int *)(*(_QWORD *)(v68 + 16) + 320LL);
    v66[6] = v70;
    v71 = *((_QWORD *)v9 + 1);
    if ( !v71 )
    {
      v72 = WdLogNewEntry5_WdAssertion(v70, v65);
      WdLogEvent5_WdAssertion(v72);
      v71 = *((_QWORD *)v9 + 1);
    }
    v66[7] = *(unsigned int *)(*(_QWORD *)(v71 + 16) + 316LL);
    v73 = v66;
    goto LABEL_66;
  }
  v20 = (struct DMMVIDPNTOPOLOGY *)(v91 + 96);
  if ( v91 == -96 )
  {
    v76 = (_QWORD *)WdLogNewEntry5_WdError(v19, v18);
    v76[3] = -96LL;
    v76[4] = this;
    v77 = *(_QWORD *)this;
    v76[5] = *(_QWORD *)this;
    v78 = *((_QWORD *)v9 + 1);
    if ( !v78 )
    {
      v79 = WdLogNewEntry5_WdAssertion(v77, v75);
      WdLogEvent5_WdAssertion(v79);
      v78 = *((_QWORD *)v9 + 1);
    }
    v80 = *(int *)(*(_QWORD *)(v78 + 16) + 320LL);
    v76[6] = v80;
    v81 = *((_QWORD *)v9 + 1);
    if ( !v81 )
    {
      v74 = WdLogNewEntry5_WdAssertion(v80, v75);
      WdLogEvent5_WdAssertion(v74);
      v81 = *((_QWORD *)v9 + 1);
    }
    v76[7] = *(unsigned int *)(*(_QWORD *)(v81 + 16) + 316LL);
    v73 = v76;
LABEL_66:
    WdLogEvent5_WdError(v73);
    goto LABEL_32;
  }
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v9 + 10) + 72LL));
  v21 = *((_QWORD *)a1 + 337);
  v22 = 0LL;
  v23 = *((_QWORD *)v9 + 10);
  v92 = v23;
  v87 = 0;
  if ( !*(_DWORD *)(v21 + 80) )
  {
LABEL_30:
    if ( v23 )
      ReferenceCounted::Release((ReferenceCounted *)(v23 + 64), v22);
    goto LABEL_32;
  }
  v24 = (_QWORD *)(v23 + 24);
  while ( 1 )
  {
    v25 = 0LL;
    if ( (_QWORD *)*v24 != v24 )
      v25 = *v24 - 8LL;
    if ( v25 )
      break;
LABEL_29:
    v22 = (unsigned int)(v22 + 1);
    v87 = v22;
    if ( (unsigned int)v22 >= *(_DWORD *)(*((_QWORD *)a1 + 337) + 80LL) )
      goto LABEL_30;
  }
  while ( 1 )
  {
    v90 = *(_DWORD *)(v25 + 24);
    if ( DMMVIDPNTOPOLOGY::FindPath(v93, v22, v90) || *(_DWORD *)(v25 + 84) == 15 && !*(_QWORD *)(v25 + 112) )
      goto LABEL_27;
    if ( *((_QWORD *)v20 + 5) )
    {
      v82 = WdLogNewEntry5_WdAssertion(v27, v26);
      *(_QWORD *)(v82 + 24) = 809LL;
      WdLogEvent5_WdAssertion(v82);
    }
    v28 = VIDPN_MGR::AddPathToVidPnTopology(
            v9,
            v20,
            v87,
            v90,
            (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
            0xFFFFu,
            0,
            D3DKMDT_MCC_IGNORE);
    v7 = v28;
    if ( v28 == -1071774975 )
    {
      LODWORD(v7) = 0;
      goto LABEL_27;
    }
    if ( v28 < 0 )
      break;
    if ( *((_QWORD *)v20 + 5) != 1LL )
    {
      v83 = WdLogNewEntry5_WdAssertion(v30, v29);
      *(_QWORD *)(v83 + 24) = 840LL;
      WdLogEvent5_WdAssertion(v83);
    }
    Path = DMMVIDPNTOPOLOGY::FindPath(v20, v87, v90);
    LODWORD(v7) = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPnPath(this, a1, Path, 0, 0);
    if ( (int)v7 < 0 )
      goto LABEL_73;
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope((__int64)v97, (__int64)v20 + 56, 2u, v33, v86, 255LL);
    DMMVIDPNTOPOLOGY::RemovePath(v20, v87, v90, 0LL);
    if ( *((_QWORD *)v20 + 5) )
    {
      v84 = WdLogNewEntry5_WdAssertion(v35, v34);
      *(_QWORD *)(v84 + 24) = 864LL;
      WdLogEvent5_WdAssertion(v84);
    }
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v97, v34);
LABEL_27:
    NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                   (DMMVIDEOPRESENTTARGETSET *)v23,
                   (const struct DMMVIDEOPRESENTTARGET *const)v25);
    LODWORD(v22) = v87;
    v25 = (__int64)NextTarget;
    if ( !NextTarget )
    {
      v24 = (_QWORD *)(v23 + 24);
      goto LABEL_29;
    }
  }
  v85 = WdLogNewEntry5_WdError(v30, v29);
  *(_QWORD *)(v85 + 24) = v7;
  WdLogEvent5_WdError(v85);
LABEL_73:
  auto_rc<DMMVIDEOPRESENTTARGETSET const>::~auto_rc<DMMVIDEOPRESENTTARGETSET const>(&v92, v32);
LABEL_32:
  auto_rc<DMMVIDPN>::reset(&v91, 0LL);
LABEL_33:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v88, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v89 + 40), v37);
LABEL_34:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v98, v5);
  if ( v96 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v94);
  return (unsigned int)v7;
}
