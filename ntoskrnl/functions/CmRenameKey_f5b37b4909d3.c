__int64 __fastcall CmRenameKey(ULONG_PTR a1, __m128i *a2, KPROCESSOR_MODE a3)
{
  _QWORD *v3; // rdi
  __int64 v4; // r15
  __int64 v5; // rbx
  ULONG_PTR v6; // r14
  __int64 v7; // r12
  unsigned int v8; // edx
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // edx
  __int64 v13; // rsi
  ULONG_PTR v14; // r13
  int started; // r14d
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 SecurityCacheEntryForKcbStack; // rax
  int v19; // r9d
  __int64 v20; // rdx
  __int64 v21; // r8
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  char v25; // di
  int v26; // eax
  __int64 v27; // r9
  unsigned int v28; // ebx
  unsigned int v29; // edi
  ULONG_PTR KcbInHashEntryByName; // rax
  __int64 v31; // r12
  bool IsKeyStackDeleted; // al
  __int64 v33; // r8
  __int64 v34; // r10
  __int16 v35; // dx
  __int64 v36; // rax
  __int16 v37; // dx
  int v38; // r9d
  char v39; // al
  char v40; // al
  int v41; // eax
  __int64 v42; // r12
  __int64 v43; // r8
  __int64 KcbAtLayerHeight; // r13
  int v45; // eax
  char v46; // al
  __int64 KeyNodeForKcb; // rax
  int SubKeyByNameWithStatus; // eax
  __int64 v49; // rcx
  __int16 v50; // r14
  int v51; // edx
  __int64 CellFlat; // rax
  int v53; // eax
  __int64 v54; // r9
  char v55; // r13
  int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  char v65; // di
  __int64 v66; // rcx
  __int64 v67; // rcx
  ULONG_PTR v68; // r14
  __int64 v69; // rdx
  __int16 v70; // cx
  bool v71; // zf
  ULONG_PTR v72; // r13
  ULONG_PTR v73; // rax
  ULONG_PTR v74; // r14
  ULONG_PTR v75; // rax
  int v76; // edx
  ULONG_PTR *v77; // r13
  __int64 v78; // rax
  int v79; // eax
  __int64 v80; // rcx
  __int64 v81; // r13
  ULONG_PTR v82; // rdx
  ULONG_PTR v83; // rdx
  int i; // eax
  __int64 EntryAtLayerHeight; // rax
  unsigned __int16 v86; // ax
  __int64 v87; // rax
  __int64 v88; // rcx
  __int64 v89; // rcx
  __int64 v90; // rbx
  __m128i *v91; // r14
  unsigned __int16 v92; // ax
  unsigned int v93; // r13d
  __int64 v94; // rbx
  __int64 v95; // rbx
  __int64 v96; // rcx
  __int64 v97; // rax
  ULONG_PTR v98; // rdx
  ULONG_PTR v99; // rdx
  unsigned __int64 v100; // rbx
  __int64 v101; // rdx
  unsigned int v102; // ecx
  unsigned int v103; // ecx
  __int64 v104; // rax
  char v105; // cl
  __int64 v106; // rcx
  _QWORD *v107; // rax
  __int64 v108; // rdx
  _QWORD *v109; // rcx
  ULONG_PTR v110; // rcx
  __int64 v111; // rcx
  _WORD *v112; // rax
  void *v113; // rcx
  int j; // eax
  __int64 v115; // rax
  __int64 v116; // rcx
  __int64 v117; // rcx
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // r8
  __int64 v121; // r9
  __int64 v123; // [rsp+30h] [rbp-D0h]
  __int64 v124; // [rsp+38h] [rbp-C8h]
  char v125; // [rsp+50h] [rbp-B0h]
  char v126; // [rsp+52h] [rbp-AEh]
  char v127; // [rsp+54h] [rbp-ACh]
  __int64 v128; // [rsp+58h] [rbp-A8h]
  ULONG_PTR BugCheckParameter3; // [rsp+60h] [rbp-A0h]
  __int16 v131; // [rsp+68h] [rbp-98h]
  unsigned int v132; // [rsp+6Ch] [rbp-94h]
  unsigned int v133; // [rsp+70h] [rbp-90h] BYREF
  unsigned int BugCheckParameter4; // [rsp+74h] [rbp-8Ch]
  unsigned int BugCheckParameter4_4; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v136; // [rsp+7Ch] [rbp-84h] BYREF
  int v137; // [rsp+80h] [rbp-80h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp-78h]
  ULONG_PTR v139; // [rsp+90h] [rbp-70h]
  __int64 v140; // [rsp+98h] [rbp-68h] BYREF
  __m128i *v141; // [rsp+A0h] [rbp-60h]
  __int64 v142; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v143; // [rsp+B0h] [rbp-50h]
  __int64 v144; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v145; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v146; // [rsp+C8h] [rbp-38h] BYREF
  ULONG_PTR v147; // [rsp+D8h] [rbp-28h]
  __int64 v148; // [rsp+E0h] [rbp-20h] BYREF
  ULONG_PTR v149; // [rsp+E8h] [rbp-18h]
  __int64 v150; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v151; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v152; // [rsp+108h] [rbp+8h] BYREF
  _WORD *NameControlBlock; // [rsp+110h] [rbp+10h]
  unsigned int v154; // [rsp+118h] [rbp+18h] BYREF
  __int64 v155; // [rsp+120h] [rbp+20h] BYREF
  _DWORD v156[2]; // [rsp+128h] [rbp+28h] BYREF
  _DWORD v157[2]; // [rsp+130h] [rbp+30h] BYREF
  ULONG_PTR v158; // [rsp+138h] [rbp+38h] BYREF
  __int128 v159; // [rsp+140h] [rbp+40h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+150h] [rbp+50h]
  __int128 v161; // [rsp+160h] [rbp+60h] BYREF
  PPRIVILEGE_SET v162[2]; // [rsp+170h] [rbp+70h]
  __int128 v163; // [rsp+180h] [rbp+80h] BYREF
  PPRIVILEGE_SET v164[2]; // [rsp+190h] [rbp+90h]
  _WORD v165[56]; // [rsp+1A0h] [rbp+A0h] BYREF

  v141 = a2;
  v139 = a1;
  v155 = 0LL;
  v3 = (_QWORD *)a1;
  v144 = 0xFFFFFFFFLL;
  v159 = 0LL;
  WORD1(v159) = -1;
  v161 = 0LL;
  WORD1(v161) = -1;
  v4 = 0LL;
  v163 = 0LL;
  WORD1(v163) = -1;
  v5 = 0LL;
  v151 = 0LL;
  v137 = 0;
  v6 = 0LL;
  v152 = 0LL;
  v7 = 0LL;
  v146 = 0LL;
  BugCheckParameter2 = 0LL;
  *(_OWORD *)Privileges = 0LL;
  v149 = 0LL;
  *(_OWORD *)v162 = 0LL;
  BugCheckParameter3 = 0LL;
  *(_OWORD *)v164 = 0LL;
  HvpGetBinContextInitialize((char *)&v144 + 4);
  v140 = v8;
  HvpGetBinContextInitialize((char *)&v140 + 4);
  v148 = v9;
  v136 = v9;
  v145 = 0LL;
  HvpGetBinContextInitialize((char *)&v148 + 4);
  v142 = v10;
  HvpGetBinContextInitialize((char *)&v142 + 4);
  v150 = v11;
  LODWORD(v147) = v11;
  v143 = 0LL;
  HvpGetBinContextInitialize((char *)&v150 + 4);
  v133 = v12;
  BugCheckParameter4 = v12;
  NameControlBlock = 0LL;
  v126 = 0;
  memset(&v165[1], 0, 0x66uLL);
  v165[0] = -2;
  CmpInitializeKeyNodeStack((char *)&v165[8]);
  CmpInitializeDelayDerefContext(&v151);
  v13 = MEMORY[0xFFFFF78000000014];
  if ( (unsigned __int8)CmpIsShutdownRundownActive() )
    goto LABEL_222;
  while ( 2 )
  {
    v14 = v6;
    CmpLockRegistryExclusive();
    v4 = v3[1];
    v125 = 1;
    v5 = *(_QWORD *)(v4 + 72);
    v128 = v5;
    v7 = 0LL;
    started = CmpStartKcbStackForTopLayerKcb((__int64)&v159, v4);
    if ( started < 0 )
      goto LABEL_221;
    started = CmpStartKcbStackForTopLayerKcb((__int64)&v161, v5);
    if ( started < 0 )
      goto LABEL_221;
    if ( (*(_DWORD *)(v4 + 8) & 0x180) != 0
      || (v16 = *(_QWORD *)(v4 + 32), (*(_DWORD *)(v16 + 160) & 0x100000) != 0)
      || v16 == CmpMasterHive
      || (*(_DWORD *)(v4 + 184) & 0x40000) != 0 )
    {
      started = -1073741790;
      goto LABEL_221;
    }
    started = CmpPerformKeyBodyDeletionCheck(v3, 0LL);
    if ( started < 0 )
      goto LABEL_221;
    if ( v3[7] || v3[8] )
    {
      started = CmpTransSearchAddTransFromKeyBody(v3, &v155);
      if ( started < 0 )
        goto LABEL_221;
      v17 = v155;
      started = CmpPerformKeyBodyDeletionCheck(v3, v155);
      if ( started < 0 )
        goto LABEL_105;
    }
    else
    {
      v17 = 0LL;
      v155 = 0LL;
    }
    if ( *(_WORD *)(v4 + 66) && v17 )
    {
      v66 = 26LL;
LABEL_104:
      CmpLogUnsupportedOperation(v66);
      started = -1073741822;
      goto LABEL_105;
    }
    if ( v17 )
    {
      v66 = 24LL;
      goto LABEL_104;
    }
    SecurityCacheEntryForKcbStack = CmpGetSecurityCacheEntryForKcbStack((__int64)&v161, 0LL, 0LL);
    started = CmpCheckKeySecurityDescriptorAccess((PSECURITY_DESCRIPTOR)(SecurityCacheEntryForKcbStack + 32), a3, 4u, 0);
    if ( started < 0 )
      goto LABEL_105;
    LOBYTE(v19) = a3;
    started = CmpDoAccessCheckOnLayeredSubtree(
                (unsigned int)&v159,
                0,
                0,
                v19,
                *(_WORD *)(v4 + 66) != 0 ? 196633 : 0x10000,
                1);
    if ( started < 0 )
      goto LABEL_105;
    CmpFlushNotifiesOnKeyBodyList(v4, 0LL, (__int64)&v151, 1);
    CmpReportNotify(v4, 0LL, 1u, 0LL);
    LOBYTE(v20) = 1;
    v22 = CmpTryAcquireKcbIXLocks(v4, v20, v21, (__int64)&v146);
    started = v22;
    if ( v22 != -1073741267 )
    {
      v127 = 0;
      v25 = 0;
      if ( v22 >= 0 )
        goto LABEL_22;
LABEL_105:
      v14 = BugCheckParameter3;
LABEL_106:
      v65 = 1;
LABEL_107:
      v5 = v128;
      goto LABEL_108;
    }
    v25 = 1;
    v127 = 1;
LABEL_22:
    LOBYTE(v23) = 1;
    v5 = v128;
    v26 = CmpTryAcquireKcbIXLocks(v128, v23, v24, (__int64)&v146);
    started = v26;
    if ( v26 == -1073741267 )
      goto LABEL_98;
    if ( v26 < 0 )
    {
      v65 = 1;
      goto LABEL_223;
    }
    if ( v25 )
    {
LABEL_98:
      CmpLogTransactionAbortedWithChildName(v4, 0LL, 4u, v27, v146);
      CmpDrainDelayDerefContext((_QWORD **)&v151);
      CmpUnlockRegistry(v62, v61, v63, v64);
      v65 = 0;
      started = CmpAbortRollbackPacket((__int64)&v146, 0LL);
      if ( started >= 0 )
      {
        CmpCleanupRollbackPacket((__int64)&v146);
        v146 = 0LL;
        if ( Privileges[1] )
          CmSiFreeMemory(Privileges[1]);
        if ( v162[1] )
          CmSiFreeMemory(v162[1]);
        goto LABEL_96;
      }
      goto LABEL_223;
    }
    v28 = CmpHashUnicodeComponent(v141);
    v154 = v28;
    v29 = v28 + 37 * *(_DWORD *)(v128 + 16);
    KcbInHashEntryByName = CmpFindKcbInHashEntryByName(*(_QWORD *)(v128 + 32), v29, v128, (__int64)v141);
    BugCheckParameter2 = KcbInHashEntryByName;
    v31 = KcbInHashEntryByName;
    if ( !KcbInHashEntryByName )
    {
      v42 = *(unsigned __int16 *)(v128 + 66);
      v132 = -1;
      BugCheckParameter4_4 = -1;
      BugCheckParameter3 = 0LL;
      if ( (v42 & 0x8000u) != 0LL )
        goto LABEL_79;
      while ( 1 )
      {
        KcbAtLayerHeight = CmpGetKcbAtLayerHeight((__int64)&v161, v42);
        v45 = *(__int16 *)(KcbAtLayerHeight + 66);
        if ( v45 == *(unsigned __int16 *)(v43 + 4) )
        {
          v46 = *(_BYTE *)(KcbAtLayerHeight + 65);
          if ( v46 )
            goto LABEL_56;
        }
        else if ( (_WORD)v45 )
        {
          v46 = *(_BYTE *)(KcbAtLayerHeight + 65);
LABEL_56:
          if ( v46 == 1 )
          {
            v50 = -1;
            v14 = 0LL;
            goto LABEL_67;
          }
        }
        if ( *(_DWORD *)(KcbAtLayerHeight + 40) != -1 )
        {
          KeyNodeForKcb = CmpGetKeyNodeForKcb(KcbAtLayerHeight, (__int64)&v140, 1);
          SubKeyByNameWithStatus = CmpFindSubKeyByNameWithStatus(
                                     *(_QWORD *)(KcbAtLayerHeight + 32),
                                     KeyNodeForKcb,
                                     (__int64)v141,
                                     &BugCheckParameter4_4);
          v49 = *(_QWORD *)(KcbAtLayerHeight + 32);
          started = SubKeyByNameWithStatus;
          if ( (*(_BYTE *)(v49 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v49, &v140);
          else
            HvpReleaseCellPaged(v49, (unsigned int *)&v140);
          if ( started >= 0 )
          {
            v14 = *(_QWORD *)(KcbAtLayerHeight + 32);
            v50 = v42;
            BugCheckParameter3 = v14;
LABEL_67:
            v132 = BugCheckParameter4_4;
            if ( BugCheckParameter4_4 != -1 )
            {
              if ( (*(_BYTE *)(v14 + 140) & 1) != 0 )
                CellFlat = HvpGetCellFlat(v14, BugCheckParameter4_4, &v144);
              else
                CellFlat = HvpGetCellPaged(v14, BugCheckParameter4_4, (unsigned int *)&v144);
              v7 = CellFlat;
              if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(v14) == 1 )
              {
                if ( (*(_BYTE *)(v14 + 140) & 1) != 0 )
                  HvpReleaseCellFlat(v14, &v144);
                else
                  HvpReleaseCellPaged(v14, (unsigned int *)&v144);
                v7 = 0LL;
                v126 = 1;
                if ( v50 != *(_WORD *)(v128 + 66) )
                {
                  BugCheckParameter3 = 0LL;
                  v132 = -1;
                  BugCheckParameter4_4 = -1;
                }
                goto LABEL_80;
              }
              started = -1073741535;
              v65 = 1;
              goto LABEL_107;
            }
LABEL_79:
            v126 = 0;
            v7 = 0LL;
            goto LABEL_80;
          }
          if ( started != -1073741772 )
          {
            v7 = 0LL;
            v14 = 0LL;
            goto LABEL_106;
          }
          v51 = *(__int16 *)(KcbAtLayerHeight + 66);
          if ( v51 == *(unsigned __int16 *)(v139 + 4) || (_WORD)v51 && *(_BYTE *)(KcbAtLayerHeight + 65) )
          {
            v14 = 0LL;
            goto LABEL_66;
          }
        }
        LOWORD(v42) = v42 - 1;
        if ( (v42 & 0x8000u) != 0LL )
        {
          v14 = 0LL;
LABEL_66:
          v50 = -1;
          goto LABEL_67;
        }
      }
    }
    CmpReferenceKeyControlBlock(KcbInHashEntryByName);
    v132 = *(_DWORD *)(v31 + 40);
    BugCheckParameter4_4 = v132;
    started = CmpStartKcbStackForTopLayerKcb((__int64)&v163, v31);
    if ( started < 0 )
    {
      v7 = 0LL;
      goto LABEL_105;
    }
    IsKeyStackDeleted = CmpIsKeyStackDeleted((__int64)&v163);
    v34 = 0LL;
    if ( !IsKeyStackDeleted )
    {
      started = -1073741535;
      v7 = 0LL;
      goto LABEL_105;
    }
    v35 = *(_WORD *)(v31 + 66);
    if ( v35 < 0 )
    {
LABEL_36:
      v40 = v126;
      goto LABEL_37;
    }
    while ( 1 )
    {
      v36 = CmpGetKcbAtLayerHeight((__int64)&v163, v35);
      v33 = (unsigned int)*(__int16 *)(v36 + 66);
      if ( (_DWORD)v33 != v38 )
        break;
      v39 = *(_BYTE *)(v36 + 65);
      if ( v39 )
        goto LABEL_34;
LABEL_35:
      v35 = v37 - 1;
      if ( v35 < 0 )
        goto LABEL_36;
    }
    if ( !*(_WORD *)(v36 + 66) )
      goto LABEL_35;
    v39 = *(_BYTE *)(v36 + 65);
LABEL_34:
    if ( v39 != 1 )
      goto LABEL_35;
    v40 = 1;
LABEL_37:
    v126 = v40;
    v7 = v34;
    v41 = CmpTryAcquireKcbIXLocks(BugCheckParameter2, 1LL, v33, (__int64)&v146);
    started = v41;
    if ( v41 == -1073741267 )
    {
      v127 = 1;
      goto LABEL_41;
    }
    if ( v41 < 0 )
      goto LABEL_106;
LABEL_41:
    started = CmpPrepareToInvalidateAllHigherLayerKcbs(BugCheckParameter2, 2LL, &v146);
    if ( started == -1073741267 )
    {
      v127 = 1;
      goto LABEL_44;
    }
    if ( started < 0 )
      goto LABEL_106;
LABEL_44:
    BugCheckParameter3 = v14;
    started = CmpPrepareForSubtreeInvalidation(BugCheckParameter2, 0, (__int64)&v146);
    if ( started == -1073741267 )
    {
      v127 = 1;
      goto LABEL_80;
    }
    if ( started < 0 )
      goto LABEL_106;
LABEL_80:
    v53 = CmpPrepareToInvalidateAllHigherLayerKcbs(v4, 2LL, &v146);
    started = v53;
    if ( v53 == -1073741267 )
    {
      v55 = 1;
      goto LABEL_84;
    }
    if ( v53 < 0 )
      goto LABEL_217;
    v55 = v127;
LABEL_84:
    if ( !*(_WORD *)(v4 + 66) )
    {
LABEL_87:
      if ( v55 )
        goto LABEL_88;
      v68 = BugCheckParameter2;
      if ( BugCheckParameter2 )
      {
        v156[0] = 8;
        v156[1] = 2;
        CmpEnumerateAllHigherLayerKcbs(
          BugCheckParameter2,
          (unsigned int)CmpCleanUpHigherLayerKcbCachesPreCallback,
          (unsigned int)CmpInvalidateAllHigherLayerKcbsPostCallback,
          (unsigned int)&v151,
          (__int64)v156,
          1,
          1);
        CmpInvalidateSubtree(v68, 8, 0, (__int64)&v151, 0LL);
        CmpFlushNotifiesOnKeyBodyList(v68, 8LL, (__int64)&v151, 1);
        CmpMarkKeyUnbacked(v68, (__int64)&v151);
        CmpDiscardKcb(v68);
      }
      v157[0] = 8;
      v157[1] = 2;
      CmpEnumerateAllHigherLayerKcbs(
        v4,
        (unsigned int)CmpCleanUpHigherLayerKcbCachesPreCallback,
        (unsigned int)CmpInvalidateAllHigherLayerKcbsPostCallback,
        (unsigned int)&v151,
        (__int64)v157,
        1,
        1);
      if ( *(_WORD *)(v4 + 66) )
        CmpInvalidateSubtree(v4, 8, 0, (__int64)&v151, 0LL);
      v70 = 0;
      v131 = 0;
      v71 = *(_WORD *)(v4 + 66) == 0;
      if ( *(__int16 *)(v4 + 66) > 0 )
      {
        do
        {
          v72 = CmpGetKcbAtLayerHeight((__int64)&v161, v70);
          v139 = v72;
          v73 = CmpFindKcbInHashEntryByName(*(_QWORD *)(v128 + 32), v29, v128, (__int64)v141);
          v158 = v73;
          v74 = v73;
          if ( v73 )
          {
            CmpReferenceKeyControlBlock(v73);
            CmpDereferenceKeyControlBlockUnsafe((volatile signed __int64 *)v149);
            v75 = v74;
            v149 = v74;
          }
          else
          {
            if ( *(_DWORD *)(v72 + 40) == -1 )
            {
              v76 = -1;
              v137 = -1;
              v77 = (ULONG_PTR *)(v72 + 32);
            }
            else
            {
              v78 = CmpGetKeyNodeForKcb(v72, (__int64)&v140, 1);
              v77 = (ULONG_PTR *)(v72 + 32);
              v79 = CmpFindSubKeyByNameWithStatus(*v77, v78, (__int64)v141, &v137);
              v80 = *v77;
              started = v79;
              if ( (*(_BYTE *)(*v77 + 140) & 1) != 0 )
                HvpReleaseCellFlat(v80, &v140);
              else
                HvpReleaseCellPaged(v80, (unsigned int *)&v140);
              if ( started == -1073741772 )
              {
                v76 = -1;
                v137 = -1;
              }
              else
              {
                if ( started < 0 )
                  goto LABEL_217;
                v76 = v137;
              }
            }
            LODWORD(v124) = v29;
            LODWORD(v123) = v28;
            started = CmpCreateKeyControlBlock(*v77, v76, v139, v149, 0, (unsigned __int16 *)v141, v123, v124, &v158);
            if ( started < 0 )
              goto LABEL_217;
            if ( v149 )
              CmpDereferenceKeyControlBlockUnsafe((volatile signed __int64 *)v149);
            v74 = v158;
            v75 = v158;
            v149 = v158;
          }
          v70 = v131 + 1;
          v131 = v70;
        }
        while ( v70 < *(__int16 *)(v4 + 66) );
        if ( v75 )
        {
          started = CmpAllocateLayerInfoForKcb(v74);
          if ( started < 0 )
            goto LABEL_217;
        }
        v71 = *(_WORD *)(v4 + 66) == 0;
      }
      if ( !v71 )
      {
        LOBYTE(v69) = 1;
        started = CmpPromoteKey(&v159, v69, 0LL);
        if ( started < 0 )
          goto LABEL_217;
        started = CmpPromoteSubtree(&v159, 0LL);
        if ( started < 0 )
          goto LABEL_217;
      }
      v5 = v128;
      started = HvMarkCellDirty(*(_QWORD *)(v128 + 32), *(unsigned int *)(v128 + 40), 1);
      if ( started >= 0 )
      {
        v81 = CmpGetKeyNodeForKcb(v128, (__int64)&v150, 1);
        v143 = v81;
        v82 = *(unsigned int *)(v81 + 28);
        if ( (_DWORD)v82 == -1 || (started = CmpMarkEntireIndexDirty(*(_QWORD *)(v128 + 32), v82), started >= 0) )
        {
          v83 = *(unsigned int *)(v81 + 32);
          if ( (_DWORD)v83 == -1 || (started = CmpMarkEntireIndexDirty(*(_QWORD *)(v128 + 32), v83), started >= 0) )
          {
            started = HvMarkCellDirty(*(_QWORD *)(v4 + 32), *(unsigned int *)(v4 + 40), 1);
            if ( started >= 0 )
            {
              if ( v132 == -1 || (started = CmpMarkKeyDirty(*(_QWORD *)(v128 + 32), v132, 1), started >= 0) )
              {
                if ( v126 )
                {
                  for ( i = CmpSubtreeEnumeratorStartForKcbStack(v165, &v159);
                        ;
                        i = HvMarkCellDirty(*(_QWORD *)EntryAtLayerHeight, *(unsigned int *)(EntryAtLayerHeight + 8), 1) )
                  {
                    started = i;
                    if ( i < 0 )
                      break;
                    if ( (unsigned int)CmpSubtreeEnumeratorAdvance(v165) == -2147483622 )
                      goto LABEL_157;
                    CmpSubtreeEnumeratorGetCurrentKeyStacks(v165, 0LL, &v152);
                    EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight(v152, *(_WORD *)(v4 + 66));
                  }
                  goto LABEL_221;
                }
                started = CmpMarkAllChildrenDirty(*(_QWORD *)(v4 + 32), *(unsigned int *)(v4 + 40));
                if ( started < 0 )
                  goto LABEL_221;
LABEL_157:
                v86 = CmpNameSize((unsigned __int16 *)v141);
                started = HvAllocateCell(
                            *(_QWORD *)(v4 + 32),
                            (unsigned int)v86 + 76,
                            *(_DWORD *)(v4 + 40) >> 31,
                            &v136,
                            (__int64)&v145,
                            (__int64)&v148);
                if ( started >= 0 )
                {
                  v87 = CmpGetKeyNodeForKcb(v4, (__int64)&v142, 1);
                  v88 = v145;
                  *(_OWORD *)v145 = *(_OWORD *)v87;
                  *(_OWORD *)(v88 + 16) = *(_OWORD *)(v87 + 16);
                  *(_OWORD *)(v88 + 32) = *(_OWORD *)(v87 + 32);
                  *(_OWORD *)(v88 + 48) = *(_OWORD *)(v87 + 48);
                  *(_QWORD *)(v88 + 64) = *(_QWORD *)(v87 + 64);
                  *(_DWORD *)(v88 + 72) = *(_DWORD *)(v87 + 72);
                  v89 = *(_QWORD *)(v4 + 32);
                  if ( (*(_BYTE *)(v89 + 140) & 1) != 0 )
                    HvpReleaseCellFlat(v89, &v142);
                  else
                    HvpReleaseCellPaged(v89, (unsigned int *)&v142);
                  v90 = v145;
                  v91 = v141;
                  v92 = CmpCopyName((_BYTE *)(v145 + 76), v141);
                  v93 = v91->m128i_u16[0];
                  *(_WORD *)(v90 + 72) = v92;
                  if ( v92 >= (unsigned __int16)v93 )
                    *(_WORD *)(v145 + 2) &= ~0x20u;
                  else
                    *(_WORD *)(v90 + 2) |= 0x20u;
                  v94 = v145;
                  *(_QWORD *)(v145 + 4) = v13;
                  if ( v126 )
                    *(_BYTE *)(v94 + 13) |= 3u;
                  if ( *(_WORD *)(v4 + 66) )
                  {
                    v95 = v145;
                    started = CmpReferenceSecurityNode(*(_QWORD *)(v4 + 32), *(unsigned int *)(v145 + 44));
                    if ( started < 0 )
                      goto LABEL_217;
                    v91 = v141;
                    LODWORD(v147) = *(_DWORD *)(v95 + 44);
                  }
                  v96 = *(_QWORD *)(v4 + 32);
                  if ( (*(_BYTE *)(v96 + 140) & 1) != 0 )
                    HvpReleaseCellFlat(v96, &v148);
                  else
                    HvpReleaseCellPaged(v96, (unsigned int *)&v148);
                  v145 = 0LL;
                  NameControlBlock = CmpGetNameControlBlock(v91, &v154);
                  if ( !NameControlBlock )
                  {
                    started = -1073741670;
                    goto LABEL_105;
                  }
                  v97 = v143;
                  v5 = v128;
                  v98 = *(unsigned int *)(v143 + 28);
                  if ( (_DWORD)v98 != -1 )
                  {
                    started = CmpDuplicateIndex(*(_QWORD *)(v128 + 32), v98);
                    if ( started < 0 )
                      goto LABEL_221;
                    v97 = v143;
                  }
                  v99 = *(unsigned int *)(v97 + 32);
                  if ( (_DWORD)v99 == -1 || (started = CmpDuplicateIndex(*(_QWORD *)(v128 + 32), v99), started >= 0) )
                  {
                    if ( v132 != -1
                      && !CmpRemoveSubKeyFromList(
                            *(_QWORD *)(v128 + 32),
                            (int *)&v133 + ((unsigned __int64)v132 >> 31),
                            v132) )
                    {
                      started = -1073741443;
                      goto LABEL_221;
                    }
                    v100 = (unsigned __int64)v136 >> 31;
                    started = CmpAddSubKeyToList(*(_QWORD *)(v128 + 32), &v133 + v100, v136);
                    if ( started >= 0 )
                    {
                      if ( *(_WORD *)(v4 + 66)
                        || CmpRemoveSubKeyFromList(
                             *(_QWORD *)(v128 + 32),
                             (int *)&v133 + ((unsigned __int64)*(unsigned int *)(v4 + 40) >> 31),
                             *(_DWORD *)(v4 + 40)) )
                      {
                        v101 = v143;
                        v102 = *(_DWORD *)(v143 + 28);
                        *(_DWORD *)(v143 + 28) = v133;
                        v133 = v102;
                        v103 = *(_DWORD *)(v101 + 32);
                        *(_DWORD *)(v101 + 32) = BugCheckParameter4;
                        BugCheckParameter4 = v103;
                        if ( v132 != -1 )
                          --*(_DWORD *)(v101 + 4 * ((unsigned __int64)v132 >> 31) + 20);
                        ++*(_DWORD *)(v101 + 4 * v100 + 20);
                        if ( !*(_WORD *)(v4 + 66) )
                          --*(_DWORD *)(v101 + 4 * ((unsigned __int64)*(unsigned int *)(v4 + 40) >> 31) + 20);
                        CmpCleanUpSubKeyInfo(v128, 1);
                        if ( (unsigned __int16)*(_DWORD *)(v143 + 52) < v93 )
                        {
                          *(_WORD *)(v143 + 52) = v93;
                          *(_WORD *)(v128 + 176) = v93;
                        }
                        started = 0;
                        if ( *(_WORD *)(v4 + 66) )
                        {
                          v104 = CmpGetKeyNodeForKcb(v4, (__int64)&v142, 1);
                          v105 = *(_BYTE *)(v104 + 13);
                          *(_WORD *)(v104 + 2) &= 0x20u;
                          *(_WORD *)(v104 + 52) = 0;
                          *(_DWORD *)(v104 + 52) &= 0xFF00FFFF;
                          *(_BYTE *)(v104 + 13) = v105 & 0x7C | 1;
                          *(_QWORD *)(v104 + 20) = 0LL;
                          *(_DWORD *)(v104 + 28) = -1;
                          *(_DWORD *)(v104 + 32) = -1;
                          *(_DWORD *)(v104 + 36) = 0;
                          *(_DWORD *)(v104 + 40) = -1;
                          *(_DWORD *)(v104 + 48) = -1;
                          *(_BYTE *)(v104 + 55) = 0;
                          *(_QWORD *)(v104 + 56) = 0LL;
                          *(_DWORD *)(v104 + 64) = 0;
                          *(_WORD *)(v104 + 74) = 0;
                          v106 = *(_QWORD *)(v4 + 32);
                          if ( (*(_BYTE *)(v106 + 140) & 1) != 0 )
                            HvpReleaseCellFlat(v106, &v142);
                          else
                            HvpReleaseCellPaged(v106, (unsigned int *)&v142);
                        }
                        else
                        {
                          HvFreeCell(*(_QWORD *)(v4 + 32), *(unsigned int *)(v4 + 40));
                        }
                        *(_DWORD *)(v4 + 40) = v136;
                        v136 = -1;
                        LODWORD(v147) = -1;
                        if ( *(_WORD *)(v4 + 66) )
                        {
                          v107 = *(_QWORD **)(v4 + 192);
                          v108 = *v107;
                          if ( *(_QWORD **)(*v107 + 8LL) != v107 || (v109 = (_QWORD *)v107[1], (_QWORD *)*v109 != v107) )
                            __fastfail(3u);
                          *v109 = v108;
                          *(_QWORD *)(v108 + 8) = v109;
                          CmpDereferenceKeyControlBlockWithLock(
                            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 192) + 24LL) + 16LL),
                            (__int64)&v151,
                            0);
                          v110 = v149;
                          *(_QWORD *)(*(_QWORD *)(v4 + 192) + 24LL) = 0LL;
                          CmpCreateLayerLink(v110, v4);
                        }
                        CmpRemoveKeyHash(*(_QWORD *)(v4 + 32), (_DWORD *)(v4 + 16));
                        v111 = *(_QWORD *)(v4 + 32);
                        *(_DWORD *)(v4 + 16) = v29;
                        CmpInsertKeyHash(v111, v4 + 16);
                        v112 = *(_WORD **)(v4 + 80);
                        *(_QWORD *)(v4 + 80) = NameControlBlock;
                        NameControlBlock = v112;
                        if ( *(_QWORD *)(v4 + 296) )
                          _InterlockedOr64((volatile signed __int64 *)(v4 + 296), 1uLL);
                        v113 = *(void **)(v4 + 200);
                        if ( (unsigned __int64)v113 >= 2 )
                          ExFreePoolWithTag(v113, 0x624E4D43u);
                        *(_QWORD *)(v4 + 200) = 0LL;
                        if ( v126 )
                          *(_BYTE *)(v4 + 65) = 3;
                        CmpUpdateParentForEachSon(*(_QWORD *)(v4 + 32));
                        if ( v126 )
                        {
                          CmpSubtreeEnumeratorReset(v165);
                          CmpSubtreeEnumeratorBeginForKcbStack(v165, &v159);
                          for ( j = CmpSubtreeEnumeratorAdvance(v165);
                                j != -2147483622;
                                j = CmpSubtreeEnumeratorAdvance(v165) )
                          {
                            CmpSubtreeEnumeratorGetCurrentKeyStacks(v165, 0LL, &v152);
                            v115 = CmpKeyNodeStackGetEntryAtLayerHeight(v152, *(_WORD *)(v4 + 66));
                            *(_BYTE *)(*(_QWORD *)(v115 + 16) + 13LL) |= 3u;
                          }
                        }
                        v5 = v128;
                        *(_QWORD *)(v143 + 4) = v13;
                        v116 = *(_QWORD *)(v128 + 32);
                        *(_QWORD *)(v128 + 168) = v13;
                        if ( (*(_BYTE *)(v116 + 140) & 1) != 0 )
                          HvpReleaseCellFlat(v116, &v150);
                        else
                          HvpReleaseCellPaged(v116, (unsigned int *)&v150);
                        v143 = 0LL;
                        CmpSearchForOpenSubKeys(v4, 1, 0LL);
                        ++*(_QWORD *)(v128 + 304);
                        ++*(_QWORD *)(v4 + 304);
                        if ( BugCheckParameter4_4 != -1 )
                          CmpFreeKeyByCell(*(_QWORD *)(v128 + 32), BugCheckParameter4_4, 0);
                        goto LABEL_221;
                      }
                      started = -1073741443;
                    }
                    goto LABEL_105;
                  }
                }
              }
            }
          }
        }
      }
LABEL_221:
      v14 = BugCheckParameter3;
      v65 = v125;
      goto LABEL_108;
    }
    v56 = CmpPrepareForSubtreeInvalidation(v4, 0, (__int64)&v146);
    started = v56;
    if ( v56 != -1073741267 )
    {
      if ( v56 >= 0 )
        goto LABEL_87;
LABEL_217:
      v5 = v128;
      goto LABEL_221;
    }
