/*
 * XREFs of ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01BB60C
 * Callers:
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C3E44 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000B044 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@0@Z @ 0x1C0016BF4 (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@0@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C016A260 (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 *     DxgkStatusChangeNotify @ 0x1C0172E00 (DxgkStatusChangeNotify.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1C017586C (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A9568 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?DxgIsSessionUsingWddmMonitors@@YAHXZ @ 0x1C01AF86C (-DxgIsSessionUsingWddmMonitors@@YAHXZ.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C01BAE68 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?GetMaximumAdapterCountInSession@DXGGLOBAL@@QEAAKXZ @ 0x1C01BC43C (-GetMaximumAdapterCountInSession@DXGGLOBAL@@QEAAKXZ.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C01BE528 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C01BE5F4 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C01BE894 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z @ 0x1C01C3798 (-CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z.c)
 *     DxgkCreateSessionViewForCurrentSession @ 0x1C01C3F04 (DxgkCreateSessionViewForCurrentSession.c)
 *     DxgkRemoveAllSessionViewForCurrentSession @ 0x1C01C4E60 (DxgkRemoveAllSessionViewForCurrentSession.c)
 *     ?BuildPrimaryPathIndexFromCloneGroupId@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C01DB8B4 (-BuildPrimaryPathIndexFromCloneGroupId@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?CleanupPrimaryPathIndex@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C01DD34C (-CleanupPrimaryPathIndex@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     _CCD_TOPOLOGY::ApplyTopologyWorker_::_2_::_AUTO_USING_PM_PrimaryClonePathIndex3016::__AUTO_USING_PM_PrimaryClonePathIndex3016 @ 0x1C01DD5E0 (_CCD_TOPOLOGY--ApplyTopologyWorker_--_2_--_AUTO_USING_PM_PrimaryClonePathIndex3016--__AUTO_USING.c)
 *     _CCD_TOPOLOGY::ApplyTopologyWorker_::_2_::_AUTO_USING_PM_PathChanged3018::__AUTO_USING_PM_PathChanged3018 @ 0x1C01DD61C (_CCD_TOPOLOGY--ApplyTopologyWorker_--_2_--_AUTO_USING_PM_PathChanged3018--__AUTO_USING_PM_PathCh.c)
 *     ?RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z @ 0x1C020C7CC (-RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z.c)
 *     ?IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z @ 0x1C03B6D84 (-IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z.c)
 *     ?MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z @ 0x1C03B6EBC (-MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::ApplyTopologyWorker(
        CCD_TOPOLOGY *this,
        DWORD a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  unsigned __int16 v3; // r15
  DWORD LowPart; // r13d
  CCD_TOPOLOGY *v5; // rdi
  unsigned __int16 v6; // si
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  DXGSESSIONMGR *v12; // r14
  unsigned int v13; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  struct DXGPROCESS *v17; // r12
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rsi
  unsigned int v21; // edx
  _DWORD *v22; // rax
  __int64 v23; // rcx
  unsigned int v24; // ecx
  _DWORD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned int v28; // edx
  _DWORD *v29; // rax
  __int64 v30; // rcx
  unsigned int v31; // ecx
  _DWORD *v32; // rax
  __int64 v33; // rdx
  DXGGLOBAL *Global; // rax
  unsigned __int64 v35; // rax
  unsigned __int64 MaximumAdapterCountInSession; // kr00_8
  __int64 v37; // rax
  unsigned int j; // r14d
  DXGGLOBAL *v39; // rax
  __int64 v40; // rbx
  unsigned __int16 v41; // ax
  unsigned __int16 v42; // r10
  unsigned __int16 v43; // cx
  unsigned __int16 v44; // r9
  __int64 v45; // r8
  __int64 v46; // rbx
  __int64 v47; // rdx
  __int16 v48; // r9
  unsigned __int16 v49; // r11
  __int64 v50; // r11
  __int64 v51; // r8
  unsigned __int16 v52; // r10
  unsigned __int16 v53; // cx
  __int64 v54; // r9
  unsigned __int16 v55; // r8
  __int64 v56; // rdx
  unsigned __int16 v57; // r11
  __int64 v58; // rcx
  unsigned __int16 v59; // r10
  unsigned __int16 v60; // ax
  unsigned __int16 v61; // dx
  unsigned int v62; // r11d
  unsigned int v63; // r9d
  __int64 v64; // rbx
  __int64 v65; // r11
  int v66; // edx
  __int64 v67; // rax
  unsigned __int16 v68; // ax
  unsigned __int16 v69; // r9
  __int64 v70; // rbx
  __int64 v71; // rdx
  unsigned int v72; // r14d
  __int64 v73; // rcx
  unsigned int v74; // edx
  __int64 v75; // r9
  __int64 v76; // r8
  __int64 v77; // rsi
  __int64 v78; // r8
  int v79; // edx
  __int64 v80; // rax
  unsigned int v81; // edx
  __int64 v82; // rax
  __int64 v83; // r8
  __int64 v84; // rax
  int v85; // eax
  unsigned int v86; // ebx
  char v87; // r15
  int v88; // eax
  __int64 v89; // rsi
  int v90; // r14d
  int v91; // eax
  struct DXGGLOBAL *v92; // rax
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 v95; // rdx
  unsigned __int16 v96; // r14
  unsigned __int16 v97; // ax
  unsigned __int16 v98; // r9
  unsigned __int16 v99; // r8
  unsigned __int16 v100; // r10
  __int64 v101; // rbx
  unsigned int v102; // esi
  int v103; // r12d
  __int64 v104; // rdx
  LONG v105; // ecx
  int v106; // eax
  int v107; // r13d
  __int64 v108; // rdx
  int v109; // r10d
  __int64 v110; // r8
  unsigned int v111; // r9d
  __int64 v112; // rdx
  __int64 v113; // rcx
  struct DXGGLOBAL *v114; // rax
  __int64 v115; // r8
  struct DXGGLOBAL *v116; // rsi
  __int64 v117; // rdx
  unsigned __int16 v118; // bx
  unsigned __int16 v119; // ax
  int v120; // eax
  __int64 v121; // rdx
  __int64 v122; // r8
  __int64 CurrentProcessSessionId; // rdx
  __int64 v125; // rbx
  __int64 v126; // r11
  __int64 v127; // rbx
  __int64 v128; // rdx
  __int64 v129; // rcx
  int v130; // eax
  __int64 v131; // rdx
  unsigned __int16 i; // [rsp+30h] [rbp-D0h] BYREF
  struct _LUID Luid; // [rsp+38h] [rbp-C8h] BYREF
  struct tagRECT v134; // [rsp+40h] [rbp-C0h] BYREF
  struct DXGPROCESS *Current; // [rsp+50h] [rbp-B0h]
  CCD_TOPOLOGY *v136; // [rsp+58h] [rbp-A8h]
  __int64 v137; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v138; // [rsp+68h] [rbp-98h]
  __int64 v139; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v140; // [rsp+78h] [rbp-88h]
  __int64 v141; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v142; // [rsp+88h] [rbp-78h]
  __int64 v143; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v144; // [rsp+98h] [rbp-68h]
  _BYTE v145[64]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v146; // [rsp+E0h] [rbp-20h]
  int v147; // [rsp+F4h] [rbp-Ch]
  struct _KAPC_STATE ApcState; // [rsp+110h] [rbp+10h] BYREF
  char v149; // [rsp+140h] [rbp+40h]

  v3 = 0;
  *(_QWORD *)&v134.left = a3;
  LowPart = a2;
  Luid.LowPart = a2;
  v5 = this;
  v136 = this;
  v149 = 0;
  v6 = 8;
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v145, 8u, 0);
  v7 = -1073741811LL;
  v12 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( v12
    && (v13 = PsGetCurrentProcessSessionId(v9, v8, v10, v11),
        (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v12, v13)) != 0LL) )
  {
    CPROCESSATTACHHELPER::Attach(&ApcState, *((PRKPROCESS *)SessionDataForSpecifiedSession + 2331));
    Current = DXGPROCESS::GetCurrent(v15);
    v17 = Current;
    if ( Current )
    {
      if ( (unsigned int)DxgIsSessionUsingWddmMonitors(v16) )
      {
        for ( i = 8; ; v6 = i )
        {
          if ( CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v145, v6) < v6 )
          {
            WdLogSingleEntry2(6LL, *((_QWORD *)v5 + 8), v6);
            LODWORD(v7) = -1073741801;
            goto LABEL_118;
          }
          v147 |= 3u;
          v18 = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v145, 0, 1, 1, &i);
          v7 = v18;
          if ( v18 != -1073741789 )
            break;
        }
        if ( v18 < 0 )
        {
          CurrentProcessSessionId = *((_QWORD *)v5 + 8);
          goto LABEL_163;
        }
        v19 = *((_QWORD *)v5 + 8);
        v20 = v146;
        v21 = *(unsigned __int16 *)(v19 + 20);
        v143 = v19 + 56;
        v144 = v21;
        if ( v21 )
        {
          v22 = (_DWORD *)(v19 + 312);
          v23 = v21;
          do
          {
            *v22 |= 4u;
            v22[3] = 0;
            v22 += 74;
            --v23;
          }
          while ( v23 );
        }
        v24 = *(unsigned __int16 *)(v20 + 20);
        v141 = v20 + 56;
        v142 = v24;
        if ( v24 )
        {
          v25 = (_DWORD *)(v20 + 312);
          v26 = v24;
          do
          {
            *v25 |= 4u;
            v25[3] = 0;
            v25 += 74;
            --v26;
          }
          while ( v26 );
        }
        v27 = *((_QWORD *)v5 + 8);
        v28 = *(unsigned __int16 *)(v27 + 20);
        v139 = v27 + 56;
        v140 = v28;
        if ( v28 )
        {
          v29 = (_DWORD *)(v27 + 312);
          v30 = v28;
          do
          {
            *v29 |= 0x10u;
            v29[4] = 0;
            v29 += 74;
            --v30;
          }
          while ( v30 );
        }
        v31 = *(unsigned __int16 *)(v20 + 20);
        v137 = v20 + 56;
        v138 = v31;
        if ( v31 )
        {
          v32 = (_DWORD *)(v20 + 312);
          v33 = v31;
          do
          {
            *v32 |= 0x10u;
            v32[4] = 0;
            v32 += 74;
            --v33;
          }
          while ( v33 );
        }
        CCD_TOPOLOGY::BuildPrimaryPathIndexFromCloneGroupId(v5);
        CCD_TOPOLOGY::BuildPrimaryPathIndexFromCloneGroupId((CCD_TOPOLOGY *)v145);
        Global = DXGGLOBAL::GetGlobal();
        MaximumAdapterCountInSession = DXGGLOBAL::GetMaximumAdapterCountInSession(Global);
        v35 = 340 * MaximumAdapterCountInSession;
        if ( !is_mul_ok(MaximumAdapterCountInSession, 0x154uLL) )
          v35 = -1LL;
        *(_QWORD *)(*((_QWORD *)v5 + 8) + 48LL) = operator new[](v35, 0x63644356u, 256LL);
        v37 = *((_QWORD *)v5 + 8);
        if ( *(_QWORD *)(v37 + 48) )
        {
          *(_WORD *)(v37 + 28) = 0;
          for ( j = 0; ; ++j )
          {
            v39 = DXGGLOBAL::GetGlobal();
            if ( j >= DXGGLOBAL::GetMaximumAdapterCountInSession(v39) )
              break;
            v40 = 340LL * j;
            memset((void *)(v40 + *(_QWORD *)(*((_QWORD *)v5 + 8) + 48LL)), 0, 0x154uLL);
            memset((void *)(v40 + *(_QWORD *)(*((_QWORD *)v5 + 8) + 48LL) + 8LL), 255, 0x40uLL);
          }
          DxgkRemoveAllSessionViewForCurrentSession();
          v41 = *(_WORD *)(v20 + 20);
          v42 = 0;
          if ( v41 )
          {
            v43 = 0;
            do
            {
              v44 = 0;
              v45 = v20 + 296LL * v43;
              *(_DWORD *)(v45 + 328) = 0;
              v46 = *((_QWORD *)v5 + 8);
              if ( *(_WORD *)(v46 + 20) )
              {
                while ( !CCD_TOPOLOGY::IsMatchingSource(
                           (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v45 + 56),
                           (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(296LL * v44 + v46 + 56))
                     || *(_DWORD *)(v45 + 84) != *(_DWORD *)(v47 + 28) )
                {
                  v44 = v48 + 1;
                  if ( v44 >= v49 )
                    goto LABEL_34;
                }
                if ( !CCD_TOPOLOGY::IsMatchingSource(
                        (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(296LL * *(unsigned int *)(v45 + 324) + v20 + 56),
                        (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(296LL * *(unsigned int *)(v47 + 268) + v46 + 56)) )
                {
                  *(_DWORD *)(v50 + v20 + 328) = 1;
                  *(_QWORD *)(296LL * *(unsigned int *)(v45 + 324) + v20 + 252) = 0LL;
                }
              }
LABEL_34:
              if ( v44 >= *(_WORD *)(*((_QWORD *)v5 + 8) + 20LL) )
              {
                *(_DWORD *)(296LL * *(unsigned int *)(v45 + 324) + v20 + 328) = 1;
                *(_QWORD *)(296LL * *(unsigned int *)(v45 + 324) + v20 + 252) = 0LL;
              }
              v41 = *(_WORD *)(v20 + 20);
              v43 = ++v42;
            }
            while ( v42 < v41 );
          }
          v51 = *((_QWORD *)v5 + 8);
          v52 = 0;
          if ( *(_WORD *)(v51 + 20) )
          {
            v53 = 0;
            do
            {
              v54 = v51 + 296LL * v53;
              v55 = 0;
              *(_DWORD *)(v54 + 328) = 0;
              if ( *(_WORD *)(v20 + 20) )
              {
                while ( !CCD_TOPOLOGY::IsMatchingSource(
                           (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v54 + 56),
                           (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(296LL * v55 + v20 + 56))
                     || *(_DWORD *)(v56 + 28) != *(_DWORD *)(v54 + 84) )
                {
                  if ( ++v55 >= v57 )
                    goto LABEL_45;
                }
                v58 = *(unsigned int *)(v56 + 268);
                if ( (_DWORD)v58 == v55 && *(_DWORD *)(v54 + 324) == v52 )
                {
                  *(_QWORD *)(v54 + 252) = *(_QWORD *)(v56 + 196);
                }
                else
                {
                  v125 = *((_QWORD *)v5 + 8);
                  if ( !CCD_TOPOLOGY::IsMatchingSource(
                          (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(296LL * *(unsigned int *)(v54 + 324) + v125 + 56),
                          (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(296 * v58 + v20 + 56)) )
                  {
                    *(_DWORD *)(v126 + v125 + 328) = 1;
                    *(_QWORD *)(296LL * *(unsigned int *)(v54 + 324) + *((_QWORD *)v5 + 8) + 252) = 0LL;
                  }
                }
              }
LABEL_45:
              v41 = *(_WORD *)(v20 + 20);
              if ( v55 >= v41 )
              {
                *(_DWORD *)(296LL * *(unsigned int *)(v54 + 324) + *((_QWORD *)v5 + 8) + 328) = 1;
                *(_QWORD *)(296LL * *(unsigned int *)(v54 + 324) + *((_QWORD *)v5 + 8) + 252) = 0LL;
                v41 = *(_WORD *)(v20 + 20);
              }
              v51 = *((_QWORD *)v5 + 8);
              v53 = ++v52;
            }
            while ( v52 < *(_WORD *)(v51 + 20) );
          }
          v59 = 0;
          if ( v41 )
          {
            v60 = 0;
            v61 = 0;
            do
            {
              v62 = *(_DWORD *)(v51 + 40);
              v63 = 0;
              if ( v62 )
              {
                v127 = *(_QWORD *)(v51 + 48);
                v128 = 296LL * v61;
                do
                {
                  v129 = 340LL * v63;
                  if ( *(_DWORD *)(296LL * v60 + v20 + 72) == *(_DWORD *)(v129 + v127)
                    && *(_DWORD *)(v128 + v20 + 76) == *(_DWORD *)(v129 + v127 + 4) )
                  {
                    break;
                  }
                  ++v63;
                }
                while ( v63 < v62 );
              }
              v64 = 340LL * v63;
              v65 = 296LL * v59;
              *(_DWORD *)(*(_QWORD *)(v51 + 48) + v64 + 80) |= 1 << *(_DWORD *)(v65 + v20 + 80);
              if ( _bittest64((const signed __int64 *)(v65 + v20 + 56), 0x24u) )
                v66 = 1 << *(_DWORD *)(v65 + v20 + 80);
              else
                v66 = 0;
              *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v5 + 8) + 48LL) + v64 + 232) |= v66;
              if ( *(_DWORD *)(v65 + v20 + 328) == 1 )
                *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v5 + 8) + 48LL) + v64 + 140) |= 1 << *(_DWORD *)(v65 + v20 + 80);
              v51 = *((_QWORD *)v5 + 8);
              v67 = *(unsigned int *)(v51 + 40);
              if ( v63 >= (unsigned int)v67 )
              {
                *(_QWORD *)(340 * v67 + *(_QWORD *)(v51 + 48)) = *(_QWORD *)(v65 + v20 + 72);
                ++*(_DWORD *)(*((_QWORD *)v5 + 8) + 40LL);
                v51 = *((_QWORD *)v5 + 8);
              }
              v61 = ++v59;
              v60 = v59;
            }
            while ( v59 < *(_WORD *)(v20 + 20) );
            LowPart = Luid.LowPart;
          }
          if ( *(_WORD *)(v51 + 20) )
          {
            v68 = 0;
            v69 = 0;
            while ( 1 )
            {
              v70 = 296LL * v69;
              v71 = *(_QWORD *)(296LL * v68 + v51 + 56);
              if ( (v71 & 0x187) != 0 )
              {
                *(_QWORD *)(v70 + v51 + 56) = v71 | 0x40000000000000LL;
                *(_QWORD *)(v70 + *((_QWORD *)v5 + 8) + 64) |= *(_DWORD *)(v70 + *((_QWORD *)v5 + 8) + 56) & 0x187;
              }
              v72 = 0;
              *(_DWORD *)(v70 + *((_QWORD *)v5 + 8) + 248) = 0;
              v73 = *((_QWORD *)v5 + 8);
              v74 = *(_DWORD *)(v73 + 40);
              if ( v74 )
              {
                v75 = *(_QWORD *)(v73 + 48);
                do
                {
                  v76 = 340LL * v72;
                  if ( *(_DWORD *)(v70 + v73 + 72) == *(_DWORD *)(v76 + v75)
                    && *(_DWORD *)(v70 + v73 + 76) == *(_DWORD *)(v76 + v75 + 4) )
                  {
                    break;
                  }
                  ++v72;
                }
                while ( v72 < v74 );
                v5 = v136;
              }
              v77 = 340LL * v72;
              *(_DWORD *)(*(_QWORD *)(v73 + 48) + v77 + 84) |= 1 << *(_DWORD *)(v70 + v73 + 80);
              v78 = *((_QWORD *)v5 + 8);
              if ( _bittest64((const signed __int64 *)(v70 + v78 + 56), 0x24u) )
                v79 = 1 << *(_DWORD *)(v70 + v78 + 80);
              else
                v79 = 0;
              *(_DWORD *)(*(_QWORD *)(v78 + 48) + v77 + 232) |= v79;
              v80 = *((_QWORD *)v5 + 8);
              v81 = *(_DWORD *)(v70 + v80 + 324);
              if ( v81 == v3 )
              {
                *(_DWORD *)(*(_QWORD *)(v80 + 48) + v77 + 72) |= 1 << *(_DWORD *)(v70 + v80 + 80);
              }
              else if ( CCD_TOPOLOGY::IsSameCloneGroup(v5, v81, v3, 1) )
              {
                goto LABEL_73;
              }
              *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v5 + 8) + 48LL)
                        + 4 * (85LL * v72 + *(unsigned int *)(v70 + *((_QWORD *)v5 + 8) + 80))
                        + 8) = v3;
LABEL_73:
              v82 = *((_QWORD *)v5 + 8);
              if ( *(_DWORD *)(v70 + v82 + 328) == 1 )
                *(_DWORD *)(*(_QWORD *)(v82 + 48) + v77 + 140) |= 1 << *(_DWORD *)(v70 + v82 + 80);
              v83 = *((_QWORD *)v5 + 8);
              v84 = *(unsigned int *)(v83 + 40);
              if ( v72 >= (unsigned int)v84 )
              {
                *(_QWORD *)(340 * v84 + *(_QWORD *)(v83 + 48)) = *(_QWORD *)(v70 + v83 + 72);
                ++*(_DWORD *)(*((_QWORD *)v5 + 8) + 40LL);
              }
              v51 = *((_QWORD *)v5 + 8);
              v69 = ++v3;
              v68 = v3;
              if ( v3 >= *(_WORD *)(v51 + 20) )
              {
                v17 = Current;
                LowPart = Luid.LowPart;
                break;
              }
            }
          }
          v85 = *(_DWORD *)(v51 + 40);
          v86 = 0;
          v87 = v85 != 0;
          LOBYTE(i) = v85 != 0;
          if ( v85 )
          {
            do
            {
              v88 = CCD_TOPOLOGY::CheckAdapterViewSessionOwnership(v5, v86);
              v89 = 340LL * v86;
              v90 = v88;
              if ( v88 < 0 )
              {
                WdLogSingleEntry4(
                  2LL,
                  *(int *)(*(_QWORD *)(*((_QWORD *)v5 + 8) + 48LL) + 340LL * v86 + 4),
                  *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v5 + 8) + 48LL) + 340LL * v86),
                  *((_QWORD *)v5 + 8),
                  v88);
                CCD_TOPOLOGY::MarkPathsApplyFailure(
                  v5,
                  (const struct _LUID *)(v89 + *(_QWORD *)(*((_QWORD *)v5 + 8) + 48LL)),
                  0xFFFFFFFF,
                  v90);
              }
              else if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v5 + 8) + 48LL) + v89 + 80) )
              {
                v91 = CCD_TOPOLOGY::ApplyTopologyOnAdapter(
                        v5,
                        v17,
                        LowPart,
                        v86,
                        *(struct _DXGK_DISPLAY_SCENARIO_CONTEXT **)&v134.left);
                if ( v91 < 0 )
                  WdLogSingleEntry4(
                    2LL,
                    *(int *)(*(_QWORD *)(*((_QWORD *)v5 + 8) + 48LL) + 340LL * v86 + 4),
                    *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v5 + 8) + 48LL) + 340LL * v86),
                    *((_QWORD *)v5 + 8),
                    v91);
                else
                  v87 = 0;
              }
              ++v86;
            }
            while ( v86 < *(_DWORD *)(*((_QWORD *)v5 + 8) + 40LL) );
            LOBYTE(i) = v87;
          }
          v92 = DXGGLOBAL::GetGlobal();
          QDC_CACHE::InvalidateCache(*((QDC_CACHE **)v92 + 187), 0LL, v93, v94);
          v95 = *((_QWORD *)v5 + 8);
          v96 = 0;
          if ( *(_WORD *)(v95 + 20) )
          {
            v97 = 0;
            v98 = 0;
            v99 = 0;
            v100 = 0;
            do
            {
              v101 = 296LL * v99;
              v102 = *(_DWORD *)(296LL * v97 + v95 + 324);
              if ( *(int *)(v101 + v95 + 248) >= 0 )
              {
                v103 = v100;
                if ( v102 == v98 || !CCD_TOPOLOGY::IsSameCloneGroup(v5, v102, v100, 1) )
                {
                  if ( (*(_DWORD *)(v101 + *((_QWORD *)v5 + 8) + 56) & 0x20800) != 0x20800LL )
                    WdLogSingleEntry0(1LL);
                  v104 = *((_QWORD *)v5 + 8);
                  v134.left = *(_DWORD *)(v104 + v101 + 200);
                  v134.right = *(_DWORD *)(v104 + v101 + 208) + v134.left;
                  v134.top = *(_DWORD *)(v104 + v101 + 204);
                  v105 = *(_DWORD *)(v104 + v101 + 212) + v134.top;
                  Luid = 0LL;
                  v134.bottom = v105;
                  if ( *(_DWORD *)(v104 + v101 + 252) || *(_DWORD *)(v104 + v101 + 256) )
                  {
                    Luid = *(struct _LUID *)(v104 + v101 + 252);
                  }
                  else
                  {
                    if ( ZwAllocateLocallyUniqueId(&Luid) < 0 )
                      WdLogSingleEntry0(1LL);
                    v104 = *((_QWORD *)v5 + 8);
                  }
                  v106 = DxgkCreateSessionViewForCurrentSession(
                           (struct _LUID *)(v101 + v104 + 72),
                           *(_DWORD *)(v101 + v104 + 80),
                           &v134,
                           v102 == v103,
                           &Luid);
                  v107 = v106;
                  if ( v106 < 0 )
                  {
                    WdLogSingleEntry4(
                      2LL,
                      *(int *)(v101 + *((_QWORD *)v5 + 8) + 76),
                      *(unsigned int *)(v101 + *((_QWORD *)v5 + 8) + 72),
                      *(unsigned int *)(v101 + *((_QWORD *)v5 + 8) + 80),
                      v106);
                    *(_DWORD *)(v101 + *((_QWORD *)v5 + 8) + 248) = v107;
                  }
                  else if ( v102 == v103 )
                  {
                    ++*(_WORD *)(*((_QWORD *)v5 + 8) + 28LL);
                  }
                }
              }
              v95 = *((_QWORD *)v5 + 8);
              v99 = ++v96;
              v97 = v96;
              v98 = v96;
              v100 = v96;
            }
            while ( v96 < *(_WORD *)(v95 + 20) );
            v87 = i;
          }
          CCD_TOPOLOGY::CleanupPrimaryPathIndex(v5);
          CCD_TOPOLOGY::CleanupPrimaryPathIndex((CCD_TOPOLOGY *)v145);
          v108 = *((_QWORD *)v5 + 8);
          v109 = 0;
          LODWORD(v110) = 0;
          v111 = *(_DWORD *)(v108 + 40);
          if ( v111 )
          {
            v112 = *(_QWORD *)(v108 + 48);
            while ( 1 )
            {
              v113 = 340LL * (unsigned int)v110;
              if ( *(_DWORD *)(v113 + v112 + 96) || *(_DWORD *)(v113 + v112 + 88) )
                break;
              if ( *(_DWORD *)(v113 + v112 + 92)
                || *(_DWORD *)(v113 + v112 + 124)
                || *(_DWORD *)(v113 + v112 + 120)
                || *(_DWORD *)(v113 + v112 + 132) )
              {
                v109 = 1;
              }
              v110 = (unsigned int)(v110 + 1);
              if ( (unsigned int)v110 >= v111 )
              {
                if ( v109 )
                {
                  v134 = 0LL;
                  v134.left = 11;
                  v130 = DxgkStatusChangeNotify(&v134.left, v112, v110);
                  if ( v130 < 0 )
                    WdLogSingleEntry1(2LL, v130);
                }
                break;
              }
            }
          }
          v114 = DXGGLOBAL::GetGlobal();
          v116 = v114;
          if ( *(_WORD *)(*((_QWORD *)v5 + 8) + 20LL) > 1u )
            DXGGLOBAL::RecordFeatureUsage(v114, 0LL, 1LL);
          v117 = *((_QWORD *)v5 + 8);
          v118 = 0;
          if ( *(_WORD *)(v117 + 20) )
          {
            v119 = 0;
            LOWORD(v115) = 0;
            do
            {
              if ( *(int *)(296LL * v119 + v117 + 248) >= 0 )
              {
                v120 = *(_DWORD *)(296LL * (unsigned __int16)v115 + v117 + 264);
                if ( v120 == 12 )
                {
                  v131 = 4LL;
LABEL_160:
                  DXGGLOBAL::RecordFeatureUsage(v116, v131, 1LL);
                  goto LABEL_115;
                }
                if ( v120 == 30 )
                {
                  v131 = 5LL;
                  goto LABEL_160;
                }
              }
LABEL_115:
              v117 = *((_QWORD *)v5 + 8);
              v115 = ++v118;
              v119 = v118;
            }
            while ( v118 < *(_WORD *)(v117 + 20) );
          }
          LODWORD(v7) = v87 != 0 ? 0xC0000001 : 0;
        }
        else
        {
          WdLogSingleEntry2(6LL, v5, *((_QWORD *)v5 + 8));
          LODWORD(v7) = -1073741801;
        }
        CCD_TOPOLOGY::ApplyTopologyWorker_::_2_::_AUTO_USING_PM_PathChanged3018::__AUTO_USING_PM_PathChanged3018(
          &v137,
          v117,
          v115);
        CCD_TOPOLOGY::ApplyTopologyWorker_::_2_::_AUTO_USING_PM_PathChanged3018::__AUTO_USING_PM_PathChanged3018(
          &v139,
          v121,
          v122);
        CCD_TOPOLOGY::ApplyTopologyWorker_::_2_::_AUTO_USING_PM_PrimaryClonePathIndex3016::__AUTO_USING_PM_PrimaryClonePathIndex3016(&v141);
        CCD_TOPOLOGY::ApplyTopologyWorker_::_2_::_AUTO_USING_PM_PrimaryClonePathIndex3016::__AUTO_USING_PM_PrimaryClonePathIndex3016(&v143);
      }
      else
      {
        WdLogSingleEntry1(2LL, Current);
        LODWORD(v7) = -1073741790;
      }
    }
    else
    {
      WdLogSingleEntry0(2LL);
    }
  }
  else
  {
    CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId(v9, v8, v10, v11);
LABEL_163:
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, v7);
  }
LABEL_118:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v145);
  if ( v149 )
    KeUnstackDetachProcess(&ApcState);
  return (unsigned int)v7;
}
