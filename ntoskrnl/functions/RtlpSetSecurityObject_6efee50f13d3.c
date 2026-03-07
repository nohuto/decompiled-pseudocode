__int64 __fastcall RtlpSetSecurityObject(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 *a4,
        int a5,
        int a6,
        __int64 a7,
        struct _SECURITY_SUBJECT_CONTEXT *a8)
{
  __int64 v8; // rsi
  struct _SECURITY_SUBJECT_CONTEXT *v9; // rdi
  unsigned __int8 v10; // r14
  int v11; // r15d
  _UNKNOWN **v12; // r11
  __int16 v13; // ax
  unsigned __int8 *v14; // r12
  unsigned __int8 *v15; // r13
  __int64 v16; // rax
  __int16 v17; // cx
  __int64 v18; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 Process; // rdi
  void *v21; // rsi
  _QWORD *v22; // rax
  __int64 v23; // rcx
  __int16 v24; // dx
  int v25; // r8d
  int v26; // r9d
  unsigned int v27; // eax
  _BYTE *v28; // r11
  __int64 v29; // rax
  __int64 v30; // rcx
  _BYTE *v31; // r10
  unsigned __int8 *AceByType; // rax
  unsigned __int8 *v33; // rdi
  _DWORD *SeMediumMandatorySid; // rsi
  PACCESS_TOKEN ClientToken; // rbx
  struct _KTHREAD *v36; // rax
  struct _KTHREAD *v37; // rcx
  bool v38; // zf
  __int64 TokenTrustLevel; // rax
  __int64 v40; // rdi
  unsigned __int8 *v41; // rax
  __int64 v42; // r8
  unsigned __int8 *v43; // rbx
  unsigned __int8 *v44; // rax
  int v45; // ebx
  unsigned __int8 *v46; // rbx
  unsigned __int8 *v47; // rax
  __int64 v48; // r12
  int v49; // edi
  unsigned int v50; // edx
  __int16 v51; // r8
  unsigned __int8 *v52; // r10
  unsigned int v53; // edx
  unsigned int v54; // edx
  void *v55; // r14
  unsigned int v56; // edx
  __int64 *v57; // r12
  unsigned int v58; // edx
  __int16 v59; // ax
  __int16 v60; // r8
  PVOID v61; // rdi
  unsigned __int8 *v62; // rdi
  __int64 v63; // rax
  __int16 v64; // cx
  __int64 v65; // rcx
  __int16 v66; // r14
  unsigned __int16 *v67; // r15
  int v68; // ecx
  int v69; // eax
  unsigned int v70; // ebx
  unsigned int v71; // r13d
  _OWORD *v72; // rsi
  unsigned __int16 *v73; // rdi
  __int64 v74; // r12
  __int16 v75; // cx
  unsigned __int16 *v76; // r12
  char *v77; // r14
  void *v78; // rcx
  unsigned __int8 *v79; // rcx
  unsigned int v80; // r8d
  _DWORD *v81; // r12
  int v82; // esi
  unsigned int v83; // edx
  __int64 v84; // rcx
  int v85; // r12d
  int v86; // r14d
  char v87; // bl
  unsigned __int8 *v88; // rdx
  unsigned int v89; // r8d
  _DWORD *v90; // rbx
  int v91; // r9d
  unsigned int v92; // ecx
  int v93; // eax
  int v94; // eax
  int v95; // ecx
  _DWORD *v96; // r14
  __int64 v97; // rcx
  __int64 *v98; // r15
  __int64 v99; // rbx
  char *v100; // rdi
  int v101; // eax
  char *v102; // rdi
  _KPROCESS *v103; // rdx
  signed __int64 v104; // rax
  PVOID v105; // r8
  signed __int64 v106; // rtt
  __int16 v108; // cx
  char v109; // si
  struct _KTHREAD *v110; // r15
  __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // rax
  __int64 v114; // rax
  int v115; // r9d
  int v116; // r9d
  int v117; // eax
  __int16 v118; // r15
  __int16 v119; // ax
  int v120; // ecx
  int v121; // ecx
  __int64 v122; // r8
  int v123; // eax
  __int64 v124; // rax
  __int16 v125; // dx
  __int64 v126; // rcx
  int v127; // ecx
  NTSTATUS v128; // eax
  __int64 v129; // rcx
  __int16 v130; // ax
  __int64 v131; // rax
  unsigned __int8 *AceBySid; // rax
  unsigned __int8 v133; // cl
  __int16 v134; // [rsp+58h] [rbp-B0h]
  BOOLEAN v135; // [rsp+5Ch] [rbp-ACh] BYREF
  char v136; // [rsp+5Dh] [rbp-ABh] BYREF
  __int16 v137; // [rsp+5Eh] [rbp-AAh]
  _OWORD *PoolWithTag; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v139; // [rsp+68h] [rbp-A0h] BYREF
  bool v140; // [rsp+70h] [rbp-98h]
  char v141; // [rsp+71h] [rbp-97h]
  char v142; // [rsp+72h] [rbp-96h]
  char v143; // [rsp+73h] [rbp-95h]
  char v144; // [rsp+74h] [rbp-94h]
  char v145; // [rsp+75h] [rbp-93h]
  char v146; // [rsp+76h] [rbp-92h]
  char v147; // [rsp+77h] [rbp-91h]
  __int64 v148; // [rsp+78h] [rbp-90h]
  unsigned __int8 *v149; // [rsp+80h] [rbp-88h] BYREF
  void *v150; // [rsp+88h] [rbp-80h]
  __int64 *v151; // [rsp+90h] [rbp-78h]
  int v152; // [rsp+98h] [rbp-70h]
  int v153; // [rsp+9Ch] [rbp-6Ch] BYREF
  void *v154; // [rsp+A0h] [rbp-68h]
  unsigned int i; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v156; // [rsp+ACh] [rbp-5Ch] BYREF
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v158; // [rsp+B8h] [rbp-50h]
  int v159; // [rsp+C0h] [rbp-48h] BYREF
  unsigned int Size; // [rsp+C4h] [rbp-44h]
  int Size_4; // [rsp+C8h] [rbp-40h]
  void *Src; // [rsp+D0h] [rbp-38h]
  struct _SECURITY_SUBJECT_CONTEXT *v163; // [rsp+D8h] [rbp-30h]
  __int64 v164; // [rsp+E0h] [rbp-28h]
  size_t v165; // [rsp+E8h] [rbp-20h]
  PVOID v166; // [rsp+F0h] [rbp-18h] BYREF
  PVOID v167; // [rsp+F8h] [rbp-10h] BYREF
  PVOID v168; // [rsp+100h] [rbp-8h] BYREF
  PVOID v169; // [rsp+108h] [rbp+0h] BYREF
  PVOID v170; // [rsp+110h] [rbp+8h] BYREF
  PVOID v171; // [rsp+118h] [rbp+10h] BYREF
  PVOID P; // [rsp+120h] [rbp+18h] BYREF
  PVOID v173; // [rsp+128h] [rbp+20h] BYREF
  PVOID Object[2]; // [rsp+130h] [rbp+28h] BYREF
  PVOID v175[2]; // [rsp+140h] [rbp+38h]
  __int64 v176; // [rsp+150h] [rbp+48h] BYREF
  __int64 v177; // [rsp+158h] [rbp+50h] BYREF
  __int64 v178; // [rsp+160h] [rbp+58h] BYREF
  __int64 v179; // [rsp+168h] [rbp+60h] BYREF
  __int64 v180; // [rsp+170h] [rbp+68h] BYREF
  __int64 v181; // [rsp+178h] [rbp+70h] BYREF
  void *Buf1[2]; // [rsp+180h] [rbp+78h] BYREF
  int v183; // [rsp+190h] [rbp+88h]
  unsigned __int16 v184; // [rsp+194h] [rbp+8Ch]
  int v185; // [rsp+198h] [rbp+90h]
  unsigned __int16 v186; // [rsp+19Ch] [rbp+94h]
  __int16 Sid; // [rsp+1A0h] [rbp+98h] BYREF
  int v188; // [rsp+1A8h] [rbp+A0h]
  _UNKNOWN *retaddr; // [rsp+210h] [rbp+108h] BYREF

