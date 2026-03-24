/*
 * XREFs of ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C015095C
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E767C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C00026B4 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C0002728 (-GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     ?SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAXPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C000294C (-SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAXPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0003524 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00074F0 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000A478 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000A4B4 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C000AB24 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000ADEC (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C000B8A4 (-PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C000BAD8 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C000C3EC (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     DxgkIncrementGlobalConnectionChangeId @ 0x1C000DD1C (DxgkIncrementGlobalConnectionChangeId.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C00E1FF0 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C00E2ABC (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C00E3390 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C00EA8F4 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C011CDA0 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C011CEC8 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C012F520 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0141140 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C014164C (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C0143F60 (-UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE@Z @ 0x1C0150590 (-CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_D.c)
 *     ?SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C01511F4 (-SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C0151364 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C01516A0 (-PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_.c)
 *     ?AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C015189C (-AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VI.c)
 *     ?GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C0151D24 (-GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0151F40 (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 */

__int64 __fastcall VIDPN_MGR::CommitVidPnOnAdapter(
        VIDPN_MGR *a1,
        __int64 a2,
        int a3,
        char **a4,
        int a5,
        __int64 a6,
        _DWORD *a7,
        _DWORD *a8,
        _DWORD *a9,
        __int64 a10,
        unsigned int *a11,
        struct DXGDEVICE *a12,
        struct COREDEVICEACCESS *a13,
        unsigned __int8 a14)
{
  __int64 v14; // r14
  int v17; // ebx
  __int64 v18; // rcx
  __int64 v19; // r14
  unsigned int v20; // ecx
  int v21; // eax
  __int64 v22; // rcx
  char **v23; // r12
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  struct _D3DKMDT_VIDPN_PRESENT_PATH *v28; // rdi
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r9
  __int64 v33; // rbx
  __int64 *v34; // rbx
  unsigned int v35; // edi
  int v36; // r15d
  DMMVIDPNTOPOLOGY *v37; // rbx
  ADAPTER_DISPLAY *v38; // rcx
  __int64 v39; // r15
  int j; // r12d
  unsigned int v41; // r13d
  int k; // r12d
  __int64 v43; // rcx
  unsigned int v44; // eax
  char v45; // di
  __int64 v46; // r12
  int v47; // r15d
  int v48; // eax
  __int64 v50; // r8
  __int64 v51; // rbx
  int v52; // r9d
  int v53; // ecx
  unsigned int v54; // ecx
  signed __int64 v55; // rax
  __int64 v56; // r8
  int v57; // r9d
  char v58; // cl
  __int64 v59; // r10
  __int64 v60; // r11
  int v62; // eax
  __int64 v63; // rdx
  __int64 v64; // rcx
  unsigned int m; // r15d
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r12
  unsigned int v69; // r15d
  char **v70; // rdi
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rdx
  __int64 v74; // rcx
  int v75; // eax
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rdi
  struct DMMVIDPNPRESENTPATH *PathFromTarget; // rax
  DMMVIDPNPRESENTPATH *v80; // r11
  DMMVIDPNPRESENTPATH *v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rcx
  struct _D3DKMDT_VIDPN_PRESENT_PATH *v84; // rdi
  __int64 v85; // rdx
  __int64 v86; // rcx
  enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS v87; // r9d
  int v88; // eax
  int v89; // eax
  __int64 v90; // rdx
  __int64 v91; // rcx
  struct DXGADAPTERALLOCATION *CddPrimaryAllocation; // rax
  void *v93; // rdi
  int v94; // ecx
  ADAPTER_DISPLAY *v95; // rcx
  bool v96; // zf
  VIDPN_MGR *v97; // r15
  int v98; // eax
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // rax
  __int64 v102; // rax
  void *v103; // r13
  struct DXGADAPTERALLOCATION *v104; // rax
  __int64 v105; // rcx
  int v106; // edi
  unsigned __int8 v107; // al
  unsigned int v108; // eax
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // r13
  int v112; // eax
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // r13
  __int64 v116; // rdx
  __int64 v117; // rcx
  int v118; // eax
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // rax
  __int64 v122; // rax
  __int64 v123; // rax
  _QWORD *v124; // rax
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // rax
  __int64 v128; // rdx
  __int64 v129; // rcx
  unsigned int *Path; // r13
  __int64 v131; // rax
  int updated; // eax
  __int64 v133; // rdx
  __int64 v134; // rcx
  __int64 v135; // r12
  unsigned int i; // r12d
  __int64 v137; // rdx
  __int64 v138; // rcx
  __int64 v139; // rax
  DMMVIDPNPRESENTPATH *v140; // rax
  __int64 v141; // rdx
  __int64 v142; // rcx
  __int64 v143; // rax
  _QWORD *v144; // rax
  _QWORD *v145; // rax
  int v146; // eax
  __int64 v147; // rdx
  __int64 v148; // rcx
  __int64 v149; // rax
  ADAPTER_DISPLAY *v150; // rcx
  bool v151; // zf
  DMMVIDPNTOPOLOGY *v152; // rbx
  unsigned int v153; // r13d
  unsigned int *v154; // rdi
  __int64 v155; // rdx
  __int64 v156; // rcx
  __int64 v157; // rax
  bool IsSourceInTopology; // al
  void *v159; // rdi
  struct DXGADAPTERALLOCATION *DisplayedPrimaryAllocation; // rax
  __int64 v161; // rdx
  __int64 v162; // rcx
  ADAPTER_DISPLAY *v163; // rcx
  bool v164; // zf
  __int64 v165; // rdi
  int v166; // eax
  __int64 v167; // rdx
  __int64 v168; // rcx
  __int64 v169; // r13
  _QWORD *v170; // rax
  _QWORD *v171; // rax
  __int64 v172; // r9
  VIDPN_MGR *v173; // r13
  int v174; // eax
  __int64 v175; // rdx
  __int64 v176; // rcx
  __int64 v177; // rdi
  _QWORD *v178; // rax
  int v179; // eax
  __int64 v180; // rdx
  __int64 v181; // rcx
  __int64 v182; // rdi
  _QWORD *v183; // rax
  __int64 v184; // rax
  __int64 v185; // rax
  __int64 v186; // rax
  __int64 v187; // rax
  __int64 v188; // rax
  __int64 v189; // rax
  _QWORD *v190; // rax
  __int64 v191; // r15
  __int64 *v192; // rcx
  _QWORD *v193; // rax
  _QWORD *v194; // rax
  _QWORD *v195; // rax
  int v196; // eax
  __int64 v197; // rdx
  __int64 v198; // rcx
  __int64 v199; // rax
  __int64 v200; // rax
  _QWORD *v201; // rax
  __int64 v202; // rax
  _QWORD *v203; // rax
  __int64 v204; // rax
  __int64 v205; // [rsp+20h] [rbp-E0h]
  int v206; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v207; // [rsp+50h] [rbp-B0h] BYREF
  char v208; // [rsp+51h] [rbp-AFh]
  char v209; // [rsp+52h] [rbp-AEh]
  unsigned int v210; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v211; // [rsp+58h] [rbp-A8h] BYREF
  int v212; // [rsp+60h] [rbp-A0h]
  int v213; // [rsp+68h] [rbp-98h]
  unsigned int v214; // [rsp+6Ch] [rbp-94h]
  DMMVIDPNPRESENTPATH *v215; // [rsp+70h] [rbp-90h]
  int v216; // [rsp+78h] [rbp-88h]
  VIDPN_MGR *v217; // [rsp+80h] [rbp-80h]
  DMMVIDPNTOPOLOGY *v218; // [rsp+88h] [rbp-78h]
  DMMVIDPNTOPOLOGY *v219; // [rsp+90h] [rbp-70h]
  struct DMMVIDPN *v220; // [rsp+98h] [rbp-68h] BYREF
  struct _D3DKMDT_VIDPN_PRESENT_PATH *v221; // [rsp+A0h] [rbp-60h]
  struct DXGDEVICE *v222; // [rsp+A8h] [rbp-58h]
  _BYTE v223[24]; // [rsp+B0h] [rbp-50h] BYREF
  DMMVIDPN *v224; // [rsp+C8h] [rbp-38h]
  _DWORD *v225; // [rsp+D0h] [rbp-30h]
  __int64 v226; // [rsp+D8h] [rbp-28h]
  __int64 v227; // [rsp+E0h] [rbp-20h]
  unsigned int *v228; // [rsp+E8h] [rbp-18h]
  struct _D3DKMT_DISPLAYMODE v229; // [rsp+F0h] [rbp-10h] BYREF
  struct COREDEVICEACCESS *v230[2]; // [rsp+120h] [rbp+20h] BYREF

  v14 = *((_QWORD *)a1 + 1);
  v227 = a6;
  v225 = a9;
  v226 = a10;
  v228 = a11;
  v222 = a12;
  v230[0] = a13;
  v224 = (DMMVIDPN *)a4;
  v213 = a3;
  v214 = a2;
  v217 = a1;
  v210 = 0;
  v211 = 0LL;
  v212 = 0;
  v207 = 0;
  v208 = 0;
  memset(&v229, 0, sizeof(v229));
  if ( !v14 )
  {
    v121 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v121);
    v14 = *((_QWORD *)a1 + 1);
  }
  v17 = a8[6];
  v18 = (unsigned int)(a8[13] | a8[3]);
  v19 = *(_QWORD *)(v14 + 16);
  v216 = v17;
  if ( ((unsigned int)v18 & v17) != 0 )
  {
    v122 = WdLogNewEntry5_WdAssertion(v18, a2);
    WdLogEvent5_WdAssertion(v122);
  }
  v20 = a8[2];
  v21 = v20 & a8[5];
  v22 = v17 & v20;
  if ( (v17 & v21) != (_DWORD)v22 )
  {
    v123 = WdLogNewEntry5_WdAssertion(v22, a2);
    WdLogEvent5_WdAssertion(v123);
  }
  v23 = a4 + 12;
  v219 = (DMMVIDPNTOPOLOGY *)(a4 + 12);
  v221 = (struct _D3DKMDT_VIDPN_PRESENT_PATH *)operator new[](0x1E8uLL, 0x4E506456u, PagedPool);
  v28 = v221;
  if ( v221 )
  {
    operator delete(0LL);
    v220 = 0LL;
    ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(
                                               a1,
                                               (__int64 *)&v220);
    v33 = ClientVidPnFromLastClientCommitedVidPn;
    if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
    {
      v124 = (_QWORD *)WdLogNewEntry5_WdError(v31, v30);
      v124[3] = *(int *)(v19 + 320);
      v124[4] = *(unsigned int *)(v19 + 316);
      v124[5] = v33;
      WdLogEvent5_WdError(v124);
    }
    else
    {
      v34 = (__int64 *)v220;
      v35 = 0;
      v218 = (struct DMMVIDPN *)((char *)v220 + 96);
      v36 = 1;
      if ( *(_DWORD *)(*(_QWORD *)(v19 + 2696) + 80LL) )
      {
        v37 = v218;
        do
        {
          if ( (v36 & a8[10]) != 0 )
          {
            if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v23, v35, 0LL, &v210) < 0 || v210 == -1 )
            {
              v127 = WdLogNewEntry5_WdAssertion(v126, v125);
              WdLogEvent5_WdAssertion(v127);
            }
            Path = (unsigned int *)DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)v23, v35, v210);
            if ( !Path )
            {
              v131 = WdLogNewEntry5_WdAssertion(v129, v128);
              WdLogEvent5_WdAssertion(v131);
            }
            v229 = *(struct _D3DKMT_DISPLAYMODE *)ADAPTER_DISPLAY::GetDisplayModeInfo(
                                                    *(ADAPTER_DISPLAY **)(v19 + 2696),
                                                    v35);
            v229.DisplayOrientation = D3DKMDT_VPPR_GET_CONTENT_ROTATION(Path[29]);
            updated = DMMVIDPNPRESENTPATH::UpdateActiveVidPnPresentPath((DMMVIDPNPRESENTPATH *)Path, 0LL);
            v135 = updated;
            if ( updated < 0 )
            {
              v144 = (_QWORD *)WdLogNewEntry5_WdError(v134, v133);
              v144[3] = v35;
              v144[4] = v37;
              v144[5] = v135;
              WdLogEvent5_WdError(v144);
              a8[10] &= ~v36;
              a8[2] |= v36;
            }
            else
            {
              for ( i = 0; ; ++i )
              {
                if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((char **)v218, v35, i, &v210) < 0 )
                {
                  v139 = WdLogNewEntry5_WdAssertion(v138, v137);
                  WdLogEvent5_WdAssertion(v139);
                }
                if ( v210 == -1 )
                  break;
                v140 = DMMVIDPNTOPOLOGY::FindPath(v218, v35, v210);
                v215 = v140;
                if ( !v140 )
                {
                  v143 = WdLogNewEntry5_WdAssertion(v142, v141);
                  WdLogEvent5_WdAssertion(v143);
                  v140 = v215;
                }
                DMMVIDPNPRESENTPATH::PinContentRotation(v140, (enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)Path[29]);
              }
              v37 = v218;
            }
            v23 = (char **)v219;
          }
          ++v35;
          v36 *= 2;
        }
        while ( v35 < *(_DWORD *)(*(_QWORD *)(v19 + 2696) + 80LL) );
        v34 = (__int64 *)v220;
      }
