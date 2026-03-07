bool __fastcall SeAccessCheckWithHint(
        __int64 a1,
        char a2,
        struct _SECURITY_SUBJECT_CONTEXT *a3,
        char a4,
        unsigned int a5,
        unsigned int a6,
        _QWORD *a7,
        _DWORD *a8,
        char a9,
        unsigned int *a10,
        int *a11)
{
  __int64 v12; // rdx
  unsigned int v14; // r14d
  __int64 v16; // r8
  int v17; // ebx
  __int16 v18; // r10
  unsigned int v19; // r9d
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  int v23; // r13d
  __int64 v24; // r11
  _QWORD *ClientToken; // rdi
  __int64 v26; // rdi
  int v27; // eax
  unsigned int v28; // edi
  __int64 *v29; // r9
  __int64 v30; // r13
  int v31; // eax
  _DWORD *v32; // rcx
  int v33; // eax
  char v34; // cl
  __int64 v35; // rax
  unsigned __int8 *v36; // rdi
  unsigned int *v37; // r15
  __int64 v38; // rax
  unsigned __int8 v39; // r8
  __int16 v40; // r9
  unsigned int v41; // r10d
  unsigned __int64 v42; // r12
  _QWORD *v43; // rcx
  int v44; // eax
  __int64 v45; // rcx
  int v46; // edx
  __int64 v47; // rsi
  char v48; // r15
  __int16 v49; // cx
  __int64 v50; // rcx
  __int64 v51; // rcx
  _WORD *SeOwnerRightsSid; // rsi
  char *v53; // rdi
  unsigned int v54; // r12d
  unsigned __int8 v55; // cl
  char *v56; // rcx
  unsigned __int64 v57; // rax
  int v58; // edi
  char v59; // al
  int v60; // r12d
  unsigned int v61; // edi
  int v62; // eax
  int *v63; // r12
  PACCESS_TOKEN v64; // r9
  PACCESS_TOKEN v65; // r8
  __int64 v66; // rdx
  char v67; // si
  __int64 v68; // r8
  __int64 v69; // r9
  _DWORD *v70; // r10
  int *v71; // r15
  int v72; // r11d
  int v73; // edi
  char v74; // al
  PVOID v75; // rbx
  bool result; // al
  unsigned int v77; // r15d
  bool v78; // zf
  char v79; // di
  char v80; // bl
  _DWORD *v81; // rax
  int v82; // eax
  PSECURITY_SUBJECT_CONTEXT v83; // rdi
  PACCESS_TOKEN PrimaryToken; // rbx
  char v85; // r14
  int v86; // ecx
  __int64 v87; // rax
  __int16 v88; // cx
  __int64 v89; // rax
  __int64 v90; // rax
  void *ScopedPolicySid; // rax
  int Cap; // eax
  __int64 v93; // rdx
  __int64 v94; // rax
  unsigned int v95; // r12d
  int v96; // eax
  int v97; // ecx
  __int64 v98; // r8
  PVOID v99; // rcx
  int v100; // eax
  int v101; // r10d
  _QWORD *v102; // rax
  __int64 v103; // r9
  __int64 v104; // rdx
  __int64 v105; // r10
  __int64 v106; // r11
  int v107; // eax
  int v108; // ecx
  _QWORD *v109; // rax
  __int64 v110; // r9
  __int64 v111; // rdx
  __int64 v112; // r8
  __int64 v113; // r10
  int v114; // esi
  int v115; // eax
  int v116; // ecx
  int v117; // eax
  char v118; // al
  int v119; // ecx
  __int64 v120; // rcx
  struct _SECURITY_SUBJECT_CONTEXT *v121; // rcx
  int v122; // [rsp+20h] [rbp-100h]
  int v123; // [rsp+28h] [rbp-F8h]
  char v124; // [rsp+A0h] [rbp-80h] BYREF
  char v125; // [rsp+A1h] [rbp-7Fh]
  char v126; // [rsp+A2h] [rbp-7Eh] BYREF
  char v127; // [rsp+A3h] [rbp-7Dh]
  char v128; // [rsp+A4h] [rbp-7Ch]
  unsigned __int8 v129; // [rsp+A5h] [rbp-7Bh] BYREF
  bool v130; // [rsp+A6h] [rbp-7Ah]
  int v131; // [rsp+A8h] [rbp-78h]
  int v132; // [rsp+ACh] [rbp-74h]
  char v133; // [rsp+B0h] [rbp-70h]
  PSECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+B8h] [rbp-68h]
  int v135; // [rsp+C0h] [rbp-60h]
  int v136; // [rsp+C4h] [rbp-5Ch]
  _DWORD *v137; // [rsp+C8h] [rbp-58h]
  int v138; // [rsp+D0h] [rbp-50h]
  int v139; // [rsp+D4h] [rbp-4Ch]
  __int64 v140; // [rsp+D8h] [rbp-48h]
  int *v141; // [rsp+E0h] [rbp-40h]
  PVOID P; // [rsp+E8h] [rbp-38h] BYREF
  int v143; // [rsp+F0h] [rbp-30h] BYREF
  __int64 v144; // [rsp+F8h] [rbp-28h]
  int v145; // [rsp+100h] [rbp-20h] BYREF
  int v146; // [rsp+104h] [rbp-1Ch] BYREF
  __int64 v147; // [rsp+108h] [rbp-18h]
  __int128 v148; // [rsp+110h] [rbp-10h] BYREF
  __int64 v149; // [rsp+120h] [rbp+0h]
  _QWORD *v150; // [rsp+128h] [rbp+8h]
  _DWORD *v151; // [rsp+130h] [rbp+10h]
  unsigned int v152; // [rsp+138h] [rbp+18h] BYREF
  __int64 v153; // [rsp+140h] [rbp+20h]
  int *v154; // [rsp+148h] [rbp+28h]
  _QWORD *v155; // [rsp+150h] [rbp+30h]
  _OWORD SecurityDescriptor[2]; // [rsp+158h] [rbp+38h] BYREF
  __int64 v157; // [rsp+178h] [rbp+58h]
  _OWORD v158[2]; // [rsp+180h] [rbp+60h] BYREF

  v12 = (__int64)a10;
  v14 = a5;
  SubjectContext = a3;
  v16 = 0LL;
  v153 = a1;
  v17 = -1;
  *a10 = 0;
  *a11 = -1073741790;
  v125 = a4;
  v131 = a6;
  v155 = a7;
  v151 = a8;
  v141 = (int *)a10;
  v154 = a11;
  v124 = 0;
  v147 = 0LL;
  v157 = 0LL;
  v144 = 0LL;
  v127 = 0;
  v132 = 0;
  P = 0LL;
  v143 = 0;
  v145 = 0;
  v146 = -1073741790;
  v152 = -1;
  v148 = 0LL;
  memset(v158, 0, 28);
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v130 = (a2 & 8) != 0;
  if ( a7 )
    *a7 = 0LL;
  if ( !a9 )
  {
    if ( (a5 & 0x2000000) != 0 )
      v14 = a8[3] | a5 & 0xFDFFFFFF;
    result = 1;
    *a10 = a6 | v14;
    *a11 = 0;
    return result;
  }
  if ( !a1 )
  {
LABEL_295:
    *a11 = -1073741790;
    return 0;
  }
  if ( a3->ClientToken && a3->ImpersonationLevel < SecurityImpersonation )
  {
    *a11 = -1073741659;
    return 0;
  }
  if ( !a5 )
  {
    if ( a6 )
    {
      *a10 = a6;
      *a11 = 0;
      if ( a7 )
        *a7 = 0LL;
      return 1;
    }
    goto LABEL_295;
  }
  if ( !a4 )
    SeLockSubjectContext(a3);
  v18 = *(_WORD *)(a1 + 2);
  v19 = 0;
  v129 = 0;
  v126 = 0;
  if ( (v18 & 0x10) == 0 )
    goto LABEL_26;
  do
  {
    if ( v18 >= 0 )
    {
      v21 = *(_QWORD *)(a1 + 24);
    }
    else
    {
      v20 = *(unsigned int *)(a1 + 12);
      if ( !(_DWORD)v20 )
        goto LABEL_26;
      v21 = a1 + v20;
    }
    if ( !v21 )
      goto LABEL_26;
    v16 = *(unsigned __int16 *)(v21 + 4);
    v22 = v21 + 8;
    v12 = 0LL;
    if ( !*(_WORD *)(v21 + 4) )
      goto LABEL_26;
    while ( (unsigned int)v12 < v19 || *(_BYTE *)v22 != 20 )
    {
      v12 = (unsigned int)(v12 + 1);
      v22 += *(unsigned __int16 *)(v22 + 2);
      if ( (unsigned int)v12 >= (unsigned int)v16 )
        goto LABEL_26;
    }
    if ( (*(_BYTE *)(v22 + 1) & 8) == 0 )
      break;
    v19 = v12 + 1;
  }
  while ( v22 );
  if ( !v22 )
    goto LABEL_26;
  v23 = *(_DWORD *)(v22 + 4);
  v24 = v22 + 8;
  if ( v22 == -8 )
    goto LABEL_26;
  ClientToken = a3->ClientToken;
  if ( !ClientToken )
    goto LABEL_21;
  v26 = ClientToken[138];
  v27 = RtlSidDominatesForTrust(*((_QWORD *)SubjectContext->PrimaryToken + 138), v26, &v126);
  if ( v27 >= 0 )
  {
    if ( v126 )
    {
LABEL_22:
      v27 = RtlSidDominatesForTrust(v26, v24, &v129);
      if ( v27 >= 0 )
      {
        if ( v129 )
          goto LABEL_26;
        v17 = v23 | 0x1000000;
      }
      goto LABEL_25;
    }
LABEL_21:
    v26 = *((_QWORD *)SubjectContext->PrimaryToken + 138);
    goto LABEL_22;
  }