  v12 = &retaddr;
  v8 = a3;
  v9 = a8;
  v152 = a5;
  v10 = 0;
  *(_DWORD *)IdentifierAuthority.Value = a6;
  v11 = a2;
  LOBYTE(v12) = 0;
  v158 = a7;
  v13 = *(_WORD *)(a3 + 2);
  v153 = a2;
  v151 = a4;
  v14 = 0LL;
  v164 = a3;
  v163 = a8;
  v143 = 0;
  v142 = 0;
  v136 = 0;
  v144 = 0;
  v145 = 0;
  v146 = 0;
  v147 = 0;
  LOWORD(v148) = 0;
  LODWORD(PoolWithTag) = 0;
  v166 = 0LL;
  Src = 0LL;
  P = 0LL;
  v167 = 0LL;
  v169 = 0LL;
  v168 = 0LL;
  v170 = 0LL;
  v171 = 0LL;
  v137 = 0;
  Size_4 = (int)v12;
  v139 = 0LL;
  v134 = 0x8000;
  v173 = 0LL;
  *(_OWORD *)Object = 0LL;
  *(_OWORD *)v175 = 0LL;
  if ( (v13 & 0x10) != 0 )
  {
    if ( v13 < 0 )
    {
      v111 = *(unsigned int *)(a3 + 12);
      if ( (_DWORD)v111 )
        v15 = (unsigned __int8 *)(a3 + v111);
      else
        v15 = 0LL;
    }
    else
    {
      v15 = *(unsigned __int8 **)(a3 + 24);
    }
  }
  else
  {
    v15 = 0LL;
  }
  v16 = *a4;
  v17 = *(_WORD *)(*a4 + 2);
  if ( (v17 & 0x10) != 0 )
  {
    if ( v17 >= 0 )
    {
      v149 = *(unsigned __int8 **)(v16 + 24);
    }
    else
    {
      v18 = *(unsigned int *)(v16 + 12);
      if ( (_DWORD)v18 )
        v149 = (unsigned __int8 *)(v16 + v18);
      else
        v149 = 0LL;
    }
  }
  else
  {
    v149 = 0LL;
  }
  if ( !a8 )
  {
    CurrentThread = KeGetCurrentThread();
    Process = (__int64)CurrentThread->ApcState.Process;
    v175[1] = *(PVOID *)(Process + 1088);
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
    {
      v110 = KeGetCurrentThread();
      --v110->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&CurrentThread[1].WaitBlockList, 0LL);
      if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
      {
        v21 = (void *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
        ObfReferenceObjectWithTag(v21, 0x75536553u);
        LODWORD(Object[1]) = *((_DWORD *)&CurrentThread[1].0 + 1) & 3;
      }
      else
      {
        v21 = 0LL;
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&CurrentThread[1].WaitBlockList);
      KeAbPostRelease((ULONG_PTR)&CurrentThread[1].WaitBlockList);
      KeLeaveCriticalRegionThread((__int64)v110);
      v11 = v153;
    }
    else
    {
      v21 = 0LL;
    }
    Object[0] = v21;
    v22 = (_QWORD *)PsReferencePrimaryTokenWithTag(Process, 0x75536553u);
    v175[0] = v22;
    if ( HIDWORD(NlsMbOemCodePageTag) )
    {
      if ( v22 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v22[143] + 284LL));
        if ( v175[0] == (PVOID)SepTokenLeakToken )
          __debugbreak();
      }
      if ( Object[0] )
      {
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)Object[0] + 143) + 284LL));
        if ( Object[0] == (PVOID)SepTokenLeakToken )
          __debugbreak();
      }
    }
    v8 = v164;
    v9 = (struct _SECURITY_SUBJECT_CONTEXT *)Object;
    LOBYTE(v12) = Size_4;
    a4 = v151;
    v163 = (struct _SECURITY_SUBJECT_CONTEXT *)Object;
  }
  v23 = *a4;
  if ( *(__int16 *)(*a4 + 2) >= 0 )
  {
    v45 = -1073741593;
    goto LABEL_215;
  }
  v24 = *(_WORD *)(v8 + 2);
  v140 = (v24 & 0x80u) != 0;
  v141 = (v24 & 0x40) != 0;
  v25 = v11 & 0x80;
  v26 = v11 & 0x100;
  if ( (v11 & 0x10000) != 0 )
  {
    v118 = v11 | 0x1FF;
    v119 = v118 & 0xFF7F;
    if ( v25 )
      v119 = v118;
    LOWORD(v11) = v119 & 0xFEFF;
    if ( v26 )
      LOWORD(v11) = v119;
    if ( !v149 && !v15 )
    {
      LOWORD(v11) = v11 & 0xFE07;
      if ( (v24 & 0x10) != 0 )
      {
        LOWORD(v11) = v11 | 8;
      }
      else
      {
        LODWORD(v12) = (unsigned __int8)v12;
        if ( (v24 & 0x800) != 0 )
          LODWORD(v12) = 1;
        Size_4 = (int)v12;
      }
    }
  }
  if ( (v11 & 1) != 0 )
  {
    LOBYTE(v137) = (v11 & 4) == 0;
    if ( v24 >= 0 )
    {
      v28 = *(_BYTE **)(v8 + 8);
    }
    else
    {
      v113 = *(unsigned int *)(v8 + 4);
      if ( (_DWORD)v113 )
        v28 = (_BYTE *)(v8 + v113);
      else
        v28 = 0LL;
    }
    v154 = v28;
    v142 = 1;
    if ( (v152 & 8) == 0 )
    {
      if ( !SepValidOwnerSubjectContext((__int64 *)v9, v28, (v24 & 0x80u) != 0) )
      {
LABEL_281:
        v45 = -1073741734;
        goto LABEL_215;
      }
      v28 = v154;
    }
  }
  else
  {
    v27 = *(_DWORD *)(v23 + 4);
    if ( !v27 )
      goto LABEL_281;
    v28 = (_BYTE *)(v23 + v27);
    v154 = v28;
    if ( !v28 )
      goto LABEL_281;
  }
  if ( (unsigned __int64)v28 <= 0x7FFFFFFF0000LL || (*v28 & 0xF) != 1 || v28[1] > 0xFu )
    goto LABEL_281;
  if ( (v11 & 2) != 0 )
  {
    if ( *(__int16 *)(v8 + 2) >= 0 )
    {
      v31 = *(_BYTE **)(v8 + 16);
    }
    else
    {
      v114 = *(unsigned int *)(v8 + 8);
      if ( (_DWORD)v114 )
        v31 = (_BYTE *)(v8 + v114);
      else
        v31 = 0LL;
    }
    v143 = 1;
  }
  else
  {
    v29 = *v151;
    if ( *(__int16 *)(*v151 + 2) >= 0 )
    {
      v31 = *(_BYTE **)(v29 + 16);
    }
    else
    {
      v30 = *(unsigned int *)(v29 + 8);
      if ( !(_DWORD)v30 )
      {
LABEL_362:
        v45 = -1073741733;
        goto LABEL_215;
      }
      v31 = (_BYTE *)(v29 + v30);
    }
  }
  v150 = v31;
  if ( (unsigned __int64)v31 <= 0x7FFFFFFF0000LL || (*v31 & 0xF) != 1 || v31[1] > 0xFu )
    goto LABEL_362;
  if ( (v11 & 0x1F8) == 0 )
  {
    v62 = v149;
    Src = v149;
    goto LABEL_90;
  }
  Size = v11 & 0x10;
  if ( (v11 & 0x10) != 0 )
  {
    HIDWORD(v139) = 0;
    while ( 1 )
    {
      AceByType = RtlFindAceByType((__int64)v15, 17, (unsigned int *)&v139 + 1);
      v33 = AceByType;
      if ( AceByType )
      {
        v14 = AceByType + 8;
        v10 = AceByType[1];
        if ( (*((_DWORD *)AceByType + 1) & 0xFFFFFFF8) != 0 )
          break;
      }
      v135 = 0;
      SeMediumMandatorySid = v14;
      *(_OWORD *)Buf1 = 0LL;
      if ( !v14 )
        SeMediumMandatorySid = SeExports->SeMediumMandatorySid;
      ClientToken = v163->ClientToken;
      if ( !v163->ClientToken )
        ClientToken = v163->PrimaryToken;
      if ( *((_DWORD *)ClientToken + 48) == 2 && *((int *)ClientToken + 49) < 2 )
        break;
      v36 = KeGetCurrentThread();
      --v36->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)ClientToken + 6), 1u);
      SepCopyTokenIntegrity((__int64)ClientToken, (__int64)Buf1);
      ExReleaseResourceLite(*((PERESOURCE *)ClientToken + 6));
      v37 = KeGetCurrentThread();
      v38 = v37->KernelApcDisable++ == -1;
      if ( v38
        && ($C71981A45BEB2B45F82C232A7085991E *)v37->ApcState.ApcListHead[0].Flink != &v37->152
        && !v37->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      if ( (v10 & 8) != 0 )
      {
        if ( (int)RtlSidDominates(SeMediumMandatorySid, (_DWORD *)SeExports->SeMediumMandatorySid, (bool *)&v135) < 0 )
          break;
        if ( !v135 )
          SeMediumMandatorySid = SeExports->SeMediumMandatorySid;
      }
      if ( (int)RtlSidDominates((_DWORD *)Buf1[0], SeMediumMandatorySid, (bool *)&v135) < 0 )
        break;
      if ( !v135 )
      {
        v135 = SeSinglePrivilegeCheckEx((LUID)SeRelabelPrivilege, v163, 1);
        if ( !v135 )
          break;
      }
      ++HIDWORD(v139);
      if ( !v33 )
      {
        v9 = v163;
        goto LABEL_44;
      }
    }
