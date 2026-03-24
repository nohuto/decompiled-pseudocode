/*
 * XREFs of ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C013B690
 * Callers:
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0149090 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000202C (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@0@Z @ 0x1C001A7BC (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@0@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     DxgkStatusChangeNotify @ 0x1C00E4A50 (DxgkStatusChangeNotify.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1C00E6D88 (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00EBB74 (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 *     ?DxgIsSessionUsingWddmMonitors@@YAHXZ @ 0x1C011746C (-DxgIsSessionUsingWddmMonitors@@YAHXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0123B08 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C013A304 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C013C0B0 (-GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?BuildPrimaryPathIndexFromCloneGroupId@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C013D360 (-BuildPrimaryPathIndexFromCloneGroupId@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C013DE80 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C013DEF0 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C013E924 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     DxgkCreateSessionViewForCurrentSession @ 0x1C0161230 (DxgkCreateSessionViewForCurrentSession.c)
 *     DxgkRemoveAllSessionViewForCurrentSession @ 0x1C0161464 (DxgkRemoveAllSessionViewForCurrentSession.c)
 *     ?CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z @ 0x1C0169648 (-CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z.c)
 *     ?CleanupPrimaryPathIndex@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C016A444 (-CleanupPrimaryPathIndex@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     _CCD_TOPOLOGY::ApplyTopologyWorker_::_2_::_AUTO_USING_PM_PathChanged2734::__AUTO_USING_PM_PathChanged2734 @ 0x1C016BD1C (_CCD_TOPOLOGY--ApplyTopologyWorker_--_2_--_AUTO_USING_PM_PathChanged2734--__AUTO_USING_PM_PathCh.c)
 *     _CCD_TOPOLOGY::ApplyTopologyWorker_::_2_::_AUTO_USING_PM_PrimaryClonePathIndex2732::__AUTO_USING_PM_PrimaryClonePathIndex2732 @ 0x1C016BD58 (_CCD_TOPOLOGY--ApplyTopologyWorker_--_2_--_AUTO_USING_PM_PrimaryClonePathIndex2732--__AUTO_USING.c)
 *     ?RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z @ 0x1C019CF40 (-RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z.c)
 *     ?IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z @ 0x1C02EB388 (-IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z.c)
 *     ?MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z @ 0x1C02EB4FC (-MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::ApplyTopologyWorker(
        CCD_TOPOLOGY *this,
        DWORD a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  unsigned int v3; // r14d
  unsigned __int16 v5; // bx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  DXGSESSIONMGR *v10; // rsi
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct DXGFASTMUTEX *const *v20; // r13
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rsi
  unsigned int v32; // edx
  _DWORD *v33; // rax
  __int64 v34; // rcx
  unsigned int v35; // ecx
  _DWORD *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  unsigned int v39; // edx
  _DWORD *v40; // rax
  __int64 v41; // rcx
  unsigned int v42; // ecx
  _DWORD *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rcx
  DXGGLOBAL *Global; // rax
  SIZE_T v48; // rax
  unsigned __int64 MaximumAdapterCount; // kr00_8
  PVOID v50; // rax
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rcx
  __int64 v55; // rax
  DXGGLOBAL *v56; // rax
  __int64 v57; // rbx
  __int64 v58; // rcx
  unsigned __int16 v59; // ax
  unsigned int v60; // r14d
  unsigned __int16 v61; // r10
  unsigned __int16 v62; // r9
  __int64 v63; // r8
  __int64 v64; // rbx
  __int64 v65; // rdx
  __int16 v66; // r9
  unsigned __int16 v67; // r11
  __int64 v68; // r11
  __int64 v69; // r8
  unsigned __int16 v70; // r10
  __int64 v71; // rdx
  __int64 v72; // r9
  unsigned __int16 v73; // r8
  __int64 v74; // rdx
  unsigned __int16 v75; // r11
  __int64 v76; // rcx
  unsigned __int16 v77; // r11
  unsigned __int16 v78; // ax
  unsigned int v79; // r8d
  unsigned int v80; // r9d
  __int64 v81; // r8
  __int64 v82; // r10
  int v83; // edx
  __int64 v84; // rax
  unsigned __int16 v85; // r15
  unsigned __int16 v86; // ax
  __int64 v87; // rdx
  __int64 v88; // rax
  __int64 v89; // rcx
  unsigned int v90; // r9d
  __int64 v91; // r10
  __int64 v92; // r8
  __int64 v93; // rbx
  __int64 v94; // rsi
  __int64 v95; // r8
  int v96; // edx
  __int64 v97; // rax
  unsigned int v98; // edx
  __int64 v99; // rax
  int v100; // eax
  unsigned int v101; // ebx
  char v102; // r12
  DWORD LowPart; // r15d
  int v104; // eax
  __int64 v105; // rdx
  __int64 v106; // rsi
  __int64 v107; // r14
  int v108; // eax
  __int64 v109; // r14
  struct DXGGLOBAL *v110; // rax
  __int64 v111; // rcx
  unsigned __int16 v112; // si
  __int64 v113; // rdx
  __int64 v114; // rbx
  unsigned int v115; // r15d
  __int64 v116; // rax
  LONG v117; // ecx
  int v118; // eax
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // r13
  __int64 v122; // rcx
  __int64 v123; // rdx
  int v124; // r10d
  __int64 v125; // r8
  unsigned int v126; // r9d
  struct DXGGLOBAL *v127; // rax
  __int64 v128; // rcx
  struct DXGGLOBAL *v129; // rsi
  unsigned __int16 j; // bx
  __int64 v131; // rdx
  int v132; // eax
  __int64 v134; // rdx
  __int64 v135; // rcx
  __int64 v136; // rbx
  __int64 v137; // rdx
  __int64 v138; // rcx
  __int64 v139; // rcx
  __int64 v140; // rax
  __int64 v141; // rax
  __int64 v142; // rax
  __int64 v143; // rbx
  __int64 v144; // r11
  __int64 v145; // r10
  __int64 v146; // rbx
  __int64 v147; // rcx
  _QWORD *v148; // rax
  _QWORD *v149; // rax
  __int64 v150; // rax
  __int64 v151; // rax
  _QWORD *v152; // rax
  int v153; // eax
  __int64 v154; // rbx
  __int64 v155; // rax
  __int64 v156; // rdx
  __int64 v157; // rax
  unsigned __int16 i; // [rsp+30h] [rbp-D0h] BYREF
  struct _LUID Luid; // [rsp+38h] [rbp-C8h] BYREF
  struct tagRECT v160; // [rsp+40h] [rbp-C0h] BYREF
  struct DXGPROCESS *Current; // [rsp+50h] [rbp-B0h]
  __int64 v162; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v163; // [rsp+60h] [rbp-A0h]
  __int64 v164; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v165; // [rsp+70h] [rbp-90h]
  __int64 v166; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v167; // [rsp+80h] [rbp-80h]
  __int64 v168; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v169; // [rsp+90h] [rbp-70h]
  _BYTE v170[64]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v171; // [rsp+E0h] [rbp-20h]
  int v172; // [rsp+F4h] [rbp-Ch]
  struct _KAPC_STATE ApcState; // [rsp+100h] [rbp+0h] BYREF
  char v174; // [rsp+130h] [rbp+30h]

  v3 = 0;
  *(_QWORD *)&v160.left = a3;
  Luid.LowPart = a2;
  v174 = 0;
  v5 = 8;
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v170, 8u, 0);
  v10 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v7, v6) + 102);
  if ( v10 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v9, v8);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v10, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  LODWORD(v13) = -1073741811;
  if ( !SessionDataForSpecifiedSession )
  {
    v136 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v136 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v138, v137);
    v139 = v136;
    *(_QWORD *)(v136 + 32) = -1073741811LL;
LABEL_133:
    WdLogEvent5_WdError(v139);
    goto LABEL_118;
  }
  CPROCESSATTACHHELPER::Attach(&ApcState, *((PRKPROCESS *)SessionDataForSpecifiedSession + 2329));
  Current = DXGPROCESS::GetCurrent(v15, v14, v16, v17);
  v20 = (struct DXGFASTMUTEX *const *)Current;
  if ( !Current )
  {
    v140 = WdLogNewEntry5_WdError(v19, v18);
LABEL_132:
    v139 = v140;
    goto LABEL_133;
  }
  if ( (unsigned int)DxgIsSessionUsingWddmMonitors() )
  {
    for ( i = 8; ; v5 = i )
    {
      if ( CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v170, v5) < v5 )
      {
        v157 = WdLogNewEntry5_WdLowResource(v24, v23, v25, v26);
        *(_QWORD *)(v157 + 24) = *((_QWORD *)this + 8);
        *(_QWORD *)(v157 + 32) = v5;
        WdLogEvent5_WdLowResource(v157);
        LODWORD(v13) = -1073741801;
        goto LABEL_118;
      }
      v172 |= 3u;
      v27 = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v170, 0, 1, 1, &i);
      v13 = v27;
      if ( v27 != -1073741789 )
        break;
    }
    if ( v27 < 0 )
    {
      v140 = WdLogNewEntry5_WdError(v29, v28);
      *(_QWORD *)(v140 + 24) = *((_QWORD *)this + 8);
      *(_QWORD *)(v140 + 32) = v13;
      goto LABEL_132;
    }
    v30 = *((_QWORD *)this + 8);
    v31 = v171;
    v32 = *(unsigned __int16 *)(v30 + 20);
    v168 = v30 + 48;
    v169 = v32;
    if ( v32 )
    {
      v33 = (_DWORD *)(v30 + 280);
      v34 = v32;
      do
      {
        *v33 |= 4u;
        v33[3] = 0;
        v33 += 68;
        --v34;
      }
      while ( v34 );
    }
    v35 = *(unsigned __int16 *)(v31 + 20);
    v166 = v31 + 48;
    v167 = v35;
    if ( v35 )
    {
      v36 = (_DWORD *)(v31 + 280);
      v37 = v35;
      do
      {
        *v36 |= 4u;
        v36[3] = 0;
        v36 += 68;
        --v37;
      }
      while ( v37 );
    }
    v38 = *((_QWORD *)this + 8);
    v39 = *(unsigned __int16 *)(v38 + 20);
    v164 = v38 + 48;
    v165 = v39;
    if ( v39 )
    {
      v40 = (_DWORD *)(v38 + 280);
      v41 = v39;
      do
      {
        *v40 |= 0x10u;
        v40[4] = 0;
        v40 += 68;
        --v41;
      }
      while ( v41 );
    }
    v42 = *(unsigned __int16 *)(v31 + 20);
    v162 = v31 + 48;
    v163 = v42;
    if ( v42 )
    {
      v43 = (_DWORD *)(v31 + 280);
      v44 = v42;
      do
      {
        *v43 |= 0x10u;
        v43[4] = 0;
        v43 += 68;
        --v44;
      }
      while ( v44 );
    }
    CCD_TOPOLOGY::BuildPrimaryPathIndexFromCloneGroupId(this);
    CCD_TOPOLOGY::BuildPrimaryPathIndexFromCloneGroupId((CCD_TOPOLOGY *)v170);
    Global = DXGGLOBAL::GetGlobal(v46, v45);
    MaximumAdapterCount = DXGGLOBAL::GetMaximumAdapterCount(Global);
    v48 = 336 * MaximumAdapterCount;
    if ( !is_mul_ok(MaximumAdapterCount, 0x150uLL) )
      v48 = -1LL;
    v50 = operator new[](v48, 0x63644356u, PagedPool);
    v54 = *((_QWORD *)this + 8);
    *(_QWORD *)(v54 + 40) = v50;
    v55 = *((_QWORD *)this + 8);
    if ( *(_QWORD *)(v55 + 40) )
    {
      *(_WORD *)(v55 + 28) = 0;
      while ( 1 )
      {
        v56 = DXGGLOBAL::GetGlobal(v54, v51);
        if ( v3 >= DXGGLOBAL::GetMaximumAdapterCount(v56) )
          break;
        v57 = 336LL * v3;
        memset((void *)(v57 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)), 0, 0x150uLL);
        memset((void *)(v57 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 8LL), 255, 0x40uLL);
        ++v3;
      }
      DxgkRemoveAllSessionViewForCurrentSession();
      v59 = *(_WORD *)(v31 + 20);
      v60 = 0;
      v61 = 0;
      if ( v59 )
      {
        LOWORD(v58) = 0;
        do
        {
          v62 = 0;
          v63 = v31 + 272LL * (unsigned __int16)v58;
          *(_DWORD *)(v63 + 296) = 0;
          v64 = *((_QWORD *)this + 8);
          if ( *(_WORD *)(v64 + 20) )
          {
            while ( !CCD_TOPOLOGY::IsMatchingSource(
                       (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v63 + 48),
                       (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(272LL * v62 + v64 + 48))
                 || *(_DWORD *)(v63 + 76) != *(_DWORD *)(v65 + 28) )
            {
              v62 = v66 + 1;
              if ( v62 >= v67 )
                goto LABEL_35;
            }
            if ( !CCD_TOPOLOGY::IsMatchingSource(
                    (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(272LL * *(unsigned int *)(v63 + 292) + v31 + 48),
                    (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(272LL * *(unsigned int *)(v65 + 244) + v64 + 48)) )
            {
              *(_DWORD *)(v68 + v31 + 296) = 1;
              *(_QWORD *)(272LL * *(unsigned int *)(v63 + 292) + v31 + 244) = 0LL;
            }
          }
LABEL_35:
          if ( v62 >= *(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
          {
            *(_DWORD *)(272LL * *(unsigned int *)(v63 + 292) + v31 + 296) = 1;
            *(_QWORD *)(272LL * *(unsigned int *)(v63 + 292) + v31 + 244) = 0LL;
          }
          v59 = *(_WORD *)(v31 + 20);
          v58 = ++v61;
        }
        while ( v61 < v59 );
      }
      v69 = *((_QWORD *)this + 8);
      v70 = 0;
      v71 = v69;
      if ( *(_WORD *)(v69 + 20) )
      {
        LOWORD(v58) = 0;
        do
        {
          v72 = v69 + 272LL * (unsigned __int16)v58;
          v73 = 0;
          *(_DWORD *)(v72 + 296) = 0;
          if ( *(_WORD *)(v31 + 20) )
          {
            while ( !CCD_TOPOLOGY::IsMatchingSource(
                       (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v72 + 48),
                       (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(272LL * v73 + v31 + 48))
                 || *(_DWORD *)(v74 + 28) != *(_DWORD *)(v72 + 76) )
            {
              if ( ++v73 >= v75 )
                goto LABEL_46;
            }
            v76 = *(unsigned int *)(v74 + 244);
            if ( (_DWORD)v76 == v73 && *(_DWORD *)(v72 + 292) == v70 )
            {
              *(_QWORD *)(v72 + 244) = *(_QWORD *)(v74 + 196);
            }
            else
            {
              v143 = *((_QWORD *)this + 8);
              if ( !CCD_TOPOLOGY::IsMatchingSource(
                      (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(272LL * *(unsigned int *)(v72 + 292) + v143 + 48),
                      (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(272 * v76 + v31 + 48)) )
              {
                *(_DWORD *)(v144 + v143 + 296) = 1;
                *(_QWORD *)(272LL * *(unsigned int *)(v72 + 292) + *((_QWORD *)this + 8) + 244) = 0LL;
              }
            }
          }
LABEL_46:
          v59 = *(_WORD *)(v31 + 20);
          if ( v73 >= v59 )
          {
            *(_DWORD *)(272LL * *(unsigned int *)(v72 + 292) + *((_QWORD *)this + 8) + 296) = 1;
            *(_QWORD *)(272LL * *(unsigned int *)(v72 + 292) + *((_QWORD *)this + 8) + 244) = 0LL;
            v59 = *(_WORD *)(v31 + 20);
          }
          v69 = *((_QWORD *)this + 8);
          v58 = ++v70;
          v71 = v69;
        }
        while ( v70 < *(_WORD *)(v69 + 20) );
      }
      v77 = 0;
      if ( v59 )
      {
        v78 = 0;
        do
        {
          v79 = *(_DWORD *)(v71 + 36);
          v80 = 0;
          if ( v79 )
          {
            v145 = *(_QWORD *)(v71 + 40);
            v146 = 272LL * v78;
            do
            {
              v147 = 336LL * v80;
              if ( *(_DWORD *)(v146 + v31 + 64) == *(_DWORD *)(v147 + v145)
                && *(_DWORD *)(v146 + v31 + 68) == *(_DWORD *)(v147 + v145 + 4) )
              {
                break;
              }
              ++v80;
            }
            while ( v80 < v79 );
            v60 = 0;
          }
          v81 = 336LL * v80;
          v82 = 272LL * v77;
          *(_DWORD *)(*(_QWORD *)(v71 + 40) + v81 + 80) |= 1 << *(_DWORD *)(v82 + v31 + 72);
          if ( (*(_QWORD *)(v82 + v31 + 48) & 0x1000000000LL) != 0 )
            v83 = 1 << *(_DWORD *)(v82 + v31 + 72);
          else
            v83 = 0;
          v58 = *(_QWORD *)(*((_QWORD *)this + 8) + 40LL);
          *(_DWORD *)(v58 + v81 + 228) |= v83;
          if ( *(_DWORD *)(v82 + v31 + 296) == 1 )
          {
            v58 = *(unsigned int *)(v82 + v31 + 72);
            *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v81 + 136) |= 1 << v58;
          }
          v69 = *((_QWORD *)this + 8);
          v71 = v69;
          v84 = *(unsigned int *)(v69 + 36);
          if ( v80 >= (unsigned int)v84 )
          {
            v58 = *(_QWORD *)(v69 + 40);
            *(_QWORD *)(336 * v84 + v58) = *(_QWORD *)(v82 + v31 + 64);
            ++*(_DWORD *)(*((_QWORD *)this + 8) + 36LL);
            v69 = *((_QWORD *)this + 8);
            v71 = v69;
          }
          v78 = ++v77;
        }
        while ( v77 < *(_WORD *)(v31 + 20) );
      }
      v85 = 0;
      if ( *(_WORD *)(v69 + 20) )
      {
        v86 = 0;
        while ( 1 )
        {
          v87 = 272LL * v86;
          v88 = *(_QWORD *)(v87 + v69 + 48);
          if ( (v88 & 0x187) != 0 )
          {
            *(_QWORD *)(v87 + v69 + 48) = v88 | 0x40000000000000LL;
            *(_QWORD *)(v87 + *((_QWORD *)this + 8) + 56) |= *(_DWORD *)(v87 + *((_QWORD *)this + 8) + 48) & 0x187;
            v69 = *((_QWORD *)this + 8);
          }
          *(_DWORD *)(v87 + v69 + 240) = 0;
          v89 = *((_QWORD *)this + 8);
          v90 = *(_DWORD *)(v89 + 36);
          if ( v90 )
          {
            v91 = *(_QWORD *)(v89 + 40);
            do
            {
              v92 = 336LL * v60;
              if ( *(_DWORD *)(v89 + v87 + 64) == *(_DWORD *)(v92 + v91)
                && *(_DWORD *)(v89 + v87 + 68) == *(_DWORD *)(v92 + v91 + 4) )
              {
                break;
              }
              ++v60;
            }
            while ( v60 < v90 );
          }
          v93 = 272LL * v85;
          v94 = 336LL * v60;
          *(_DWORD *)(*(_QWORD *)(v89 + 40) + v94 + 84) |= 1 << *(_DWORD *)(v93 + v89 + 72);
          v95 = *((_QWORD *)this + 8);
          if ( (*(_QWORD *)(v95 + v93 + 48) & 0x1000000000LL) != 0 )
            v96 = 1 << *(_DWORD *)(v95 + v93 + 72);
          else
            v96 = 0;
          *(_DWORD *)(*(_QWORD *)(v95 + 40) + v94 + 228) |= v96;
          v97 = *((_QWORD *)this + 8);
          v98 = *(_DWORD *)(v93 + v97 + 292);
          if ( v98 == v85 )
          {
            *(_DWORD *)(*(_QWORD *)(v97 + 40) + v94 + 72) |= 1 << *(_DWORD *)(v93 + v97 + 72);
          }
          else if ( CCD_TOPOLOGY::IsSameCloneGroup(this, v98, v85, 1) )
          {
            goto LABEL_72;
          }
          v58 = *((_QWORD *)this + 8);
          v71 = 84LL * v60 + *(unsigned int *)(v93 + v58 + 72);
          *(_DWORD *)(*(_QWORD *)(v58 + 40) + 4 * v71 + 8) = v85;
LABEL_72:
          v69 = *((_QWORD *)this + 8);
          if ( *(_DWORD *)(v93 + v69 + 296) == 1 )
          {
            v58 = *(unsigned int *)(v93 + v69 + 72);
            v71 = *(_QWORD *)(v69 + 40);
            *(_DWORD *)(v71 + v94 + 136) |= 1 << v58;
            v69 = *((_QWORD *)this + 8);
          }
          v99 = *(unsigned int *)(v69 + 36);
          if ( v60 >= (unsigned int)v99 )
          {
            v58 = *(_QWORD *)(v69 + 40);
            v71 = 336 * v99;
            *(_QWORD *)(336 * v99 + v58) = *(_QWORD *)(v93 + v69 + 64);
            ++*(_DWORD *)(*((_QWORD *)this + 8) + 36LL);
            v69 = *((_QWORD *)this + 8);
          }
          ++v85;
          v60 = 0;
          v86 = v85;
          if ( v85 >= *(_WORD *)(v69 + 20) )
          {
            v20 = (struct DXGFASTMUTEX *const *)Current;
            break;
          }
        }
      }
      v100 = *(_DWORD *)(v69 + 36);
      v101 = 0;
      v102 = v100 != 0;
      LOBYTE(i) = v100 != 0;
      if ( v100 )
      {
        LowPart = Luid.LowPart;
        do
        {
          v104 = CCD_TOPOLOGY::CheckAdapterViewSessionOwnership(this, v101);
          v58 = v101;
          v106 = 336LL * v101;
          v107 = v104;
          if ( v104 < 0 )
          {
            v148 = (_QWORD *)WdLogNewEntry5_WdError(v101, v105);
            v148[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v106 + 4);
            v148[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 336LL * v101);
            v148[5] = *((_QWORD *)this + 8);
            v148[6] = v107;
            WdLogEvent5_WdError(v148);
            CCD_TOPOLOGY::MarkPathsApplyFailure(
              this,
              (const struct _LUID *)(v106 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
              0xFFFFFFFF,
              v107);
          }
          else
          {
            v71 = *(_QWORD *)(*((_QWORD *)this + 8) + 40LL);
            if ( *(_QWORD *)(v71 + v106 + 80) )
            {
              v108 = CCD_TOPOLOGY::ApplyTopologyOnAdapter(
                       this,
                       v20,
                       LowPart,
                       v101,
                       *(struct _DXGK_DISPLAY_SCENARIO_CONTEXT **)&v160.left);
              v109 = v108;
              if ( v108 < 0 )
              {
                v149 = (_QWORD *)WdLogNewEntry5_WdError(v58, v71);
                v149[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v106 + 4);
                v149[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 336LL * v101);
                v149[5] = *((_QWORD *)this + 8);
                v149[6] = v109;
                WdLogEvent5_WdError(v149);
              }
              else
              {
                v102 = 0;
              }
            }
          }
          ++v101;
        }
        while ( v101 < *(_DWORD *)(*((_QWORD *)this + 8) + 36LL) );
        LOBYTE(i) = v102;
      }
      v110 = DXGGLOBAL::GetGlobal(v58, v71);
      QDC_CACHE::InvalidateCache(*((struct DXGFASTMUTEX *const **)v110 + 172), 0LL);
      v111 = *((_QWORD *)this + 8);
      if ( *(_WORD *)(v111 + 20) )
      {
        v112 = 0;
        v113 = *((_QWORD *)this + 8);
        while ( 1 )
        {
          v114 = 272LL * v112;
          v115 = *(_DWORD *)(v114 + v111 + 292);
          if ( *(int *)(v114 + v111 + 240) >= 0 )
          {
            if ( v115 == v112 )
              goto LABEL_90;
            if ( !CCD_TOPOLOGY::IsSameCloneGroup(this, v115, v112, 1) )
              break;
          }
LABEL_97:
          v111 = *((_QWORD *)this + 8);
          ++v112;
          v113 = v111;
          if ( v112 >= *(_WORD *)(v111 + 20) )
          {
            v102 = i;
            goto LABEL_99;
          }
        }
        v113 = *((_QWORD *)this + 8);
LABEL_90:
        v116 = *(_QWORD *)(v114 + v113 + 48);
        if ( (v116 & 0x800) == 0 || (v116 & 0x20000) == 0 )
        {
          v150 = WdLogNewEntry5_WdAssertion(v111, v113);
          WdLogEvent5_WdAssertion(v150);
          v113 = *((_QWORD *)this + 8);
        }
        v160.left = *(_DWORD *)(v114 + v113 + 192);
        v160.right = *(_DWORD *)(v114 + v113 + 200) + v160.left;
        v160.top = *(_DWORD *)(v114 + v113 + 196);
        v117 = *(_DWORD *)(v114 + v113 + 204) + v160.top;
        Luid = 0LL;
        v160.bottom = v117;
        if ( *(_DWORD *)(v114 + v113 + 244) || *(_DWORD *)(v114 + v113 + 248) )
        {
          Luid = *(struct _LUID *)(v114 + v113 + 244);
        }
        else
        {
          if ( ZwAllocateLocallyUniqueId(&Luid) < 0 )
          {
            v151 = WdLogNewEntry5_WdAssertion(v135, v134);
            WdLogEvent5_WdAssertion(v151);
          }
          v113 = *((_QWORD *)this + 8);
        }
        v118 = DxgkCreateSessionViewForCurrentSession(
                 (struct _LUID *)(v114 + v113 + 64),
                 *(_DWORD *)(v114 + v113 + 72),
                 &v160,
                 v115 == v112,
                 &Luid);
        v121 = v118;
        if ( v118 < 0 )
        {
          v152 = (_QWORD *)WdLogNewEntry5_WdError(v120, v119);
          v152[3] = *(int *)(v114 + *((_QWORD *)this + 8) + 68);
          v152[4] = *(unsigned int *)(v114 + *((_QWORD *)this + 8) + 64);
          v152[5] = *(unsigned int *)(v114 + *((_QWORD *)this + 8) + 72);
          v152[6] = v121;
          WdLogEvent5_WdError(v152);
          *(_DWORD *)(v114 + *((_QWORD *)this + 8) + 240) = v121;
        }
        else if ( v115 == v112 )
        {
          ++*(_WORD *)(*((_QWORD *)this + 8) + 28LL);
        }
        goto LABEL_97;
      }
LABEL_99:
      CCD_TOPOLOGY::CleanupPrimaryPathIndex(this);
      CCD_TOPOLOGY::CleanupPrimaryPathIndex((CCD_TOPOLOGY *)v170);
      v123 = *((_QWORD *)this + 8);
      v124 = 0;
      v125 = 0LL;
      v126 = *(_DWORD *)(v123 + 36);
      if ( v126 )
      {
        v123 = *(_QWORD *)(v123 + 40);
        while ( 1 )
        {
          v122 = 336LL * (unsigned int)v125;
          if ( *(_DWORD *)(v122 + v123 + 96) || *(_DWORD *)(v122 + v123 + 88) )
            break;
          if ( *(_DWORD *)(v122 + v123 + 92) || *(_DWORD *)(v122 + v123 + 124) || *(_DWORD *)(v122 + v123 + 120) )
            v124 = 1;
          v125 = (unsigned int)(v125 + 1);
          if ( (unsigned int)v125 >= v126 )
            goto LABEL_107;
        }
        v124 = 0;
LABEL_107:
        if ( v124 )
        {
          v160 = 0LL;
          v160.left = 11;
          v153 = DxgkStatusChangeNotify(&v160.left, v123, v125);
          v154 = v153;
          if ( v153 < 0 )
          {
            v155 = WdLogNewEntry5_WdError(v122, v123);
            *(_QWORD *)(v155 + 24) = v154;
            WdLogEvent5_WdError(v155);
          }
        }
      }
      v127 = DXGGLOBAL::GetGlobal(v122, v123);
      v128 = *((_QWORD *)this + 8);
      v129 = v127;
      if ( *(_WORD *)(v128 + 20) > 1u )
      {
        DXGGLOBAL::RecordFeatureUsage(v127, 0LL, 1LL);
        v128 = *((_QWORD *)this + 8);
      }
      if ( *(_WORD *)(v128 + 20) )
      {
        for ( j = 0; j < *(_WORD *)(v128 + 20); ++j )
        {
          v131 = 272LL * j;
          if ( *(int *)(v131 + v128 + 240) >= 0 )
          {
            v132 = *(_DWORD *)(v131 + v128 + 256);
            if ( v132 == 12 )
            {
              v156 = 4LL;
LABEL_164:
              DXGGLOBAL::RecordFeatureUsage(v129, v156, 1LL);
              goto LABEL_115;
            }
            if ( v132 == 30 )
            {
              v156 = 5LL;
              goto LABEL_164;
            }
          }
LABEL_115:
          v128 = *((_QWORD *)this + 8);
        }
      }
      LODWORD(v13) = v102 != 0 ? 0xC0000001 : 0;
    }
    else
    {
      v142 = WdLogNewEntry5_WdLowResource(v54, v51, v52, v53);
      *(_QWORD *)(v142 + 24) = this;
      *(_QWORD *)(v142 + 32) = *((_QWORD *)this + 8);
      WdLogEvent5_WdLowResource(v142);
      LODWORD(v13) = -1073741801;
    }
    CCD_TOPOLOGY::ApplyTopologyWorker_::_2_::_AUTO_USING_PM_PathChanged2734::__AUTO_USING_PM_PathChanged2734(&v162);
    CCD_TOPOLOGY::ApplyTopologyWorker_::_2_::_AUTO_USING_PM_PathChanged2734::__AUTO_USING_PM_PathChanged2734(&v164);
    CCD_TOPOLOGY::ApplyTopologyWorker_::_2_::_AUTO_USING_PM_PrimaryClonePathIndex2732::__AUTO_USING_PM_PrimaryClonePathIndex2732(&v166);
    CCD_TOPOLOGY::ApplyTopologyWorker_::_2_::_AUTO_USING_PM_PrimaryClonePathIndex2732::__AUTO_USING_PM_PrimaryClonePathIndex2732(&v168);
  }
  else
  {
    v141 = WdLogNewEntry5_WdError(v22, v21);
    *(_QWORD *)(v141 + 24) = Current;
    WdLogEvent5_WdError(v141);
    LODWORD(v13) = -1073741790;
  }
LABEL_118:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v170);
  if ( v174 )
    KeUnstackDetachProcess(&ApcState);
  return (unsigned int)v13;
}