LABEL_25:
  *a11 = v27;
  if ( v27 < 0 )
    goto LABEL_165;
LABEL_26:
  v28 = a5 & 0xFDFFFFFF;
  if ( (v17 & a5 & 0xFDFFFFFF) != (a5 & 0xFDFFFFFF) )
  {
    v78 = !v130;
    v83 = SubjectContext;
    *a11 = -1073741790;
    if ( v78 )
    {
      PrimaryToken = v83->ClientToken;
      if ( !v83->ClientToken )
        PrimaryToken = v83->PrimaryToken;
      v85 = v131 | a5;
      SepLocateTokenTrustLevel(v83);
      SeLogAccessFailure(PrimaryToken, a1, v85, 0);
    }
    if ( v125 )
      return 0;
    v121 = v83;
LABEL_294:
    SeUnlockSubjectContext(v121);
    return 0;
  }
  v29 = (__int64 *)SubjectContext;
  *a11 = 0;
  v30 = *v29;
  if ( !*v29 )
    v30 = v29[2];
  if ( (a2 & 4) == 0 )
  {
    v31 = SepFilterCheck(a1, (__int64 *)&P, v30, 0, (int *)&v152);
    *a11 = v31;
    if ( v31 >= 0 )
    {
      if ( (v152 & v28) == v28 )
      {
        v29 = (__int64 *)SubjectContext;
        *a11 = 0;
        goto LABEL_33;
      }
      v78 = !v130;
      *a11 = -1073741790;
      if ( v78 )
        SeLogAccessFailure((PVOID)v30, a1, v131 | a5, 0);
    }
LABEL_165:
    if ( v125 )
      return 0;
    v121 = SubjectContext;
    goto LABEL_294;
  }