LABEL_88:
    CmpLogTransactionAbortedWithChildName(v4, 0LL, 4u, v54, v146);
    if ( BugCheckParameter2 )
    {
      CmpDereferenceKeyControlBlockWithLock(BugCheckParameter2, (__int64)&v151, 0);
      BugCheckParameter2 = 0LL;
    }
    CmpDrainDelayDerefContext((_QWORD **)&v151);
    CmpUnlockRegistry(v58, v57, v59, v60);
    v125 = 0;
    started = CmpAbortRollbackPacket((__int64)&v146, 0LL);
    if ( started < 0 )
      goto LABEL_217;
    CmpCleanupRollbackPacket((__int64)&v146);
    v146 = 0LL;
    if ( Privileges[1] )
      CmSiFreeMemory(Privileges[1]);
    if ( v162[1] )
      CmSiFreeMemory(v162[1]);
    v5 = v128;
LABEL_96:
    v13 = MEMORY[0xFFFFF78000000014];
    if ( !(unsigned __int8)CmpIsShutdownRundownActive() )
    {
      v3 = (_QWORD *)v139;
      v6 = BugCheckParameter3;
      continue;
    }
    break;
  }
LABEL_222:
  started = -1073741431;
  v65 = 0;
LABEL_223:
  v14 = BugCheckParameter3;
