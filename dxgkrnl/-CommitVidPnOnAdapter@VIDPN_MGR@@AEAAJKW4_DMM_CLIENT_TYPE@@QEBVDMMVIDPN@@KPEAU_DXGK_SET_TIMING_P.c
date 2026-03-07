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
        struct COREDEVICEACCESS *a13,
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
  unsigned int *Path; // r13
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
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  bool IsSourceInTopology; // al
  void *v48; // rdi
  struct DXGADAPTERALLOCATION *DisplayedPrimaryAllocation; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  ADAPTER_DISPLAY *v54; // rcx
  bool v55; // zf
  __int64 v56; // rdi
  int v57; // eax
  _QWORD *v58; // rax
  __int64 v59; // r9
  int v60; // eax
  __int64 v61; // rdx
  __int64 v62; // r8
  __int64 v63; // r9
  int v64; // eax
  ADAPTER_DISPLAY *v65; // rcx
  bool v66; // zf
  VIDPN_MGR *v67; // r13
  int v68; // eax
  int v69; // eax
  unsigned int v70; // r12d
  int k; // r13d
  __int64 v72; // rcx
  unsigned int v73; // eax
  char v74; // di
  int v75; // eax
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rdx
  unsigned int m; // r15d
  __int64 v80; // r13
  const struct _DXGK_DISPLAYMODE_INFO *v81; // rax
  DMMVIDPNPRESENTPATH *v82; // rax
  struct _D3DKMDT_VIDPN_PRESENT_PATH *v83; // rdi
  enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS v84; // r9d
  int v85; // eax
  void *v86; // rdi
  unsigned int v87; // r15d
  int v88; // eax
  DMMVIDPNPRESENTPATH *PathFromTarget; // rax
  __int64 v90; // r11
  __int64 v91; // r8
  char *v92; // r9
  __int64 v93; // r15
  struct DXGDEVICE *v94; // r13
  int CddAllocations; // eax
  struct DXGADAPTERALLOCATION *CddPrimaryAllocation; // rax
  int v97; // ecx
  ADAPTER_DISPLAY *v98; // rcx
  bool v99; // zf
  VIDPN_MGR *v100; // r15
  int v101; // eax
  int v102; // eax
  __int64 v103; // r8
  __int64 v104; // r9
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r12
  int v108; // r15d
  int v109; // eax
  void *v110; // r13
  struct DXGADAPTERALLOCATION *v111; // rax
  unsigned int v112; // edi
  int v113; // eax
  __int64 v114; // r8
  __int64 v115; // r9
  __int64 v116; // rdx
  int v117; // edi
  unsigned __int8 v118; // al
  int v119; // edi
  __int64 v120; // rax
  unsigned int v121; // eax
  __int64 v122; // rdi
  __int64 v123; // r15
  __int64 v125; // rsi
  unsigned int *v126; // r9
  int v127; // edx
  unsigned int v128; // ecx
  unsigned int v129; // ecx
  unsigned int *v130; // rbx
  signed __int64 v131; // rax
  _BYTE *v132; // r9
  int v133; // edx
  int v134; // r8d
  char v135; // cl
  __int64 v136; // r10
  __int64 v138; // [rsp+20h] [rbp-E0h]
  int v139; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v140; // [rsp+50h] [rbp-B0h] BYREF
  char v141; // [rsp+51h] [rbp-AFh]
  char v142; // [rsp+52h] [rbp-AEh]
  DMMVIDPNPRESENTPATH *v143; // [rsp+58h] [rbp-A8h]
  unsigned int v144; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v145; // [rsp+68h] [rbp-98h] BYREF
  int v146; // [rsp+70h] [rbp-90h]
  int v147; // [rsp+78h] [rbp-88h]
  int v148; // [rsp+7Ch] [rbp-84h]
  unsigned int v149; // [rsp+80h] [rbp-80h]
  int v150; // [rsp+84h] [rbp-7Ch]
  VIDPN_MGR *v151; // [rsp+88h] [rbp-78h]
  DMMVIDPN *v152; // [rsp+90h] [rbp-70h]
  struct _D3DKMDT_VIDPN_PRESENT_PATH *v153; // [rsp+98h] [rbp-68h]
  struct DMMVIDPN *v154; // [rsp+A0h] [rbp-60h] BYREF
  struct DXGDEVICE *v155; // [rsp+A8h] [rbp-58h]
  _BYTE v156[24]; // [rsp+B0h] [rbp-50h] BYREF
  struct COREDEVICEACCESS *v157; // [rsp+C8h] [rbp-38h]
  _DWORD *v158; // [rsp+D0h] [rbp-30h]
  __int64 v159; // [rsp+D8h] [rbp-28h]
  __int64 v160; // [rsp+E0h] [rbp-20h]
  __int64 v161; // [rsp+E8h] [rbp-18h]
  unsigned int *v162; // [rsp+F0h] [rbp-10h]
  DMMVIDPNTOPOLOGY *v163[2]; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v164[80]; // [rsp+110h] [rbp+10h] BYREF

  v161 = a6;
  v158 = a9;
  v159 = a10;
  v162 = a11;
  v155 = a12;
  v147 = a3;
  v149 = a2;
  v151 = a1;
  v157 = a13;
  v152 = a4;
  v144 = 0;
  memset(v164, 0, sizeof(v164));
  v140 = 0;
  v145 = 0LL;
  v146 = 0;
  v141 = 0;
  if ( !*((_QWORD *)a1 + 1) )
    WdLogSingleEntry0(1LL);
  v15 = a8[6];
  v16 = *((_QWORD *)a1 + 1);
  v17 = a8[14] | a8[3];
  v150 = v15;
  v18 = *(_QWORD *)(v16 + 16);
  if ( (v17 & v15) != 0 )
    WdLogSingleEntry0(1LL);
  if ( (v15 & a8[5] & a8[2]) != (v15 & a8[2]) )
    WdLogSingleEntry0(1LL);
  v153 = (struct _D3DKMDT_VIDPN_PRESENT_PATH *)operator new[](0x1F0uLL, 0x4E506456u, 256LL);
  v19 = v153;
  if ( !v153 )
  {
    WdLogSingleEntry2(6LL, *(int *)(v18 + 408), *(unsigned int *)(v18 + 404));
    v22 = -1073741801;
    goto LABEL_183;
  }
  operator delete(0LL);
  v154 = 0LL;
  ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(a1, (__int64 *)&v154);
  v22 = ClientVidPnFromLastClientCommitedVidPn;
  if ( ClientVidPnFromLastClientCommitedVidPn >= 0 )
  {
    v23 = v154;
    v24 = 0;
    v25 = *(_QWORD *)(v18 + 2920);
    v26 = (char *)v154 + 96;
    v27 = 1;
    v163[0] = (struct DMMVIDPN *)((char *)v154 + 96);
    if ( *(_DWORD *)(v25 + 96) )
    {
      do
      {
        if ( (v27 & a8[10]) != 0 )
        {
          v28 = v152;
          if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(
                      (DMMVIDPN *)((char *)v152 + 96),
                      (char *)v24,
                      0LL,
                      &v144) < 0
            || v144 == -1 )
          {
            WdLogSingleEntry0(1LL);
          }
          Path = (unsigned int *)DMMVIDPNTOPOLOGY::FindPath((DMMVIDPN *)((char *)v28 + 96), v24, v144);
          if ( !Path )
            WdLogSingleEntry0(1LL);
          DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*(ADAPTER_DISPLAY **)(v18 + 2920), v24);
          *(_OWORD *)v164 = *(_OWORD *)DisplayModeInfo;
          *(_OWORD *)&v164[16] = *((_OWORD *)DisplayModeInfo + 1);
          *(_OWORD *)&v164[32] = *((_OWORD *)DisplayModeInfo + 2);
          *(_OWORD *)&v164[48] = *((_OWORD *)DisplayModeInfo + 3);
          *(_OWORD *)&v164[64] = *((_OWORD *)DisplayModeInfo + 4);
          *(_DWORD *)&v164[28] = D3DKMDT_VPPR_GET_CONTENT_ROTATION(Path[29]);
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
                          &v144) < 0 )
                WdLogSingleEntry0(1LL);
              if ( v144 == -1 )
                break;
              v33 = DMMVIDPNTOPOLOGY::FindPath((struct DMMVIDPN *)((char *)v23 + 96), v24, v144);
              v143 = v33;
              if ( !v33 )
              {
                WdLogSingleEntry0(1LL);
                v33 = 0LL;
              }
              DMMVIDPNPRESENTPATH::PinContentRotation(v33, (enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)Path[29]);
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
    v160 = (__int64)v23 + 152;
    v35 = (DMMVIDPNPRESENTPATH *)(a8 + 21);