LABEL_33:
  v32 = (_DWORD *)(v30 + 200);
  if ( (a2 & 2) == 0 )
  {
    LOBYTE(v16) = 0;
LABEL_35:
    LOBYTE(v12) = 0;
    v137 = (_DWORD *)(v30 + 200);
    goto LABEL_36;
  }
  v78 = (*v32 & 0x2000) == 0;
  LOBYTE(v16) = 1;
  v137 = (_DWORD *)(v30 + 200);
  if ( v78 )
    goto LABEL_35;
  v12 = 1LL;
LABEL_36:
  v133 = v12;
  v126 = 0;
  if ( !SepAllowAccessUponLogoff && (*v32 & 0x20) == 0 )
  {
    v87 = *(_QWORD *)(v30 + 216);
    if ( v87 )
    {
      if ( (*(_DWORD *)(v87 + 32) & 0x20) != 0 )
      {
        v78 = v125 == 0;
        *v141 = 0;
        *a11 = -1073741790;
        if ( !v78 )
          return 0;
        v121 = (struct _SECURITY_SUBJECT_CONTEXT *)v29;
        goto LABEL_294;
      }
    }
  }
  if ( (_BYTE)v12 )
    goto LABEL_42;
  v33 = SepMandatoryIntegrityCheck(v151, a1, v16, v30, 0, (__int64)&v148);
  *a11 = v33;
  if ( v33 < 0 )
    goto LABEL_165;
  if ( !DWORD2(v148) || (v28 & (unsigned int)v148) == v28 )
  {
    *a11 = 0;
    if ( (a5 & 0x2000000) == 0 || (*v137 & 0x4000) == 0 || HIDWORD(v148) > 0x2000 )
      goto LABEL_42;
    goto LABEL_141;
  }
  v81 = v137;
  *a11 = -1073741790;
  if ( (*v81 & 0x4000) == 0 || HIDWORD(v148) > 0x2000 )
    goto LABEL_165;