LABEL_14:
      v38 = *(ADAPTER_DISPLAY **)(v19 + 2696);
      v39 = 0LL;
      for ( j = 1; (unsigned int)v39 < *((_DWORD *)v38 + 20); j *= 2 )
      {
        if ( (j & a8[20]) == 0 )
        {
          if ( ADAPTER_DISPLAY::IsVidPnSourceVisible(v38, (unsigned int)v39)
            && (((a8[13] | a8[3] | a8[2]) & j) != 0 || (j & a8[5]) == 0)
            && (v112 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(
                         *(ADAPTER_DISPLAY **)(v19 + 2696),
                         (unsigned int)v39,
                         0,
                         2048,
                         a14),
                v115 = v112,
                v112 < 0) )
          {
            v145 = (_QWORD *)WdLogNewEntry5_WdError(v114, v113);
            v145[3] = (unsigned int)v39;
            v145[4] = *(int *)(v19 + 320);
            v145[5] = *(unsigned int *)(v19 + 316);
            v145[6] = v115;
            WdLogEvent5_WdError(v145);
            a8[20] |= j;
            a8[v39 + 21] = v115;
          }
          else
          {
            if ( (j & a8[3]) != 0 || v208 && (j & a8[2]) != 0 || *((_BYTE *)v217 + 464) )
            {
              ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
                (__int64)v223,
                (unsigned __int64)(v34 + 19) & -(__int64)(v34 + 12 != 0LL),
                2u,
                v32,
                v205,
                v34[17]);
              v146 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((DMMVIDPNTOPOLOGY *)(v34 + 12), v39);
              goto LABEL_123;
            }
            if ( (j & a8[13]) != 0 )
            {
              v152 = v218;
              v153 = 0;
              v154 = (unsigned int *)(v226 + 4LL * (unsigned int)(16 * v39));
              do
              {
                if ( *v154 == -1 )
                  break;
                ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
                  (__int64)v223,
                  ((unsigned __int64)v152 + 56) & ((unsigned __int128)-(__int128)(unsigned __int64)v152 >> 64),
                  2u,
                  v32,
                  v205,
                  1LL);
                if ( (int)DMMVIDPNTOPOLOGY::RemovePath(v152, (unsigned int)v39, *v154, 0LL) < 0 )
                {
                  v157 = WdLogNewEntry5_WdAssertion(v156, v155);
                  WdLogEvent5_WdAssertion(v157);
                }
                ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
                  (ApplyPermissionWithinThisScope *)v223,
                  v155);
                ++v153;
                ++v154;
              }
              while ( v153 < 0x10 );
              IsSourceInTopology = DMMVIDPNTOPOLOGY::IsSourceInTopology(v152, v39);
              v34 = (__int64 *)v220;
              if ( !IsSourceInTopology )
                goto LABEL_127;
              v159 = 0LL;
              if ( *(_QWORD *)(v19 + 2704) )
              {
                DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(
                                               *(DXGADAPTER ***)(v19 + 2696),
                                               v39);
                if ( !DisplayedPrimaryAllocation
                  || (v162 = *((unsigned int *)DisplayedPrimaryAllocation + 1), (v162 & 0x10) != 0) )
                {
                  v165 = (unsigned int)v39;
LABEL_145:
                  v171 = (_QWORD *)WdLogNewEntry5_WdTrace(v162, v161);
                  v171[3] = v165;
                  v171[4] = *(int *)(v19 + 320);
                  v171[5] = *(unsigned int *)(v19 + 316);
                  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
                    (__int64)v223,
                    (unsigned __int64)(v34 + 19) & -(__int64)(v34 + 12 != 0LL),
                    2u,
                    v172,
                    v205,
                    v34[17]);
                  v146 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((DMMVIDPNTOPOLOGY *)(v34 + 12), v39);
LABEL_123:
                  v148 = v146 + 0x80000000;
                  if ( (v148 & 0x80000000) == 0 && v146 != -1071774919 )
                  {
                    v149 = WdLogNewEntry5_WdAssertion(v148, v147);
                    WdLogEvent5_WdAssertion(v149);
                  }
                  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
                    (ApplyPermissionWithinThisScope *)v223,
                    v147);
LABEL_127:
                  v96 = (j & a8[3]) == 0;
                  LODWORD(v211) = v211 & 0xFFFFFF50 | v213 & 0xF | 0x50;
                  v150 = *(ADAPTER_DISPLAY **)(v19 + 2696);
                  v212 = *((_DWORD *)v150 + 90);
                  BYTE4(v211) = (BYTE4(v211) & 0xFC | ((j & a8[3]) == 0)) ^ ((v214 >> 14) ^ (BYTE4(v211) | v96)) & 4;
                  if ( (j & a8[6]) != 0 )
                    v151 = ADAPTER_DISPLAY::IsVidPnSourceActive(v150, (unsigned int)v39) == 0;
                  else
                    v151 = (j & a8[5]) == 0;
                  v173 = v217;
                  LOBYTE(v206) = v151;
                  v174 = VIDPN_MGR::CommitVidPn(
                           (ADAPTER_DISPLAY **)v217,
                           (const struct DMMVIDPN *)v34,
                           0LL,
                           v39,
                           D3DKMDT_MCC_IGNORE,
                           0,
                           v206,
                           (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v211,
                           &v207);
                  v177 = v174;
                  if ( v174 < 0 )
                  {
                    v178 = (_QWORD *)WdLogNewEntry5_WdError(v176, v175);
                    v178[3] = (unsigned int)v39;
                    v178[4] = *(int *)(v19 + 320);
                    v178[5] = *(unsigned int *)(v19 + 316);
                    v178[6] = v177;
                    WdLogEvent5_WdError(v178);
                  }
                  if ( v222 && ((j & a8[3]) != 0 || *((_BYTE *)v173 + 464)) )
                  {
                    v179 = ADAPTER_DISPLAY::DestroyCddAllocations(*(PERESOURCE ***)(v19 + 2696), v222, v39);
                    v182 = v179;
                    if ( v179 < 0 )
                    {
                      v183 = (_QWORD *)WdLogNewEntry5_WdError(v181, v180);
                      v183[3] = (unsigned int)v39;
                      v183[4] = *(int *)(v19 + 320);
                      v183[5] = *(unsigned int *)(v19 + 316);
                      v183[6] = v182;
                      WdLogEvent5_WdError(v183);
                    }
                  }
                  goto LABEL_21;
                }
                v159 = (void *)*((_QWORD *)DisplayedPrimaryAllocation + 2);
              }
              LODWORD(v211) = v211 & 0xFFFFFF40 | v213 & 0xF | 0x40;
              v163 = *(ADAPTER_DISPLAY **)(v19 + 2696);
              v212 = *((_DWORD *)v163 + 90);
              BYTE4(v211) = BYTE4(v211) & 0xF9 | (v214 >> 14) & 4 | 1;
              if ( (j & a8[6]) != 0 )
                v164 = ADAPTER_DISPLAY::IsVidPnSourceActive(v163, (unsigned int)v39) == 0;
              else
                v164 = (j & a8[5]) == 0;
              LOBYTE(v206) = v164;
              v166 = VIDPN_MGR::CommitVidPn(
                       (ADAPTER_DISPLAY **)v217,
                       (const struct DMMVIDPN *)v34,
                       v159,
                       v39,
                       D3DKMDT_MCC_ENFORCE,
                       0,
                       v206,
                       (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v211,
                       &v207);
              v169 = v166;
              if ( v166 < 0 )
              {
                v170 = (_QWORD *)WdLogNewEntry5_WdError(v168, v167);
                v165 = (unsigned int)v39;
                v170[3] = (unsigned int)v39;
                v170[4] = *(int *)(v19 + 320);
                v170[5] = *(unsigned int *)(v19 + 316);
                v170[6] = v169;
                WdLogEvent5_WdError(v170);
                goto LABEL_145;
              }
            }
          }
        }