LABEL_29:
    v36 = *(ADAPTER_DISPLAY **)(v18 + 2920);
    v37 = 0LL;
    v143 = v35;
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
          if ( (j & a8[3]) == 0 && (!v141 || (j & a8[2]) == 0) && !*((_BYTE *)v151 + 520) )
          {
            if ( (j & a8[14]) == 0 )
              goto LABEL_75;
            v41 = v163[0];
            v42 = 0;
            v43 = (unsigned int *)(v159 + 4LL * (unsigned int)(16 * v37));
            do
            {
              if ( *v43 == -1 )
                break;
              ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
                (__int64)v156,
                ((unsigned __int64)v41 + 56) & ((unsigned __int128)-(__int128)(unsigned __int64)v41 >> 64),
                2u,
                v21,
                v138,
                1LL);
              if ( (int)DMMVIDPNTOPOLOGY::RemovePath(v41, v37, *v43, 0LL) < 0 )
                WdLogSingleEntry0(1LL);
              ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
                (ApplyPermissionWithinThisScope *)v156,
                v44,
                v45,
                v46);
              ++v42;
              ++v43;
            }
            while ( v42 < 0x10 );
            IsSourceInTopology = DMMVIDPNTOPOLOGY::IsSourceInTopology(v41, v37);
            v23 = v154;
            if ( IsSourceInTopology )
            {
              v48 = 0LL;
              if ( !*(_QWORD *)(v18 + 2928) )
                goto LABEL_51;
              DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(
                                             *(DXGADAPTER ***)(v18 + 2920),
                                             v37);
              if ( DisplayedPrimaryAllocation )
              {
                v51 = *((unsigned int *)DisplayedPrimaryAllocation + 1);
                if ( (v51 & 0x10) == 0 )
                {
                  v48 = (void *)*((_QWORD *)DisplayedPrimaryAllocation + 2);
LABEL_51:
                  LODWORD(v145) = v145 & 0xFFFFFF40 | v147 & 0xF | 0x40;
                  v54 = *(ADAPTER_DISPLAY **)(v18 + 2920);
                  v146 = *((_DWORD *)v54 + 104);
                  BYTE4(v145) = BYTE4(v145) & 0xF9 | (v149 >> 14) & 4 | 1;
                  if ( (j & a8[6]) != 0 )
                    v55 = ADAPTER_DISPLAY::IsVidPnSourceActive(v54, v37) == 0;
                  else
                    v55 = (j & a8[5]) == 0;
                  LOBYTE(v139) = v55;
                  v57 = VIDPN_MGR::CommitVidPn(
                          v151,
                          (unsigned __int64)v23,
                          v48,
                          (unsigned int)v37,
                          D3DKMDT_MCC_ENFORCE,
                          0,
                          v139,
                          (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v145,
                          &v140);
                  if ( v57 < 0 )
                  {
                    v56 = (unsigned int)v37;
                    WdLogSingleEntry4(2LL, (unsigned int)v37, *(int *)(v18 + 408), *(unsigned int *)(v18 + 404), v57);
                    goto LABEL_57;
                  }
LABEL_74:
                  v34 = (__int64 *)((char *)v23 + 96);
LABEL_75:
                  v35 = v143;
                  goto LABEL_76;
                }
              }
              v56 = (unsigned int)v37;
LABEL_57:
              v58 = (_QWORD *)WdLogNewEntry5_WdTrace(v51, v50, v52, v53);
              v58[3] = v56;
              v58[4] = *(int *)(v18 + 408);
              v58[5] = *(unsigned int *)(v18 + 404);
              ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
                (__int64)v156,
                (__int64)v23 + 152,
                2u,
                v59,
                v138,
                *((_QWORD *)v23 + 17));
              v60 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((struct DMMVIDPN *)((char *)v23 + 96), v37);
              if ( (int)(v60 + 0x80000000) >= 0 && v60 != -1071774919 )
LABEL_62:
                WdLogSingleEntry0(1LL);
LABEL_63:
              ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
                (ApplyPermissionWithinThisScope *)v156,
                v61,
                v62,
                v63);
            }
            v55 = (j & a8[3]) == 0;
            LODWORD(v145) = v145 & 0xFFFFFF50 | v147 & 0xF | 0x50;
            v65 = *(ADAPTER_DISPLAY **)(v18 + 2920);
            v146 = *((_DWORD *)v65 + 104);
            BYTE4(v145) = (BYTE4(v145) & 0xFC | ((j & a8[3]) == 0)) ^ ((v149 >> 14) ^ (BYTE4(v145) | v55)) & 4;
            if ( (j & a8[6]) != 0 )
              v66 = ADAPTER_DISPLAY::IsVidPnSourceActive(v65, v37) == 0;
            else
              v66 = (j & a8[5]) == 0;
            v67 = v151;
            LOBYTE(v139) = v66;
            v68 = VIDPN_MGR::CommitVidPn(
                    v151,
                    (unsigned __int64)v23,
                    0LL,
                    (unsigned int)v37,
                    D3DKMDT_MCC_IGNORE,
                    0,
                    v139,
                    (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v145,
                    &v140);
            if ( v68 < 0 )
              WdLogSingleEntry4(2LL, (unsigned int)v37, *(int *)(v18 + 408), *(unsigned int *)(v18 + 404), v68);
            if ( v155 && ((j & a8[3]) != 0 || *((_BYTE *)v67 + 520)) )
            {
              v69 = ADAPTER_DISPLAY::DestroyCddAllocations(*(PERESOURCE ***)(v18 + 2920), v155, v37);
              if ( v69 < 0 )
                WdLogSingleEntry4(2LL, (unsigned int)v37, *(int *)(v18 + 408), *(unsigned int *)(v18 + 404), v69);
            }
            goto LABEL_74;
          }
          ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
            (__int64)v156,
            (__int64)(v34 + 7),
            2u,
            v21,
            v138,
            v34[5]);
          v64 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((DMMVIDPNTOPOLOGY *)v34, v37);
          if ( ((v64 + 0x80000000) & 0x80000000) == 0 && v64 != -1071774919 )
            goto LABEL_62;
          goto LABEL_63;
        }
        WdLogSingleEntry4(2LL, (unsigned int)v37, *(int *)(v18 + 408), *(unsigned int *)(v18 + 404), v39);
        v35 = v143;
        v34 = (__int64 *)((char *)v23 + 96);
        *(_DWORD *)v143 |= j;
        a8[v37 + 22] = v40;
      }