LABEL_141:
  v126 = 1;
LABEL_42:
  if ( !SepRmEnforceCap )
    goto LABEL_43;
  v88 = *(_WORD *)(a1 + 2);
  if ( (v88 & 0x10) == 0 || KeGetCurrentIrql() >= 2u )
    goto LABEL_43;
  if ( v88 >= 0 )
  {
    v90 = *(_QWORD *)(a1 + 24);
  }
  else
  {
    v89 = *(unsigned int *)(a1 + 12);
    if ( !(_DWORD)v89 )
    {
      v147 = 0LL;
      v34 = 0;
      goto LABEL_44;
    }
    v90 = a1 + v89;
  }
  v147 = v90;
  if ( !v90 || (ScopedPolicySid = (void *)SepGetScopedPolicySid(v90, v12, v16)) == 0LL )
  {
LABEL_43:
    v34 = 0;
    goto LABEL_44;
  }
  Cap = SepRmReferenceFindCap(ScopedPolicySid);
  v93 = v144;
  v34 = 1;
  if ( Cap < 0 )
    v93 = SepRmDefaultCap;
  v144 = v93;
  v127 = 1;
LABEL_44:
  if ( (a2 & 1) != 0 )
  {
    v128 = 1;
    if ( (a5 & 0x2060000) == 0 && !v34 )
    {
      v48 = 0;
      v61 = a5;
LABEL_85:
      v62 = v132;
      goto LABEL_86;
    }
  }
  else
  {
    v128 = 0;
  }
  if ( *(__int16 *)(a1 + 2) >= 0 )
  {
    v36 = *(unsigned __int8 **)(a1 + 8);
  }
  else
  {
    v35 = *(unsigned int *)(a1 + 4);
    if ( (_DWORD)v35 )
      v36 = (unsigned __int8 *)(a1 + v35);
    else
      v36 = 0LL;
  }
  v37 = (unsigned int *)(v30 + 232);
  if ( v30 == -232 || !v36 )
    goto LABEL_113;
  v38 = v36[1];
  v39 = 0;
  v40 = *(_WORD *)v36;
  LOWORD(v138) = *(_WORD *)v36;
  v129 = 0;
  v41 = 4 * v38 + 8;
  LODWORD(v38) = v36[4 * v38 + 4];
  v135 = v41;
  v42 = *(_QWORD *)&v37[2 * (v38 & 0xF) + 4] & *(_QWORD *)&v37[2 * ((unsigned __int64)(unsigned int)v38 >> 4) + 36];
  v43 = (_QWORD *)(v30 + 240);
  v150 = (_QWORD *)(v30 + 240);
  if ( !v42 )
  {
LABEL_112:
    v77 = *v37;
    if ( v77 > 0x40 )
    {
      v94 = *v43;
      v95 = 64;
      v149 = *v43;
      do
      {
        v47 = v94 + 16LL * v95;
        if ( **(_WORD **)v47 == v40 )
        {
          if ( !memcmp(v36, *(const void **)v47, v41) )
            goto LABEL_56;
          v40 = v138;
          v41 = v135;
          v94 = v149;
        }
        ++v95;
      }
      while ( v95 < v77 );
    }
LABEL_113:
    v48 = 0;
LABEL_114:
    v61 = a5;
    goto LABEL_85;
  }
