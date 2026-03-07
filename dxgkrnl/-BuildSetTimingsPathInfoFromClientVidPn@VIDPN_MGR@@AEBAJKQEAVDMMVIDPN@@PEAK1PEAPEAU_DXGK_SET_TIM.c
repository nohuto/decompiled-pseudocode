__int64 __fastcall VIDPN_MGR::BuildSetTimingsPathInfoFromClientVidPn(
        VIDPN_MGR *this,
        int a2,
        VIDPN_MGR **a3,
        unsigned int *a4,
        unsigned int *a5,
        struct _DXGK_SET_TIMING_PATH_INFO **a6,
        unsigned int **a7,
        struct D3DKMT_VIDPN_SOURCE_MASKS *a8,
        unsigned int **a9)
{
  struct D3DKMT_VIDPN_SOURCE_MASKS *v9; // rsi
  unsigned int v12; // ebx
  int v13; // r14d
  int v14; // r12d
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  struct _DXGK_SET_TIMING_PATH_INFO *v16; // rdx
  _DWORD *v17; // r9
  DMMVIDPNTOPOLOGY *v18; // r13
  DMMVIDPNTOPOLOGY *v19; // r15
  __int64 v20; // rcx
  __int64 v21; // rax
  bool v22; // zf
  unsigned int v23; // eax
  unsigned __int64 v24; // rdi
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // kr00_8
  __int64 v27; // rbx
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  VIDPN_MGR *v30; // r11
  __int64 v31; // r8
  DMMVIDPNTOPOLOGY *v32; // rax
  char *v33; // rdx
  unsigned int v34; // eax
  DMMVIDEOPRESENTTARGET *v35; // r15
  __int64 v36; // rcx
  unsigned int v37; // eax
  _DWORD *v38; // r14
  struct _D3DDDI_RATIONAL v39; // r13
  int v40; // r12d
  int v41; // eax
  __int64 v42; // r15
  int TargetLinkTrainingStatus; // eax
  int v44; // r11d
  int v45; // edi
  bool v46; // bl
  __int64 v47; // rdx
  __int64 v48; // rcx
  int v49; // eax
  unsigned int v50; // edx
  char v51; // al
  int *v52; // rdi
  char v53; // bl
  int v54; // eax
  struct DMMVIDPNTARGETMODESET *v55; // rax
  int v56; // edi
  int v57; // r12d
  _QWORD *v58; // rdi
  DMMVIDPNPRESENTPATH *v59; // rdi
  __int64 v60; // r13
  unsigned int v61; // ebx
  __int64 v62; // rax
  int v63; // esi
  int MostImportantVidPnPathTargetsFromSource; // eax
  unsigned __int8 IsVidPnSourceActive; // al
  int v66; // r13d
  int v67; // ecx
  int v68; // ecx
  struct _DXGK_SET_TIMING_PATH_INFO *v69; // rcx
  int v70; // eax
  int v71; // edx
  int v72; // r12d
  int v73; // ecx
  int v74; // edx
  unsigned int *v75; // r10
  unsigned int *v76; // rax
  struct DMMVIDPNPRESENTPATH *v78; // rax
  unsigned int v79; // edx
  int v80; // r12d
  __int64 v81; // rcx
  __int64 v82; // r10
  unsigned int *v83; // r9
  unsigned int *v84; // r8
  unsigned int v85; // ecx
  __int64 v86; // rax
  __int64 v87; // r13
  __int64 v88; // rbx
  __int64 v89; // r12
  unsigned int v90; // edx
  VIDPN_MGR *v91; // rax
  int v92; // edx
  unsigned int v93; // r14d
  int v94; // r15d
  int v95; // eax
  DMMVIDPNTOPOLOGY *v96; // rax
  __int64 v97; // rax
  struct DMMVIDPNPRESENTPATH *PathFromTarget; // rax
  int v99; // r11d
  struct DMMVIDPNPRESENTPATH *v100; // r13
  int v101; // ebx
  __int64 v102; // rdx
  __int64 v103; // rcx
  int v104; // eax
  unsigned int v105; // edx
  char v106; // al
  DXGADAPTER ***v107; // r15
  DMMVIDPNPRESENTPATH *v108; // r15
  DMMVIDPNPRESENTPATH *v109; // rcx
  const struct DXGK_GAMMA_RAMP **v110; // rcx
  unsigned __int8 v111; // al
  int v112; // r12d
  _DWORD *v113; // r14
  int v114; // ebx
  __int64 v115; // rcx
  int v116; // eax
  DMMVIDEOPRESENTTARGET *v117; // r13
  unsigned int v118; // edx
  char v119; // al
  unsigned int *v120; // rax
  bool IsVidPnVirtualRefreshRateMatch; // al
  struct _D3DDDI_RATIONAL v122; // rdi
  int v123; // eax
  unsigned int v124; // edx
  char v125; // al
  int v126; // r15d
  int v127; // edx
  int *v128; // r14
  unsigned int v129; // ecx
  int NumPathsFromSource; // eax
  unsigned int *v131; // rax
  int v132; // ecx
  int v133; // eax
  void *v134; // rcx
  int v135; // r10d
  unsigned int v136; // edx
  int v137; // [rsp+38h] [rbp-D0h]
  unsigned int v138; // [rsp+3Ch] [rbp-CCh]
  unsigned __int8 v139; // [rsp+40h] [rbp-C8h]
  int v140; // [rsp+44h] [rbp-C4h]
  int v141; // [rsp+48h] [rbp-C0h]
  unsigned int v142; // [rsp+4Ch] [rbp-BCh]
  int v143; // [rsp+50h] [rbp-B8h]
  int v144; // [rsp+54h] [rbp-B4h]
  bool v145; // [rsp+58h] [rbp-B0h]
  int v146; // [rsp+5Ch] [rbp-ACh]
  int v147; // [rsp+60h] [rbp-A8h]
  int v148; // [rsp+64h] [rbp-A4h]
  int v149; // [rsp+64h] [rbp-A4h]
  int v150; // [rsp+68h] [rbp-A0h]
  int v151; // [rsp+6Ch] [rbp-9Ch]
  int v152; // [rsp+6Ch] [rbp-9Ch]
  int v153; // [rsp+70h] [rbp-98h]
  int v154; // [rsp+74h] [rbp-94h]
  int v155; // [rsp+74h] [rbp-94h]
  int v156; // [rsp+78h] [rbp-90h]
  char *v157; // [rsp+80h] [rbp-88h]
  unsigned int *v158; // [rsp+88h] [rbp-80h]
  struct _D3DDDI_RATIONAL v159; // [rsp+90h] [rbp-78h] BYREF
  int v160; // [rsp+98h] [rbp-70h]
  int v161; // [rsp+9Ch] [rbp-6Ch]
  int v162; // [rsp+A0h] [rbp-68h]
  DMMVIDPNPRESENTPATH *v163; // [rsp+A8h] [rbp-60h]
  int v164; // [rsp+B0h] [rbp-58h]
  int v165; // [rsp+B4h] [rbp-54h]
  int v166; // [rsp+B8h] [rbp-50h]
  __int64 v167; // [rsp+C0h] [rbp-48h]
  __int64 v168; // [rsp+C8h] [rbp-40h]
  unsigned int *v169; // [rsp+D0h] [rbp-38h]
  struct DMMVIDPNTARGETMODESET *v170; // [rsp+D8h] [rbp-30h] BYREF
  DMMVIDPNTOPOLOGY *v171; // [rsp+E0h] [rbp-28h]
  DMMVIDEOPRESENTTARGET *v172; // [rsp+E8h] [rbp-20h]
  unsigned __int64 v173; // [rsp+F0h] [rbp-18h] BYREF
  unsigned int v174; // [rsp+F8h] [rbp-10h]
  DMMVIDPNTOPOLOGY *v175; // [rsp+100h] [rbp-8h]
  struct DMMVIDPNTARGETMODESET *v176; // [rsp+108h] [rbp+0h] BYREF
  struct DMMVIDPNTARGETMODESET *v177; // [rsp+110h] [rbp+8h] BYREF
  const struct DMMVIDPN *v178; // [rsp+118h] [rbp+10h] BYREF
  __int128 v179; // [rsp+120h] [rbp+18h]
  VIDPN_MGR *v180; // [rsp+188h] [rbp+80h] BYREF
  int v181; // [rsp+190h] [rbp+88h]
  VIDPN_MGR **v182; // [rsp+198h] [rbp+90h]
  unsigned int *v183; // [rsp+1A0h] [rbp+98h]

  v183 = a4;
  v182 = a3;
  v181 = a2;
  v180 = this;
  v9 = a8;
  v12 = 0;
  v13 = 0;
  v138 = 0;
  v14 = 0;
  v158 = 0LL;
  v144 = 0;
  v161 = 0;
  v148 = 0;
  v137 = 0;
  v143 = 0;
  v151 = 0;
  v141 = 0;
  v166 = 0;
  v162 = 0;
  v153 = 0;
  v154 = 0;
  v156 = 0;
  v164 = 0;
  v140 = 0;
  v147 = 0;
  v146 = 0;
  v165 = 0;
  v179 = 0LL;
  if ( !*((_QWORD *)this + 1) )
    WdLogSingleEntry0(1LL);
  v167 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  if ( a3 && a3[6] != this )
  {
    v12 = -1073741811;
    WdLogSingleEntry2(2LL, a3, -1073741811LL);
    return v12;
  }
  ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(this);
  v178 = ClientCommittedVidPnRef;
  v18 = (DMMVIDPNTOPOLOGY *)v16;
  if ( ClientCommittedVidPnRef )
    v18 = (const struct DMMVIDPN *)((char *)ClientCommittedVidPnRef + 96);
  v175 = v18;
  v19 = (DMMVIDPNTOPOLOGY *)((unsigned __int64)(a3 + 12) & -(__int64)(a3 != 0LL));
  LODWORD(v20) = (_DWORD)v16;
  v171 = v19;
  if ( v18 )
    v20 = *((_QWORD *)v18 + 5);
  LODWORD(v21) = (_DWORD)v16;
  if ( v19 )
    v21 = *((_QWORD *)v19 + 5);
  v22 = (_DWORD)v20 + (_DWORD)v21 == 0;
  v23 = v20 + v21;
  v174 = v23;
  if ( v22 )
  {
    v120 = a5;
    *v17 = (_DWORD)v16;
    *v120 = (unsigned int)v16;
    *a6 = v16;
    *a7 = &v16->VidPnTargetId;
    if ( a9 )
      *a9 = &v16->VidPnTargetId;
    goto LABEL_91;
  }
  v24 = v23;
  v26 = v23;
  v25 = 56LL * v23;
  if ( !is_mul_ok(v26, 0x38uLL) )
    v25 = -1LL;
  v168 = operator new[](v25, 0x4E506456u, 256LL);
  v27 = v168;
  if ( !v168 )
  {
    v12 = -1073741801;
    WdLogSingleEntry2(6LL, v24, -1073741801LL);
    goto LABEL_91;
  }
  v28 = 4 * v24;
  if ( !is_mul_ok(v24, 4uLL) )
    v28 = -1LL;
  v29 = operator new[](v28, 0x4E506456u, 256LL);
  v30 = 0LL;
  v169 = (unsigned int *)v29;
  v31 = v29;
  if ( !v29 )
  {
    v12 = -1073741801;
    WdLogSingleEntry2(6LL, v24, -1073741801LL);
    goto LABEL_212;
  }
  if ( v18 )
  {
    v32 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)v18 + 3);
    v176 = (DMMVIDPNTOPOLOGY *)((char *)v18 + 24);
    if ( v32 != (DMMVIDPNTOPOLOGY *)((char *)v18 + 24) )
    {
      v33 = (char *)v32 - 8;
      v34 = 0;
      v157 = v33;
      if ( !v33 )
        goto LABEL_40;
      v35 = 0LL;
      while ( 1 )
      {
        v36 = v34;
        v37 = *(_DWORD *)(*((_QWORD *)v33 + 11) + 24LL);
        *(_DWORD *)(v31 + 4 * v36) = v37;
        v38 = (_DWORD *)(v27 + 56 * v36);
        v39 = (struct _D3DDDI_RATIONAL)*((_QWORD *)v33 + 12);
        v40 = 1 << v37;
        v144 |= 1 << v37;
        v142 = v37;
        v41 = 1 << v37;
        v172 = v35;
        v42 = *(_QWORD *)(*(_QWORD *)&v39 + 96LL);
        v159 = v39;
        v163 = (DMMVIDPNPRESENTPATH *)v42;
        if ( (*(_BYTE *)(v42 + 556) & 0x40) != 0 )
          v41 = 0;
        v140 |= v41;
        v146 |= *(_BYTE *)(*(_QWORD *)(v42 + 536) + 172LL) != 0 ? v40 : 0;
        TargetLinkTrainingStatus = DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus(v42, 0LL);
        v160 = 4;
        v45 = v44;
        v46 = TargetLinkTrainingStatus == 13;
        v145 = TargetLinkTrainingStatus == 13;
        v170 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*(DMMVIDPNTARGET **)&v39);
        v48 = *((_QWORD *)v170 + 18);
        if ( v48 )
        {
          v45 = *(_DWORD *)(v48 + 132);
          v160 = *(_DWORD *)(v48 + 136);
        }
        auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v170, v47);
        if ( !v171 )
        {
          v49 = *(_DWORD *)(*(_QWORD *)&v39 + 24LL);
          v38[3] &= 0xFFFFFFFC;
          *v38 = v49;
          v38[3] ^= (v38[3] ^ (4 * DMMVIDEOPRESENTTARGET::NeedToBeActive((DMMVIDEOPRESENTTARGET *)v42))) & 4;
          v50 = v38[3] & 0xFFFFFFF7 | (*(_BYTE *)(v42 + 415) == 0 ? 8 : 0);
          v38[3] = v50;
          v51 = v50 ^ (16 * *(_BYTE *)(v42 + 416));
          v38[2] = v45;
          v52 = v38 + 1;
          v38[3] = v50 ^ v51 & 0x10;
          v38[1] = v160;
          if ( (DMMVIDEOPRESENTTARGET::NeedToBeActive((DMMVIDEOPRESENTTARGET *)v42) == 0) == (*(_BYTE *)(v42 + 418) == 0) )
          {
            if ( v46
              || (v181 & 0x4000) != 0
              || ADAPTER_DISPLAY::NeedCommitVidPnOnModeChange(*(DXGADAPTER ***)(v167 + 2920), v142)
              || *(_BYTE *)(v42 + 414) )
            {
              v137 |= v40;
              v38[3] = v38[3] & 0xFFFFFFFC | (!v46 + 1);
            }
          }
          else
          {
            v153 |= v40;
            if ( v46 )
              v38[3] = v38[3] & 0xFFFFFFFC | 1;
          }
          v53 = v142;
          v35 = (DMMVIDEOPRESENTTARGET *)v158;
LABEL_32:
          v30 = 0LL;
          goto LABEL_33;
        }
        v97 = *((_QWORD *)v157 + 12);
        LODWORD(v170) = !v46 + 1;
        PathFromTarget = DMMVIDPNTOPOLOGY::GetPathFromTarget(v171, *(_DWORD *)(v97 + 24));
        v150 = 4;
        v100 = PathFromTarget;
        v101 = 0;
        if ( !PathFromTarget )
          goto LABEL_185;
        v177 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)PathFromTarget + 12));
        v103 = *((_QWORD *)v177 + 18);
        if ( v103 )
        {
          v101 = *(_DWORD *)(v103 + 132);
          v150 = *(_DWORD *)(v103 + 136);
        }
        auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v177, v102);
        if ( *(_DWORD *)(*((_QWORD *)v100 + 11) + 24LL) != v142 )
        {
          v99 = (int)v170;
LABEL_185:
          v122 = v159;
          *v38 = *(_DWORD *)(*(_QWORD *)&v159 + 24LL);
          if ( !v100 )
            v99 = 3;
          v38[3] = v99 | v38[3] & 0xFFFFFFFC;
          if ( v100 )
            v123 = DMMVIDEOPRESENTTARGET::NeedToBeActive((DMMVIDEOPRESENTTARGET *)v42);
          else
            v123 = 0;
          v38[3] ^= (v38[3] ^ (4 * v123)) & 4;
          v124 = v38[3] & 0xFFFFFFF7 | (*(_BYTE *)(v42 + 415) == 0 ? 8 : 0);
          v38[3] = v124;
          v125 = *(_BYTE *)(v42 + 416);
          v126 = v137;
          v38[2] = v101;
          v38[3] = v124 ^ ((unsigned __int8)v124 ^ (unsigned __int8)(16 * v125)) & 0x10;
          v127 = v40 | v143;
          v128 = v38 + 1;
          v143 |= v40;
          *v128 = v150;
          if ( v100 )
          {
            v129 = *(_DWORD *)(*((_QWORD *)v100 + 11) + 24LL);
            v126 = (1 << v129) | v137;
            v169[v138] = v129;
            v137 = v126;
            v143 = (1 << v129) | v127;
            DMMVIDPNPRESENTPATH::UpdateGammaRamp(v100);
          }
          v173 = 0LL;
          v53 = v142;
          NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v171, v142, &v173);
          v30 = 0LL;
          if ( NumPathsFromSource < 0 )
          {
            if ( NumPathsFromSource != -1071774919 || v173 )
            {
              WdLogSingleEntry0(1LL);
              v30 = 0LL;
              goto LABEL_196;
            }
LABEL_201:
            v166 |= v40;
            v52 = v128;
            v35 = (DMMVIDEOPRESENTTARGET *)v158;
LABEL_33:
            v13 = v137;
            goto LABEL_34;
          }