LABEL_76:
      v36 = *(ADAPTER_DISPLAY **)(v18 + 2920);
      v37 = (unsigned int)(v37 + 1);
    }
    v70 = 0;
    for ( k = 1; ; k *= 2 )
    {
      v72 = *(_QWORD *)(v18 + 2920);
      v148 = k;
      v73 = *(_DWORD *)(v72 + 96);
      if ( v70 >= v73 )
      {
        v107 = 0LL;
        v108 = 1;
        if ( !v73 )
        {
LABEL_172:
          if ( a5 )
          {
            v123 = v161;
            v125 = a5;
            v126 = (unsigned int *)(v161 + 32);
            do
            {
              v127 = 1 << *a7;
              v128 = *v126;
              if ( (v127 & a8[39]) != 0 )
              {
                v129 = v128 & 0xF0FFFFFF | 0xC000000;
              }
              else if ( (v127 & *(_DWORD *)v35) != 0 )
              {
                v129 = v128 & 0xF0FFFFFF | 0xD000000;
              }
              else
              {
                v129 = v128 & 0xF0FFFFFF | 0xE000000;
              }
              v130 = v126;
              *v126 = v129;
              v131 = DxgkIncrementGlobalConnectionChangeId();
              v35 = v143;
              *((_QWORD *)v132 - 1) = v131;
              v134 = v133 & (a8[39] | a8[2]);
              v135 = v134 != 0 ? 1 : -1;
              *(unsigned int *)((char *)v130 + v123 + v136 + 16) &= ~1u;
              v132[16] = v135;
              v132[17] = -(v134 == 0);
              ++a7;
              v132[18] = v135;
              v126 = (unsigned int *)(v132 + 56);
              --v125;
            }
            while ( v125 );
          }
          v19 = v153;
          *v162 = (v140 != 0) | *v162 & 0xFFFFFFFE;
          v22 = 0;
          goto LABEL_181;
        }
        while ( 2 )
        {
          if ( (v108 & *(_DWORD *)v35) == 0 )
          {
            v109 = a8[5];
            if ( (v108 & v150) == 0 )
            {
              a8[18] |= v108 & ~v109;
              goto LABEL_171;
            }
            v110 = 0LL;
            if ( (v109 & v108) == 0 )
            {
              ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope((__int64)v156, v160, 2u, v21, v138, v34[5]);
              v113 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((DMMVIDPNTOPOLOGY *)v34, v107);
              v116 = 0x80000000LL;
              if ( (int)(v113 + 0x80000000) >= 0 && v113 != -1071774919 )
                WdLogSingleEntry0(1LL);
              v117 = v145;
              a8[18] |= v108;
              v112 = v117 & 0xFFFFFF0F | 0x40;
              ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
                (ApplyPermissionWithinThisScope *)v156,
                v116,
                v114,
                v115);
              goto LABEL_164;
            }
            if ( !*(_QWORD *)(v18 + 2928) )
              goto LABEL_158;
            v111 = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation((DXGADAPTER **)v72, v107);
            if ( !v111 || (*((_DWORD *)v111 + 1) & 0x10) != 0 )
            {
              *v158 |= v108;
              a8[18] |= v108;
              WdLogSingleEntry3(7LL, (unsigned int)v107, *(int *)(v18 + 408), *(unsigned int *)(v18 + 404));
            }
            else
            {
              v110 = (void *)*((_QWORD *)v111 + 2);
LABEL_158:
              v112 = v145 & 0xFFFFFF0F | 0x20;
LABEL_164:
              v118 = v147;
              *(_OWORD *)v163 = 0LL;
              if ( v147 == 4 )
              {
                DisplayLogSetMonitorPowerStage(0LL, 32LL, 0LL, v163);
                v118 = v147;
              }
              v119 = ((unsigned __int8)v112 ^ v118) & 0xF ^ v112;
              v120 = *(_QWORD *)(v18 + 2920);
              LODWORD(v145) = v119;
              v146 = *(_DWORD *)(v120 + 416);
              LOBYTE(v139) = 0;
              BYTE4(v145) = BYTE4(v145) & 0xF8 | (v149 >> 14) & 4;
              v121 = VIDPN_MGR::CommitVidPn(
                       v151,
                       (unsigned __int64)v23,
                       v110,
                       (unsigned int)v107,
                       D3DKMDT_MCC_ENFORCE,
                       1,
                       v139,
                       (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v145,
                       &v140);
              v122 = (int)v121;
              if ( v147 == 4 )
                DisplayLogSetMonitorPowerStage(0LL, 2147483680LL, v121, v163);
              if ( (int)v122 < 0 )
              {
                *(_DWORD *)v143 |= v108;
                a8[v107 + 22] = v122;
                WdLogSingleEntry4(2LL, (unsigned int)v107, *(int *)(v18 + 408), *(unsigned int *)(v18 + 404), v122);
              }
            }
            v35 = v143;
          }
LABEL_171:
          v72 = *(_QWORD *)(v18 + 2920);
          v34 = (__int64 *)((char *)v23 + 96);
          v107 = (unsigned int)(v107 + 1);
          v108 *= 2;
          if ( (unsigned int)v107 >= *(_DWORD *)(v72 + 96) )
            goto LABEL_172;
          continue;
        }
      }
      v74 = 1;
      v142 = 1;
      if ( (k & *(_DWORD *)v35) != 0 )
        goto LABEL_133;
      if ( (k & a8[2]) == 0 )
      {
LABEL_146:
        v34 = (__int64 *)((char *)v23 + 96);
        goto LABEL_147;
      }
      ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
        (__int64)v156,
        (__int64)v23 + 152,
        2u,
        v21,
        v138,
        *((_QWORD *)v23 + 17));
      v75 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((struct DMMVIDPN *)((char *)v23 + 96), v70);
      v78 = 0x80000000LL;
      if ( (int)(v75 + 0x80000000) >= 0 && v75 != -1071774919 )
        WdLogSingleEntry0(1LL);
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
        (ApplyPermissionWithinThisScope *)v156,
        v78,
        v76,
        v77);
      for ( m = 0; ; ++m )
      {
        if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((DMMVIDPN *)((char *)v152 + 96), (char *)v70, m, &v144) < 0 )
          WdLogSingleEntry0(1LL);
        v80 = v144;
        if ( v144 == -1 )
          break;
        if ( v74 )
        {
          v81 = ADAPTER_DISPLAY::GetDisplayModeInfo(*(ADAPTER_DISPLAY **)(v18 + 2920), v70);
          *(_OWORD *)v164 = *(_OWORD *)v81;
          *(_OWORD *)&v164[16] = *((_OWORD *)v81 + 1);
          *(_OWORD *)&v164[32] = *((_OWORD *)v81 + 2);
          *(_OWORD *)&v164[48] = *((_OWORD *)v81 + 3);
          *(_OWORD *)&v164[64] = *((_OWORD *)v81 + 4);
          v82 = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPN *)((char *)v152 + 96), v70, v80);
          if ( (int)DMMVIDPNPRESENTPATH::GetDisplayModeFromPath(
                      v82,
                      ((v147 - 1) & 0xFFFFFFFD) == 0,
                      (struct _D3DDDI_RATIONAL *)v164) < 0 )
            WdLogSingleEntry0(1LL);
          v142 = 0;
        }
        v83 = v153;
        if ( DMMVIDPN::SerializeFunctionalPathDrivingTarget(
               v152,
               v80,
               (struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *const)v153) < 0 )
          WdLogSingleEntry0(1LL);
        v85 = VIDPN_MGR::AddUnpinnedPathToVidPnTopology(
                (struct _KTHREAD **)v151,
                (struct DMMVIDPN *)((char *)v23 + 96),
                v83,
                v84);
        v86 = (void *)v85;
        if ( v85 < 0 )
        {
LABEL_104:
          v91 = v80;
          v92 = (char *)v23 + 96;
LABEL_105:
          v93 = v70;
          WdLogSingleEntry4(2LL, v70, v91, v92, v86);
          k = v148;
          goto LABEL_129;
        }
        v74 = v142;
      }
      v87 = 0;
      v34 = (__int64 *)((char *)v23 + 96);
      while ( 1 )
      {
        if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((DMMVIDPNTOPOLOGY *)v34, (char *)v70, v87, &v144) < 0 )
          WdLogSingleEntry0(1LL);
        v80 = v144;
        if ( v144 == -1 )
          break;
        if ( DMMVIDPN::SerializeFunctionalPathDrivingTarget(
               v152,
               v144,
               (struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *const)v153) < 0 )
          WdLogSingleEntry0(1LL);
        v88 = VIDPN_MGR::PinModalityOnPathInVidPnTopology(
                (struct _KTHREAD **)v151,
                (struct DMMVIDPNTOPOLOGY *const)v34,
                (const struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *)v153);
        v86 = (void *)v88;
        if ( v88 < 0 )
          goto LABEL_104;
        DMMVIDPNTOPOLOGY::GetPathFromTarget((DMMVIDPN *)((char *)v152 + 96), v80);
        v34 = (__int64 *)((char *)v23 + 96);
        PathFromTarget = DMMVIDPNTOPOLOGY::GetPathFromTarget((struct DMMVIDPN *)((char *)v23 + 96), v80);
        DMMVIDPNPRESENTPATH::SetGammaRamp(PathFromTarget, *(const struct DXGK_GAMMA_RAMP **)(v90 + 184));
        ++v87;
      }
      v94 = v155;
      if ( v155 )
      {
        if ( v157 && !DXGADAPTER::UsingDelayCreateCddAllocation((DXGADAPTER *)v18) )
          break;
      }
      if ( !*(_QWORD *)(v18 + 2928) )
        goto LABEL_112;
      CddPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(*(DXGADAPTER ***)(v18 + 2920), v70);
      if ( CddPrimaryAllocation && (*((_DWORD *)CddPrimaryAllocation + 1) & 0x10) == 0 )
        goto LABEL_120;
      k = v148;
      v93 = v70;
      if ( (v148 & a8[8]) == 0 )
      {
        *v158 |= v148;
        WdLogSingleEntry3(7LL, v70, *(int *)(v18 + 408), *(unsigned int *)(v18 + 404));
        goto LABEL_124;
      }
      LODWORD(v86) = -1071775482;
      WdLogSingleEntry3(2LL, v70, *(int *)(v18 + 408), *(unsigned int *)(v18 + 404));