LABEL_21:
        v38 = *(ADAPTER_DISPLAY **)(v19 + 2696);
        v39 = (unsigned int)(v39 + 1);
      }
      v41 = 0;
      for ( k = 1; ; k *= 2 )
      {
        v43 = *(_QWORD *)(v19 + 2696);
        LODWORD(v215) = k;
        v44 = *(_DWORD *)(v43 + 80);
        if ( v41 >= v44 )
          break;
        v45 = 1;
        v209 = 1;
        if ( (k & a8[20]) == 0 )
        {
          if ( (k & a8[2]) == 0 )
            goto LABEL_26;
          ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
            (__int64)v223,
            (unsigned __int64)(v34 + 19) & -(__int64)(v34 + 12 != 0LL),
            2u,
            v32,
            v205,
            v34[17]);
          v62 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((DMMVIDPNTOPOLOGY *)(v34 + 12), v41);
          v63 = 0x80000000LL;
          v64 = v62 + 0x80000000;
          if ( (int)v64 >= 0 && v62 != -1071774919 )
          {
            v184 = WdLogNewEntry5_WdAssertion(v64, 0x80000000LL);
            WdLogEvent5_WdAssertion(v184);
          }
          ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v223, v63);
          for ( m = 0; ; ++m )
          {
            if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((char **)v219, v41, m, &v210) < 0 )
            {
              v185 = WdLogNewEntry5_WdAssertion(v67, v66);
              WdLogEvent5_WdAssertion(v185);
            }
            v68 = v210;
            if ( v210 == -1 )
              break;
            if ( v45 )
            {
              v229 = *(struct _D3DKMT_DISPLAYMODE *)ADAPTER_DISPLAY::GetDisplayModeInfo(
                                                      *(ADAPTER_DISPLAY **)(v19 + 2696),
                                                      v41);
              v81 = DMMVIDPNTOPOLOGY::FindPath(v219, v41, v68);
              if ( (int)DMMVIDPNPRESENTPATH::GetDisplayModeFromPath(v81, &v229) < 0 )
              {
                v186 = WdLogNewEntry5_WdAssertion(v83, v82);
                WdLogEvent5_WdAssertion(v186);
              }
              v209 = 0;
            }
            v84 = v221;
            if ( DMMVIDPN::SerializeFunctionalPathDrivingTarget(
                   v224,
                   v68,
                   (struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *const)v221) < 0 )
            {
              v187 = WdLogNewEntry5_WdAssertion(v86, v85);
              WdLogEvent5_WdAssertion(v187);
            }
            v88 = VIDPN_MGR::AddUnpinnedPathToVidPnTopology(v217, (struct DMMVIDPNTOPOLOGY *const)(v34 + 12), v84, v87);
            v78 = v88;
            if ( v88 < 0 )
            {
LABEL_154:
              v190 = (_QWORD *)WdLogNewEntry5_WdError(v77, v76);
              v191 = v41;
              v192 = v34 + 12;
              v190[3] = v41;
              v190[4] = v68;
LABEL_156:
              v190[5] = v192;
              v190[6] = v78;
              WdLogEvent5_WdError(v190);
              k = (int)v215;
              goto LABEL_163;
            }
            v45 = v209;
          }
          v69 = 0;
          v70 = (char **)(v34 + 12);
          while ( 1 )
          {
            if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v70, v41, v69, &v210) < 0 )
            {
              v188 = WdLogNewEntry5_WdAssertion(v72, v71);
              WdLogEvent5_WdAssertion(v188);
            }
            v68 = v210;
            if ( v210 == -1 )
              break;
            if ( DMMVIDPN::SerializeFunctionalPathDrivingTarget(
                   v224,
                   v210,
                   (struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *const)v221) < 0 )
            {
              v189 = WdLogNewEntry5_WdAssertion(v74, v73);
              WdLogEvent5_WdAssertion(v189);
            }
            v75 = VIDPN_MGR::PinModalityOnPathInVidPnTopology(
                    v217,
                    (struct DMMVIDPNTOPOLOGY *const)v70,
                    (const struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *)v221);
            v78 = v75;
            if ( v75 < 0 )
              goto LABEL_154;
            v70 = (char **)(v34 + 12);
            DMMVIDPNTOPOLOGY::GetPathFromTarget((DMMVIDPNTOPOLOGY *)(v34 + 12), v68);
            PathFromTarget = DMMVIDPNTOPOLOGY::GetPathFromTarget(v219, v68);
            DMMVIDPNPRESENTPATH::SetGammaRamp(v80, *((const struct DXGK_GAMMA_RAMP **)PathFromTarget + 23));
            ++v69;
          }
          if ( v222 && v230[0] )
          {
            v89 = ADAPTER_DISPLAY::CreateCddAllocations(*(ADAPTER_DISPLAY **)(v19 + 2696), v222, v41, &v229, v230[0]);
            v78 = v89;
            if ( v89 < 0 )
            {
              v190 = (_QWORD *)WdLogNewEntry5_WdError(v91, v90);
              v191 = v41;
              v190[3] = v41;
              v190[4] = *(int *)(v19 + 320);
              v192 = (__int64 *)*(unsigned int *)(v19 + 316);
              goto LABEL_156;
            }
            CddPrimaryAllocation = ADAPTER_DISPLAY::GetCddPrimaryAllocation(*(ADAPTER_DISPLAY **)(v19 + 2696), v41, 0);
            if ( *(_QWORD *)(v19 + 2704) )
            {
LABEL_66:
              v93 = (void *)*((_QWORD *)CddPrimaryAllocation + 2);
              goto LABEL_67;
            }
LABEL_95:
            v93 = 0LL;
LABEL_67:
            v94 = 32;
            k = (int)v215;
            if ( v69 <= 1 )
              v94 = 48;
            LODWORD(v211) = v211 & 0xFFFFFF00 | v213 & 0xF | v94;
            v95 = *(ADAPTER_DISPLAY **)(v19 + 2696);
            v212 = *((_DWORD *)v95 + 90);
            BYTE4(v211) = BYTE4(v211) & 0xF8 | (v214 >> 14) & 4;
            if ( ((unsigned int)v215 & a8[6]) != 0 )
              v96 = ADAPTER_DISPLAY::IsVidPnSourceActive(v95, v41) == 0;
            else
              v96 = ((unsigned int)v215 & a8[5]) == 0;
            v97 = v217;
            LOBYTE(v206) = v96;
            v98 = VIDPN_MGR::CommitVidPn(
                    (ADAPTER_DISPLAY **)v217,
                    (const struct DMMVIDPN *)v34,
                    v93,
                    v41,
                    D3DKMDT_MCC_ENFORCE,
                    0,
                    v206,
                    (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v211,
                    &v207);
            v78 = v98;
            if ( v98 >= 0 )
            {
              if ( (k & a8[5]) == 0 )
              {
                v101 = *((_QWORD *)v97 + 1);
                if ( !v101 )
                {
                  v200 = WdLogNewEntry5_WdAssertion(v100, v99);
                  WdLogEvent5_WdAssertion(v200);
                  v101 = *((_QWORD *)v97 + 1);
                }
                v102 = *(_QWORD *)(v101 + 16);
                if ( *(int *)(v102 + 2596) < 1200
                  || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v102 + 216) + 64LL) + 40LL) + 28LL) < 0x300Au )
                {
                  v216 |= k;
                }
              }
              goto LABEL_26;
            }
            v195 = (_QWORD *)WdLogNewEntry5_WdError(v100, v99);
            v191 = v41;
            v195[3] = v41;
            v195[4] = *(int *)(v19 + 320);
            v195[5] = *(unsigned int *)(v19 + 316);
            v195[6] = v78;
            WdLogEvent5_WdError(v195);
            if ( v222 )
              ADAPTER_DISPLAY::DestroyCddAllocations(*(PERESOURCE ***)(v19 + 2696), v222, v41);
          }
          else
          {
            if ( !*(_QWORD *)(v19 + 2704) )
              goto LABEL_95;
            CddPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(*(DXGADAPTER ***)(v19 + 2696), v41);
            if ( CddPrimaryAllocation )
            {
              v117 = *((unsigned int *)CddPrimaryAllocation + 1);
              if ( (v117 & 0x10) == 0 )
                goto LABEL_66;
            }
            k = (int)v215;
            v191 = v41;
            if ( ((unsigned int)v215 & a8[8]) == 0 )
            {
              *v225 |= (unsigned int)v215;
              v194 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v117);
              v194[3] = v41;
              v194[4] = *(int *)(v19 + 320);
              v194[5] = *(unsigned int *)(v19 + 316);
              WdLogEvent5_WdDmmEvent(v194);
              goto LABEL_26;
            }
            LODWORD(v78) = -1071775482;
            v193 = (_QWORD *)WdLogNewEntry5_WdError(v117, v116);
            v193[3] = v41;
            v193[4] = *(int *)(v19 + 320);
            v193[5] = *(unsigned int *)(v19 + 316);
            WdLogEvent5_WdError(v193);
          }