LABEL_214:
    v45 = -1073740730;
LABEL_215:
    LODWORD(PoolWithTag) = v45;
    goto LABEL_153;
  }
LABEL_44:
  TokenTrustLevel = SepLocateTokenTrustLevel((__int64 *)v9);
  v40 = TokenTrustLevel;
  if ( (v11 & 0x80) != 0 )
  {
    if ( TokenTrustLevel )
    {
      HIDWORD(v139) = 0;
      while ( 1 )
      {
        v41 = RtlFindAceByType((__int64)v15, 20, (unsigned int *)&v139 + 1);
        v43 = v41;
        if ( v41 )
        {
          if ( (*((_DWORD *)v41 + 1) & 0xFF000000) != 0 )
            goto LABEL_214;
          if ( !(unsigned __int8)RtlpValidTrustSubjectContext(v40, (__int64)(v41 + 8), v42, &PoolWithTag) )
            break;
        }
        ++HIDWORD(v139);
        if ( !v43 )
          goto LABEL_51;
      }
    }
    v45 = -1073741790;
    LODWORD(PoolWithTag) = -1073741790;
    goto LABEL_153;
  }
LABEL_51:
  if ( (v11 & 0x100) == 0 )
    goto LABEL_63;
  v159 = 0;
  v185 = 0;
  v186 = 256;
  for ( i = 0; ; ++i )
  {
    while ( 1 )
    {
      v44 = RtlFindAceByType((__int64)v15, 21, &i);
      if ( !v44 )
        goto LABEL_54;
      if ( (*((_DWORD *)v44 + 1) & 0xFF000000) != 0 )
        goto LABEL_298;
      if ( (v44[1] & 0x40) != 0 )
        break;
      v120 = *(_DWORD *)(v44 + 10) - v185;
      if ( !v120 )
        v120 = *((unsigned __int16 *)v44 + 7) - v186;
      if ( v120 || v44[9] != 1 || *((_DWORD *)v44 + 4) )
      {
LABEL_298:
        v45 = -1073741811;
        v159 = -1073741811;
        goto LABEL_56;
      }
LABEL_54:
      ++i;
      if ( !v44 )
      {
        v45 = v159;
        goto LABEL_56;
      }
    }
    if ( !(unsigned __int8)RtlpValidTrustSubjectContext(v40, (__int64)(v44 + 8), (__int64)v44, &v159) )
      break;
  }
  v45 = -1073741790;
  v159 = -1073741790;
