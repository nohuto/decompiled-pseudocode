bool __fastcall SepCommonAccessCheckEx(
        PSECURITY_SUBJECT_CONTEXT SubjectContext,
        char a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        char a6,
        char a7)
{
  _DWORD *v11; // rdx
  _DWORD *v12; // rcx
  _DWORD *v13; // rax
  _QWORD *v14; // rax
  unsigned int v15; // r13d
  PACCESS_TOKEN v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // eax
  int *v20; // r8
  int v21; // eax
  int v22; // ebx
  int *v23; // rax
  _QWORD *ClientToken; // rsi
  __int64 v25; // rcx
  int v26; // eax
  int v27; // ebx
  __int64 v28; // rdx
  _DWORD *v29; // rbx
  int v30; // eax
  char v31; // r14
  char v32; // cl
  int v33; // eax
  char v34; // cl
  char IsOwner; // al
  unsigned int v36; // edx
  unsigned int v37; // r9d
  char v38; // cl
  char v39; // r8
  unsigned int v40; // edx
  __int64 v41; // rcx
  PACCESS_TOKEN v42; // r9
  PACCESS_TOKEN PrimaryToken; // r8
  __int64 v44; // r8
  char v45; // r13
  __int64 v46; // r14
  int v47; // r14d
  int v48; // edx
  int *v49; // r8
  int v50; // r13d
  int *v51; // rcx
  _DWORD *v52; // r8
  int v53; // edx
  int *v54; // r8
  int *v55; // r9
  int v56; // ecx
  int v57; // edx
  int v58; // ecx
  bool v60; // zf
  char v61; // r14
  __int64 v62; // rax
  __int64 v63; // r8
  __int16 v64; // ax
  __int64 v65; // rax
  __int64 v66; // rax
  int v67; // ecx
  int v68; // edx
  int v69; // r13d
  __int64 v70; // r9
  int v71; // ecx
  int v72; // ecx
  _QWORD *v73; // rax
  int v74; // r14d
  __int64 v75; // rsi
  __int64 v76; // rax
  int v77; // ecx
  __int64 v78; // rcx
  __int64 v79; // rdx
  __int64 v80; // rax
  __int64 v81; // rax
  void *ScopedPolicySid; // rax
  int Cap; // eax
  __int64 v84; // rdx
  int v85; // r10d
  unsigned int v86; // r9d
  unsigned int **v87; // rcx
  unsigned int *v88; // rcx
  unsigned int v89; // eax
  _DWORD *v90; // rcx
  void *Pool2; // rax
  unsigned int v92; // r8d
  __int64 v93; // r11
  __int64 v94; // rax
  char v95; // r13
  __int64 v96; // rcx
  int v97; // r8d
  int v98; // eax
  int v99; // ecx
  _QWORD *v100; // rax
  __int64 v101; // r9
  __int64 v102; // rdx
  __int64 v103; // r10
  int v104; // eax
  int v105; // ecx
  _QWORD *v106; // rax
  __int64 v107; // r9
  __int64 v108; // rcx
  __int64 v109; // rdx
  __int64 v110; // r8
  int *v111; // rcx
  unsigned int v112; // r9d
  int v113; // r10d
  int v114; // ecx
  unsigned int v115; // edx
  PACCESS_TOKEN v116; // r9
  PACCESS_TOKEN v117; // r8
  char v118; // al
  unsigned int v119; // r8d
  int v120; // ecx
  unsigned int v121; // edx
  int v122; // ecx
  int v123; // eax
  int v124; // ecx
  unsigned int v125; // ecx
  unsigned int v126; // edx
  PACCESS_TOKEN v127; // r9
  PACCESS_TOKEN v128; // r8
  __int64 v129; // rdx
  unsigned int v130; // r9d
  unsigned int v131; // eax
  __int64 v132; // rdx
  unsigned int v133; // r9d
  int v134; // ecx
  int v135; // edx
  int *v136; // rbx
  int v137; // esi
  unsigned int i; // r13d
  int v139; // ecx
  unsigned int v140; // r8d
  int v141; // eax
  int v142; // eax
  int v143; // ecx
  bool v144; // cl
  _DWORD *v145; // rax
  _DWORD *v146; // rax
  __int64 v147; // r9
  int v148; // r9d
  int v149; // r10d
  int v150; // esi
  __int64 v151; // rbx
  char v152; // r14
  _DWORD *v153; // [rsp+38h] [rbp-F8h]
  _DWORD *v154; // [rsp+38h] [rbp-F8h]
  _DWORD *v155; // [rsp+38h] [rbp-F8h]
  unsigned int v156; // [rsp+40h] [rbp-F0h]
  unsigned int *v157; // [rsp+50h] [rbp-E0h]
  _QWORD *v158; // [rsp+58h] [rbp-D8h]
  int *v159; // [rsp+60h] [rbp-D0h]
  __int64 v160; // [rsp+68h] [rbp-C8h]
  int v161; // [rsp+70h] [rbp-C0h]
  int v162; // [rsp+70h] [rbp-C0h]
  char v163; // [rsp+78h] [rbp-B8h]
  bool v165; // [rsp+B1h] [rbp-7Fh] BYREF
  char v166; // [rsp+B2h] [rbp-7Eh]
  char v167; // [rsp+B3h] [rbp-7Dh]
  char v168; // [rsp+B4h] [rbp-7Ch]
  char v169; // [rsp+B5h] [rbp-7Bh]
  char v170; // [rsp+B6h] [rbp-7Ah]
  unsigned int v171; // [rsp+B8h] [rbp-78h]
  int v172; // [rsp+BCh] [rbp-74h]
  char v173; // [rsp+C0h] [rbp-70h]
  char v174; // [rsp+C1h] [rbp-6Fh]
  unsigned int v175; // [rsp+C4h] [rbp-6Ch]
  int v176; // [rsp+C8h] [rbp-68h]
  int v177; // [rsp+CCh] [rbp-64h]
  bool v178; // [rsp+D0h] [rbp-60h] BYREF
  int v179; // [rsp+D4h] [rbp-5Ch]
  int v180; // [rsp+D8h] [rbp-58h]
  PVOID v181; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v182; // [rsp+E8h] [rbp-48h]
  unsigned int v183; // [rsp+F0h] [rbp-40h] BYREF
  int v184; // [rsp+F4h] [rbp-3Ch]
  PVOID P; // [rsp+F8h] [rbp-38h]
  int v186; // [rsp+100h] [rbp-30h] BYREF
  int v187; // [rsp+104h] [rbp-2Ch]
  __int64 v188; // [rsp+108h] [rbp-28h]
  unsigned int v189; // [rsp+110h] [rbp-20h] BYREF
  int v190; // [rsp+114h] [rbp-1Ch] BYREF
  __int64 v191; // [rsp+118h] [rbp-18h]
  int v192; // [rsp+120h] [rbp-10h] BYREF
  PVOID Object; // [rsp+128h] [rbp-8h]
  int v194; // [rsp+130h] [rbp+0h] BYREF
  int v195; // [rsp+138h] [rbp+8h] BYREF
  _DWORD *v196; // [rsp+140h] [rbp+10h]
  __int128 v197; // [rsp+148h] [rbp+18h] BYREF
  __int64 v198; // [rsp+158h] [rbp+28h]
  _OWORD SecurityDescriptor[2]; // [rsp+160h] [rbp+30h] BYREF
  __int64 v200; // [rsp+180h] [rbp+50h]
  _OWORD v201[2]; // [rsp+188h] [rbp+58h] BYREF
  __int64 v202; // [rsp+1A8h] [rbp+78h]
  unsigned int v203; // [rsp+1B0h] [rbp+80h] BYREF
  __int128 v204; // [rsp+1B4h] [rbp+84h]
  __int64 v205; // [rsp+1C4h] [rbp+94h]
  __int128 v206; // [rsp+1D0h] [rbp+A0h] BYREF
  __int128 v207; // [rsp+1E0h] [rbp+B0h]
  __int128 v208; // [rsp+1F0h] [rbp+C0h]
  _BYTE v209[128]; // [rsp+200h] [rbp+D0h] BYREF
  _BYTE v210[128]; // [rsp+280h] [rbp+150h] BYREF
  _BYTE v211[128]; // [rsp+300h] [rbp+1D0h] BYREF

  v205 = 0LL;
  v191 = 0LL;
  v189 = 0;
  v200 = 0LL;
  v202 = 0LL;
  v194 = 0;
  v182 = 0LL;
  v168 = 0;
  v181 = 0LL;
  v197 = 0LL;
  v186 = 0;
  v204 = 0LL;
  v165 = 0;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v178 = 0;
  memset(v201, 0, sizeof(v201));
  memset(v209, 0, sizeof(v209));
  memset(v210, 0, sizeof(v210));
  memset(v211, 0, sizeof(v211));
  v169 = 0;
  v170 = 0;
  v190 = -1;
  v195 = -1;
  if ( !a4 )
    return 0;
  if ( *(_DWORD *)a4 != 40 )
    return 0;
  v11 = *(_DWORD **)(a4 + 16);
  if ( !v11 )
    return 0;
  if ( !SubjectContext
    || !a3
    || *(_DWORD *)a3 != 56
    || (v12 = *(_DWORD **)(a4 + 8)) == 0LL
    || (v13 = *(_DWORD **)(a3 + 8)) != 0LL && (*v13 != 16 || (v13[1] & 0xFFFFFFF8) != 0)
    || a5 && *a5 != 96 )
  {
    *v11 = -1073741811;
    return 0;
  }
  *v12 = 0;
  **(_DWORD **)(a4 + 16) = -1073741790;
  v14 = *(_QWORD **)(a4 + 32);
  v183 = 0;
  v192 = -1073741790;
  if ( v14 )
    *v14 = 0LL;
  v15 = *(_DWORD *)(a3 + 16) & ~*(_DWORD *)(a3 + 20) & 0xFDFFFFFF;
  AuthzBasepSetAccessReasons(v15, 0, 0, *(_QWORD *)(a4 + 24), 1);
  if ( a6 == (_BYTE)v16 )
  {
    v71 = *(_DWORD *)(a3 + 16);
    if ( (v71 & 0x2000000) != 0 )
    {
      **(_DWORD **)(a4 + 8) = *(_DWORD *)(*(_QWORD *)(a3 + 32) + 12LL);
      **(_DWORD **)(a4 + 8) |= *(_DWORD *)(a3 + 16) & 0xFDFFFFFF;
      **(_DWORD **)(a4 + 8) |= *(_DWORD *)(a3 + 20);
    }
    else
    {
      **(_DWORD **)(a4 + 8) = *(_DWORD *)(a3 + 20) | v71;
    }
    **(_DWORD **)(a4 + 16) = 0;
    return 1;
  }
  v18 = *(_QWORD *)(a3 + 8);
  if ( !v18 || *(PACCESS_TOKEN *)(v18 + 8) == v16 )
    goto LABEL_106;
  if ( SubjectContext->ClientToken != v16 && SubjectContext->ImpersonationLevel < SecurityImpersonation )
  {
    **(_DWORD **)(a4 + 16) = -1073741659;
    return 0;
  }
  if ( *(_DWORD *)(a3 + 16) == (_DWORD)v16 )
  {
    v72 = *(_DWORD *)(a3 + 20);
    if ( v72 )
    {
      **(_DWORD **)(a4 + 8) = v72;
      **(_DWORD **)(a4 + 16) = 0;
      v73 = *(_QWORD **)(a4 + 32);
      if ( v73 )
        *v73 = 0LL;
      return 1;
    }
LABEL_106:
    **(_DWORD **)(a4 + 16) = -1073741790;
    return 0;
  }
  v19 = *(_DWORD *)(a4 + 4);
  if ( v19 != 1 && v19 != *(_DWORD *)(a3 + 40) )
  {
    **(_DWORD **)(a4 + 16) = -1073741811;
    return 0;
  }
  if ( !a2 )
    SeLockSubjectContext(SubjectContext);
  **(_DWORD **)(a4 + 16) = SepTrustLevelCheck(
                             v17,
                             *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL),
                             SubjectContext,
                             0LL,
                             0LL,
                             0,
                             &v190);
  v20 = *(int **)(a4 + 16);
  if ( *v20 < 0 )
  {
    if ( !a2 )
      SeUnlockSubjectContext(SubjectContext);
    return 0;
  }
  v21 = -1073741790;
  v22 = v190;
  if ( (v190 & *(_DWORD *)(a3 + 16) & 0xFDFFFFFF) == (*(_DWORD *)(a3 + 16) & 0xFDFFFFFF) )
    v21 = 0;
  *v20 = v21;
  v23 = *(int **)(a4 + 16);
  ClientToken = SubjectContext->ClientToken;
  Object = SubjectContext->ClientToken;
  if ( *v23 < 0 )
  {
    if ( !ClientToken )
      Object = SubjectContext->PrimaryToken;
    v74 = *(_DWORD *)(a3 + 20) | *(_DWORD *)(a3 + 16);
    v75 = *(_QWORD *)(a3 + 8);
    SepLocateTokenTrustLevel(SubjectContext);
    SeLogAccessFailure(Object, *(_QWORD *)(v75 + 8), v74, 0);
    if ( !a2 )
      SeUnlockSubjectContext(SubjectContext);
    AuthzBasepSetAccessReasons(v15 & ~v22, 9437184, 0, *(_QWORD *)(a4 + 24), 0);
    return 0;
  }
  if ( !ClientToken )
    ClientToken = SubjectContext->PrimaryToken;
  v25 = *(_QWORD *)(a3 + 8);
  Object = ClientToken;
  if ( (*(_DWORD *)(v25 + 4) & 4) == 0 )
  {
    **(_DWORD **)(a4 + 16) = SepFilterCheck(
                               *(_QWORD *)(v25 + 8),
                               (unsigned int)&v181,
                               (_DWORD)ClientToken,
                               0,
                               (__int64)&v195);
    v20 = *(int **)(a4 + 16);
    if ( *v20 < 0 )
      goto LABEL_124;
    v26 = -1073741790;
    v27 = v195;
    if ( (v195 & *(_DWORD *)(a3 + 16) & 0xFDFFFFFF) == (*(_DWORD *)(a3 + 16) & 0xFDFFFFFF) )
      v26 = 0;
    *v20 = v26;
    if ( **(int **)(a4 + 16) < 0 )
    {
      SeLogAccessFailure(
        ClientToken,
        *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL),
        *(_BYTE *)(a3 + 20) | *(_BYTE *)(a3 + 16),
        0);
      if ( !a2 )
        SeUnlockSubjectContext(SubjectContext);
      AuthzBasepSetAccessReasons(v15 & v27, 10485760, 0, *(_QWORD *)(a4 + 24), 0);
      return 0;
    }
  }
  v28 = *(_QWORD *)(a3 + 8);
  v29 = ClientToken + 25;
  v30 = *(_DWORD *)(v28 + 4);
  v31 = v30 & 1;
  if ( (v30 & 2) != 0 )
  {
    v60 = (*v29 & 0x2000) == 0;
    LOBYTE(v20) = 1;
    v196 = ClientToken + 25;
    if ( !v60 )
    {
      v32 = 1;
      goto LABEL_38;
    }
  }
  else
  {
    LOBYTE(v20) = 0;
  }
  v32 = 0;
  v196 = ClientToken + 25;