LABEL_129:
      if ( !v141 )
      {
        DxgkLogCodePointPacket(0x61u, v70, (unsigned int)v86, 0, *(_QWORD *)(v18 + 404));
        v35 = v143;
        v34 = (__int64 *)((char *)v23 + 96);
        v141 = 1;
        goto LABEL_29;
      }
      *(_DWORD *)v143 |= k;
      a8[v93 + 22] = (_DWORD)v86;
      if ( (_DWORD)v86 == -1071774920 || (_DWORD)v86 == -1071774976 )
        v140 = 1;
LABEL_133:
      v34 = (__int64 *)((char *)v23 + 96);
      ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
        (__int64)v156,
        (__int64)v23 + 152,
        2u,
        v21,
        v138,
        *((_QWORD *)v23 + 17));
      v102 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((struct DMMVIDPN *)((char *)v23 + 96), v70);
      v105 = 0x80000000LL;
      if ( (int)(v102 + 0x80000000) >= 0 && v102 != -1071774919 )
        WdLogSingleEntry0(1LL);
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
        (ApplyPermissionWithinThisScope *)v156,
        v105,
        v103,
        v104);
LABEL_124:
      v35 = v143;
LABEL_147:
      ++v70;
    }
    CddAllocations = ADAPTER_DISPLAY::CreateCddAllocations(
                       *(ADAPTER_DISPLAY **)(v18 + 2920),
                       v94,
                       v70,
                       (const struct _D3DKMT_DISPLAYMODE *)v164,
                       v157);
    v86 = (void *)CddAllocations;
    if ( CddAllocations < 0 )
    {
      v92 = (char *)*(unsigned int *)(v18 + 404);
      v91 = *(int *)(v18 + 408);
      goto LABEL_105;
    }
    CddPrimaryAllocation = ADAPTER_DISPLAY::GetCddPrimaryAllocation(*(ADAPTER_DISPLAY **)(v18 + 2920), v70, 0);
    if ( *(_QWORD *)(v18 + 2928) )