LABEL_163:
          if ( !v208 )
          {
            DxgkLogCodePointPacket(0x61u, v41, v78, 0, *(_QWORD *)(v19 + 316));
            v208 = 1;
            goto LABEL_14;
          }
          a8[20] |= k;
          a8[v191 + 21] = v78;
          if ( (_DWORD)v78 == -1071774920 || (_DWORD)v78 == -1071774976 )
            v207 = 1;
        }
        ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
          (__int64)v223,
          (unsigned __int64)(v34 + 19) & -(__int64)(v34 + 12 != 0LL),
          2u,
          v32,
          v205,
          v34[17]);
        v196 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((DMMVIDPNTOPOLOGY *)(v34 + 12), v41);
        v197 = 0x80000000LL;
        v198 = v196 + 0x80000000;
        if ( (int)v198 >= 0 && v196 != -1071774919 )
        {
          v199 = WdLogNewEntry5_WdAssertion(v198, 0x80000000LL);
          WdLogEvent5_WdAssertion(v199);
        }
        ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v223, v197);
LABEL_26:
        ++v41;
      }
      v46 = 0LL;
      v47 = 1;
      if ( v44 )
      {
        do
        {
          if ( (v47 & a8[20]) == 0 )
          {
            v48 = a8[5];
            if ( (v47 & v216) != 0 )
            {
              v103 = 0LL;
              if ( (v48 & v47) == 0 )
              {
                ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
                  (__int64)v223,
                  (unsigned __int64)(v34 + 19) & -(__int64)(v34 + 12 != 0LL),
                  2u,
                  v32,
                  v205,
                  v34[17]);
                v118 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((DMMVIDPNTOPOLOGY *)(v34 + 12), v46);
                v119 = 0x80000000LL;
                v120 = v118 + 0x80000000;
                if ( (int)v120 >= 0 && v118 != -1071774919 )
                {
                  v202 = WdLogNewEntry5_WdAssertion(v120, 0x80000000LL);
                  WdLogEvent5_WdAssertion(v202);
                }
                a8[17] |= v47;
                ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
                  (ApplyPermissionWithinThisScope *)v223,
                  v119);
                v106 = v211 & 0xFFFFFF0F | 0x40;
                goto LABEL_84;
              }
              if ( !*(_QWORD *)(v19 + 2704) )
                goto LABEL_83;
              v104 = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation((DXGADAPTER **)v43, v46);
              if ( v104 )
              {
                v105 = *((unsigned int *)v104 + 1);
                if ( (v105 & 0x10) == 0 )
                {
                  v103 = (void *)*((_QWORD *)v104 + 2);
LABEL_83:
                  v106 = v211 & 0xFFFFFF0F | 0x20;
LABEL_84:
                  v107 = v213;
                  *(_OWORD *)v230 = 0LL;
                  if ( v213 == 4 )
                  {
                    DisplayLogSetMonitorPowerStage(0LL, 32LL, 0LL, v230);
                    v107 = v213;
                  }
                  LODWORD(v211) = v106 ^ ((unsigned __int8)v106 ^ v107) & 0xF;
                  v212 = *(_DWORD *)(*(_QWORD *)(v19 + 2696) + 360LL);
                  LOBYTE(v206) = 0;
                  BYTE4(v211) = BYTE4(v211) & 0xF8 | (v214 >> 14) & 4;
                  v108 = VIDPN_MGR::CommitVidPn(
                           (ADAPTER_DISPLAY **)v217,
                           (const struct DMMVIDPN *)v34,
                           v103,
                           v46,
                           D3DKMDT_MCC_ENFORCE,
                           1,
                           v206,
                           (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v211,
                           &v207);
                  v111 = (int)v108;
                  if ( v213 == 4 )
                    DisplayLogSetMonitorPowerStage(0LL, 2147483680LL, v108, v230);
                  if ( (int)v111 < 0 )
                  {
                    a8[20] |= v47;
                    a8[v46 + 21] = v111;
                    v203 = (_QWORD *)WdLogNewEntry5_WdError(v110, v109);
                    v203[3] = (unsigned int)v46;
                    v203[4] = *(int *)(v19 + 320);
                    v203[5] = *(unsigned int *)(v19 + 316);
                    v203[6] = v111;
                    WdLogEvent5_WdError(v203);
                  }
                  goto LABEL_31;
                }
              }
              *v225 |= v47;
              a8[17] |= v47;
              v201 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v105);
              v201[3] = (unsigned int)v46;
              v201[4] = *(int *)(v19 + 320);
              v201[5] = *(unsigned int *)(v19 + 316);
              WdLogEvent5_WdDmmEvent(v201);
            }
            else
            {
              a8[17] |= v47 & ~v48;
            }
          }