LABEL_38:
  v174 = v32;
  if ( !SepAllowAccessUponLogoff && (*v29 & 0x20) == 0 )
  {
    v76 = ClientToken[27];
    if ( v76 )
    {
      if ( (*(_DWORD *)(v76 + 32) & 0x20) != 0 )
      {
        **(_DWORD **)(a4 + 8) = 0;
        **(_DWORD **)(a4 + 16) = -1073741790;
LABEL_124:
        if ( !a2 )
          SeUnlockSubjectContext(SubjectContext);
        return 0;
      }
    }
  }
  LOBYTE(v184) = 0;
  if ( !v32 )
  {
    **(_DWORD **)(a4 + 16) = SepMandatoryIntegrityCheck(
                               *(_QWORD *)(a3 + 32),
                               *(_QWORD *)(v28 + 8),
                               (_DWORD)v20,
                               (_DWORD)ClientToken,
                               0,
                               (__int64)&v197);
    if ( **(int **)(a4 + 16) < 0 )
      goto LABEL_124;
    v33 = SepMandatoryToDiscretionary(&v197, *(unsigned int *)(a3 + 16));
    *v20 = v33;
    if ( **(int **)(a4 + 16) < 0 )
    {
      if ( (*v29 & 0x4000) == 0 || HIDWORD(v197) > 0x2000 )
      {
        if ( !a2 )
          SeUnlockSubjectContext(SubjectContext);
        AuthzBasepSetAccessReasons(v15 & ~(_DWORD)v197, 3145728, 0, *(_QWORD *)(a4 + 24), 0);
        return 0;
      }
      LOBYTE(v184) = 1;
    }
    else if ( (*(_DWORD *)(a3 + 16) & 0x2000000) != 0 && (*v29 & 0x4000) != 0 )
    {
      v77 = (unsigned __int8)v184;
      if ( HIDWORD(v197) <= 0x2000 )
        v77 = 1;
      v184 = v77;
    }
  }
  if ( !SepRmEnforceCap )
    goto LABEL_45;
  v78 = *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL);
  v79 = *(unsigned __int16 *)(v78 + 2);
  if ( (v79 & 0x10) == 0 || KeGetCurrentIrql() >= 2u )
    goto LABEL_45;
  if ( (v79 & 0x8000u) == 0LL )
  {
    v81 = *(_QWORD *)(v78 + 24);
  }
  else
  {
    v80 = *(unsigned int *)(v78 + 12);
    if ( !(_DWORD)v80 )
    {
      v191 = 0LL;
LABEL_45:
      v34 = 0;
      goto LABEL_46;
    }
    v81 = v78 + v80;
  }
  v191 = v81;
  if ( !v81 )
    goto LABEL_45;
  ScopedPolicySid = (void *)SepGetScopedPolicySid(v81, v79, v20);
  if ( !ScopedPolicySid )
    goto LABEL_45;
  Cap = SepRmReferenceFindCap(ScopedPolicySid);
  v84 = v182;
  v34 = 1;
  if ( Cap < 0 )
    v84 = SepRmDefaultCap;
  v182 = v84;
  v168 = 1;
