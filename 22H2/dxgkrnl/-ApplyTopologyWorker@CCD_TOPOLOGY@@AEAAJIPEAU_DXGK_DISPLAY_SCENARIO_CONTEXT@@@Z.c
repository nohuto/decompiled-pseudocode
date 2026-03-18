/*
 * XREFs of ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C017DC5C
 * Callers:
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01E8D34 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000A400 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00151DC (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@0@Z @ 0x1C0016E3C (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@0@Z.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     memset @ 0x1C0028640 (memset.c)
 *     DxgkStatusChangeNotify @ 0x1C01716F0 (DxgkStatusChangeNotify.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1C0173DFC (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C017D4B8 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?GetMaximumAdapterCountInSession@DXGGLOBAL@@QEAAKXZ @ 0x1C017EA8C (-GetMaximumAdapterCountInSession@DXGGLOBAL@@QEAAKXZ.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C0180B78 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C0180C44 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C0180EE4 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0193D3C (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 *     ?DxgIsSessionUsingWddmMonitors@@YAHXZ @ 0x1C019D04C (-DxgIsSessionUsingWddmMonitors@@YAHXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A8230 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkCreateSessionViewForCurrentSession @ 0x1C01E56D0 (DxgkCreateSessionViewForCurrentSession.c)
 *     DxgkRemoveAllSessionViewForCurrentSession @ 0x1C01E590C (DxgkRemoveAllSessionViewForCurrentSession.c)
 *     ?BuildPrimaryPathIndexFromCloneGroupId@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C01E8394 (-BuildPrimaryPathIndexFromCloneGroupId@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z @ 0x1C01E9FA4 (-CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z.c)
 *     ?CleanupPrimaryPathIndex@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C01EA48C (-CleanupPrimaryPathIndex@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     _CCD_TOPOLOGY::ApplyTopologyWorker_::_2_::_AUTO_USING_PM_PrimaryClonePathIndex3016::__AUTO_USING_PM_PrimaryClonePathIndex3016 @ 0x1C01EA8FC (_CCD_TOPOLOGY--ApplyTopologyWorker_--_2_--_AUTO_USING_PM_PrimaryClonePathIndex3016--__AUTO_USING.c)
 *     _CCD_TOPOLOGY::ApplyTopologyWorker_::_2_::_AUTO_USING_PM_PathChanged3018::__AUTO_USING_PM_PathChanged3018 @ 0x1C01EA938 (_CCD_TOPOLOGY--ApplyTopologyWorker_--_2_--_AUTO_USING_PM_PathChanged3018--__AUTO_USING_PM_PathCh.c)
 *     ?RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z @ 0x1C021AE14 (-RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z.c)
 *     ?IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z @ 0x1C03BB644 (-IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z.c)
 *     ?MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z @ 0x1C03BB77C (-MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z.c)
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
  __int64 v8; // rcx
  DXGSESSIONMGR *v9; // r14
  unsigned int v10; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  struct DXGPROCESS *v12; // r12
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rsi
  unsigned int v16; // edx
  _DWORD *v17; // rax
  __int64 v18; // rcx
  unsigned int v19; // ecx
  _DWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned int v23; // edx
  _DWORD *v24; // rax
  __int64 v25; // rcx
  unsigned int v26; // ecx
  _DWORD *v27; // rax
  __int64 v28; // rdx
  DXGGLOBAL *Global; // rax
  unsigned __int64 v30; // rax
  unsigned __int64 MaximumAdapterCountInSession; // kr00_8
  __int64 v32; // rax
  unsigned int j; // r14d
  DXGGLOBAL *v34; // rax
  __int64 v35; // rbx
  unsigned __int16 v36; // ax
  unsigned __int16 v37; // r10
  unsigned __int16 v38; // cx
  unsigned __int16 v39; // r9
  __int64 v40; // r8
  __int64 v41; // rbx
  __int64 v42; // rdx
  __int16 v43; // r9
  unsigned __int16 v44; // r11
  __int64 v45; // r11
  __int64 v46; // r8
  unsigned __int16 v47; // r10
  unsigned __int16 v48; // cx
  __int64 v49; // r9
  unsigned __int16 v50; // r8
  __int64 v51; // rdx
  unsigned __int16 v52; // r11
  __int64 v53; // rcx
  unsigned __int16 v54; // r10
  unsigned __int16 v55; // ax
  unsigned __int16 v56; // dx
  unsigned int v57; // r11d
  unsigned int v58; // r9d
  __int64 v59; // rbx
  __int64 v60; // r11
  int v61; // edx
  __int64 v62; // rax
  unsigned __int16 v63; // ax
  unsigned __int16 v64; // r9
  __int64 v65; // rbx
  __int64 v66; // rdx
  unsigned int v67; // r14d
  __int64 v68; // rcx
  unsigned int v69; // edx
  __int64 v70; // r9
  __int64 v71; // r8
  __int64 v72; // rsi
  __int64 v73; // r8
  int v74; // edx
  __int64 v75; // rax
  unsigned int v76; // edx
  __int64 v77; // rax
  __int64 v78; // r8
  __int64 v79; // rax
  int v80; // eax
  unsigned int v81; // ebx
  char v82; // r15
  int v83; // eax
  __int64 v84; // rsi
  int v85; // r14d
  int v86; // eax
  struct DXGGLOBAL *v87; // rax
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // rdx
  unsigned __int16 v91; // r14
  unsigned __int16 v92; // ax
  unsigned __int16 v93; // r9
  unsigned __int16 v94; // r8
  unsigned __int16 v95; // r10
  __int64 v96; // rbx
  unsigned int v97; // esi
  int v98; // r12d
  __int64 v99; // rdx
  LONG v100; // ecx
  int v101; // eax
  int v102; // r13d
  __int64 v103; // rdx
  int v104; // r10d
  __int64 v105; // r8
  unsigned int v106; // r9d
  __int64 v107; // rdx
  __int64 v108; // rcx
  struct DXGGLOBAL *v109; // rax
  __int64 v110; // r8
  struct DXGGLOBAL *v111; // rsi
  __int64 v112; // rdx
  unsigned __int16 v113; // bx
  unsigned __int16 v114; // ax
  int v115; // eax
  __int64 v116; // rdx
  __int64 v117; // r8
  __int64 CurrentProcessSessionId; // rdx
  __int64 v120; // rbx
  __int64 v121; // r11
  __int64 v122; // rbx
  __int64 v123; // rdx
  __int64 v124; // rcx
  int v125; // eax
  __int64 v126; // rdx
  unsigned __int16 i; // [rsp+30h] [rbp-D0h] BYREF
  _LUID Luid; // [rsp+38h] [rbp-C8h] BYREF
  struct tagRECT v129; // [rsp+40h] [rbp-C0h] BYREF
  struct DXGPROCESS *Current; // [rsp+50h] [rbp-B0h]
  CCD_TOPOLOGY *v131; // [rsp+58h] [rbp-A8h]
  __int64 v132; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v133; // [rsp+68h] [rbp-98h]
  __int64 v134; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v135; // [rsp+78h] [rbp-88h]
  __int64 v136; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v137; // [rsp+88h] [rbp-78h]
  __int64 v138; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v139; // [rsp+98h] [rbp-68h]
  _BYTE v140[64]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v141; // [rsp+E0h] [rbp-20h]
  int v142; // [rsp+F4h] [rbp-Ch]
  struct _KAPC_STATE ApcState; // [rsp+110h] [rbp+10h] BYREF
  char v144; // [rsp+140h] [rbp+40h]

  v3 = 0;
  *(_QWORD *)&v129.left = a3;
  LowPart = a2;
  Luid.LowPart = a2;
  v5 = this;
  v131 = this;
  v144 = 0;
  v6 = 8;
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v140, 8u, 0);
  v7 = -1073741811LL;
  v9 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( v9
    && (v10 = PsGetCurrentProcessSessionId(v8),
        (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v9, v10)) != 0LL) )
  {
    CPROCESSATTACHHELPER::Attach(&ApcState, *((PRKPROCESS *)SessionDataForSpecifiedSession + 2331));
    Current = DXGPROCESS::GetCurrent();
    v12 = Current;
    if ( Current )
    {
      if ( (unsigned int)DxgIsSessionUsingWddmMonitors() )
      {
        for ( i = 8; ; v6 = i )
        {
          if ( CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v140, v6) < v6 )
          {
            WdLogSingleEntry2(6LL, *((_QWORD *)v5 + 8), v6);
            LODWORD(v7) = -1073741801;
            goto LABEL_118;
          }
          v142 |= 3u;
          v13 = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v140, 0, 1, 1, &i);
          v7 = v13;
          if ( v13 != -1073741789 )
            break;
        }
        if ( v13 < 0 )
        {
          CurrentProcessSessionId = *((_QWORD *)v5 + 8);
          goto LABEL_163;
        }
        v14 = *((_QWORD *)v5 + 8);
        v15 = v141;
        v16 = *(unsigned __int16 *)(v14 + 20);
        v138 = v14 + 56;
        v139 = v16;
        if ( v16 )
        {
          v17 = (_DWORD *)(v14 + 312);
          v18 = v16;
          do
          {
            *v17 |= 4u;
            v17[3] = 0;
            v17 += 74;
            --v18;
          }
          while ( v18 );
        }
        v19 = *(unsigned __int16 *)(v15 + 20);
        v136 = v15 + 56;
        v137 = v19;
        if ( v19 )
        {
          v20 = (_DWORD *)(v15 + 312);
          v21 = v19;
          do
          {
            *v20 |= 4u;
            v20[3] = 0;
            v20 += 74;
            --v21;
          }
          while ( v21 );
        }
        v22 = *((_QWORD *)v5 + 8);
        v23 = *(unsigned __int16 *)(v22 + 20);
        v134 = v22 + 56;
        v135 = v23;
        if ( v23 )
        {
          v24 = (_DWORD *)(v22 + 312);
          v25 = v23;
          do
          {
            *v24 |= 0x10u;
            v24[4] = 0;
            v24 += 74;
            --v25;
          }
          while ( v25 );
        }
        v26 = *(unsigned __int16 *)(v15 + 20);
        v132 = v15 + 56;
        v133 = v26;
        if ( v26 )
        {
          v27 = (_DWORD *)(v15 + 312);
          v28 = v26;
          do
          {
            *v27 |= 0x10u;
            v27[4] = 0;
            v27 += 74;
            --v28;
          }
          while ( v28 );
        }
        CCD_TOPOLOGY::BuildPrimaryPathIndexFromCloneGroupId(v5);
        CCD_TOPOLOGY::BuildPrimaryPathIndexFromCloneGroupId((CCD_TOPOLOGY *)v140);
        Global = DXGGLOBAL::GetGlobal();
        MaximumAdapterCountInSession = DXGGLOBAL::GetMaximumAdapterCountInSession(Global);
        v30 = 340 * MaximumAdapterCountInSession;
        if ( !is_mul_ok(MaximumAdapterCountInSession, 0x154uLL) )
          v30 = -1LL;
        *(_QWORD *)(*((_QWORD *)v5 + 8) + 48LL) = operator new[](v30, 0x63644356u, 256LL);
        v32 = *((_QWORD *)v5 + 8);
        if ( *(_QWORD *)(v32 + 48) )
        {
          *(_WORD *)(v32 + 28) = 0;
          for ( j = 0; ; ++j )
          {
            v34 = DXGGLOBAL::GetGlobal();
            if ( j >= DXGGLOBAL::GetMaximumAdapterCountInSession(v34) )
              break;
            v35 = 340LL * j;
            memset((void *)(v35 + *(_QWORD *)(*((_QWORD *)v5 + 8) + 48LL)), 0, 0x154uLL);
            memset((void *)(v35 + *(_QWORD *)(*((_QWORD *)v5 + 8) + 48LL) + 8LL), 255, 0x40uLL);
          }
          DxgkRemoveAllSessionViewForCurrentSession();
          v36 = *(_WORD *)(v15 + 20);
          v37 = 0;
          if ( v36 )
          {
            v38 = 0;
            do
            {
              v39 = 0;
              v40 = v15 + 296LL * v38;
              *(_DWORD *)(v40 + 328) = 0;
              v41 = *((_QWORD *)v5 + 8);
              if ( *(_WORD *)(v41 + 20) )
              {
                while ( !CCD_TOPOLOGY::IsMatchingSource(
                           (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v40 + 56),
                           (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(296LL * v39 + v41 + 56))
                     || *(_DWORD *)(v40 + 84) != *(_DWORD *)(v42 + 28) )
                {
                  v39 = v43 + 1;
                  if ( v39 >= v44 )
                    goto LABEL_34;
                }
                if ( !CCD_TOPOLOGY::IsMatchingSource(
                        (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(296LL * *(unsigned int *)(v40 + 324) + v15 + 56),
                        (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(296LL * *(unsigned int *)(v42 + 268) + v41 + 56)) )
                {
                  *(_DWORD *)(v45 + v15 + 328) = 1;
                  *(_QWORD *)(296LL * *(unsigned int *)(v40 + 324) + v15 + 252) = 0LL;
                }
              }
LABEL_34:
              if ( v39 >= *(_WORD *)(*((_QWORD *)v5 + 8) + 20LL) )
              {
                *(_DWORD *)(296LL * *(unsigned int *)(v40 + 324) + v15 + 328) = 1;
                *(_QWORD *)(296LL * *(unsigned int *)(v40 + 324) + v15 + 252) = 0LL;
              }
              v36 = *(_WORD *)(v15 + 20);
              v38 = ++v37;
            }
            while ( v37 < v36 );
          }
          v46 = *((_QWORD *)v5 + 8);
          v47 = 0;
          if ( *(_WORD *)(v46 + 20) )
          {
            v48 = 0;
            do
            {
              v49 = v46 + 296LL * v48;
              v50 = 0;
              *(_DWORD *)(v49 + 328) = 0;
              if ( *(_WORD *)(v15 + 20) )
              {
                while ( !CCD_TOPOLOGY::IsMatchingSource(
                           (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v49 + 56),
                           (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(296LL * v50 + v15 + 56))
                     || *(_DWORD *)(v51 + 28) != *(_DWORD *)(v49 + 84) )
                {
                  if ( ++v50 >= v52 )
                    goto LABEL_45;
                }
                v53 = *(unsigned int *)(v51 + 268);
                if ( (_DWORD)v53 == v50 && *(_DWORD *)(v49 + 324) == v47 )
                {
                  *(_QWORD *)(v49 + 252) = *(_QWORD *)(v51 + 196);
                }
                else
                {
                  v120 = *((_QWORD *)v5 + 8);
                  if ( !CCD_TOPOLOGY::IsMatchingSource(
                          (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(296LL * *(unsigned int *)(v49 + 324) + v120 + 56),
                          (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(296 * v53 + v15 + 56)) )
                  {
                    *(_DWORD *)(v121 + v120 + 328) = 1;
                    *(_QWORD *)(296LL * *(unsigned int *)(v49 + 324) + *((_QWORD *)v5 + 8) + 252) = 0LL;
                  }
                }
              }
LABEL_45:
              v36 = *(_WORD *)(v15 + 20);
              if ( v50 >= v36 )
              {
                *(_DWORD *)(296LL * *(unsigned int *)(v49 + 324) + *((_QWORD *)v5 + 8) + 328) = 1;
                *(_QWORD *)(296LL * *(unsigned int *)(v49 + 324) + *((_QWORD *)v5 + 8) + 252) = 0LL;
                v36 = *(_WORD *)(v15 + 20);
              }
              v46 = *((_QWORD *)v5 + 8);
              v48 = ++v47;
            }
            while ( v47 < *(_WORD *)(v46 + 20) );
          }
          v54 = 0;
          if ( v36 )
          {
            v55 = 0;
            v56 = 0;
            do
            {
              v57 = *(_DWORD *)(v46 + 40);
              v58 = 0;
              if ( v57 )
              {
                v122 = *(_QWORD *)(v46 + 48);
                v123 = 296LL * v56;
                do
                {
                  v124 = 340LL * v58;
                  if ( *(_DWORD *)(296LL * v55 + v15 + 72) == *(_DWORD *)(v124 + v122)
                    && *(_DWORD *)(v123 + v15 + 76) == *(_DWORD *)(v124 + v122 + 4) )
                  {
                    break;
                  }
                  ++v58;
                }
                while ( v58 < v57 );
              }
              v59 = 340LL * v58;
              v60 = 296LL * v54;
              *(_DWORD *)(*(_QWORD *)(v46 + 48) + v59 + 80) |= 1 << *(_DWORD *)(v60 + v15 + 80);
              if ( _bittest64((const signed __int64 *)(v60 + v15 + 56), 0x24u) )
                v61 = 1 << *(_DWORD *)(v60 + v15 + 80);
              else
                v61 = 0;
              *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v5 + 8) + 48LL) + v59 + 232) |= v61;
              if ( *(_DWORD *)(v60 + v15 + 328) == 1 )
                *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v5 + 8) + 48LL) + v59 + 140) |= 1 << *(_DWORD *)(v60 + v15 + 80);
              v46 = *((_QWORD *)v5 + 8);
              v62 = *(unsigned int *)(v46 + 40);
              if ( v58 >= (unsigned int)v62 )
              {
                *(_QWORD *)(340 * v62 + *(_QWORD *)(v46 + 48)) = *(_QWORD *)(v60 + v15 + 72);
                ++*(_DWORD *)(*((_QWORD *)v5 + 8) + 40LL);
                v46 = *((_QWORD *)v5 + 8);
              }
              v56 = ++v54;
              v55 = v54;
            }
            while ( v54 < *(_WORD *)(v15 + 20) );
            LowPart = Luid.LowPart;
          }
          if ( *(_WORD *)(v46 + 20) )
          {
            v63 = 0;
            v64 = 0;
            while ( 1 )
            {
              v65 = 296LL * v64;
              v66 = *(_QWORD *)(296LL * v63 + v46 + 56);
              if ( (v66 & 0x187) != 0 )
              {
                *(_QWORD *)(v65 + v46 + 56) = v66 | 0x40000000000000LL;
                *(_QWORD *)(v65 + *((_QWORD *)v5 + 8) + 64) |= *(_DWORD *)(v65 + *((_QWORD *)v5 + 8) + 56) & 0x187;
              }
              v67 = 0;
              *(_DWORD *)(v65 + *((_QWORD *)v5 + 8) + 248) = 0;
              v68 = *((_QWORD *)v5 + 8);
              v69 = *(_DWORD *)(v68 + 40);
              if ( v69 )
              {
                v70 = *(_QWORD *)(v68 + 48);
                do
                {
                  v71 = 340LL * v67;
                  if ( *(_DWORD *)(v65 + v68 + 72) == *(_DWORD *)(v71 + v70)
                    && *(_DWORD *)(v65 + v68 + 76) == *(_DWORD *)(v71 + v70 + 4) )
                  {
                    break;
                  }
                  ++v67;
                }
                while ( v67 < v69 );
                v5 = v131;
              }
              v72 = 340LL * v67;
              *(_DWORD *)(*(_QWORD *)(v68 + 48) + v72 + 84) |= 1 << *(_DWORD *)(v65 + v68 + 80);
              v73 = *((_QWORD *)v5 + 8);
              if ( _bittest64((const signed __int64 *)(v65 + v73 + 56), 0x24u) )
                v74 = 1 << *(_DWORD *)(v65 + v73 + 80);
              else
                v74 = 0;
              *(_DWORD *)(*(_QWORD *)(v73 + 48) + v72 + 232) |= v74;
              v75 = *((_QWORD *)v5 + 8);
              v76 = *(_DWORD *)(v65 + v75 + 324);
              if ( v76 == v3 )
              {
                *(_DWORD *)(*(_QWORD *)(v75 + 48) + v72 + 72) |= 1 << *(_DWORD *)(v65 + v75 + 80);
              }
              else if ( CCD_TOPOLOGY::IsSameCloneGroup(v5, v76, v3, 1) )
              {
                goto LABEL_73;
              }
              *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v5 + 8) + 48LL)
                        + 4 * (85LL * v67 + *(unsigned int *)(v65 + *((_QWORD *)v5 + 8) + 80))
                        + 8) = v3;
LABEL_73:
              v77 = *((_QWORD *)v5 + 8);
              if ( *(_DWORD *)(v65 + v77 + 328) == 1 )
                *(_DWORD *)(*(_QWORD *)(v77 + 48) + v72 + 140) |= 1 << *(_DWORD *)(v65 + v77 + 80);
              v78 = *((_QWORD *)v5 + 8);
              v79 = *(unsigned int *)(v78 + 40);
              if ( v67 >= (unsigned int)v79 )
              {
                *(_QWORD *)(340 * v79 + *(_QWORD *)(v78 + 48)) = *(_QWORD *)(v65 + v78 + 72);
                ++*(_DWORD *)(*((_QWORD *)v5 + 8) + 40LL);
              }
              v46 = *((_QWORD *)v5 + 8);
              v64 = ++v3;
              v63 = v3;
              if ( v3 >= *(_WORD *)(v46 + 20) )
              {
                v12 = Current;
                LowPart = Luid.LowPart;
                break;
              }
            }
          }
          v80 = *(_DWORD *)(v46 + 40);
          v81 = 0;
          v82 = v80 != 0;
          LOBYTE(i) = v80 != 0;
          if ( v80 )
          {
            do
            {
              v83 = CCD_TOPOLOGY::CheckAdapterViewSessionOwnership(v5, v81);
              v84 = 340LL * v81;
              v85 = v83;
              if ( v83 < 0 )
              {
                WdLogSingleEntry4(
                  2LL,
                  *(int *)(*(_QWORD *)(*((_QWORD *)v5 + 8) + 48LL) + 340LL * v81 + 4),
                  *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v5 + 8) + 48LL) + 340LL * v81),
                  *((_QWORD *)v5 + 8),
                  v83);
                CCD_TOPOLOGY::MarkPathsApplyFailure(
                  v5,
                  (const struct _LUID *)(v84 + *(_QWORD *)(*((_QWORD *)v5 + 8) + 48LL)),
                  0xFFFFFFFF,
                  v85);
              }
              else if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v5 + 8) + 48LL) + v84 + 80) )
              {
                v86 = CCD_TOPOLOGY::ApplyTopologyOnAdapter(
                        v5,
                        v12,
                        LowPart,
                        v81,
                        *(struct _DXGK_DISPLAY_SCENARIO_CONTEXT **)&v129.left);
                if ( v86 < 0 )
                  WdLogSingleEntry4(
                    2LL,
                    *(int *)(*(_QWORD *)(*((_QWORD *)v5 + 8) + 48LL) + 340LL * v81 + 4),
                    *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v5 + 8) + 48LL) + 340LL * v81),
                    *((_QWORD *)v5 + 8),
                    v86);
                else
                  v82 = 0;
              }
              ++v81;
            }
            while ( v81 < *(_DWORD *)(*((_QWORD *)v5 + 8) + 40LL) );
            LOBYTE(i) = v82;
          }
          v87 = DXGGLOBAL::GetGlobal();
          QDC_CACHE::InvalidateCache(*((QDC_CACHE **)v87 + 187), 0LL, v88, v89);
          v90 = *((_QWORD *)v5 + 8);
          v91 = 0;
          if ( *(_WORD *)(v90 + 20) )
          {
            v92 = 0;
            v93 = 0;
            v94 = 0;
            v95 = 0;
            do
            {
              v96 = 296LL * v94;
              v97 = *(_DWORD *)(296LL * v92 + v90 + 324);
              if ( *(int *)(v96 + v90 + 248) >= 0 )
              {
                v98 = v95;
                if ( v97 == v93 || !CCD_TOPOLOGY::IsSameCloneGroup(v5, v97, v95, 1) )
                {
                  if ( (*(_DWORD *)(v96 + *((_QWORD *)v5 + 8) + 56) & 0x20800) != 0x20800LL )
                    WdLogSingleEntry0(1LL);
                  v99 = *((_QWORD *)v5 + 8);
                  v129.left = *(_DWORD *)(v99 + v96 + 200);
                  v129.right = *(_DWORD *)(v99 + v96 + 208) + v129.left;
                  v129.top = *(_DWORD *)(v99 + v96 + 204);
                  v100 = *(_DWORD *)(v99 + v96 + 212) + v129.top;
                  Luid = 0LL;
                  v129.bottom = v100;
                  if ( *(_DWORD *)(v99 + v96 + 252) || *(_DWORD *)(v99 + v96 + 256) )
                  {
                    Luid = *(_LUID *)(v99 + v96 + 252);
                  }
                  else
                  {
                    if ( ZwAllocateLocallyUniqueId(&Luid) < 0 )
                      WdLogSingleEntry0(1LL);
                    v99 = *((_QWORD *)v5 + 8);
                  }
                  v101 = DxgkCreateSessionViewForCurrentSession(
                           (struct _LUID *)(v96 + v99 + 72),
                           *(_DWORD *)(v96 + v99 + 80),
                           &v129,
                           v97 == v98,
                           &Luid);
                  v102 = v101;
                  if ( v101 < 0 )
                  {
                    WdLogSingleEntry4(
                      2LL,
                      *(int *)(v96 + *((_QWORD *)v5 + 8) + 76),
                      *(unsigned int *)(v96 + *((_QWORD *)v5 + 8) + 72),
                      *(unsigned int *)(v96 + *((_QWORD *)v5 + 8) + 80),
                      v101);
                    *(_DWORD *)(v96 + *((_QWORD *)v5 + 8) + 248) = v102;
                  }
                  else if ( v97 == v98 )
                  {
                    ++*(_WORD *)(*((_QWORD *)v5 + 8) + 28LL);
                  }
                }
              }
              v90 = *((_QWORD *)v5 + 8);
              v94 = ++v91;
              v92 = v91;
              v93 = v91;
              v95 = v91;
            }
            while ( v91 < *(_WORD *)(v90 + 20) );
            v82 = i;
          }
          CCD_TOPOLOGY::CleanupPrimaryPathIndex(v5);
          CCD_TOPOLOGY::CleanupPrimaryPathIndex((CCD_TOPOLOGY *)v140);
          v103 = *((_QWORD *)v5 + 8);
          v104 = 0;
          LODWORD(v105) = 0;
          v106 = *(_DWORD *)(v103 + 40);
          if ( v106 )
          {
            v107 = *(_QWORD *)(v103 + 48);
            while ( 1 )
            {
              v108 = 340LL * (unsigned int)v105;
              if ( *(_DWORD *)(v108 + v107 + 96) || *(_DWORD *)(v108 + v107 + 88) )
                break;
              if ( *(_DWORD *)(v108 + v107 + 92)
                || *(_DWORD *)(v108 + v107 + 124)
                || *(_DWORD *)(v108 + v107 + 120)
                || *(_DWORD *)(v108 + v107 + 132) )
              {
                v104 = 1;
              }
              v105 = (unsigned int)(v105 + 1);
              if ( (unsigned int)v105 >= v106 )
              {
                if ( v104 )
                {
                  v129 = 0LL;
                  v129.left = 11;
                  v125 = DxgkStatusChangeNotify(&v129.left, v107, v105);
                  if ( v125 < 0 )
                    WdLogSingleEntry1(2LL, v125);
                }
                break;
              }
            }
          }
          v109 = DXGGLOBAL::GetGlobal();
          v111 = v109;
          if ( *(_WORD *)(*((_QWORD *)v5 + 8) + 20LL) > 1u )
            DXGGLOBAL::RecordFeatureUsage(v109, 0LL, 1LL);
          v112 = *((_QWORD *)v5 + 8);
          v113 = 0;
          if ( *(_WORD *)(v112 + 20) )
          {
            v114 = 0;
            LOWORD(v110) = 0;
            do
            {
              if ( *(int *)(296LL * v114 + v112 + 248) >= 0 )
              {
                v115 = *(_DWORD *)(296LL * (unsigned __int16)v110 + v112 + 264);
                if ( v115 == 12 )
                {
                  v126 = 4LL;
LABEL_160:
                  DXGGLOBAL::RecordFeatureUsage(v111, v126, 1LL);
                  goto LABEL_115;
                }
                if ( v115 == 30 )
                {
                  v126 = 5LL;
                  goto LABEL_160;
                }
              }
LABEL_115:
              v112 = *((_QWORD *)v5 + 8);
              v110 = ++v113;
              v114 = v113;
            }
            while ( v113 < *(_WORD *)(v112 + 20) );
          }
          LODWORD(v7) = v82 != 0 ? 0xC0000001 : 0;
        }
        else
        {
          WdLogSingleEntry2(6LL, v5, *((_QWORD *)v5 + 8));
          LODWORD(v7) = -1073741801;
        }
        CCD_TOPOLOGY::ApplyTopologyWorker_::_2_::_AUTO_USING_PM_PathChanged3018::__AUTO_USING_PM_PathChanged3018(
          &v132,
          v112,
          v110);
        CCD_TOPOLOGY::ApplyTopologyWorker_::_2_::_AUTO_USING_PM_PathChanged3018::__AUTO_USING_PM_PathChanged3018(
          &v134,
          v116,
          v117);
        CCD_TOPOLOGY::ApplyTopologyWorker_::_2_::_AUTO_USING_PM_PrimaryClonePathIndex3016::__AUTO_USING_PM_PrimaryClonePathIndex3016(&v136);
        CCD_TOPOLOGY::ApplyTopologyWorker_::_2_::_AUTO_USING_PM_PrimaryClonePathIndex3016::__AUTO_USING_PM_PrimaryClonePathIndex3016(&v138);
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
    CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId(v8);
LABEL_163:
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, v7);
  }
LABEL_118:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v140);
  if ( v144 )
    KeUnstackDetachProcess(&ApcState);
  return (unsigned int)v7;
}