LABEL_31:
          v43 = *(_QWORD *)(v19 + 2696);
          v46 = (unsigned int)(v46 + 1);
          v47 *= 2;
        }
        while ( (unsigned int)v46 < *(_DWORD *)(v43 + 80) );
      }
      if ( a5 )
      {
        v50 = 0LL;
        v51 = v227;
        do
        {
          v52 = 1 << *a7;
          v53 = *(_DWORD *)(v50 + v51 + 32);
          if ( (v52 & a8[38]) != 0 )
          {
            v54 = v53 & 0xF0FFFFFF | 0xC000000;
          }
          else if ( (v52 & a8[20]) != 0 )
          {
            v54 = v53 & 0xF0FFFFFF | 0xD000000;
          }
          else
          {
            v54 = v53 & 0xF0FFFFFF | 0xE000000;
          }
          *(_DWORD *)(v50 + v51 + 32) = v54;
          v55 = DxgkIncrementGlobalConnectionChangeId();
          *(_QWORD *)(v51 + v56 + 24) = v55;
          v58 = (v57 & (a8[38] | a8[2])) != 0 ? 1 : -1;
          LOBYTE(v55) = -((v57 & (a8[38] | a8[2])) != 0);
          *(_DWORD *)(v56 + v51 + 16) &= ~1u;
          *(_BYTE *)(v56 + v51 + 48) = v58;
          *(_BYTE *)(v56 + v51 + 49) = ~(_BYTE)v55;
          a7 = (_DWORD *)(v59 + 4);
          *(_BYTE *)(v56 + v51 + 50) = v58;
          v50 = v56 + 56;
        }
        while ( v60 != 1 );
      }
      v28 = v221;
      *v228 = (v207 != 0) | *v228 & 0xFFFFFFFE;
      LODWORD(v33) = 0;
    }
    auto_rc<DMMVIDPN>::reset((__int64 *)&v220, 0LL);
  }
  else
  {
    v204 = WdLogNewEntry5_WdLowResource(v25, v24, v26, v27);
    *(_QWORD *)(v204 + 24) = *(int *)(v19 + 320);
    *(_QWORD *)(v204 + 32) = *(unsigned int *)(v19 + 316);
    WdLogEvent5_WdLowResource(v204);
    LODWORD(v33) = -1073741801;
  }
  operator delete(v28);
  return (unsigned int)v33;
}