LABEL_46:
  if ( v31 && (*(_DWORD *)(a3 + 16) & 0x2060000) == 0 && !v34 )
  {
    v39 = 0;
    v37 = *(_DWORD *)(a3 + 16);
    v166 = 0;
    goto LABEL_49;
  }
  IsOwner = SepTokenIsOwner(ClientToken, *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL), v20);
  v36 = *(_DWORD *)(a3 + 16);
  v37 = v36;
  v166 = IsOwner;
  v38 = IsOwner;
  v39 = IsOwner;
  if ( !IsOwner )
    goto LABEL_48;
  v166 = IsOwner;
  if ( (v36 & 0x2060000) == 0 )
    goto LABEL_48;
  v60 = v31 == 0;
  v61 = IsOwner;
  if ( v60 )
  {
    v62 = *(_QWORD *)(a3 + 8);
    v166 = v38;
    v63 = *(_QWORD *)(v62 + 8);
    v64 = *(_WORD *)(v63 + 2);
    if ( (v64 & 4) != 0 )
    {
      if ( v64 >= 0 )
      {
        v66 = *(_QWORD *)(v63 + 32);
        v166 = v38;
      }
      else
      {
        v65 = *(unsigned int *)(v63 + 16);
        if ( (_DWORD)v65 )
          v66 = v63 + v65;
        else
          v66 = 0LL;
      }
    }
    else
    {
      v66 = 0LL;
    }
    v175 = v36;
    v171 = v36;
    if ( !(unsigned __int8)RtlpOwnerAcesPresent(0LL, v66) )
    {
      v36 = v175;
      goto LABEL_83;
    }
    v39 = v166;
    v37 = v171;
LABEL_48:
    v34 = v168;
    goto LABEL_49;
  }