LABEL_120:
      v86 = (void *)*((_QWORD *)CddPrimaryAllocation + 2);
    else
LABEL_112:
      v86 = 0LL;
    v97 = 32;
    k = v148;
    if ( v87 <= 1 )
      v97 = 48;
    LODWORD(v145) = v145 & 0xFFFFFF00 | v147 & 0xF | v97;
    v98 = *(ADAPTER_DISPLAY **)(v18 + 2920);
    v146 = *((_DWORD *)v98 + 104);
    BYTE4(v145) = BYTE4(v145) & 0xF8 | (v149 >> 14) & 4;
    if ( (v148 & a8[6]) != 0 )
      v99 = ADAPTER_DISPLAY::IsVidPnSourceActive(v98, v70) == 0;
    else
      v99 = (v148 & a8[5]) == 0;
    v100 = v151;
    LOBYTE(v139) = v99;
    v101 = VIDPN_MGR::CommitVidPn(
             v151,
             (unsigned __int64)v23,
             v86,
             v70,
             D3DKMDT_MCC_ENFORCE,
             0,
             v139,
             (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v145,
             &v140);
    LODWORD(v86) = v101;
    if ( v101 >= 0 )
    {
      if ( (k & a8[5]) == 0 )
      {
        if ( !*((_QWORD *)v100 + 1) )
          WdLogSingleEntry0(1LL);
        v106 = *((_QWORD *)v100 + 1);
        if ( *(int *)(*(_QWORD *)(v106 + 16) + 2820LL) < 1200 )
          goto LABEL_144;
        if ( !v106 )
          WdLogSingleEntry0(1LL);
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v100 + 1) + 16LL) + 216LL) + 64LL)
                                   + 40LL)
                       + 28LL) < 0x300Au )
LABEL_144:
          v150 |= k;
      }
      v35 = v143;
      goto LABEL_146;
    }
    v93 = v70;
    WdLogSingleEntry4(2LL, v70, *(int *)(v18 + 408), *(unsigned int *)(v18 + 404), v101);
    if ( v155 )
      ADAPTER_DISPLAY::DestroyCddAllocations(*(PERESOURCE ***)(v18 + 2920), v155, v70);
    goto LABEL_129;
  }
  WdLogSingleEntry3(2LL, *(int *)(v18 + 408), *(unsigned int *)(v18 + 404), ClientVidPnFromLastClientCommitedVidPn);
LABEL_181:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v154, 0LL);
LABEL_183:
  operator delete(v19);
  return v22;
}