LABEL_108:
  CmpSubtreeEnumeratorCleanup(v165);
  if ( v143 )
  {
    v67 = *(_QWORD *)(v5 + 32);
    if ( (*(_BYTE *)(v67 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v67, &v150);
    else
      HvpReleaseCellPaged(v67, (unsigned int *)&v150);
  }
  if ( v7 )
  {
    if ( (*(_BYTE *)(v14 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v14, &v144);
    else
      HvpReleaseCellPaged(v14, (unsigned int *)&v144);
  }
  if ( (_DWORD)v147 != -1 )
    CmpDereferenceSecurityNode(*(_QWORD *)(v4 + 32), (unsigned int)v147);
  if ( v145 )
  {
    v117 = *(_QWORD *)(v4 + 32);
    if ( (*(_BYTE *)(v117 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v117, &v148);
    else
      HvpReleaseCellPaged(v117, (unsigned int *)&v148);
  }
  if ( v133 != -1 )
    CmpFreeIndexByCell(*(_QWORD *)(v5 + 32), v133);
  if ( BugCheckParameter4 != -1 )
    CmpFreeIndexByCell(*(_QWORD *)(v5 + 32), BugCheckParameter4);
  if ( v136 != -1 )
    HvFreeCell(*(_QWORD *)(v4 + 32), v136);
  if ( NameControlBlock )
    CmpDereferenceNameControlBlockWithLock(NameControlBlock);
  if ( v149 )
    CmpDereferenceKeyControlBlockWithLock(v149, (__int64)&v151, 0);
  if ( BugCheckParameter2 )
    CmpDereferenceKeyControlBlockWithLock(BugCheckParameter2, (__int64)&v151, 0);
  CmpDrainDelayDerefContext((_QWORD **)&v151);
  if ( v65 )
    CmpUnlockRegistry(v119, v118, v120, v121);
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  if ( v162[1] )
    CmSiFreeMemory(v162[1]);
  if ( v164[1] )
    CmSiFreeMemory(v164[1]);
  CmpCleanupRollbackPacket((__int64)&v146);
  return (unsigned int)started;
}