LABEL_196:
          if ( !v173 )
            goto LABEL_201;
          v148 |= v40;
          v137 = v40 | v126;
          if ( a9 )
          {
            v35 = (DMMVIDEOPRESENTTARGET *)v158;
            if ( !v158 )
            {
              v131 = (unsigned int *)operator new[](0x400uLL, 0x4E506456u, 256LL);
              v158 = v131;
              v35 = (DMMVIDEOPRESENTTARGET *)v131;
              if ( !v131 )
              {
                v12 = -1073741801;
                WdLogSingleEntry3(6LL, *(int *)(v167 + 408), *(unsigned int *)(v167 + 404), -1073741801LL);
LABEL_212:
                v134 = (void *)v168;
LABEL_229:
                operator delete(v134);
                goto LABEL_91;
              }
              memset(v131, -1, 0x400uLL);
              v30 = 0LL;
            }
          }
          else
          {
            v52 = v128;
            v158 = (unsigned int *)v172;
            v35 = v172;
            if ( !v172 )
              goto LABEL_33;
            v122 = v159;
          }
          v132 = 0;
          while ( *((_DWORD *)v35 + 16 * v142 + v132) != -1 )
          {
            if ( (unsigned int)++v132 >= 0x10 )
            {
              WdLogSingleEntry0(1LL);
              v52 = v128;
              goto LABEL_32;
            }
          }
          v133 = *(_DWORD *)(*(_QWORD *)&v122 + 24LL);
          v52 = v128;
          *((_DWORD *)v35 + 16 * v142 + v132) = v133;
          goto LABEL_33;
        }
        v104 = *(_DWORD *)(*(_QWORD *)&v159 + 24LL);
        v38[3] &= 0xFFFFFFFC;
        *v38 = v104;
        v38[3] ^= (v38[3] ^ (4 * DMMVIDEOPRESENTTARGET::NeedToBeActive((DMMVIDEOPRESENTTARGET *)v42))) & 4;
        v105 = v38[3] & 0xFFFFFFF7 | (*(_BYTE *)(v42 + 415) == 0 ? 8 : 0);
        v38[3] = v105;
        v106 = v105 ^ (16 * *(_BYTE *)(v42 + 416));
        v38[2] = v101;
        v38[3] = v105 ^ v106 & 0x10;
        v38[1] = v150;
        v159 = (struct _D3DDDI_RATIONAL)(v38 + 1);
        if ( (unsigned int)DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus(v42, 0LL) == 13 )
          v137 |= v40;
        if ( (DMMVIDEOPRESENTTARGET::NeedToBeActive((DMMVIDEOPRESENTTARGET *)v42) == 0) != (*(_BYTE *)(v42 + 418) == 0) )
          v153 |= v40;
        if ( *(_BYTE *)(v167 + 2753) && (v181 & 0x400000) != 0 )
        {
          v107 = (DXGADAPTER ***)(v167 + 2920);
        }
        else
        {
          v107 = (DXGADAPTER ***)(v167 + 2920);
          if ( !*(_BYTE *)(*(_QWORD *)(v167 + 2920) + 289LL) )
            goto LABEL_136;
        }
        v139 = 1;
        if ( !ADAPTER_DISPLAY::IsVidPnSourceOwnerDwm(*v107, v142) )