LABEL_56:
  LODWORD(PoolWithTag) = v45;
  if ( v45 < 0 )
    goto LABEL_153;
  if ( (v152 & 2) != 0 )
    goto LABEL_63;
  v46 = v149;
  v153 = 0;
  v183 = v152 & 2;
  v184 = 256;
  v156 = 0;
  while ( 2 )
  {
    while ( 2 )
    {
      v47 = RtlFindAceByType((__int64)v46, 21, &v156);
      if ( !v47 )
      {
LABEL_60:
        ++v156;
        if ( !v47 )
        {
          v45 = v153;
          goto LABEL_62;
        }
        continue;
      }
      break;
    }
    if ( (*((_DWORD *)v47 + 1) & 0xFF000000) != 0 )
      goto LABEL_259;
    if ( (v47[1] & 0x40) == 0 )
    {
      v121 = *(_DWORD *)(v47 + 10) - v183;
      if ( !v121 )
        v121 = *((unsigned __int16 *)v47 + 7) - v184;
      if ( v121 || v47[9] != 1 || *((_DWORD *)v47 + 4) )
      {
LABEL_259:
        v45 = -1073741811;
        v153 = -1073741811;
        goto LABEL_62;
      }
      goto LABEL_60;
    }
    if ( (unsigned __int8)RtlpValidTrustSubjectContext(v40, (__int64)(v47 + 8), (__int64)v47, &v153) )
    {
      ++v156;
      continue;
    }
    break;
  }
  v45 = -1073741790;
  v153 = -1073741790;