LABEL_52:
  LOBYTE(v44) = v42;
  v139 = (unsigned __int8)v42;
  if ( !(_BYTE)v42 )
    goto LABEL_123;
  v45 = *v43;
  v46 = v39;
  v149 = v45;
  v136 = v39;
  while ( 1 )
  {
    LODWORD(v140) = *((unsigned __int8 *)SidHashByteToIndexLookupTable + (unsigned __int8)v44);
    v47 = v45 + 16LL * (unsigned int)(v46 + v140);
    if ( **(_WORD **)v47 == v40 )
      break;
LABEL_121:
    v46 = v136;
    v44 = (unsigned __int8)v139 ^ (1 << v140);
    v45 = v149;
    v139 = v44;
    if ( !(_BYTE)v44 )
    {
      v39 = v129;
      v43 = (_QWORD *)(v30 + 240);
LABEL_123:
      v39 += 8;
      v42 >>= 8;
      v129 = v39;
      if ( !v42 )
      {
        v150 = v43;
        goto LABEL_112;
      }
      goto LABEL_52;
    }
  }
  if ( memcmp(v36, *(const void **)v47, v41) )
  {
    v40 = v138;
    v41 = v135;
    goto LABEL_121;
  }
LABEL_56:
  if ( (v47 != *v150 || (*(_DWORD *)(v47 + 8) & 0x10) != 0) && (*(_DWORD *)(v47 + 8) & 4) == 0 )
    goto LABEL_113;
  v48 = 1;
  if ( *(_DWORD *)(v30 + 128) )
  {
    LOBYTE(v123) = 0;
    LOBYTE(v122) = 1;
    v48 = SepSidInTokenSidHash(v30 + 504, 0LL, v36, 0LL, v122, v123);
  }
  if ( v48 && (a5 & 0x2060000) != 0 )
  {
    if ( !v128 )
    {
      v49 = *(_WORD *)(v153 + 2);
      if ( (v49 & 4) != 0 )
      {
        if ( v49 >= 0 )
        {
          v51 = *(_QWORD *)(v153 + 32);
          goto LABEL_67;
        }
        v50 = *(unsigned int *)(v153 + 16);
        if ( (_DWORD)v50 )
        {
          v51 = v153 + v50;
LABEL_67:
          SeOwnerRightsSid = SeExports->SeOwnerRightsSid;
          if ( v51 )
          {
            v53 = (char *)(v51 + 8);
            v136 = *(unsigned __int16 *)(v51 + 4);
            v54 = 0;
            if ( v136 )
            {
              while ( 2 )
              {
                if ( (v53[1] & 8) != 0 )
                  goto LABEL_78;
                v55 = *v53;
                if ( (unsigned __int8)(*v53 - 5) > 3u && (unsigned __int8)(v55 - 11) > 1u )
                {
                  if ( v55 < 0xFu )
                  {
                    if ( v55 != 4 )
                    {
                      if ( v55 <= 0xAu )
                        goto LABEL_75;
LABEL_216:
                      if ( (unsigned __int8)(v55 - 13) <= 1u )
                      {
LABEL_75:
                        v56 = v53 + 8;
                        goto LABEL_76;
                      }
LABEL_78:
                      ++v54;
                      v53 += *((unsigned __int16 *)v53 + 1);
                      if ( v54 >= v136 )
                        goto LABEL_79;
                      continue;
                    }
                    v56 = v53 + 12;
LABEL_76:
                    if ( v56 )
                    {
                      v57 = *(unsigned __int16 *)v56;
                      if ( (_WORD)v57 == *SeOwnerRightsSid && !memcmp(v56, SeOwnerRightsSid, 4 * (v57 >> 8) + 8) )
                        goto LABEL_114;
                    }
                    goto LABEL_78;
                  }
                  if ( v55 > 0x10u )
                    goto LABEL_216;
                }
                break;
              }
              v56 = &v53[16 * (*((_DWORD *)v53 + 2) & 1) + ((8LL * (*((_DWORD *)v53 + 2) & 2)) | 0xC)];
              goto LABEL_76;
            }
          }
        }
      }
    }
LABEL_79:
    v58 = 393216;
    if ( (a5 & 0x2000000) == 0 )
      v58 = a5 & 0x60000;
    v59 = v127;
    v132 = v58;
    v60 = v131 | v58;
    v14 = a5 & 0xFFF9FFFF;
    v131 |= v58;
    if ( !v127 )
    {
      v48 = 0;
      v131 = v60;
      v132 = v58;
    }
  }
  else
  {
    v59 = v127;
    v60 = v131;
  }
  v61 = v14;
  if ( v14 || v59 )
    goto LABEL_85;
  if ( (*v137 & 0x2000) != 0 || (v62 = v132) == 0 )
  {
    if ( !v125 )
      SeUnlockSubjectContext(SubjectContext);
    result = 1;
    *v141 = v60;
    *v154 = 0;
    return result;
  }