LABEL_136:
          v139 = 0;
        if ( v145 || (v181 & 0x4000) != 0 )
        {
          v108 = v163;
LABEL_140:
          v38[3] = (unsigned int)v170 | v38[3] & 0xFFFFFFFC;
LABEL_141:
          v109 = (DMMVIDPNPRESENTPATH *)v157;
          v13 = v40 | v137;
          v137 |= v40;
          goto LABEL_142;
        }
        v111 = ADAPTER_DISPLAY::NeedCommitVidPnOnModeChange(*v107, v142);
        v108 = v163;
        if ( v111
          || *((_BYTE *)v163 + 414)
          || *((_BYTE *)v163 + 420)
          || !DMMVIDPNPRESENTPATH::IsVidPnPathModeMatch((DMMVIDPNPRESENTPATH *)v157, v100, v139) )
        {
          goto LABEL_140;
        }
        if ( v45 != v101 || v160 != v150 )
          goto LABEL_141;
        v109 = (DMMVIDPNPRESENTPATH *)v157;
        if ( *((_DWORD *)v157 + 29) == *((_DWORD *)v100 + 29) )
        {
          if ( *((_BYTE *)v180 + 520) )
          {
            v13 = v40 | v137;
            v137 |= v40;
            goto LABEL_142;
          }
        }
        else
        {
          v151 |= v40;
        }
        v13 = v137;