LABEL_62:
  LODWORD(PoolWithTag) = v45;
  if ( v45 >= 0 )
  {
LABEL_63:
    v48 = v164;
    v49 = v152 & 2;
    if ( (v11 & 8) == 0 )
    {
      v52 = v149;
      v51 = 0x8000;
      v167 = v149;
      goto LABEL_68;
    }
    v50 = *(unsigned __int16 *)(v164 + 2);
    if ( (v152 & 2) != 0 )
    {
      LODWORD(PoolWithTag) = RtlpComputeMergedAcl(
                               (int)v149,
                               (*(_WORD *)(*v151 + 2) & 0x2800 | (*(unsigned __int16 *)(*v151 + 2) >> 1) & 0x18u) >> 1,
                               (int)v15,
                               (v50 & 0x2800 | (v50 >> 1) & 0x18) >> 1,
                               (__int64)v154,
                               (__int64)v150,
                               v158,
                               2,
                               (__int64)&v167,
                               (__int64)&v139);
      v45 = (int)PoolWithTag;
      if ( (int)PoolWithTag >= 0 )
      {
        v144 = 1;
        v51 = 2 * (v139 & 0x1400 | (2 * (v139 & 8 | 0x2004)));
        v134 = v51;
        goto LABEL_67;
      }
    }
    else
    {
      v167 = v15;
      v51 = v50 & 0x2000 | 0x8010;
      v134 = v51;
      if ( (v50 & 0xA00) == 0xA00 )
      {
        v51 = v50 & 0x2000 | 0x8810;
        v134 = v51;
      }
LABEL_67:
      v52 = v149;
LABEL_68:
      if ( (v11 & 0x20) == 0 )
      {
        v168 = v52;
        goto LABEL_72;
      }
      v53 = *(unsigned __int16 *)(v48 + 2);
      if ( v49 )
      {
        LODWORD(PoolWithTag) = RtlpComputeMergedAcl(
                                 (int)v52,
                                 (*(_WORD *)(*v151 + 2) & 0x800 | (*(unsigned __int16 *)(*v151 + 2) >> 1) & 0x18u) >> 1,
                                 (int)v15,
                                 (v53 & 0x800 | (v53 >> 1) & 0x18) >> 1,
                                 (__int64)v154,
                                 (__int64)v150,
                                 v158,
                                 2,
                                 (__int64)&v168,
                                 (__int64)&v139);
        v45 = (int)PoolWithTag;
        if ( (int)PoolWithTag >= 0 )
        {
          v52 = v149;
          v145 = 1;
          v51 = (2 * (v139 & 0x1400 | (2 * (v139 & 8 | 4)))) | v134;
          v134 = v51;
          goto LABEL_72;
        }
      }
      else
      {
        v168 = v15;
        v51 |= v53 & 0x2000 | 0x10;
        v134 = v51;
        if ( (v53 & 0xA00) == 0xA00 )
        {
          v51 |= 0x800u;
          v134 = v51;
        }
LABEL_72:
        if ( (v11 & 0x40) == 0 )
        {
          v169 = v52;
          goto LABEL_76;
        }
        v54 = *(unsigned __int16 *)(v48 + 2);
        if ( v49 )
        {
          LODWORD(PoolWithTag) = RtlpComputeMergedAcl(
                                   (int)v52,
                                   (*(_WORD *)(*v151 + 2) & 0x800 | (*(unsigned __int16 *)(*v151 + 2) >> 1) & 0x18u) >> 1,
                                   (int)v15,
                                   (v54 & 0x800 | (v54 >> 1) & 0x18) >> 1,
                                   (__int64)v154,
                                   (__int64)v150,
                                   v158,
                                   2,
                                   (__int64)&v169,
                                   (__int64)&v139);
          v45 = (int)PoolWithTag;
          if ( (int)PoolWithTag >= 0 )
          {
            v52 = v149;
            v146 = 1;
            v51 = (2 * (v139 & 0x1400 | (2 * (v139 & 8 | 4)))) | v134;
            v134 = v51;
            goto LABEL_76;
          }
        }
        else
        {
          v169 = v15;
          v51 |= v54 & 0x2000 | 0x10;
          v134 = v51;
          if ( (v54 & 0xA00) == 0xA00 )
          {
            v51 |= 0x800u;
            v134 = v51;
          }
LABEL_76:
          v55 = v150;
          if ( (v11 & 0x80) == 0 )
          {
            v57 = v151;
            v170 = v52;
            goto LABEL_80;
          }
          v56 = *(unsigned __int16 *)(v48 + 2);
          v57 = v151;
          if ( v49 )
          {
            LODWORD(PoolWithTag) = RtlpComputeMergedAcl(
                                     (int)v52,
                                     (*(_WORD *)(*v151 + 2) & 0x800 | (*(unsigned __int16 *)(*v151 + 2) >> 1) & 0x18u) >> 1,
                                     (int)v15,
                                     (v56 & 0x800 | (v56 >> 1) & 0x18) >> 1,
                                     (__int64)v154,
                                     (__int64)v150,
                                     v158,
                                     2,
                                     (__int64)&v170,
                                     (__int64)&v139);
            v45 = (int)PoolWithTag;
            if ( (int)PoolWithTag >= 0 )
            {
              v52 = v149;
              v147 = 1;
              v51 = (2 * (v139 & 0x1400 | (2 * (v139 & 8 | 4)))) | v134;
              v134 = v51;
              goto LABEL_80;
            }
          }
          else
          {
            v170 = v15;
            v51 |= v56 & 0x2000 | 0x10;
            v134 = v51;
            if ( (v56 & 0xA00) == 0xA00 )
            {
              v51 |= 0x800u;
              v134 = v51;
            }
LABEL_80:
            v8 = v164;
            if ( (v11 & 0x100) == 0 )
            {
              v171 = v52;
              goto LABEL_84;
            }
            v58 = *(unsigned __int16 *)(v164 + 2);
            if ( v49 )
            {
              LODWORD(PoolWithTag) = RtlpComputeMergedAcl(
                                       (int)v52,
                                       (*(_WORD *)(*v57 + 2) & 0x800 | (*(unsigned __int16 *)(*v57 + 2) >> 1) & 0x18u) >> 1,
                                       (int)v15,
                                       (v58 & 0x800 | (v58 >> 1) & 0x18) >> 1,
                                       (__int64)v154,
                                       (__int64)v55,
                                       v158,
                                       2,
                                       (__int64)&v171,
                                       (__int64)&v139);
              v45 = (int)PoolWithTag;
              if ( (int)PoolWithTag >= 0 )
              {
                v52 = v149;
                LOBYTE(v148) = 1;
                v51 = (2 * (v139 & 0x1400 | (2 * (v139 & 8 | 4)))) | v134;
                v134 = v51;
                goto LABEL_84;
              }
            }
            else
            {
              v171 = v15;
              v51 |= v58 & 0x2000 | 0x10;
              v134 = v51;
              if ( (v58 & 0xA00) == 0xA00 )
              {
                v51 |= 0x800u;
                v134 = v51;
              }
LABEL_84:
              if ( Size )
              {
                v59 = *(_WORD *)(v8 + 2);
                v60 = v59 & 0x2000 | 0x10 | v51;
                v134 = v60;
                if ( (v59 & 0xA00) == 0xA00 )
                  v134 = v60 | 0x800;
              }
              else
              {
                v15 = v52;
              }
              v61 = v167;
              LODWORD(PoolWithTag) = RtlpCombineAcls(
                                       (unsigned __int8 *)v167,
                                       v15,
                                       (unsigned __int8 *)v168,
                                       (unsigned __int8 *)v169,
                                       (unsigned __int8 *)v170,
                                       (unsigned __int8 *)v171,
                                       (char **)&P,
                                       0LL);
              v45 = (int)PoolWithTag;
              if ( (int)PoolWithTag >= 0 )
              {
                v38 = v61 == 0LL;
                v62 = (unsigned __int8 *)P;
                Src = P;
                if ( v38 && P && !*((_WORD *)P + 2) )
                {
                  ExFreePoolWithTag(P, 0);
                  v62 = 0LL;
                  Src = 0LL;
                  P = 0LL;
                }
                v31 = v150;
                v28 = v154;
                BYTE1(v148) = 1;
LABEL_90:
                if ( (v11 & 4) != 0 )
                {
                  v108 = *(_WORD *)(v8 + 2);
                  if ( (v152 & 1) != 0 )
                  {
                    if ( (v108 & 4) != 0 )
                    {
                      if ( v108 >= 0 )
                      {
                        v122 = *(_QWORD *)(v8 + 32);
                      }
                      else
                      {
                        v123 = *(_DWORD *)(v8 + 16);
                        if ( v123 )
                          LODWORD(v122) = v8 + v123;
                        else
                          LODWORD(v122) = 0;
                      }
                    }
                    else
                    {
                      LODWORD(v122) = 0;
                    }
                    v124 = *v151;
                    v125 = *(_WORD *)(*v151 + 2);
                    if ( (v125 & 4) != 0 )
                    {
                      if ( v125 >= 0 )
                      {
                        v126 = *(_QWORD *)(v124 + 32);
                      }
                      else
                      {
                        v127 = *(_DWORD *)(v124 + 16);
                        if ( v127 )
                          LODWORD(v126) = v124 + v127;
                        else
                          LODWORD(v126) = 0;
                      }
                    }
                    else
                    {
                      LODWORD(v126) = 0;
                    }
                    LODWORD(PoolWithTag) = RtlpComputeMergedAcl(
                                             v126,
                                             v125 & 0x140C,
                                             v122,
                                             *(_WORD *)(v8 + 2) & 0x140C,
                                             (__int64)v28,
                                             (__int64)v31,
                                             v158,
                                             1,
                                             (__int64)&v166,
                                             (__int64)&v139);
                    v45 = (int)PoolWithTag;
                    if ( (int)PoolWithTag < 0 )
                      goto LABEL_153;
                    v109 = 1;
                    v67 = (unsigned __int16 *)v166;
                    v31 = v150;
                    v28 = v154;
                    v66 = v139 & 0x1408 | 4 | v134;
                    LOBYTE(v134) = v139 & 8 | 4 | v134;
                    HIBYTE(v137) = 1;
                  }
                  else
                  {
                    if ( (v108 & 4) != 0 )
                    {
                      if ( v108 < 0 )
                      {
                        v112 = *(unsigned int *)(v8 + 16);
                        if ( (_DWORD)v112 )
                          v67 = (unsigned __int16 *)(v8 + v112);
                        else
                          v67 = 0LL;
                      }
                      else
                      {
                        v67 = *(unsigned __int16 **)(v8 + 32);
                      }
                    }
                    else
                    {
                      v67 = 0LL;
                    }
                    v66 = v108 & 0x1000 | 4 | v134;
                    LOBYTE(v134) = v134 | 4;
                    if ( (v108 & 0x500) == 0x500 )
                    {
                      v66 |= 0x400u;
                      LOBYTE(v134) = v66;
                    }
                    v109 = 0;
                  }
                  if ( !v140 )
                    goto LABEL_95;
                  v181 = 0LL;
                  v180 = 0LL;
                  v149 = 0LL;
                  v179 = 0LL;
                  v178 = 0LL;
                  v177 = 0LL;
                  v176 = 0LL;
                  SepGetDefaultsSubjectContext(
                    (_DWORD)v163,
                    (unsigned int)&v181,
                    (unsigned int)&v180,
                    (unsigned int)&v149,
                    (__int64)&v179,
                    (__int64)&v178,
                    (__int64)&v177,
                    (__int64)&v176);
                  v128 = RtlpCreateServerAcl((__int64)v67, v141, v149, (ACL **)&v173, &v136);
                  LODWORD(PoolWithTag) = v128;
                  v45 = v128;
                  if ( v128 >= 0 )
                  {
                    if ( v136 )
                    {
                      if ( v109 )
                        ExFreePoolWithTag(v166, 0);
                      v166 = v173;
                      v136 = 0;
                      HIBYTE(v137) = 1;
                    }
                    v67 = (unsigned __int16 *)v173;
                    v31 = v150;
                    v28 = v154;
                    goto LABEL_95;
                  }
                  goto LABEL_151;
                }
                v63 = *v151;
                v64 = *(_WORD *)(*v151 + 2);
                if ( (v64 & 4) != 0 )
                {
                  if ( v64 < 0 )
                  {
                    v65 = *(unsigned int *)(v63 + 16);
                    v66 = v134;
                    if ( (_DWORD)v65 )
                      v67 = (unsigned __int16 *)(v63 + v65);
                    else
                      v67 = 0LL;
                    goto LABEL_95;
                  }
                  v67 = *(unsigned __int16 **)(v63 + 32);
                }
                else
                {
                  v67 = 0LL;
                }
                v66 = v134;
LABEL_95:
                v68 = 4 * (unsigned __int8)v28[1] + 8;
                v69 = (unsigned __int8)v31[1];
                Size = v68;
                LODWORD(v165) = 4 * v69 + 8;
                if ( v62 )
                  v70 = (*((unsigned __int16 *)v62 + 1) + 3) & 0xFFFFFFFC;
                else
                  v70 = 0;
                if ( v67 )
                  v71 = (v67[1] + 3) & 0xFFFFFFFC;
                else
                  v71 = 0;
                PoolWithTag = ExAllocatePoolWithTag(
                                (POOL_TYPE)(*(_DWORD *)IdentifierAuthority.Value | 0x400),
                                4 * v69 + 8 + v70 + v71 + v68 + 20,
                                0x64536553u);
                v72 = PoolWithTag;
                if ( PoolWithTag )
                {
                  v73 = (unsigned __int16 *)PoolWithTag + 10;
                  *PoolWithTag = 0LL;
                  *((_DWORD *)v72 + 4) = 0;
                  *(_BYTE *)v72 = 1;
                  if ( (_BYTE)Size_4 )
                  {
                    v66 |= 0x800u;
                    LOBYTE(v134) = v66;
                  }
                  v74 = v164;
                  v75 = *((_WORD *)v72 + 1) | v66;
                  *((_WORD *)v72 + 1) = v75;
                  if ( (*(_WORD *)(v74 + 2) & 0x4000) != 0 )
                  {
                    *((_BYTE *)v72 + 1) = *(_BYTE *)(v74 + 1);
                    *((_WORD *)v72 + 1) = v75 | 0x4000;
                  }
                  v76 = (unsigned __int16 *)Src;
                  if ( Src )
                  {
                    v77 = (char *)v72 + 20;
                    v78 = (char *)v72 + 20;
                    if ( (v152 & 0x4000) != 0 )
                    {
                      RtlpNormalizeAcl((__int64)v78, (__int64)Src, (_DWORD *)v158);
                      if ( *((_WORD *)v72 + 12) )
                      {
                        v70 = *((unsigned __int16 *)v72 + 11);
                      }
                      else
                      {
                        v77 = 0LL;
                        v70 = 0;
                      }
                    }
                    else
                    {
                      memmove(v78, Src, *((unsigned __int16 *)Src + 1));
                      if ( v72 != (_OWORD *)-20LL )
                      {
                        v79 = (unsigned __int8 *)v72 + 28;
                        v80 = 0;
                        if ( *((_WORD *)v72 + 12) )
                        {
                          v81 = (_DWORD *)v158;
                          v82 = 1651;
                          do
                          {
                            v83 = *v79;
                            if ( ((unsigned __int8)v83 < 0xBu || (unsigned __int8)(v83 - 13) <= 1u) && (v79[1] & 8) == 0 )
                            {
                              v115 = *((_DWORD *)v79 + 1);
                              if ( v115 < 0 )
                                v115 |= *v81;
                              if ( (v115 & 0x40000000) != 0 )
                                v115 |= v81[1];
                              if ( (v115 & 0x20000000) != 0 )
                                v115 |= v81[2];
                              if ( (v115 & 0x10000000) != 0 )
                                v115 |= v81[3];
                              v116 = v115 & 0xFFFFFFF;
                              *((_DWORD *)v79 + 1) = v116;
                              if ( (unsigned __int8)v83 <= 0xAu && _bittest(&v82, v83) )
                                v117 = v81[3];
                              else
                                v117 = v81[3] | 0x1000000;
                              *((_DWORD *)v79 + 1) = v116 & v117;
                            }
                            ++v80;
                            v79 += *((unsigned __int16 *)v79 + 1);
                          }
                          while ( v80 < v73[2] );
                          v72 = PoolWithTag;
                          v76 = (unsigned __int16 *)Src;
                        }
                      }
                      v84 = v76[1];
                      if ( v70 > (unsigned int)v84 )
                        memset((char *)v73 + v84, 0, v70 - (unsigned int)v84);
                    }
                    v85 = (int)v72;
                    if ( v77 )
                    {
                      v73 = (unsigned __int16 *)((char *)v73 + v70);
                      v86 = (_DWORD)v77 - (_DWORD)v72;
                      goto LABEL_117;
                    }
                  }
                  else
                  {
                    v85 = (int)v72;
                  }
                  v86 = 0;
LABEL_117:
                  v87 = v134;
                  *((_DWORD *)v72 + 3) = v86;
                  if ( (v134 & 0x10) == 0 )
                    *((_WORD *)v72 + 1) |= *(_WORD *)(*v151 + 2) & 0x2830;
                  if ( v67 )
                  {
                    memmove(v73, v67, v67[1]);
                    if ( v73 )
                    {
                      v88 = (unsigned __int8 *)(v73 + 4);
                      v89 = 0;
                      if ( v73[2] )
                      {
                        v90 = (_DWORD *)v158;
                        v91 = 1651;
                        do
                        {
                          v92 = *v88;
                          if ( ((unsigned __int8)v92 < 0xBu || (unsigned __int8)(v92 - 13) <= 1u) && (v88[1] & 8) == 0 )
                          {
                            v93 = *((_DWORD *)v88 + 1);
                            if ( v93 < 0 )
                              v93 |= *v90;
                            if ( (v93 & 0x40000000) != 0 )
                              v93 |= v90[1];
                            if ( (v93 & 0x20000000) != 0 )
                              v93 |= v90[2];
                            if ( (v93 & 0x10000000) != 0 )
                              v93 |= v90[3];
                            v94 = v93 & 0xFFFFFFF;
                            *((_DWORD *)v88 + 1) = v94;
                            if ( (unsigned __int8)v92 <= 0xAu && _bittest(&v91, v92) )
                              v95 = v90[3];
                            else
                              v95 = v90[3] | 0x1000000;
                            *((_DWORD *)v88 + 1) = v94 & v95;
                          }
                          ++v89;
                          v88 += *((unsigned __int16 *)v88 + 1);
                        }
                        while ( v89 < v73[2] );
                        v87 = v134;
                      }
                    }
                    v96 = v72 + 1;
                    *((_DWORD *)v72 + 4) = (_DWORD)v73 - v85;
                    v97 = v67[1];
                    if ( v71 > (unsigned int)v97 )
                      memset((char *)v73 + v97, 0, v71 - (unsigned int)v97);
                  }
                  else
                  {
                    v96 = v72 + 1;
                    *((_DWORD *)v72 + 4) = 0;
                  }
                  v98 = v151;
                  if ( (v87 & 4) == 0 && (*((_WORD *)v72 + 1) |= *(_WORD *)(*v151 + 2) & 0x140C, (_BYTE)v137) )
                  {
                    *(_DWORD *)IdentifierAuthority.Value = 0;
                    *(_WORD *)&IdentifierAuthority.Value[4] = 768;
                    LODWORD(PoolWithTag) = RtlInitializeSid(&Sid, &IdentifierAuthority, 1u);
                    v45 = (int)PoolWithTag;
                    if ( (int)PoolWithTag >= 0 )
                    {
                      v129 = 0LL;
                      v188 = 4;
                      HIDWORD(v139) = 0;
                      while ( 1 )
                      {
                        v130 = *((_WORD *)v72 + 1);
                        if ( (v130 & 4) != 0 )
                        {
                          if ( v130 >= 0 )
                          {
                            v129 = *((_QWORD *)v72 + 4);
                          }
                          else
                          {
                            v131 = (unsigned int)*v96;
                            if ( (_DWORD)v131 )
                              v129 = (__int64)v72 + v131;
                          }
                        }
                        AceBySid = RtlFindAceBySid(v129, &Sid, (unsigned int *)&v139 + 1);
                        if ( !AceBySid )
                          break;
                        v133 = AceBySid[1];
                        ++HIDWORD(v139);
                        AceBySid[1] = v133 & 0xF4 | 8;
                        v129 = 0LL;
                      }
                      goto LABEL_143;
                    }
                  }
                  else
                  {
LABEL_143:
                    if ( *v96 && (v152 & 0x4000) != 0 )
                    {
                      RtlpNormalizeAcl((__int64)v73, (__int64)v73, 0LL);
                      v71 = v73[1];
                    }
                    v99 = Size;
                    v100 = (char *)v73 + v71;
                    memmove(v100, v154, Size);
                    v101 = (int)v100;
                    v102 = &v100[v99];
                    v38 = v142 == 0;
                    *((_DWORD *)v72 + 1) = v101 - v85;
                    if ( v38 )
                      *((_WORD *)v72 + 1) |= *(_WORD *)(*v98 + 2) & 1;
                    memmove(v102, v150, (unsigned int)v165);
                    v38 = v143 == 0;
                    *((_DWORD *)v72 + 2) = (_DWORD)v102 - v85;
                    if ( v38 )
                      *((_WORD *)v72 + 1) |= *(_WORD *)(*v98 + 2) & 2;
                    *v98 = (__int64)v72;
                    v45 = 0;
                    LODWORD(PoolWithTag) = 0;
                  }
                }
                else
                {
                  v45 = -1073741801;
                  LODWORD(PoolWithTag) = -1073741801;
                }
LABEL_151:
                if ( HIBYTE(v137) )
                  ExFreePoolWithTag(v166, 0);
              }
            }
          }
        }
      }
    }
  }