LABEL_86:
  v63 = v154;
  LODWORD(v158[0]) = v62;
  v64 = SubjectContext->ClientToken;
  v65 = SubjectContext->PrimaryToken;
  memset((char *)v158 + 4, 0, 24);
  v67 = SepAccessCheck(
          v153,
          0,
          (_DWORD)v65,
          (_DWORD)v64,
          v14,
          0LL,
          0,
          (__int64)v151,
          v131,
          a9,
          (__int64)v141,
          (__int64)v155,
          (__int64)v154,
          0,
          v48,
          (__int64)v158,
          (__int64)&P,
          (__int64)&v124,
          0LL);
  v69 = v144;
  v140 = v144;
  if ( !SepRmEnforceCap || (v96 = *v63, v135 = v96, v96 < 0) || !v127 )
  {
    v70 = v137;
    v71 = v141;
    goto LABEL_88;
  }
  v66 = 0LL;
  v128 = 0;
  LOBYTE(v138) = 0;
  v139 = 0;
  v97 = *v141;
  v132 = *v141;
  if ( !*(_DWORD *)(v144 + 60) )
    goto LABEL_269;
  while ( 2 )
  {
    v98 = *(_QWORD *)(v69 + 8LL * (unsigned int)v66 + 64);
    v144 = v98;
    if ( *(_QWORD *)(v98 + 24) )
    {
      v99 = P;
      if ( !P )
      {
        v100 = AuthzBasepInitializeResourceClaimsFromSacl(v147, &P);
        v99 = P;
        v98 = v144;
        v101 = (unsigned __int8)v138;
        if ( v100 < 0 )
          v101 = 1;
        v138 = v101;
      }
      v102 = *(_QWORD **)(v30 + 1096);
      if ( v102 )
      {
        v103 = v102[72];
        v104 = v102[74];
        v105 = v102[73];
        v106 = v102[75];
      }
      else
      {
        v103 = 0LL;
        v104 = 0LL;
        v105 = 0LL;
        v106 = 0LL;
      }
      v107 = AuthzBasepEvaluateAceCondition(
               v30,
               *(void **)(v30 + 776),
               (__int64)v99,
               v103,
               v104,
               v105,
               v106,
               *(_DWORD **)(v98 + 24),
               *(_DWORD *)(v98 + 16),
               1,
               0,
               &v143);
      v108 = v143;
      v136 = v107;
      if ( v143 != 1 )
      {
        if ( v107 < 0 )
        {
          if ( !v125 )
            SeUnlockSubjectContext(SubjectContext);
          if ( *(_QWORD *)(v140 + 32) )
            goto LABEL_259;
          goto LABEL_260;
        }
        v70 = v137;
        if ( (*v137 & 0x10) != 0 )
        {
          v109 = *(_QWORD **)(v30 + 1096);
          if ( v109 )
          {
            v110 = v109[72];
            v111 = v109[74];
            v112 = v109[73];
            v113 = v109[75];
          }
          else
          {
            v110 = 0LL;
            v111 = 0LL;
            v112 = 0LL;
            v113 = 0LL;
          }
          v136 = AuthzBasepEvaluateAceCondition(
                   v30,
                   *(void **)(v30 + 776),
                   (__int64)P,
                   v110,
                   v111,
                   v112,
                   v113,
                   *(_DWORD **)(v144 + 24),
                   *(_DWORD *)(v144 + 16),
                   1,
                   1,
                   &v143);
          if ( v136 >= 0 )
          {
            v108 = v143;
            v70 = v137;
            goto LABEL_239;
          }
          if ( !v125 )
            SeUnlockSubjectContext(SubjectContext);
          if ( *(_QWORD *)(v140 + 32) )
LABEL_259:
            ((void (*)(void))SepRmDereferenceCapTable)();
LABEL_260:
          *v141 = 0;
          *v63 = v136;
LABEL_262:
          SepFreeResourceInfo(P);
          return 0;
        }
LABEL_239:
        if ( !(_BYTE)v138 && v108 != 1 )
        {
          v96 = v135;
LABEL_254:
          v69 = v140;
          v66 = (unsigned int)(v139 + 1);
          v139 = v66;
          if ( (unsigned int)v66 >= *(_DWORD *)(v140 + 60) )
          {
            v97 = v132;
            goto LABEL_270;
          }
          continue;
        }
      }
    }
    break;
  }
  v114 = SepBuildCapeSecurityDescriptor(SecurityDescriptor);
  if ( v114 < 0 )
  {
    if ( !v125 )
      SeUnlockSubjectContext(SubjectContext);
    if ( *(_QWORD *)(v140 + 32) )
      ((void (*)(void))SepRmDereferenceCapTable)();
    *v141 = 0;
    *v63 = v114;
    goto LABEL_262;
  }
  v115 = v14;
  if ( (*(_DWORD *)(v144 + 48) & 1) != 0 )
  {
    v115 = v14;
    if ( (v14 & 0x2000000) == 0 )
      v115 = v131 | v14;
    v116 = 0;
  }
  else
  {
    v116 = v131;
  }
  v67 = SepAccessCheck(
          (unsigned int)SecurityDescriptor,
          0,
          SubjectContext->PrimaryToken,
          SubjectContext->ClientToken,
          v115,
          0LL,
          0,
          (__int64)v151,
          v116,
          a9,
          (__int64)&v145,
          0LL,
          (__int64)&v146,
          0,
          v48,
          (__int64)v158,
          (__int64)&P,
          (__int64)&v124,
          0LL);
  if ( v128 )
    v117 = v145 & v132;
  else
    v117 = v145;
  v132 = v117;
  if ( v117 )
  {
    v96 = v146;
    v135 = v146;
    v128 = 1;
    if ( v146 < 0 )
      goto LABEL_268;
    v70 = v137;
    goto LABEL_254;
  }
  v96 = -1073741790;