LABEL_142:
        if ( (v40 & v13) != 0 )
        {
          v110 = (const struct DXGK_GAMMA_RAMP **)v157;
        }
        else
        {
          IsVidPnVirtualRefreshRateMatch = DMMVIDPNPRESENTPATH::IsVidPnVirtualRefreshRateMatch(v109, v100);
          v110 = (const struct DXGK_GAMMA_RAMP **)v157;
          if ( IsVidPnVirtualRefreshRateMatch )
          {
            if ( *((_DWORD *)v157 + 26) != *((_DWORD *)v100 + 26) || *((_WORD *)v157 + 54) != *((_WORD *)v100 + 54) )
              v154 |= v40;
          }
          else
          {
            v156 |= v40;
          }
        }
        if ( *((_BYTE *)v108 + 413) )
        {
          v164 |= v40;
          *((_BYTE *)v108 + 413) = 0;
        }
        if ( v45 == v101 && v160 == v150 )
          DMMVIDPNPRESENTPATH::SetGammaRamp(v100, v110[23]);
        else
          DMMVIDPNPRESENTPATH::UpdateGammaRamp(v100);
        v52 = (int *)v159;
        v30 = 0LL;
        v53 = v142;
        v35 = (DMMVIDEOPRESENTTARGET *)v158;
