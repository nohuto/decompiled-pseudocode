/*
 * XREFs of ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C03B0888
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0173F88 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     ?SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAXPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C00028BC (-SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAXPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0002AE8 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C0002B28 (-GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C0002F04 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C0002F24 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0006D74 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0006FE0 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C00070E4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C00082D8 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000A400 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000A450 (--3@YAXPEAX@Z.c)
 *     ?PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C001593C (-PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C001651C (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?UsingDelayCreateCddAllocation@DXGADAPTER@@QEBAEXZ @ 0x1C001655C (-UsingDelayCreateCddAllocation@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     memset @ 0x1C0028640 (memset.c)
 *     DxgkIncrementGlobalConnectionChangeId @ 0x1C005E7C4 (DxgkIncrementGlobalConnectionChangeId.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C016A4FC (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 *     ?GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJ_NAEAU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x1C016E078 (-GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJ_NAEAU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C0173348 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C0194C28 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0199DD4 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C019A618 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C019B54C (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C01B0208 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C01B06C0 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C01DE470 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C01E7324 (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C03ABDE0 (-AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VI.c)
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE@Z @ 0x1C03ABF4C (-CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_D.c)
 *     ?PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C03AF3A8 (-PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C03B6BD0 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C03B9290 (-SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH.c)
 *     ?UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C03BA040 (-UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::CommitVidPnOnAdapter(
        VIDPN_MGR *a1,
        unsigned int a2,
        int a3,
        DMMVIDPN *a4,
        unsigned int a5,
        __int64 a6,
        _DWORD *a7,
        _DWORD *a8,
        _DWORD *a9,
        __int64 a10,
        unsigned int *a11,
        struct DXGDEVICE *a12,
        __int64 a13,
        unsigned __int8 a14)
{
  int v15; // ebx
  __int64 v16; // rax
  int v17; // ecx
  __int64 v18; // rsi
  struct _D3DKMDT_VIDPN_PRESENT_PATH *v19; // rdi
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v21; // r9
  unsigned int v22; // ebx
  struct DMMVIDPN *v23; // rbx
  unsigned int v24; // edi
  __int64 v25; // rax
  char *v26; // r12
  int v27; // r15d
  DMMVIDPN *v28; // r13
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *Path; // r13
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  int updated; // eax
  unsigned int i; // r12d
  DMMVIDPNPRESENTPATH *v33; // rax
  __int64 *v34; // rdi
  DMMVIDPNPRESENTPATH *v35; // r11
  ADAPTER_DISPLAY *v36; // rcx
  __int64 v37; // r15
  int j; // r12d
  int v39; // eax
  int v40; // r13d
  DMMVIDPNTOPOLOGY *v41; // rbx
  unsigned int v42; // r13d
  unsigned int *v43; // rdi
  bool IsSourceInTopology; // al
  void *v45; // rdi
  struct DXGADAPTERALLOCATION *DisplayedPrimaryAllocation; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  ADAPTER_DISPLAY *v51; // rcx
  bool v52; // zf
  __int64 v53; // rdi
  int v54; // eax
  _QWORD *v55; // rax
  __int64 v56; // r9
  int v57; // eax
  int v58; // eax
  ADAPTER_DISPLAY *v59; // rcx
  bool v60; // zf
  VIDPN_MGR *v61; // r13
  int v62; // eax
  int v63; // eax
  unsigned int v64; // r12d
  int k; // r13d
  __int64 v66; // rcx
  unsigned int v67; // eax
  char v68; // di
  int v69; // eax
  unsigned int m; // r15d
  __int64 v71; // r13
  const struct _DXGK_DISPLAYMODE_INFO *v72; // rax
  DMMVIDPNPRESENTPATH *v73; // rax
  struct _D3DKMDT_VIDPN_PRESENT_PATH *v74; // rdi
  enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS v75; // r9d
  int v76; // eax
  void *v77; // rdi
  unsigned int v78; // r15d
  int v79; // eax
  DMMVIDPNPRESENTPATH *PathFromTarget; // rax
  __int64 v81; // r11
  __int64 v82; // r8
  char *v83; // r9
  __int64 v84; // r15
  struct COREDEVICEACCESS *v85; // r9
  struct DXGDEVICE *v86; // r10
  int CddAllocations; // eax
  struct DXGADAPTERALLOCATION *CddPrimaryAllocation; // rax
  int v89; // ecx
  ADAPTER_DISPLAY *v90; // rcx
  bool v91; // zf
  VIDPN_MGR *v92; // r15
  int v93; // eax
  int v94; // eax
  __int64 v95; // rcx
  __int64 v96; // r12
  int v97; // r15d
  int v98; // eax
  void *v99; // r13
  struct DXGADAPTERALLOCATION *v100; // rax
  unsigned int v101; // edi
  int v102; // eax
  int v103; // edi
  unsigned __int8 v104; // al
  int v105; // edi
  __int64 v106; // rax
  unsigned int v107; // eax
  __int64 v108; // rdi
  __int64 v109; // r15
  __int64 v111; // rsi
  unsigned int *v112; // r9
  int v113; // edx
  unsigned int v114; // ecx
  unsigned int v115; // ecx
  unsigned int *v116; // rbx
  signed __int64 v117; // rax
  _BYTE *v118; // r9
  int v119; // edx
  int v120; // r8d
  char v121; // cl
  __int64 v122; // r10
  __int64 v124; // [rsp+20h] [rbp-E0h]
  int v125; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v126; // [rsp+50h] [rbp-B0h] BYREF
  char v127; // [rsp+51h] [rbp-AFh]
  char v128; // [rsp+52h] [rbp-AEh]
  DMMVIDPNPRESENTPATH *v129; // [rsp+58h] [rbp-A8h]
  unsigned int v130; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v131; // [rsp+68h] [rbp-98h] BYREF
  int v132; // [rsp+70h] [rbp-90h]
  int v133; // [rsp+78h] [rbp-88h]
  int v134; // [rsp+7Ch] [rbp-84h]
  unsigned int v135; // [rsp+80h] [rbp-80h]
  int v136; // [rsp+84h] [rbp-7Ch]
  VIDPN_MGR *v137; // [rsp+88h] [rbp-78h]
  DMMVIDPN *v138; // [rsp+90h] [rbp-70h]
  struct _D3DKMDT_VIDPN_PRESENT_PATH *v139; // [rsp+98h] [rbp-68h]
  struct DMMVIDPN *v140; // [rsp+A0h] [rbp-60h] BYREF
  struct DXGDEVICE *v141; // [rsp+A8h] [rbp-58h]
  _BYTE v142[24]; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD *v143; // [rsp+C8h] [rbp-38h]
  __int64 v144; // [rsp+D0h] [rbp-30h]
  DMMVIDPNTOPOLOGY *v145; // [rsp+D8h] [rbp-28h]
  __int64 v146; // [rsp+E0h] [rbp-20h]
  __int64 v147; // [rsp+E8h] [rbp-18h]
  unsigned int *v148; // [rsp+F0h] [rbp-10h]
  __int128 v149; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v150[80]; // [rsp+110h] [rbp+10h] BYREF

  v147 = a6;
  v143 = a9;
  v144 = a10;
  v148 = a11;
  v141 = a12;
  v133 = a3;
  v135 = a2;
  v137 = a1;
  *(_QWORD *)&v149 = a13;
  v138 = a4;
  v130 = 0;
  memset(v150, 0, sizeof(v150));
  v126 = 0;
  v131 = 0LL;
  v132 = 0;
  v127 = 0;
  if ( !*((_QWORD *)a1 + 1) )
    WdLogSingleEntry0(1LL);
  v15 = a8[6];
  v16 = *((_QWORD *)a1 + 1);
  v17 = a8[14] | a8[3];
  v136 = v15;
  v18 = *(_QWORD *)(v16 + 16);
  if ( (v17 & v15) != 0 )
    WdLogSingleEntry0(1LL);
  if ( (v15 & a8[5] & a8[2]) != (v15 & a8[2]) )
    WdLogSingleEntry0(1LL);
  v139 = (struct _D3DKMDT_VIDPN_PRESENT_PATH *)operator new[](0x1F0uLL, 0x4E506456u, 256LL);
  v19 = v139;
  if ( !v139 )
  {
    WdLogSingleEntry2(6LL, *(int *)(v18 + 408), *(unsigned int *)(v18 + 404));
    v22 = -1073741801;
    goto LABEL_183;
  }
  operator delete(0LL);
  v140 = 0LL;
  ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(a1, (__int64 *)&v140);
  v22 = ClientVidPnFromLastClientCommitedVidPn;
  if ( ClientVidPnFromLastClientCommitedVidPn >= 0 )
  {
    v23 = v140;
    v24 = 0;
    v25 = *(_QWORD *)(v18 + 2920);
    v26 = (char *)v140 + 96;
    v27 = 1;
    v145 = (struct DMMVIDPN *)((char *)v140 + 96);
    if ( *(_DWORD *)(v25 + 96) )
    {
      do
      {
        if ( (v27 & a8[10]) != 0 )
        {
          v28 = v138;
          if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(
                      (DMMVIDPN *)((char *)v138 + 96),
                      (char *)v24,
                      0LL,
                      &v130) < 0
            || v130 == -1 )
          {
            WdLogSingleEntry0(1LL);
          }
          Path = (enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)DMMVIDPNTOPOLOGY::FindPath(
                                                                (DMMVIDPN *)((char *)v28 + 96),
                                                                v24,
                                                                v130);
          if ( !Path )
            WdLogSingleEntry0(1LL);
          DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*(ADAPTER_DISPLAY **)(v18 + 2920), v24);
          *(_OWORD *)v150 = *(_OWORD *)DisplayModeInfo;
          *(_OWORD *)&v150[16] = *((_OWORD *)DisplayModeInfo + 1);
          *(_OWORD *)&v150[32] = *((_OWORD *)DisplayModeInfo + 2);
          *(_OWORD *)&v150[48] = *((_OWORD *)DisplayModeInfo + 3);
          *(_OWORD *)&v150[64] = *((_OWORD *)DisplayModeInfo + 4);
          *(_DWORD *)&v150[28] = D3DKMDT_VPPR_GET_CONTENT_ROTATION((enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)*((_DWORD *)Path + 29));
          updated = DMMVIDPNPRESENTPATH::UpdateActiveVidPnPresentPath((DMMVIDPNPRESENTPATH *)Path, 0LL);
          if ( updated < 0 )
          {
            WdLogSingleEntry3(2LL, v24, v26, updated);
            a8[10] &= ~v27;
            a8[2] |= v27;
          }
          else
          {
            for ( i = 0; ; ++i )
            {
              if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(
                          (struct DMMVIDPN *)((char *)v23 + 96),
                          (char *)v24,
                          i,
                          &v130) < 0 )
                WdLogSingleEntry0(1LL);
              if ( v130 == -1 )
                break;
              v33 = DMMVIDPNTOPOLOGY::FindPath((struct DMMVIDPN *)((char *)v23 + 96), v24, v130);
              v129 = v33;
              if ( !v33 )
              {
                WdLogSingleEntry0(1LL);
                v33 = 0LL;
              }
              DMMVIDPNPRESENTPATH::PinContentRotation(v33, Path[29]);
            }
            v26 = (char *)v23 + 96;
          }
        }
        ++v24;
        v27 *= 2;
      }
      while ( v24 < *(_DWORD *)(*(_QWORD *)(v18 + 2920) + 96LL) );
    }
    v34 = (__int64 *)((char *)v23 + 96);
    v146 = (__int64)v23 + 152;
    v35 = (DMMVIDPNPRESENTPATH *)(a8 + 21);
LABEL_29:
    v36 = *(ADAPTER_DISPLAY **)(v18 + 2920);
    v37 = 0LL;
    v129 = v35;
    for ( j = 1; (unsigned int)v37 < *((_DWORD *)v36 + 24); j *= 2 )
    {
      if ( (j & *(_DWORD *)v35) == 0 )
      {
        if ( !ADAPTER_DISPLAY::IsVidPnSourceVisible(v36, v37)
          || ((a8[3] | a8[14] | a8[2]) & j) == 0 && (j & a8[5]) != 0
          || (v39 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(*(ADAPTER_DISPLAY **)(v18 + 2920), v37, 0, 2048, a14),
              v40 = v39,
              v39 >= 0) )
        {
          if ( (j & a8[3]) == 0 && (!v127 || (j & a8[2]) == 0) && !*((_BYTE *)v137 + 520) )
          {
            if ( (j & a8[14]) == 0 )
              goto LABEL_75;
            v41 = v145;
            v42 = 0;
            v43 = (unsigned int *)(v144 + 4LL * (unsigned int)(16 * v37));
            do
            {
              if ( *v43 == -1 )
                break;
              ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
                (__int64)v142,
                ((unsigned __int64)v41 + 56) & ((unsigned __int128)-(__int128)(unsigned __int64)v41 >> 64),
                2u,
                v21,
                v124,
                1LL);
              if ( (int)DMMVIDPNTOPOLOGY::RemovePath(v41, v37, *v43, 0LL) < 0 )
                WdLogSingleEntry0(1LL);
              ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v142);
              ++v42;
              ++v43;
            }
            while ( v42 < 0x10 );
            IsSourceInTopology = DMMVIDPNTOPOLOGY::IsSourceInTopology(v41, v37);
            v23 = v140;
            if ( IsSourceInTopology )
            {
              v45 = 0LL;
              if ( !*(_QWORD *)(v18 + 2928) )
                goto LABEL_51;
              DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(
                                             *(DXGADAPTER ***)(v18 + 2920),
                                             v37);
              if ( DisplayedPrimaryAllocation )
              {
                v48 = *((unsigned int *)DisplayedPrimaryAllocation + 1);
                if ( (v48 & 0x10) == 0 )
                {
                  v45 = (void *)*((_QWORD *)DisplayedPrimaryAllocation + 2);
LABEL_51:
                  LODWORD(v131) = v131 & 0xFFFFFF40 | v133 & 0xF | 0x40;
                  v51 = *(ADAPTER_DISPLAY **)(v18 + 2920);
                  v132 = *((_DWORD *)v51 + 104);
                  BYTE4(v131) = BYTE4(v131) & 0xF9 | (v135 >> 14) & 4 | 1;
                  if ( (j & a8[6]) != 0 )
                    v52 = ADAPTER_DISPLAY::IsVidPnSourceActive(v51, v37) == 0;
                  else
                    v52 = (j & a8[5]) == 0;
                  LOBYTE(v125) = v52;
                  v54 = VIDPN_MGR::CommitVidPn(
                          v137,
                          (unsigned __int64)v23,
                          v45,
                          (unsigned int)v37,
                          D3DKMDT_MCC_ENFORCE,
                          0,
                          v125,
                          (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v131,
                          &v126);
                  if ( v54 < 0 )
                  {
                    v53 = (unsigned int)v37;
                    WdLogSingleEntry4(2LL, (unsigned int)v37, *(int *)(v18 + 408), *(unsigned int *)(v18 + 404), v54);
                    goto LABEL_57;
                  }
LABEL_74:
                  v34 = (__int64 *)((char *)v23 + 96);
LABEL_75:
                  v35 = v129;
                  goto LABEL_76;
                }
              }
              v53 = (unsigned int)v37;
LABEL_57:
              v55 = (_QWORD *)WdLogNewEntry5_WdTrace(v48, v47, v49, v50);
              v55[3] = v53;
              v55[4] = *(int *)(v18 + 408);
              v55[5] = *(unsigned int *)(v18 + 404);
              ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
                (__int64)v142,
                (__int64)v23 + 152,
                2u,
                v56,
                v124,
                *((_QWORD *)v23 + 17));
              v57 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((struct DMMVIDPN *)((char *)v23 + 96), v37);
              if ( (int)(v57 + 0x80000000) >= 0 && v57 != -1071774919 )
LABEL_62:
                WdLogSingleEntry0(1LL);
LABEL_63:
              ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v142);
            }
            v52 = (j & a8[3]) == 0;
            LODWORD(v131) = v131 & 0xFFFFFF50 | v133 & 0xF | 0x50;
            v59 = *(ADAPTER_DISPLAY **)(v18 + 2920);
            v132 = *((_DWORD *)v59 + 104);
            BYTE4(v131) = (BYTE4(v131) & 0xFC | ((j & a8[3]) == 0)) ^ ((v135 >> 14) ^ (BYTE4(v131) | v52)) & 4;
            if ( (j & a8[6]) != 0 )
              v60 = ADAPTER_DISPLAY::IsVidPnSourceActive(v59, v37) == 0;
            else
              v60 = (j & a8[5]) == 0;
            v61 = v137;
            LOBYTE(v125) = v60;
            v62 = VIDPN_MGR::CommitVidPn(
                    v137,
                    (unsigned __int64)v23,
                    0LL,
                    (unsigned int)v37,
                    D3DKMDT_MCC_IGNORE,
                    0,
                    v125,
                    (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v131,
                    &v126);
            if ( v62 < 0 )
              WdLogSingleEntry4(2LL, (unsigned int)v37, *(int *)(v18 + 408), *(unsigned int *)(v18 + 404), v62);
            if ( v141 && ((j & a8[3]) != 0 || *((_BYTE *)v61 + 520)) )
            {
              v63 = ADAPTER_DISPLAY::DestroyCddAllocations(*(ADAPTER_DISPLAY **)(v18 + 2920), v141, v37);
              if ( v63 < 0 )
                WdLogSingleEntry4(2LL, (unsigned int)v37, *(int *)(v18 + 408), *(unsigned int *)(v18 + 404), v63);
            }
            goto LABEL_74;
          }
          ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
            (__int64)v142,
            (__int64)(v34 + 7),
            2u,
            v21,
            v124,
            v34[5]);
          v58 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((DMMVIDPNTOPOLOGY *)v34, v37);
          if ( ((v58 + 0x80000000) & 0x80000000) == 0 && v58 != -1071774919 )
            goto LABEL_62;
          goto LABEL_63;
        }
        WdLogSingleEntry4(2LL, (unsigned int)v37, *(int *)(v18 + 408), *(unsigned int *)(v18 + 404), v39);
        v35 = v129;
        v34 = (__int64 *)((char *)v23 + 96);
        *(_DWORD *)v129 |= j;
        a8[v37 + 22] = v40;
      }
LABEL_76:
      v36 = *(ADAPTER_DISPLAY **)(v18 + 2920);
      v37 = (unsigned int)(v37 + 1);
    }
    v64 = 0;
    for ( k = 1; ; k *= 2 )
    {
      v66 = *(_QWORD *)(v18 + 2920);
      v134 = k;
      v67 = *(_DWORD *)(v66 + 96);
      if ( v64 >= v67 )
      {
        v96 = 0LL;
        v97 = 1;
        if ( !v67 )
        {
LABEL_172:
          if ( a5 )
          {
            v109 = v147;
            v111 = a5;
            v112 = (unsigned int *)(v147 + 32);
            do
            {
              v113 = 1 << *a7;
              v114 = *v112;
              if ( (v113 & a8[39]) != 0 )
              {
                v115 = v114 & 0xF0FFFFFF | 0xC000000;
              }
              else if ( (v113 & *(_DWORD *)v35) != 0 )
              {
                v115 = v114 & 0xF0FFFFFF | 0xD000000;
              }
              else
              {
                v115 = v114 & 0xF0FFFFFF | 0xE000000;
              }
              v116 = v112;
              *v112 = v115;
              v117 = DxgkIncrementGlobalConnectionChangeId();
              v35 = v129;
              *((_QWORD *)v118 - 1) = v117;
              v120 = v119 & (a8[39] | a8[2]);
              v121 = v120 != 0 ? 1 : -1;
              *(unsigned int *)((char *)v116 + v109 + v122 + 16) &= ~1u;
              v118[16] = v121;
              v118[17] = -(v120 == 0);
              ++a7;
              v118[18] = v121;
              v112 = (unsigned int *)(v118 + 56);
              --v111;
            }
            while ( v111 );
          }
          v19 = v139;
          *v148 = (v126 != 0) | *v148 & 0xFFFFFFFE;
          v22 = 0;
          goto LABEL_181;
        }
        while ( 2 )
        {
          if ( (v97 & *(_DWORD *)v35) == 0 )
          {
            v98 = a8[5];
            if ( (v97 & v136) == 0 )
            {
              a8[18] |= v97 & ~v98;
              goto LABEL_171;
            }
            v99 = 0LL;
            if ( (v98 & v97) == 0 )
            {
              ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope((__int64)v142, v146, 2u, v21, v124, v34[5]);
              v102 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((DMMVIDPNTOPOLOGY *)v34, v96);
              if ( (int)(v102 + 0x80000000) >= 0 && v102 != -1071774919 )
                WdLogSingleEntry0(1LL);
              v103 = v131;
              a8[18] |= v97;
              v101 = v103 & 0xFFFFFF0F | 0x40;
              ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v142);
              goto LABEL_164;
            }
            if ( !*(_QWORD *)(v18 + 2928) )
              goto LABEL_158;
            v100 = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation((DXGADAPTER **)v66, v96);
            if ( !v100 || (*((_DWORD *)v100 + 1) & 0x10) != 0 )
            {
              *v143 |= v97;
              a8[18] |= v97;
              WdLogSingleEntry3(7LL, (unsigned int)v96, *(int *)(v18 + 408), *(unsigned int *)(v18 + 404));
            }
            else
            {
              v99 = (void *)*((_QWORD *)v100 + 2);
LABEL_158:
              v101 = v131 & 0xFFFFFF0F | 0x20;
LABEL_164:
              v104 = v133;
              v149 = 0LL;
              if ( v133 == 4 )
              {
                DisplayLogSetMonitorPowerStage(0LL, 32LL, 0LL, &v149);
                v104 = v133;
              }
              v105 = ((unsigned __int8)v101 ^ v104) & 0xF ^ v101;
              v106 = *(_QWORD *)(v18 + 2920);
              LODWORD(v131) = v105;
              v132 = *(_DWORD *)(v106 + 416);
              LOBYTE(v125) = 0;
              BYTE4(v131) = BYTE4(v131) & 0xF8 | (v135 >> 14) & 4;
              v107 = VIDPN_MGR::CommitVidPn(
                       v137,
                       (unsigned __int64)v23,
                       v99,
                       (unsigned int)v96,
                       D3DKMDT_MCC_ENFORCE,
                       1,
                       v125,
                       (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v131,
                       &v126);
              v108 = (int)v107;
              if ( v133 == 4 )
                DisplayLogSetMonitorPowerStage(0LL, 2147483680LL, v107, &v149);
              if ( (int)v108 < 0 )
              {
                *(_DWORD *)v129 |= v97;
                a8[v96 + 22] = v108;
                WdLogSingleEntry4(2LL, (unsigned int)v96, *(int *)(v18 + 408), *(unsigned int *)(v18 + 404), v108);
              }
            }
            v35 = v129;
          }
LABEL_171:
          v66 = *(_QWORD *)(v18 + 2920);
          v34 = (__int64 *)((char *)v23 + 96);
          v96 = (unsigned int)(v96 + 1);
          v97 *= 2;
          if ( (unsigned int)v96 >= *(_DWORD *)(v66 + 96) )
            goto LABEL_172;
          continue;
        }
      }
      v68 = 1;
      v128 = 1;
      if ( (k & *(_DWORD *)v35) != 0 )
        goto LABEL_133;
      if ( (k & a8[2]) == 0 )
      {
LABEL_146:
        v34 = (__int64 *)((char *)v23 + 96);
        goto LABEL_147;
      }
      ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
        (__int64)v142,
        (__int64)v23 + 152,
        2u,
        v21,
        v124,
        *((_QWORD *)v23 + 17));
      v69 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((struct DMMVIDPN *)((char *)v23 + 96), v64);
      if ( (int)(v69 + 0x80000000) >= 0 && v69 != -1071774919 )
        WdLogSingleEntry0(1LL);
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v142);
      for ( m = 0; ; ++m )
      {
        if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((DMMVIDPN *)((char *)v138 + 96), (char *)v64, m, &v130) < 0 )
          WdLogSingleEntry0(1LL);
        v71 = v130;
        if ( v130 == -1 )
          break;
        if ( v68 )
        {
          v72 = ADAPTER_DISPLAY::GetDisplayModeInfo(*(ADAPTER_DISPLAY **)(v18 + 2920), v64);
          *(_OWORD *)v150 = *(_OWORD *)v72;
          *(_OWORD *)&v150[16] = *((_OWORD *)v72 + 1);
          *(_OWORD *)&v150[32] = *((_OWORD *)v72 + 2);
          *(_OWORD *)&v150[48] = *((_OWORD *)v72 + 3);
          *(_OWORD *)&v150[64] = *((_OWORD *)v72 + 4);
          v73 = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPN *)((char *)v138 + 96), v64, v71);
          if ( (int)DMMVIDPNPRESENTPATH::GetDisplayModeFromPath(
                      v73,
                      ((v133 - 1) & 0xFFFFFFFD) == 0,
                      (struct _D3DDDI_RATIONAL *)v150) < 0 )
            WdLogSingleEntry0(1LL);
          v128 = 0;
        }
        v74 = v139;
        if ( DMMVIDPN::SerializeFunctionalPathDrivingTarget(
               v138,
               v71,
               (struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *const)v139) < 0 )
          WdLogSingleEntry0(1LL);
        v76 = VIDPN_MGR::AddUnpinnedPathToVidPnTopology(
                (struct _KTHREAD **)v137,
                (struct DMMVIDPN *)((char *)v23 + 96),
                v74,
                v75);
        v77 = (void *)v76;
        if ( v76 < 0 )
        {
LABEL_104:
          v82 = v71;
          v83 = (char *)v23 + 96;
LABEL_105:
          v84 = v64;
          WdLogSingleEntry4(2LL, v64, v82, v83, v77);
          k = v134;
          goto LABEL_129;
        }
        v68 = v128;
      }
      v78 = 0;
      v34 = (__int64 *)((char *)v23 + 96);
      while ( 1 )
      {
        if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((DMMVIDPNTOPOLOGY *)v34, (char *)v64, v78, &v130) < 0 )
          WdLogSingleEntry0(1LL);
        v71 = v130;
        if ( v130 == -1 )
          break;
        if ( DMMVIDPN::SerializeFunctionalPathDrivingTarget(
               v138,
               v130,
               (struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *const)v139) < 0 )
          WdLogSingleEntry0(1LL);
        v79 = VIDPN_MGR::PinModalityOnPathInVidPnTopology(
                (struct _KTHREAD **)v137,
                (struct DMMVIDPNTOPOLOGY *const)v34,
                (const struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *)v139);
        v77 = (void *)v79;
        if ( v79 < 0 )
          goto LABEL_104;
        DMMVIDPNTOPOLOGY::GetPathFromTarget((DMMVIDPN *)((char *)v138 + 96), v71);
        v34 = (__int64 *)((char *)v23 + 96);
        PathFromTarget = DMMVIDPNTOPOLOGY::GetPathFromTarget((struct DMMVIDPN *)((char *)v23 + 96), v71);
        DMMVIDPNPRESENTPATH::SetGammaRamp(PathFromTarget, *(const struct DXGK_GAMMA_RAMP **)(v81 + 184));
        ++v78;
      }
      if ( v141 && (_QWORD)v149 && !DXGADAPTER::UsingDelayCreateCddAllocation((DXGADAPTER *)v18) )
        break;
      if ( !*(_QWORD *)(v18 + 2928) )
        goto LABEL_112;
      CddPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(*(DXGADAPTER ***)(v18 + 2920), v64);
      if ( CddPrimaryAllocation && (*((_DWORD *)CddPrimaryAllocation + 1) & 0x10) == 0 )
        goto LABEL_120;
      k = v134;
      v84 = v64;
      if ( (v134 & a8[8]) == 0 )
      {
        *v143 |= v134;
        WdLogSingleEntry3(7LL, v64, *(int *)(v18 + 408), *(unsigned int *)(v18 + 404));
        goto LABEL_124;
      }
      LODWORD(v77) = -1071775482;
      WdLogSingleEntry3(2LL, v64, *(int *)(v18 + 408), *(unsigned int *)(v18 + 404));
LABEL_129:
      if ( !v127 )
      {
        DxgkLogCodePointPacket(0x61u, v64, (unsigned int)v77, 0, *(_QWORD *)(v18 + 404));
        v35 = v129;
        v34 = (__int64 *)((char *)v23 + 96);
        v127 = 1;
        goto LABEL_29;
      }
      *(_DWORD *)v129 |= k;
      a8[v84 + 22] = (_DWORD)v77;
      if ( (_DWORD)v77 == -1071774920 || (_DWORD)v77 == -1071774976 )
        v126 = 1;
LABEL_133:
      v34 = (__int64 *)((char *)v23 + 96);
      ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
        (__int64)v142,
        (__int64)v23 + 152,
        2u,
        v21,
        v124,
        *((_QWORD *)v23 + 17));
      v94 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((struct DMMVIDPN *)((char *)v23 + 96), v64);
      if ( (int)(v94 + 0x80000000) >= 0 && v94 != -1071774919 )
        WdLogSingleEntry0(1LL);
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v142);
LABEL_124:
      v35 = v129;
LABEL_147:
      ++v64;
    }
    CddAllocations = ADAPTER_DISPLAY::CreateCddAllocations(
                       *(ADAPTER_DISPLAY **)(v18 + 2920),
                       v86,
                       v64,
                       (const struct _D3DKMT_DISPLAYMODE *)v150,
                       v85);
    v77 = (void *)CddAllocations;
    if ( CddAllocations < 0 )
    {
      v83 = (char *)*(unsigned int *)(v18 + 404);
      v82 = *(int *)(v18 + 408);
      goto LABEL_105;
    }
    CddPrimaryAllocation = ADAPTER_DISPLAY::GetCddPrimaryAllocation(*(ADAPTER_DISPLAY **)(v18 + 2920), v64, 0);
    if ( *(_QWORD *)(v18 + 2928) )
LABEL_120:
      v77 = (void *)*((_QWORD *)CddPrimaryAllocation + 2);
    else
LABEL_112:
      v77 = 0LL;
    v89 = 32;
    k = v134;
    if ( v78 <= 1 )
      v89 = 48;
    LODWORD(v131) = v131 & 0xFFFFFF00 | v133 & 0xF | v89;
    v90 = *(ADAPTER_DISPLAY **)(v18 + 2920);
    v132 = *((_DWORD *)v90 + 104);
    BYTE4(v131) = BYTE4(v131) & 0xF8 | (v135 >> 14) & 4;
    if ( (v134 & a8[6]) != 0 )
      v91 = ADAPTER_DISPLAY::IsVidPnSourceActive(v90, v64) == 0;
    else
      v91 = (v134 & a8[5]) == 0;
    v92 = v137;
    LOBYTE(v125) = v91;
    v93 = VIDPN_MGR::CommitVidPn(
            v137,
            (unsigned __int64)v23,
            v77,
            v64,
            D3DKMDT_MCC_ENFORCE,
            0,
            v125,
            (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v131,
            &v126);
    LODWORD(v77) = v93;
    if ( v93 >= 0 )
    {
      if ( (k & a8[5]) == 0 )
      {
        if ( !*((_QWORD *)v92 + 1) )
          WdLogSingleEntry0(1LL);
        v95 = *((_QWORD *)v92 + 1);
        if ( *(int *)(*(_QWORD *)(v95 + 16) + 2820LL) < 1200 )
          goto LABEL_144;
        if ( !v95 )
          WdLogSingleEntry0(1LL);
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v92 + 1) + 16LL) + 216LL) + 64LL)
                                   + 40LL)
                       + 28LL) < 0x300Au )
LABEL_144:
          v136 |= k;
      }
      v35 = v129;
      goto LABEL_146;
    }
    v84 = v64;
    WdLogSingleEntry4(2LL, v64, *(int *)(v18 + 408), *(unsigned int *)(v18 + 404), v93);
    if ( v141 )
      ADAPTER_DISPLAY::DestroyCddAllocations(*(ADAPTER_DISPLAY **)(v18 + 2920), v141, v64);
    goto LABEL_129;
  }
  WdLogSingleEntry3(2LL, *(int *)(v18 + 408), *(unsigned int *)(v18 + 404), ClientVidPnFromLastClientCommitedVidPn);
LABEL_181:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v140, 0LL);
LABEL_183:
  operator delete(v19);
  return v22;
}