LABEL_268:
  v69 = v140;
  v97 = v132;
LABEL_269:
  v70 = v137;
LABEL_270:
  v71 = v141;
  *v63 = v96;
  v118 = v124;
  *v71 &= v97;
  if ( *v63 < 0 )
    v118 = 0;
  v124 = v118;
LABEL_88:
  v72 = v131;
  v73 = v61 & 0x2000000;
  if ( !v133 && v73 )
  {
    if ( (!v126 || !*(_WORD *)((char *)&v158[1] + 5) && (*v70 & 0x3000000) != 0x3000000)
      && DWORD2(v148)
      && (!BYTE4(v148) || !BYTE5(v148) || !BYTE6(v148)) )
    {
      v86 = *v71 & v148;
      if ( v86 != *v71 )
      {
        *v71 = v86;
        if ( v86 )
        {
          *v63 = 0;
          v124 = 1;
        }
        else
        {
          *v63 = -1073741790;
          v124 = 0;
        }
      }
    }
  }
  else
  {
    if ( v126 && !*(_WORD *)((char *)&v158[1] + 5) )
    {
      if ( (*v70 & 0x3000000) != 0x3000000 || HIDWORD(v158[0]) )
      {
        v82 = 0;
        *v63 = -1073741790;
        v124 = 0;
      }
      else
      {
        BYTE7(v158[1]) = 1;
        *v63 = 0;
        v82 = v72 | v14;
        v124 = 1;
      }
      *v71 = v82;
    }
    if ( !v73 )
    {
      v74 = 0;
      LOBYTE(v68) = 0;
      goto LABEL_93;
    }
  }
  v74 = 0;
  v126 = 0;
  if ( v17 != -1 )
  {
    v119 = v17 & *v71;
    if ( v119 == *v71 )
    {
      v74 = 0;
    }
    else
    {
      v74 = 1;
      v126 = 1;
      *v71 = v119;
      if ( v119 )
      {
        *v63 = 0;
        v124 = 1;
      }
      else
      {
        *v63 = -1073741790;
        v124 = 0;
      }
    }
  }
  LOBYTE(v68) = 0;
  if ( v152 != -1 )
  {
    v66 = v152 & *v71;
    if ( (_DWORD)v66 == *v71 )
    {
      v74 = v126;
    }
    else
    {
      *v71 = v66;
      LOBYTE(v68) = 1;
      v74 = v126;
      if ( (_DWORD)v66 )
      {
        *v63 = 0;
        v124 = 1;
      }
      else
      {
        *v63 = -1073741790;
        v124 = 0;
      }
    }
  }
LABEL_93:
  if ( v30 )
  {
    if ( (v74 || (_BYTE)v68 || !HIDWORD(v158[0]) && (*v70 & 0x4000) != 0 && (*v63 < 0 || BYTE7(v158[1]))) && !v130 )
    {
      v79 = *v63 >= 0;
      v80 = v72 | v14;
      SepLocateTokenTrustLevel(SubjectContext);
      SeLogAccessFailure((PVOID)v30, v153, v80, v79);
      v69 = v140;
    }
    if ( *v63 < 0
      && !HIDWORD(v158[0])
      && (*v137 & 0x4000) != 0
      && (unsigned __int8)SepLpacCausedAccessFailure(v158, v14) )
    {
      SepLogLpacAccessFailure();
      v69 = v140;
    }
  }
  if ( v127 )
  {
    v120 = *(_QWORD *)(v69 + 32);
    if ( v120 )
      SepRmDereferenceCapTable(v120, v66, v68);
  }
  if ( !v125 )
    SeUnlockSubjectContext(SubjectContext);
  v75 = P;
  if ( P )
  {
    AuthzBasepFreeSecurityAttributesList(P, v66, v68);
    ExFreePoolWithTag(v75, 0);
  }
  return v67 && v124;
}
