/*
 * XREFs of _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_0_1_ @ 0x1C01DC470
 * Callers:
 *     <none>
 * Callees:
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0003484 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0006784 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0007E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00090C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00094C0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00096F0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0009754 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000999C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ??1?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@XZ @ 0x1C0025E48 (--1-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@XZ.c)
 *     ??1?$auto_rc@$$CBVDMMVIDEOPRESENTTARGETSET@@@@QEAA@XZ @ 0x1C00496E0 (--1-$auto_rc@$$CBVDMMVIDEOPRESENTTARGETSET@@@@QEAA@XZ.c)
 *     DxgkIsMSBDDFallbackEnabled @ 0x1C005E4AC (DxgkIsMSBDDFallbackEnabled.c)
 *     ?_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z @ 0x1C0180394 (-_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z.c)
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C01821A4 (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0182810 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C01829E4 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C01A1F18 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C01A23D0 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C01B3BC0 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C01B3DBC (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 */

__int64 __fastcall BtlPreAcquireSharedAccess__CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_0_1_(
        struct DXGADAPTER *a1,
        CCD_BTL_ACTIVE_PATHS_COLLECTOR *this)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  DMMVIDPNTOPOLOGY *v9; // rdi
  __int64 v10; // rsi
  VIDPN_MGR *v11; // rsi
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  struct DMMVIDPN *v13; // rbx
  int v14; // eax
  __int64 v15; // rax
  unsigned int v16; // ecx
  __int64 v17; // rbx
  __int64 v18; // r13
  __int64 v19; // r13
  struct DMMVIDPNTOPOLOGY *v20; // rdi
  int v21; // eax
  struct DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v23; // r9
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rax
  _QWORD *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r15
  __int64 v32; // rdx
  __int64 v33; // r15
  __int64 v34; // rcx
  __int64 v35; // r15
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rbx
  __int64 v41; // rcx
  __int64 v42; // r15
  __int64 v43; // [rsp+20h] [rbp-E0h]
  unsigned int v44; // [rsp+50h] [rbp-B0h]
  struct DMMVIDPN *v45; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v46; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v47; // [rsp+68h] [rbp-98h]
  __int64 v48; // [rsp+70h] [rbp-90h] BYREF
  DMMVIDPNTOPOLOGY *v49; // [rsp+78h] [rbp-88h]
  __int64 v50; // [rsp+80h] [rbp-80h] BYREF
  DMMVIDPNTOPOLOGY *v51; // [rsp+88h] [rbp-78h]
  _BYTE v52[8]; // [rsp+90h] [rbp-70h] BYREF
  struct DXGADAPTER *v53; // [rsp+98h] [rbp-68h]
  char v54; // [rsp+A0h] [rbp-60h]
  _BYTE v55[24]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v56[144]; // [rsp+C0h] [rbp-40h] BYREF

  v53 = a1;
  v54 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v52);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v52);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v56, a1, 0LL);
  v4 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v56, 0LL);
  LODWORD(v9) = v4;
  if ( v4 < 0 )
  {
    if ( v4 != -1073741130 )
      goto LABEL_32;
    v29 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
    v29[3] = a1;
    v29[4] = *((int *)a1 + 102);
    v29[5] = *((unsigned int *)a1 + 101);
    v29[6] = this;
    goto LABEL_39;
  }
  if ( *((_BYTE *)a1 + 2833)
    || DXGADAPTER::IsBddFallbackDriver(a1) && !DxgkIsMSBDDFallbackEnabled()
    || (v10 = *((_QWORD *)a1 + 365)) == 0 )
  {
LABEL_39:
    LODWORD(v9) = 0;
    goto LABEL_32;
  }
  v11 = *(VIDPN_MGR **)(v10 + 104);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v46, (__int64)v11);
  v45 = 0LL;
  ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v11, (__int64 *)&v45);
  v9 = (DMMVIDPNTOPOLOGY *)ClientVidPnFromLastClientCommitedVidPn;
  if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
  {
    if ( !*((_QWORD *)v11 + 1) )
      WdLogSingleEntry0(1LL);
    v30 = *((_QWORD *)v11 + 1);
    v31 = *(unsigned int *)(*(_QWORD *)(v30 + 16) + 404LL);
    if ( !v30 )
      WdLogSingleEntry0(1LL);
    WdLogSingleEntry5(2LL, v9, v11, *(_QWORD *)this, *(int *)(*(_QWORD *)(*((_QWORD *)v11 + 1) + 16LL) + 408LL), v31);
    if ( !*((_QWORD *)v11 + 1) )
      WdLogSingleEntry0(1LL);
    v32 = *((_QWORD *)v11 + 1);
    v33 = *(unsigned int *)(*(_QWORD *)(v32 + 16) + 404LL);
    if ( !v32 )
      WdLogSingleEntry0(1LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to create copy of the client VidPN from last-client committed vidpn. (Status = 0x%I64x, pVidPnMgr "
                "= 0x%I64x, m_pTopology = 0x%I64x, i_pAdapter->GetLuid() = 0x%I64x%08I64x)",
      (__int64)v9,
      (__int64)v11,
      *(_QWORD *)this,
      *(int *)(*(_QWORD *)(*((_QWORD *)v11 + 1) + 16LL) + 408LL),
      v33);
    goto LABEL_53;
  }
  v13 = v45;
  v51 = (struct DMMVIDPN *)((char *)v45 + 96);
  if ( v45 == (struct DMMVIDPN *)-96LL )
  {
    if ( !*((_QWORD *)v11 + 1) )
      WdLogSingleEntry0(1LL);
    v34 = *((_QWORD *)v11 + 1);
    v35 = *(unsigned int *)(*(_QWORD *)(v34 + 16) + 404LL);
    if ( !v34 )
      WdLogSingleEntry0(1LL);
    v36 = *(int *)(*(_QWORD *)(*((_QWORD *)v11 + 1) + 16LL) + 408LL);
    v37 = 3LL;
    goto LABEL_60;
  }
  LODWORD(v9) = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPn(this, v45, 1);
  if ( (int)v9 < 0 )
  {
    if ( !*((_QWORD *)v11 + 1) )
      WdLogSingleEntry0(1LL);
    v38 = *((_QWORD *)v11 + 1);
    v35 = *(unsigned int *)(*(_QWORD *)(v38 + 16) + 404LL);
    if ( !v38 )
      WdLogSingleEntry0(1LL);
    v36 = *(int *)(*(_QWORD *)(*((_QWORD *)v11 + 1) + 16LL) + 408LL);
    v37 = 2LL;
LABEL_60:
    WdLogSingleEntry5(v37, v13, this, *(_QWORD *)this, v36, v35);
    goto LABEL_53;
  }
  v48 = 0LL;
  v14 = VIDPN_MGR::CreateClientVidPn(v11, &v48);
  v9 = (DMMVIDPNTOPOLOGY *)v14;
  if ( v14 < 0 )
  {
    if ( !*((_QWORD *)v11 + 1) )
      WdLogSingleEntry0(1LL);
    v39 = *((_QWORD *)v11 + 1);
    v40 = *(unsigned int *)(*(_QWORD *)(v39 + 16) + 404LL);
    if ( !v39 )
      WdLogSingleEntry0(1LL);
    WdLogSingleEntry5(2LL, v9, v11, *(_QWORD *)this, *(int *)(*(_QWORD *)(*((_QWORD *)v11 + 1) + 16LL) + 408LL), v40);
    goto LABEL_52;
  }
  v49 = (DMMVIDPNTOPOLOGY *)(v48 + 96);
  if ( v48 == -96 )
  {
    if ( !*((_QWORD *)v11 + 1) )
      WdLogSingleEntry0(1LL);
    v41 = *((_QWORD *)v11 + 1);
    v42 = *(unsigned int *)(*(_QWORD *)(v41 + 16) + 404LL);
    if ( !v41 )
      WdLogSingleEntry0(1LL);
    WdLogSingleEntry5(
      2LL,
      -96LL,
      this,
      *(_QWORD *)this,
      *(int *)(*(_QWORD *)(*((_QWORD *)v11 + 1) + 16LL) + 408LL),
      v42);
LABEL_52:
    auto_rc<DMMVIDPN>::reset(&v48, 0LL);
LABEL_53:
    auto_rc<DMMVIDPN>::reset((__int64 *)&v45, 0LL);
    EXCLUSIVEACCESS<VIDPN_MGR>::~EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v46);
    goto LABEL_32;
  }
  _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)v11 + 15) + 72LL), 1u);
  v15 = *((_QWORD *)a1 + 365);
  v16 = 0;
  v17 = *((_QWORD *)v11 + 15);
  v50 = v17;
  v44 = 0;
  if ( *(_DWORD *)(v15 + 96) )
  {
    do
    {
      v18 = *(_QWORD *)(v17 + 24);
      if ( v18 != v17 + 24 )
      {
        v19 = v18 - 8;
        while ( v19 )
        {
          v47 = *(_DWORD *)(v19 + 24);
          if ( !DMMVIDPNTOPOLOGY::FindPath(v51, v16, v47) && (*(_DWORD *)(v19 + 84) != 15 || *(_QWORD *)(v19 + 112)) )
          {
            v20 = v49;
            if ( *((_QWORD *)v49 + 5) )
            {
              WdLogSingleEntry1(1LL, 823LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"pScratchVidPnTopology->GetNumPaths() == 0",
                823LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            v21 = VIDPN_MGR::AddPathToVidPnTopology(
                    v11,
                    v20,
                    v44,
                    v47,
                    (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                    0xFFFFu,
                    0,
                    D3DKMDT_MCC_IGNORE);
            v9 = (DMMVIDPNTOPOLOGY *)v21;
            if ( v21 == -1071774975 )
            {
              LODWORD(v9) = 0;
            }
            else
            {
              if ( v21 < 0 )
              {
                WdLogSingleEntry1(2LL, v21);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"AddPathToVidPnTopology() failed. (Status = 0x%I64x)",
                  (__int64)v9,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                auto_rc<DMMVIDEOPRESENTTARGETSET const>::~auto_rc<DMMVIDEOPRESENTTARGETSET const>(&v50);
                goto LABEL_52;
              }
              v9 = v49;
              if ( *((_QWORD *)v49 + 5) != 1LL )
              {
                WdLogSingleEntry1(1LL, 854LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"pScratchVidPnTopology->GetNumPaths() == 1",
                  854LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              Path = DMMVIDPNTOPOLOGY::FindPath(v9, v44, v47);
              LODWORD(v9) = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPnPath(this, (ADAPTER_DISPLAY **)a1, Path, 0, 0);
              if ( (int)v9 < 0 )
              {
                auto_rc<DMMVIDEOPRESENTTARGETSET const>::~auto_rc<DMMVIDEOPRESENTTARGETSET const>(&v50);
                auto_rc<DMMVIDPN>::reset(&v48, 0LL);
                auto_rc<DMMVIDPN>::reset((__int64 *)&v45, 0LL);
                EXCLUSIVEACCESS<VIDPN_MGR>::~EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v46);
                goto LABEL_32;
              }
              ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
                (__int64)v55,
                (__int64)v49 + 56,
                2u,
                v23,
                v43,
                255LL);
              DMMVIDPNTOPOLOGY::RemovePath(v49, v44, v47, 0LL);
              v26 = 0LL;
              if ( *((_QWORD *)v49 + 5) )
              {
                WdLogSingleEntry1(1LL, 878LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"pScratchVidPnTopology->GetNumPaths() == 0",
                  878LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
                (ApplyPermissionWithinThisScope *)v55,
                v26,
                v24,
                v25);
            }
          }
          v27 = *(_QWORD *)(v19 + 8);
          v16 = v44;
          v19 = v27 - 8;
          if ( v27 == v17 + 24 )
            v19 = 0LL;
        }
      }
      v44 = ++v16;
    }
    while ( v16 < *(_DWORD *)(*((_QWORD *)a1 + 365) + 96LL) );
  }
  if ( v17 )
    ReferenceCounted::Release((ReferenceCounted *)(v17 + 64));
  auto_rc<DMMVIDPN>::reset(&v48, 0LL);
  auto_rc<DMMVIDPN>::reset((__int64 *)&v45, 0LL);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v46 + 40));
LABEL_32:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v56);
  if ( v54 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v52);
  return (unsigned int)v9;
}