LABEL_83:
  v67 = *(_DWORD *)(a3 + 20);
  v166 = v61;
  if ( (v36 & 0x2000000) != 0 )
  {
    v68 = 393216;
    v69 = 393216;
    *(_DWORD *)(a3 + 20) = v67 | 0x60000;
  }
  else
  {
    v68 = v36 & 0x60000;
    v166 = v61;
    *(_DWORD *)(a3 + 20) = v67 | v68;
    v69 = v15 & 0x60000;
  }
  v70 = *(_QWORD *)(a4 + 24);
  v171 = v68;
  AuthzBasepSetAccessReasons(v69, 0x400000, 0, v70, 0);
  v34 = v168;
  *(_DWORD *)(a3 + 16) &= 0xFFF9FFFF;
  if ( v34 )
    v39 = v166;
  else
    v166 = v39;
  v37 = v171;
LABEL_49:
  v40 = *(_DWORD *)(a3 + 16);
  if ( !v40 && !v34 && ((*v29 & 0x2000) != 0 || !v37) )
  {
    if ( !a2 )
      SeUnlockSubjectContext(SubjectContext);
    **(_DWORD **)(a4 + 8) = *(_DWORD *)(a3 + 20);
    **(_DWORD **)(a4 + 16) = 0;
    return 1;
  }
  v41 = *(_QWORD *)(a3 + 8);
  v203 = v37;
  v42 = SubjectContext->ClientToken;
  v163 = v39;
  PrimaryToken = SubjectContext->PrimaryToken;
  LOBYTE(v161) = 0;
  v160 = *(_QWORD *)(a4 + 24);
  v159 = *(int **)(a4 + 16);
  v158 = *(_QWORD **)(a4 + 32);
  v157 = *(unsigned int **)(a4 + 8);
  v156 = *(_DWORD *)(a3 + 20);
  v153 = *(_DWORD **)(a3 + 32);
  v204 = 0LL;
  v205 = 0LL;
  v45 = SepAccessCheckEx(
          *(_QWORD *)(v41 + 8),
          0LL,
          (__int64)PrimaryToken,
          (__int64)v42,
          v40,
          0LL,
          0,
          v153,
          v156,
          a6,
          v157,
          v158,
          v159,
          v160,
          v161,
          v163,
          a7,
          (__int64)&v203,
          (__int64)&v181,
          &v165);
  v46 = v182;
  v167 = v45;
  if ( !SepRmEnforceCap || (v187 = **(_DWORD **)(a4 + 16), v187 < 0) || !v168 )
  {
    v47 = -1073741790;
LABEL_52:
    if ( v174 || (v48 = *(_DWORD *)(a3 + 16), (v48 & 0x2000000) == 0) )
    {
      if ( (_BYTE)v184 && !*(_WORD *)((char *)&v205 + 1) )
      {
        if ( (*v29 & 0x3000000) != 0x3000000 || DWORD2(v204) )
        {
          **(_DWORD **)(a4 + 16) = -1073741790;
          **(_DWORD **)(a4 + 8) = 0;
          v146 = *(_DWORD **)(a4 + 8);
          v147 = *(_QWORD *)(a4 + 24);
          v165 = 0;
          AuthzBasepSetAccessReasons(~*v146, 3145728, 0, v147, 0);
        }
        else
        {
          v145 = *(_DWORD **)(a4 + 16);
          BYTE3(v205) = 1;
          *v145 = 0;
          **(_DWORD **)(a4 + 8) = *(_DWORD *)(a3 + 16);
          v165 = 1;
        }
      }
    }
    else
    {
      v49 = *(int **)(a4 + 8);
      v50 = *v49;
      if ( !(_BYTE)v184 || !*(_WORD *)((char *)&v205 + 1) && (*v29 & 0x3000000) != 0x3000000 )
      {
        SepConstrainByMandatory((unsigned int)&v197, v48, (_DWORD)v49, *(_QWORD *)(a4 + 16), (__int64)&v165, 0);
        AuthzBasepSetAccessReasons(v50 & ~**(_DWORD **)(a4 + 8), 3145728, 0, *(_QWORD *)(a4 + 24), 0);
      }
      v45 = v167;
    }
    if ( (*(_DWORD *)(a3 + 16) & 0x2000000) != 0 )
    {
      v51 = *(int **)(a4 + 8);
      v52 = *(_DWORD **)(a4 + 16);
      v169 = 0;
      v53 = *v51;
      if ( v190 != -1 )
      {
        v148 = v190 & v53;
        if ( (v190 & v53) != v53 )
        {
          v169 = 1;
          *v51 = v148;
          if ( v148 )
          {
            *v52 = 0;
            v165 = 1;
          }
          else
          {
            *v52 = -1073741790;
            v165 = 0;
          }
        }
      }
      AuthzBasepSetAccessReasons(v53 & ~**(_DWORD **)(a4 + 8), 9437184, 0, *(_QWORD *)(a4 + 24), 0);
      v54 = *(int **)(a4 + 8);
      v55 = *(int **)(a4 + 16);
      v56 = *(_DWORD *)(a3 + 16);
      v57 = *v54;
      v170 = 0;
      if ( v195 != -1 )
      {
        v149 = v195 & v57;
        if ( (v195 & v57) != v57 )
        {
          v170 = 1;
          *v54 = v149;
          if ( (v56 & 0x2000000) != 0 )
          {
            if ( v149 )
              v47 = 0;
            *v55 = v47;
            v165 = v149 != 0;
          }
          else
          {
            *v55 = -1073741790;
            v165 = *v54 != 0;
          }
        }
      }
      AuthzBasepSetAccessReasons(v57 & ~**(_DWORD **)(a4 + 8), 10485760, 0, *(_QWORD *)(a4 + 24), 0);
    }
    if ( ClientToken )
    {
      if ( v169 || v170 || (v58 = DWORD2(v204)) == 0 && (*v29 & 0x4000) != 0 && (**(int **)(a4 + 16) < 0 || BYTE3(v205)) )
      {
        v150 = *(_DWORD *)(a3 + 20) | *(_DWORD *)(a3 + 16);
        v151 = *(_QWORD *)(a3 + 8);
        v152 = **(_DWORD **)(a4 + 16) >= 0;
        SepLocateTokenTrustLevel(SubjectContext);
        SeLogAccessFailure(Object, *(_QWORD *)(v151 + 8), v150, v152);
        v58 = DWORD2(v204);
        v29 = v196;
      }
      if ( **(int **)(a4 + 16) < 0
        && !v58
        && (*v29 & 0x4000) != 0
        && (unsigned __int8)SepLpacCausedAccessFailure(&v203, *(unsigned int *)(a3 + 16)) )
      {
        SepLogLpacAccessFailure();
      }
    }
    if ( v168 && *(_QWORD *)(v182 + 32) )
      SepRmDereferenceCapTable();
    if ( !a2 )
      SeUnlockSubjectContext(SubjectContext);
    SepFreeResourceInfo(v181);
    return v45 && v165;
  }
  v85 = **(_DWORD **)(a4 + 8);
  P = 0LL;
  v86 = 0;
  LOBYTE(v179) = 0;
  v175 = 0;
  v87 = *(unsigned int ***)(a4 + 32);
  v177 = v85;
  v171 = v85;
  if ( v87 )
  {
    v88 = *v87;
    if ( v88 )
    {
      v89 = *v88;
      if ( *v88 )
      {
        v90 = v88 + 3;
        v44 = v89;
        do
        {
          if ( (int)v90[1] < 0 )
          {
            if ( *(v90 - 1) == SeSecurityPrivilege.LowPart && *v90 == SeSecurityPrivilege.HighPart )
            {
              v86 |= 0x1000000u;
            }
            else if ( *(_QWORD *)(v90 - 1) == SeTakeOwnershipPrivilege || *(_QWORD *)(v90 - 1) == SeRelabelPrivilege )
            {
              v86 |= 0x80000u;
            }
          }
          v90 += 3;
          --v44;
        }
        while ( v44 );
        v175 = v86;
      }
    }
  }
  LOBYTE(v44) = 1;
  v180 = v85;
  v173 = SepAdtAuditThisEventWithContext(129LL, 1LL, v44, SubjectContext);
  if ( v173 )
  {
    Pool2 = (void *)ExAllocatePool2(64LL, 8LL * *(unsigned int *)(v46 + 60), 1095984467LL);
    P = Pool2;
    if ( !Pool2 )
    {
      if ( !a2 )
        SeUnlockSubjectContext(SubjectContext);
      if ( *(_QWORD *)(v46 + 32) )
        SepRmDereferenceCapTable();
      **(_DWORD **)(a4 + 8) = 0;
      **(_DWORD **)(a4 + 16) = -1073741801;
      SepFreeResourceInfo(v181);
      return 0;
    }
    memset(Pool2, 0, 8LL * *(unsigned int *)(v46 + 60));
  }
  v92 = *(_DWORD *)(v46 + 60);
  v93 = 0LL;
  v94 = 0LL;
  v47 = -1073741790;
  v176 = 0;
  v172 = v92;
  if ( !v92 )
  {
    v112 = v171;
    v113 = v171;
    v111 = (int *)P;
LABEL_247:
    if ( v173 )
    {
      if ( v112 != v113 )
      {
        v135 = v113 & (v113 ^ v112);
        v180 = v135;
        if ( v92 )
        {
          v136 = v111;
          v137 = v112 & (v113 ^ v112);
          for ( i = 0; i < v92; ++i )
          {
            if ( !v137 && !v135 )
              break;
            if ( *((_BYTE *)v136 + 4) )
            {
              v139 = *v136;
              v140 = i << 24;
              v141 = v135 ^ *v136;
              v176 = *v136;
              v142 = v135 & v141;
              v179 = v142;
              if ( v142 )
              {
                AuthzBasepSetAccessReasons(v142, 0x80000000, v140, (unsigned int)v210, 0);
                v142 = v179;
                v139 = v176;
                v135 = v180;
              }
              v143 = v137 & v139;
              v180 = ~v142 & v135;
              v176 = v143;
              if ( v143 )
              {
                AuthzBasepSetAccessReasons(v143, 0x80000000, v140, (unsigned int)v210, 0);
                v143 = v176;
              }
              v137 &= ~v143;
              AuthzBasepMergeAccessReasons(v209, v210, 4278190080LL);
              v135 = v180;
              v92 = v172;
            }
            v136 += 2;
          }
          ClientToken = Object;
          v29 = v196;
          v45 = v167;
          v111 = (int *)P;
          v113 = v177;
        }
      }
    }
    if ( v111 )
    {
      ExFreePoolWithTag(v111, 0);
      v113 = v177;
    }
    **(_DWORD **)(a4 + 16) = v187;
    **(_DWORD **)(a4 + 8) &= v113;
    v144 = v165;
    if ( **(int **)(a4 + 16) < 0 )
      v144 = 0;
    v165 = v144;
    AuthzBasepMergeAccessReasons(*(_QWORD *)(a4 + 24), v209, 0LL);
    AuthzBasepMergeAccessReasons(*(_QWORD *)(a4 + 24), v209, 4278190080LL);
    goto LABEL_52;
  }
  v95 = v166;
  while ( 1 )
  {
    v206 = 0LL;
    v198 = v94;
    v207 = 0LL;
    v208 = 0LL;
    v96 = *(_QWORD *)(v182 + 8 * v94 + 64);
    v188 = v96;
    if ( *(_QWORD *)(v96 + 24) )
    {
      v97 = (int)v181;
      if ( !v181 )
      {
        v98 = AuthzBasepInitializeResourceClaimsFromSacl(v191, &v181);
        v97 = (int)v181;
        v99 = (unsigned __int8)v179;
        if ( v98 < 0 )
          v99 = 1;
        v93 = 0LL;
        v179 = v99;
        v96 = v188;
      }
      v100 = (_QWORD *)ClientToken[137];
      if ( v100 )
      {
        v101 = v100[72];
        v102 = v100[74];
        v103 = v100[73];
        v93 = v100[75];
      }
      else
      {
        LODWORD(v101) = 0;
        v102 = 0LL;
        v103 = 0LL;
      }
      v104 = AuthzBasepEvaluateAceCondition(
               (_DWORD)ClientToken,
               ClientToken[97],
               v97,
               v101,
               v102,
               v103,
               v93,
               *(_QWORD *)(v96 + 24),
               *(_DWORD *)(v96 + 16),
               1,
               0,
               (__int64)&v186);
      v105 = v186;
      v172 = v104;
      if ( v186 != 1 )
      {
        if ( v104 < 0 )
        {
          if ( !a2 )
LABEL_229:
            SeUnlockSubjectContext(SubjectContext);
LABEL_230:
          if ( *(_QWORD *)(v182 + 32) )
LABEL_237:
            SepRmDereferenceCapTable();
LABEL_238:
          **(_DWORD **)(a4 + 8) = 0;
          v134 = v172;
          goto LABEL_240;
        }
        if ( (*v29 & 0x10) != 0 )
        {
          v106 = (_QWORD *)ClientToken[137];
          if ( v106 )
          {
            v107 = v106[72];
            v108 = v106[74];
            v109 = v106[73];
            v110 = v106[75];
          }
          else
          {
            LODWORD(v107) = 0;
            v108 = 0LL;
            v109 = 0LL;
            v110 = 0LL;
          }
          v172 = AuthzBasepEvaluateAceCondition(
                   (_DWORD)ClientToken,
                   ClientToken[97],
                   (_DWORD)v181,
                   v107,
                   v108,
                   v109,
                   v110,
                   *(_QWORD *)(v188 + 24),
                   *(_DWORD *)(v188 + 16),
                   1,
                   1,
                   (__int64)&v186);
          if ( v172 < 0 )
          {
            if ( !a2 )
              goto LABEL_229;
            goto LABEL_230;
          }
          v105 = v186;
        }
        if ( !(_BYTE)v179 && v105 != 1 )
        {
          v111 = (int *)P;
          v112 = v171;
          goto LABEL_202;
        }
      }
    }
    v187 = SepBuildCapeSecurityDescriptor(SecurityDescriptor);
    if ( v187 < 0 )
      break;
    v114 = *(_DWORD *)(a3 + 16);
    if ( (*(_DWORD *)(v188 + 48) & 1) != 0 )
    {
      if ( (v114 & 0x2000000) == 0 )
        v114 |= *(_DWORD *)(a3 + 20);
      v115 = 0;
    }
    else
    {
      v115 = *(_DWORD *)(a3 + 20);
    }
    v116 = SubjectContext->ClientToken;
    v172 = v115;
    LOBYTE(v162) = 0;
    v117 = SubjectContext->PrimaryToken;
    v154 = *(_DWORD **)(a3 + 32);
    v206 = 0LL;
    v207 = 0LL;
    v208 = 0LL;
    v118 = SepAccessCheckEx(
             (__int64)SecurityDescriptor,
             0LL,
             (__int64)v117,
             (__int64)v116,
             v114 | 0x2000000,
             &v206,
             1u,
             v154,
             v115,
             a6,
             &v183,
             0LL,
             &v192,
             (__int64)v211,
             v162,
             v95,
             a7,
             (__int64)&v203,
             (__int64)&v181,
             &v165);
    v119 = v175;
    v120 = v175 | HIDWORD(v207);
    v167 = v118;
    v121 = v183 & (**(_DWORD **)(a4 + 8) | v172);
    v183 = v121;
    if ( v95 )
      v120 |= v121 & 0x60000;
    v122 = ~(_DWORD)v208 & v120;
    v123 = v192;
    v60 = (v121 & v177) == 0;
    v113 = v121 & v177;
    v172 = v122;
    v177 &= v121;
    if ( v60 )
      v123 = -1073741790;
    v187 = v123;
    v124 = v180 & (v180 ^ v122);
    if ( v124 )
    {
      AuthzBasepSetAccessReasons(v124, 327680, v176, (unsigned int)v209, 0);
      v119 = v175;
      v180 &= v172;
      v113 = v177;
    }
    if ( !v173 )
    {
      v111 = (int *)P;
      v112 = v171;
      goto LABEL_203;
    }
    if ( !*(_QWORD *)(v188 + 40) )
    {
      v111 = (int *)P;
      v132 = v198;
      v133 = v171;
      *((_BYTE *)P + 8 * v198 + 4) = 1;
      v111[2 * v132] = v183 | v119;
      v112 = v183 & v133;
      v171 = v112;
      goto LABEL_203;
    }
    v172 = SepBuildCapeSecurityDescriptor(v201);
    if ( v172 < 0 )
    {
      if ( !a2 )
        SeUnlockSubjectContext(SubjectContext);
      if ( *(_QWORD *)(v182 + 32) )
        goto LABEL_237;
      goto LABEL_238;
    }
    v125 = *(_DWORD *)(a3 + 16);
    if ( (*(_DWORD *)(v188 + 48) & 0x100) != 0 )
    {
      if ( (v125 & 0x2000000) == 0 )
        v125 |= *(_DWORD *)(a3 + 20);
      v126 = 0;
    }
    else
    {
      v126 = *(_DWORD *)(a3 + 20);
    }
    v127 = SubjectContext->ClientToken;
    LOBYTE(v162) = 0;
    v155 = *(_DWORD **)(a3 + 32);
    v128 = SubjectContext->PrimaryToken;
    v206 = 0LL;
    v207 = 0LL;
    v208 = 0LL;
    SepAccessCheckEx(
      (__int64)v201,
      0LL,
      (__int64)v128,
      (__int64)v127,
      v125,
      0LL,
      0,
      v155,
      v126,
      a6,
      &v189,
      0LL,
      &v194,
      (__int64)v211,
      v162,
      v95,
      a7,
      (__int64)&v203,
      (__int64)&v181,
      &v178);
    v111 = (int *)P;
    v129 = v198;
    v130 = v171;
    v131 = v175;
    *((_BYTE *)P + 8 * v198 + 4) = 1;
    v111[2 * v129] = v189 | v131;
    v112 = v189 & v130;
    v171 = v112;
LABEL_202:
    v113 = v177;
LABEL_203:
    v93 = 0LL;
    v94 = (unsigned int)(v176 + 1);
    v176 = v94;
    v92 = *(_DWORD *)(v182 + 60);
    v172 = v92;
    if ( (unsigned int)v94 >= v92 )
    {
      v45 = v167;
      goto LABEL_247;
    }
  }
  if ( !a2 )
    SeUnlockSubjectContext(SubjectContext);
  if ( *(_QWORD *)(v182 + 32) )
    SepRmDereferenceCapTable();
  **(_DWORD **)(a4 + 8) = 0;
  v134 = v187;
LABEL_240:
  **(_DWORD **)(a4 + 16) = v134;
  SepFreeResourceInfo(v181);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return 0;
}