LABEL_153:
  if ( v167 && v144 )
    ExFreePoolWithTag(v167, 0);
  if ( v168 && v145 )
    ExFreePoolWithTag(v168, 0);
  if ( v169 && v146 )
    ExFreePoolWithTag(v169, 0);
  if ( v170 && v147 )
    ExFreePoolWithTag(v170, 0);
  if ( v171 && (_BYTE)v148 )
    ExFreePoolWithTag(v171, 0);
  if ( Src && BYTE1(v148) )
    ExFreePoolWithTag(Src, 0);
  if ( v136 )
    ExFreePoolWithTag(v173, 0);
  if ( v163 != (struct _SECURITY_SUBJECT_CONTEXT *)Object )
    return (unsigned int)v45;
  if ( HIDWORD(NlsMbOemCodePageTag) )
  {
    if ( v175[0] )
    {
      _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)v175[0] + 143) + 284LL));
      if ( v175[0] == (PVOID)SepTokenLeakToken )
        __debugbreak();
    }
    if ( Object[0] )
    {
      _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)Object[0] + 143) + 284LL));
      if ( Object[0] == (PVOID)SepTokenLeakToken )
        __debugbreak();
    }
  }
  v103 = KeGetCurrentThread()->ApcState.Process;
  _m_prefetchw(&v103[1].Affinity.StaticBitmap[5]);
  v104 = v103[1].Affinity.StaticBitmap[5];
  v105 = v175[0];
  if ( (v104 ^ (unsigned __int64)v175[0]) >= 0xF )
  {
LABEL_217:
    ObfDereferenceObjectWithTag(v105, 0x75536553u);
  }
  else
  {
    while ( 1 )
    {
      v106 = v104;
      v104 = _InterlockedCompareExchange64((volatile signed __int64 *)&v103[1].Affinity.StaticBitmap[5], v104 + 1, v104);
      if ( v106 == v104 )
        break;
      v105 = v175[0];
      if ( (v104 ^ (unsigned __int64)v175[0]) >= 0xF )
        goto LABEL_217;
    }
    if ( ObpTraceFlags )
      ObpPushStackInfo((__int64)v175[0] - 48, 0, 1u, 0x75536553u);
  }
  if ( Object[0] )
    ObfDereferenceObjectWithTag(Object[0], 0x75536553u);
  return (unsigned int)PoolWithTag;
}