LABEL_34:
        if ( *v52 == 12 || (v54 = 0, *v52 == 32) )
          v54 = 1;
        v165 |= v54 << v53;
        v55 = (struct DMMVIDPNTARGETMODESET *)*((_QWORD *)v157 + 1);
        v33 = (char *)v55 - 8;
        if ( v55 == v176 )
          v33 = 0LL;
        v34 = v138 + 1;
        v157 = v33;
        ++v138;
        if ( !v33 )
        {
          v19 = v171;
          v14 = v143;
          v18 = v175;
          goto LABEL_40;
        }
        v27 = v168;
        v31 = (__int64)v169;
      }
    }
  }
  v34 = 0;
LABEL_40:
  if ( v19 )
  {
    v58 = (_QWORD *)*((_QWORD *)v19 + 3);
    if ( v58 == (_QWORD *)((char *)v19 + 24) )
      v59 = 0LL;
    else
      v59 = (DMMVIDPNPRESENTPATH *)(v58 - 1);
    if ( v59 )
    {
      v163 = (DMMVIDPNPRESENTPATH *)*((_QWORD *)&v179 + 1);
      do
      {
        v180 = v30;
        v86 = *((_QWORD *)v59 + 11);
        v87 = *((_QWORD *)v59 + 12);
        v88 = *(unsigned int *)(v86 + 24);
        v89 = *(_QWORD *)(v87 + 96);
        v90 = *(_DWORD *)(v86 + 24);
        v172 = (DMMVIDEOPRESENTTARGET *)v89;
        if ( (unsigned int)DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v19, v90, (unsigned __int64 *)&v180)
          || (v91 = v180) == 0LL )
        {
          WdLogSingleEntry0(1LL);
          v91 = v180;
        }
        v92 = *(_DWORD *)(v89 + 556);
        v93 = v91 != (VIDPN_MGR *)1;
        v94 = 1 << v88;
        v161 |= 1 << v88;
        v95 = 1 << v88;
        if ( (v92 & 0x40) != 0 )
          v95 = 0;
        v140 |= v95;
        v146 |= *(_BYTE *)(*(_QWORD *)(v89 + 536) + 172LL) != 0 ? v94 : 0;
        if ( (v94 & v144) == 0 )
          v141 |= v94;
        if ( (v92 & 0x100) != 0 && (v147 & 2) == 0 )
        {
          if ( !v163 || DMMVIDPNPRESENTPATH::IsVidPnPathSyncLockMatch(v163, v59) )
          {
            if ( !*((_DWORD *)v9 + 60) )
            {
              v163 = v59;
              *((_DWORD *)v9 + 61) = v88;
              *((_DWORD *)v9 + 62) = 1;
              v159 = 0LL;
              DMMVIDPNPRESENTPATH::GetTargetModeRefreshRate(v59, &v159);
              *((_DWORD *)v9 + 63) = 1000000 * (unsigned __int64)v159.Denominator / v159.Numerator;
            }
            *((_DWORD *)v9 + v88 + 40) = *((_DWORD *)v9 + v88 + 40) & 0xFFFFFFF8 | 1;
            *((_DWORD *)v9 + 60) |= v94;
          }
          else
          {
            v147 |= 2u;
            DxgkLogCodePointPacket(0x65u, v88, 1u, v93, *(_QWORD *)(v167 + 404));
          }
        }
        LODWORD(v30) = 0;
        if ( v175 && DMMVIDPNTOPOLOGY::GetPathFromTarget(v175, *(_DWORD *)(v87 + 24)) )
        {
          v13 = v137;
        }
        else
        {
          v112 = 4;
          v169[v138] = v88;
          v113 = (_DWORD *)(v168 + 56LL * v138);
          v114 = (int)v30;
          ++v138;
          v176 = DMMVIDPNTARGET::AcquireCofuncModeSetRef((DMMVIDPNTARGET *)v87);
          v115 = *((_QWORD *)v176 + 18);
          if ( v115 )
          {
            v114 = *(_DWORD *)(v115 + 132);
            v112 = *(_DWORD *)(v115 + 136);
          }
          auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v176, 0LL);
          v116 = *(_DWORD *)(v87 + 24);
          v117 = v172;
          *v113 = v116;
          v113[3] = v113[3] & 0xFFFFFFFC | 1;
          v113[3] ^= (v113[3] ^ (4 * DMMVIDEOPRESENTTARGET::NeedToBeActive(v117))) & 4;
          v143 |= v94;
          v118 = v113[3] & 0xFFFFFFF7 | (*((_BYTE *)v117 + 415) == 0 ? 8 : 0);
          v113[3] = v118;
          v119 = v118 ^ (16 * *((_BYTE *)v117 + 416));
          v113[2] = v114;
          v113[1] = v112;
          v113[3] = v118 ^ v119 & 0x10;
          v13 = v94 | v137;
          v137 |= v94;
          DMMVIDPNPRESENTPATH::UpdateGammaRamp(v59);
          v30 = 0LL;
          *((_BYTE *)v117 + 413) = 0;
        }
        v96 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)v59 + 1);
        v19 = v171;
        v59 = (DMMVIDPNTOPOLOGY *)((char *)v96 - 8);
        if ( v96 == (DMMVIDPNTOPOLOGY *)((char *)v171 + 24) )
          v59 = v30;
      }
      while ( v59 );
    }
    v56 = v161;
    v57 = v140;
  }
  else
  {
    v56 = v144;
    v19 = v18;
    v138 = v34;
    v143 = v14;
    v57 = v140;
  }
  v60 = v167;
  v61 = (unsigned int)v30;
  v62 = *(_QWORD *)(v167 + 2920);
  if ( *(_DWORD *)(v62 + 96) > (unsigned int)v30 )
  {
    v63 = v162;
    while ( 1 )
    {
      LODWORD(v180) = (_DWORD)v30;
      MostImportantVidPnPathTargetsFromSource = GetMostImportantVidPnPathTargetsFromSource(
                                                  v19,
                                                  v61,
                                                  (unsigned int *const)&v180);
      v30 = 0LL;
      if ( MostImportantVidPnPathTargetsFromSource >= 0 )
      {
        if ( (_DWORD)v180 != -1 )
        {
          v78 = DMMVIDPNTOPOLOGY::GetPathFromTarget(v19, (int)v180);
          IsVidPnSourceActive = DMMVIDEOPRESENTTARGET::NeedToBeActive(*(DMMVIDEOPRESENTTARGET **)(*((_QWORD *)v78 + 12)
                                                                                                + 96LL));
LABEL_51:
          v30 = 0LL;
          if ( IsVidPnSourceActive )
            v63 |= 1 << v61;
        }
      }
      else
      {
        if ( MostImportantVidPnPathTargetsFromSource == -1071774919 )
        {
          IsVidPnSourceActive = ADAPTER_DISPLAY::IsVidPnSourceActive(*(ADAPTER_DISPLAY **)(v60 + 2920), v61);
          goto LABEL_51;
        }
        WdLogSingleEntry0(1LL);
        v30 = 0LL;
      }
      v62 = *(_QWORD *)(v60 + 2920);
      if ( ++v61 >= *(_DWORD *)(v62 + 96) )
      {
        v162 = v63;
        v9 = a8;
        break;
      }
    }
  }
  if ( v182 != (VIDPN_MGR **)v30 )
  {
    v79 = (unsigned int)v30;
    if ( *(_DWORD *)(v62 + 96) > (unsigned int)v30 )
    {
      v80 = v147;
      do
      {
        v81 = *((_DWORD *)v9 + v79 + 40) & 7;
        if ( (*((_DWORD *)v9 + v79 + 40) & 7) != 0
          && (((1 << (*((_BYTE *)v9 + 4 * v79 + 160) & 7)) & v80) != 0
           || (v135 = *((_DWORD *)v9 + 4 * v81 + 56)) != 0 && ((v135 - 1) & v135) == 0) )
        {
          *((_DWORD *)v9 + v79 + 40) &= 0xFFFFFFF8;
          v80 |= 1 << v81;
          *((_DWORD *)v9 + 4 * v81 + 56) = 0;
          *((_DWORD *)v9 + 4 * v81 + 58) = 0;
        }
        ++v79;
      }
      while ( v79 < *(_DWORD *)(*(_QWORD *)(v60 + 2920) + 96LL) );
      v57 = v140;
    }
    if ( v138 )
    {
      v82 = v138;
      v83 = v169;
      v84 = (unsigned int *)(v168 + 12);
      do
      {
        v85 = *((_DWORD *)v9 + *v83 + 40) & 7;
        if ( v85 )
        {
          v136 = (32 * v85) | *v84 & 0xFFFFFF1F;
          *v84 = v136;
          *v84 = v136 ^ ((unsigned __int16)v136 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v9 + 4 * v85 + 58) << 8)) & 0xF00;
        }
        ++v83;
        v84 += 14;
        --v82;
      }
      while ( v82 );
    }
  }
  v66 = v166;
  v149 = ~v166 & v148;
  if ( (v149 & v13) != v149 )
    WdLogSingleEntry0(1LL);
  if ( (v66 & v13) != 0 )
    WdLogSingleEntry0(1LL);
  v152 = ~v13 & v151;
  if ( (v66 & v152) != 0 )
    WdLogSingleEntry0(1LL);
  if ( (v143 & v66) != v66 )
    WdLogSingleEntry0(1LL);
  if ( (v149 & v143) != v149 )
    WdLogSingleEntry0(1LL);
  if ( (v143 & (v13 | v66)) != v143 )
    WdLogSingleEntry0(1LL);
  v67 = v141;
  if ( (v13 & v141) != v141 )
  {
    WdLogSingleEntry0(1LL);
    v67 = v141;
  }
  if ( (v143 & v67) != v67 )
  {
    WdLogSingleEntry0(1LL);
    v67 = v141;
  }
  if ( (v67 & v144) != 0 )
    WdLogSingleEntry0(1LL);
  if ( (v66 & v56) != 0 )
    WdLogSingleEntry0(1LL);
  if ( (v144 | v141) != (v56 | v66) )
    WdLogSingleEntry0(1LL);
  v68 = v156;
  if ( (v56 & v156) != v156 )
  {
    WdLogSingleEntry0(1LL);
    v68 = v156;
  }
  if ( (v68 & v13) != 0 )
    WdLogSingleEntry0(1LL);
  v155 = ~v13 & v154;
  *v183 = v174;
  v69 = (struct _DXGK_SET_TIMING_PATH_INFO *)v168;
  *a5 = v138;
  *a6 = v69;
  *a7 = v169;
  if ( *(_DWORD *)v9 && *(_DWORD *)v9 != v144 )
    WdLogSingleEntry0(1LL);
  v70 = *((_DWORD *)v9 + 1);
  *(_DWORD *)v9 = v144;
  if ( v70 && v70 != v56 )
    WdLogSingleEntry0(1LL);
  v22 = (v181 & 0x10000) == 0;
  v71 = v164;
  *((_DWORD *)v9 + 10) = v152;
  *((_DWORD *)v9 + 4) = v141;
  *((_DWORD *)v9 + 14) = v149;
  *((_DWORD *)v9 + 5) = v162;
  *((_DWORD *)v9 + 6) = v153;
  *((_DWORD *)v9 + 12) = v155;
  *((_DWORD *)v9 + 13) = v156;
  *((_DWORD *)v9 + 39) = v146;
  *((_DWORD *)v9 + 64) = v165;
  *((_DWORD *)v9 + 1) = v56;
  *((_DWORD *)v9 + 2) = v13;
  *((_DWORD *)v9 + 7) = v143;
  *((_DWORD *)v9 + 3) = v66;
  *((_DWORD *)v9 + 17) = v71;
  *((_DWORD *)v9 + 21) = 0;
  *((_DWORD *)v9 + 18) = 0;
  if ( v22 )
  {
    v72 = ~(v144 | v56) | v57;
    v73 = v71 | v143 | *((_DWORD *)v9 + 15) | ((v143 & v72) != 0 ? v72 : 0);
    v74 = v13 & v72;
    *((_DWORD *)v9 + 15) = v73;
    if ( (((v13 & v72) - 1) & v13 & v72) != 0 )
    {
      *((_DWORD *)v9 + 15) = v72 | v73;
    }
    else if ( v74 )
    {
      *((_DWORD *)v9 + 15) = v73 | v72 & ~v74;
    }
  }
  else
  {
    *((_DWORD *)v9 + 15) = -1;
  }
  FillFailedStatus(v9, 0);
  v76 = v158;
  if ( a9 )
  {
    *a9 = v158;
    v76 = v75;
  }
  v12 = (unsigned int)v75;
  if ( v76 )
  {
    v134 = v76;
    goto LABEL_229;
  }
LABEL_91:
  auto_rc<DMMVIDPN const>::reset((__int64 *)&v178, 0LL);
  return v12;
}
