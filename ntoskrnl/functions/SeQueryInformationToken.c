NTSTATUS __stdcall SeQueryInformationToken(
        PACCESS_TOKEN Token,
        TOKEN_INFORMATION_CLASS TokenInformationClass,
        PVOID *TokenInformation)
{
  unsigned __int64 v3; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 Pool2; // rax
  char *v10; // r12
  unsigned int v11; // r15d
  _DWORD *v12; // rbx
  __int64 v13; // rdx
  unsigned int v14; // r13d
  unsigned int v15; // eax
  bool IsSandboxedToken; // al
  struct _KTHREAD *v17; // rax
  __int64 v18; // rax
  _DWORD *v19; // r12
  struct _KTHREAD *v20; // rcx
  unsigned int v21; // r15d
  bool v22; // bl
  char IsElevatedRid; // al
  struct _KTHREAD *v24; // rax
  PSID v25; // rbx
  int v26; // ecx
  __int64 v27; // rax
  _QWORD *v28; // rbx
  struct _KTHREAD *v29; // rax
  __int64 v30; // rax
  int v31; // edx
  _DWORD *v32; // rax
  int v33; // edx
  struct _KTHREAD *v34; // rax
  __int64 v35; // rdi
  unsigned int v36; // ebx
  __int64 v37; // rax
  char *v38; // r15
  struct _KTHREAD *v39; // rax
  unsigned int v40; // edi
  _QWORD *v41; // rax
  struct _KTHREAD *v42; // rax
  struct _ERESOURCE *v43; // rcx
  unsigned int TokenAccessInformationBufferSize; // r15d
  __int64 v45; // rax
  void *v46; // r8
  struct _KTHREAD *v47; // rax
  unsigned int v48; // ecx
  ULONG v49; // ebx
  ULONG v50; // eax
  __int64 v51; // r8
  __int64 *v52; // rdx
  __int64 v53; // rax
  _DWORD *v54; // rax
  void *v55; // rdi
  struct _KTHREAD *v56; // rax
  unsigned int v57; // edi
  _QWORD *v58; // rax
  struct _KTHREAD *v59; // rax
  unsigned int v60; // eax
  unsigned int v61; // ebx
  _DWORD *v62; // rax
  struct _KTHREAD *v63; // rax
  int v64; // eax
  unsigned int v65; // ecx
  int v66; // r10d
  int v67; // r8d
  __int64 *v68; // rdx
  __int64 v69; // r9
  __int64 v70; // rax
  unsigned int v71; // eax
  unsigned int v72; // r13d
  unsigned int v73; // r15d
  __int64 *v74; // rdx
  __int64 v75; // r9
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // r9
  __int64 v79; // rcx
  __int64 v80; // rdx
  struct _KTHREAD *v81; // rax
  __int64 v82; // rax
  __int64 v83; // rbx
  __int64 v84; // rax
  void *v85; // rcx
  _OWORD *v86; // rax
  _DWORD *v87; // rax
  _DWORD *v88; // rax
  struct _KTHREAD *v89; // rax
  unsigned int v90; // ecx
  ULONG v91; // ebx
  ULONG v92; // eax
  __int64 *v93; // rdx
  __int64 v94; // r8
  __int64 v95; // rax
  _DWORD *v96; // rax
  struct _KTHREAD *v97; // rax
  __int64 v98; // r15
  __int128 *v99; // rax
  __int128 *v100; // r15
  unsigned int v101; // ebx
  _OWORD *v102; // rax
  void *v103; // rdi
  NTSTATUS v104; // ebx
  struct _KTHREAD *v105; // rax
  int *v106; // rax
  unsigned int v107; // ebx
  ULONG v108; // edi
  __int64 *v109; // rdx
  __int64 v110; // r8
  __int64 v111; // rax
  struct _KTHREAD *v112; // rax
  struct _KTHREAD *v113; // rax
  __int64 v114; // rax
  __int64 v115; // rbx
  unsigned int v116; // [rsp+80h] [rbp-39h] BYREF
  int v117; // [rsp+84h] [rbp-35h] BYREF
  int v118; // [rsp+88h] [rbp-31h] BYREF
  int v119; // [rsp+8Ch] [rbp-2Dh] BYREF
  int v120; // [rsp+90h] [rbp-29h] BYREF
  unsigned int v121; // [rsp+94h] [rbp-25h] BYREF
  PSID Sid[2]; // [rsp+98h] [rbp-21h] BYREF
  __int128 v123; // [rsp+A8h] [rbp-11h] BYREF
  __int128 v124; // [rsp+B8h] [rbp-1h]
  _OWORD v125[4]; // [rsp+C8h] [rbp+Fh] BYREF
  __int64 v126; // [rsp+120h] [rbp+67h] BYREF
  unsigned int v127; // [rsp+128h] [rbp+6Fh] BYREF
  void *v128; // [rsp+138h] [rbp+7Fh] BYREF

  v3 = 0LL;
  v127 = 0;
  v116 = 0;
  v123 = 0LL;
  v124 = 0LL;
  v125[0] = 0LL;
  if ( TokenInformationClass == (TokenAppContainerNumber|TokenAuditPolicy) )
  {
LABEL_7:
    switch ( TokenInformationClass )
    {
      case TokenIsAppContainer:
        *(_DWORD *)TokenInformation = (*((_DWORD *)Token + 50) >> 14) & 1;
        return 0;
      case TokenHasRestrictions:
        IsSandboxedToken = (*((_DWORD *)Token + 50) & 0x810) != 0;
        break;
      case TokenPrivateNameSpace:
        *(_DWORD *)TokenInformation = *((_WORD *)Token + 101) & 1;
        return 0;
      case TokenAppContainerNumber|TokenAuditPolicy:
        *(_DWORD *)TokenInformation = (unsigned __int8)SepSidInTokenSidHash(
                                                         (_DWORD *)Token + 202,
                                                         0LL,
                                                         (unsigned __int8 *)SeAppSiloSid,
                                                         0,
                                                         1,
                                                         0);
        return 0;
      default:
        IsSandboxedToken = SepIsSandboxedToken(Token, KeGetCurrentThread()->PreviousMode);
        break;
    }
    *(_BYTE *)TokenInformation = IsSandboxedToken;
    return 0;
  }
  if ( TokenInformationClass == TokenVirtualizationEnabled )
  {
    LODWORD(v3) = (*((_DWORD *)Token + 50) & 0x400) != 0;
LABEL_4:
    *(_DWORD *)TokenInformation = v3;
  }
  else
  {
    switch ( TokenInformationClass )
    {
      case TokenUser:
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v127 = 4 * *(unsigned __int8 *)(**((_QWORD **)Token + 19) + 1LL) + 24;
        Pool2 = ExAllocatePool2(256LL, v127, 538994003LL);
        v128 = (void *)Pool2;
        if ( !Pool2 )
          goto LABEL_74;
        v10 = (char *)(Pool2 + 16);
        v11 = v127;
        v12 = (_DWORD *)(Pool2 + 8);
        v13 = *((_QWORD *)Token + 19) - Pool2;
        v126 = v13;
        do
        {
          v14 = 4 * *(unsigned __int8 *)(*(_QWORD *)((char *)v12 + v13 - 8) + 1LL) + 8;
          if ( v14 > v11 )
            break;
          *((_QWORD *)v12 - 1) = v10;
          v11 -= v14;
          *v12 = *(_DWORD *)((char *)v12 + v13);
          v15 = 4 * *(unsigned __int8 *)(*(_QWORD *)((char *)v12 + v13 - 8) + 1LL) + 8;
          if ( v15 <= v14 )
          {
            memmove(v10, *(const void **)((char *)v12 + v13 - 8), v15);
            v13 = v126;
          }
          LODWORD(v3) = v3 + 1;
          v10 += v14;
          v12 += 4;
        }
        while ( !(_DWORD)v3 );
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        KeLeaveCriticalRegion();
        *TokenInformation = v128;
        return 0;
      case TokenGroups:
        v47 = KeGetCurrentThread();
        --v47->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v48 = *((_DWORD *)Token + 31);
        v49 = 16 * v48 - 8;
        v50 = v49;
        if ( v48 > 1 )
        {
          v51 = v48 - 1;
          v52 = (__int64 *)(*((_QWORD *)Token + 19) + 16LL);
          do
          {
            v53 = *v52;
            v52 += 2;
            v49 += 4 * *(unsigned __int8 *)(v53 + 1) + 8;
            v50 = v49;
            --v51;
          }
          while ( v51 );
        }
        v54 = (_DWORD *)ExAllocatePool2(256LL, v50, 538994003LL);
        v55 = v54;
        if ( !v54 )
          goto LABEL_74;
        *v54 = *((_DWORD *)Token + 31) - 1;
        RtlCopySidAndAttributesArray(
          *((_DWORD *)Token + 31) - 1,
          *((_QWORD *)Token + 19) + 16LL,
          v49,
          (__int64)(v54 + 2),
          (char *)v54 + (unsigned int)(16 * *((_DWORD *)Token + 31) - 32) + 24,
          &v126,
          (ULONG *)&v126);
        goto LABEL_71;
      case TokenPrivileges:
        v59 = KeGetCurrentThread();
        --v59->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v60 = SepTokenPrivilegeCount((__int64)Token);
        if ( v60 <= 1 )
          v61 = 16;
        else
          v61 = 12 * v60 + 4;
        v62 = (_DWORD *)ExAllocatePool2(256LL, v61, 538994003LL);
        v28 = v62;
        if ( !v62 )
          goto LABEL_74;
        SepConvertTokenPrivileges((__int64)Token, v62);
        goto LABEL_40;
      case TokenOwner:
        v56 = KeGetCurrentThread();
        --v56->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v57 = 4
            * *(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)Token + 19) + 16LL * *((unsigned int *)Token + 36)) + 1LL)
            + 16;
        v58 = (_QWORD *)ExAllocatePool2(256LL, v57, 538994003LL);
        v28 = v58;
        if ( !v58 )
          goto LABEL_74;
        *v58 = v58 + 1;
        RtlCopySid(v57 - 8, v58 + 1, *(PSID *)(*((_QWORD *)Token + 19) + 16LL * *((unsigned int *)Token + 36)));
        goto LABEL_40;
      case TokenPrimaryGroup:
        v39 = KeGetCurrentThread();
        --v39->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v40 = 4 * *(unsigned __int8 *)(*((_QWORD *)Token + 21) + 1LL) + 16;
        v41 = (_QWORD *)ExAllocatePool2(256LL, v40, 538994003LL);
        v28 = v41;
        if ( !v41 )
          goto LABEL_74;
        *v41 = v41 + 1;
        RtlCopySid(v40 - 8, v41 + 1, *((PSID *)Token + 21));
        goto LABEL_40;
      case TokenDefaultDacl:
        v81 = KeGetCurrentThread();
        --v81->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v82 = *((_QWORD *)Token + 23);
        v83 = 8LL;
        if ( v82 )
          v83 = *(unsigned __int16 *)(v82 + 2) + 8LL;
        v84 = ExAllocatePool2(256LL, v83, 538994003LL);
        v28 = (_QWORD *)v84;
        if ( !v84 )
          goto LABEL_74;
        v85 = (void *)(v84 + 8);
        if ( !*((_QWORD *)Token + 23) )
          goto LABEL_147;
        *(_QWORD *)v84 = v85;
        memmove(v85, *((const void **)Token + 23), *(unsigned __int16 *)(*((_QWORD *)Token + 23) + 2LL));
        goto LABEL_40;
      case TokenSource:
        v86 = (_OWORD *)ExAllocatePool2(256LL, 16LL, 538994003LL);
        if ( !v86 )
          return -1073741670;
        *v86 = *(_OWORD *)Token;
        *TokenInformation = v86;
        return 0;
      case TokenType:
        v87 = (_DWORD *)ExAllocatePool2(256LL, 4LL, 538994003LL);
        if ( !v87 )
          return -1073741670;
        *v87 = *((_DWORD *)Token + 48);
        *TokenInformation = v87;
        return 0;
      case TokenImpersonationLevel:
        if ( *((_DWORD *)Token + 48) != 2 )
          return -1073741821;
        v88 = (_DWORD *)ExAllocatePool2(256LL, 4LL, 538994003LL);
        if ( !v88 )
          return -1073741670;
        *v88 = *((_DWORD *)Token + 49);
        *TokenInformation = v88;
        return 0;
      case TokenStatistics:
        v27 = ExAllocatePool2(256LL, 56LL, 538994003LL);
        v28 = (_QWORD *)v27;
        if ( !v27 )
          return -1073741670;
        *(_QWORD *)v27 = *((_QWORD *)Token + 2);
        *(_QWORD *)(v27 + 8) = *((_QWORD *)Token + 3);
        *(_DWORD *)(v27 + 24) = *((_DWORD *)Token + 48);
        *(_DWORD *)(v27 + 28) = *((_DWORD *)Token + 49);
        *(_QWORD *)(v27 + 16) = *((_QWORD *)Token + 5);
        v29 = KeGetCurrentThread();
        --v29->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        *((_DWORD *)v28 + 8) = *((_DWORD *)Token + 34);
        v30 = *((_QWORD *)Token + 23);
        v31 = *((_DWORD *)Token + 34) - 4 * *(unsigned __int8 *)(*((_QWORD *)Token + 21) + 1LL) - 8;
        if ( v30 )
          v31 -= *(unsigned __int16 *)(v30 + 2);
        *((_DWORD *)v28 + 9) = v31;
        *((_DWORD *)v28 + 9) = *((_DWORD *)Token + 35);
        *((_DWORD *)v28 + 10) = *((_DWORD *)Token + 31) - 1;
        *((_DWORD *)v28 + 11) = SepTokenPrivilegeCount((__int64)Token);
        v28[6] = *((_QWORD *)Token + 7);
        goto LABEL_40;
      case TokenSessionId:
        SeQuerySessionIdToken(Token, (PULONG)TokenInformation);
        return 0;
      case TokenGroupsAndPrivileges:
        v63 = KeGetCurrentThread();
        --v63->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v64 = SepTokenPrivilegeCount((__int64)Token);
        v65 = *((_DWORD *)Token + 31);
        LODWORD(v128) = v64;
        v66 = 12 * v64;
        v67 = 16 * v65;
        LODWORD(v126) = 12 * v64;
        v116 = 16 * v65;
        v127 = 16 * v65;
        if ( v65 )
        {
          v68 = (__int64 *)*((_QWORD *)Token + 19);
          v69 = v65;
          do
          {
            v70 = *v68;
            v68 += 2;
            v67 += (4 * *(unsigned __int8 *)(v70 + 1) + 15) & 0xFFFFFFF8;
            --v69;
          }
          while ( v69 );
          v127 = v67;
        }
        v71 = *((_DWORD *)Token + 32);
        Sid[0] = (char *)Token + 152;
        v72 = 16 * v71;
        v73 = 16 * v71;
        if ( v71 )
        {
          v74 = (__int64 *)*((_QWORD *)Token + 20);
          v75 = v71;
          do
          {
            v76 = *v74;
            v74 += 2;
            v73 += (4 * *(unsigned __int8 *)(v76 + 1) + 15) & 0xFFFFFFF8;
            --v75;
          }
          while ( v75 );
          Sid[0] = (char *)Token + 152;
        }
        v77 = ExAllocatePool2(256LL, v73 + v67 + v66 + 56, 538994003LL);
        v28 = (_QWORD *)v77;
        if ( !v77 )
          goto LABEL_74;
        v78 = v77 + 56;
        v79 = v127;
        *(_QWORD *)(v77 + 48) = *((_QWORD *)Token + 3);
        *(_DWORD *)(v77 + 4) = v79;
        *(_DWORD *)v77 = *((_DWORD *)Token + 31);
        *(_QWORD *)(v77 + 8) = v77 + 56;
        *(_DWORD *)(v77 + 20) = v73;
        *(_DWORD *)(v77 + 16) = *((_DWORD *)Token + 32);
        if ( *((_DWORD *)Token + 32) )
          v3 = v78 + ((v79 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
        else
          Sid[0] = (char *)Token + 152;
        *(_QWORD *)(v77 + 24) = v3;
        v80 = v116;
        *(_DWORD *)(v77 + 36) = v126;
        *(_DWORD *)(v77 + 32) = (_DWORD)v128;
        *(_QWORD *)(v77 + 40) = v78 + v79 + v73;
        RtlCopySidAndAttributesArray(
          *((_DWORD *)Token + 31),
          *(_QWORD *)Sid[0],
          v79 - v80,
          v78,
          (char *)(v78 + v80),
          &v126,
          (ULONG *)&v126);
        if ( *((_DWORD *)v28 + 4) )
          RtlCopySidAndAttributesArray(
            *((_DWORD *)Token + 32),
            *((_QWORD *)Token + 20),
            v73 - v72,
            v28[3],
            (char *)(v28[3] + v72),
            &v126,
            (ULONG *)&v126);
        SepConvertTokenPrivilegesToLuidAndAttributes(Token, v28[5]);
        goto LABEL_40;
      case TokenElevationType:
        v32 = (_DWORD *)ExAllocatePool2(256LL, 4LL, 538994003LL);
        if ( !v32 )
          return -1073741670;
        v33 = *(_DWORD *)(*((_QWORD *)Token + 27) + 32LL);
        if ( (v33 & 4) != 0 )
        {
          *v32 = 3;
          *TokenInformation = v32;
        }
        else
        {
          if ( (v33 & 2) != 0 )
            *v32 = 2;
          else
            *v32 = 1;
          *TokenInformation = v32;
        }
        return 0;
      case TokenElevation:
        v19 = (_DWORD *)ExAllocatePool2(256LL, 4LL, 538994003LL);
        if ( !v19 )
          return -1073741670;
        v20 = KeGetCurrentThread();
        --v20->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v21 = *((_DWORD *)Token + 31);
        v22 = (*((_QWORD *)Token + 8) & 0x1120160684LL) != 0;
        if ( v21 )
        {
          do
          {
            if ( v22 )
              break;
            IsElevatedRid = RtlIsElevatedRid(*((_QWORD *)Token + 19) + 16LL * (unsigned int)v3);
            LODWORD(v3) = v3 + 1;
            v22 = IsElevatedRid;
          }
          while ( (unsigned int)v3 < v21 );
        }
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        KeLeaveCriticalRegion();
        *v19 = v22;
        *TokenInformation = v19;
        return 0;
      case TokenHasRestrictions:
      case TokenVirtualizationAllowed:
      case TokenUIAccess:
      case TokenIsAppContainer:
      case TokenPrivateNameSpace:
      case MaxTokenInfoClass:
        if ( TokenInformationClass == TokenVirtualizationAllowed )
        {
          if ( (*((_DWORD *)Token + 50) & 0x200) == 0 )
            goto LABEL_4;
          *(_DWORD *)TokenInformation = 1;
        }
        else
        {
          if ( TokenInformationClass != TokenUIAccess )
            goto LABEL_7;
          *(_DWORD *)TokenInformation = (*((_DWORD *)Token + 50) >> 12) & 1;
        }
        return 0;
      case TokenAccessInformation:
        v42 = KeGetCurrentThread();
        LODWORD(Sid[0]) = 0;
        v121 = 0;
        v120 = 0;
        --v42->KernelApcDisable;
        v43 = (struct _ERESOURCE *)*((_QWORD *)Token + 6);
        v119 = 0;
        v118 = 0;
        v117 = 0;
        LODWORD(v128) = 0;
        LODWORD(v126) = 0;
        v127 = 0;
        ExAcquireResourceSharedLite(v43, 1u);
        TokenAccessInformationBufferSize = SepGetTokenAccessInformationBufferSize(
                                             (__int64)Token,
                                             0,
                                             0LL,
                                             &v116,
                                             (int *)Sid,
                                             (int *)&v121,
                                             &v120,
                                             &v119,
                                             (unsigned int *)&v118,
                                             &v117,
                                             (int *)&v128,
                                             (unsigned int *)&v126,
                                             &v127);
        v45 = ExAllocatePool2(256LL, TokenAccessInformationBufferSize, 538994003LL);
        v28 = (_QWORD *)v45;
        if ( !v45 )
          goto LABEL_74;
        SepCopyTokenAccessInformation(
          (__int64)Token,
          v45,
          TokenAccessInformationBufferSize,
          v116,
          (unsigned int)Sid[0],
          v121,
          v120,
          v119,
          v118,
          v117,
          (int)v128,
          v126,
          v127,
          0,
          0LL);
        goto LABEL_40;
      case TokenIntegrityLevel:
        v24 = KeGetCurrentThread();
        *(_OWORD *)Sid = 0LL;
        --v24->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        SepCopyTokenIntegrity((__int64)Token, (__int64)Sid);
        v25 = Sid[0];
        v26 = *RtlSubAuthorityCountSid(Sid[0]);
        if ( (_BYTE)v26 )
          LODWORD(v3) = *RtlSubAuthoritySid(v25, v26 - 1);
        *(_DWORD *)TokenInformation = v3;
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        KeLeaveCriticalRegion();
        return 0;
      case TokenCapabilities:
        v89 = KeGetCurrentThread();
        --v89->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v90 = *((_DWORD *)Token + 200);
        v91 = 16 * v90 + 24;
        v92 = v91;
        if ( v90 )
        {
          v93 = (__int64 *)*((_QWORD *)Token + 99);
          v94 = v90;
          do
          {
            v95 = *v93;
            v93 += 2;
            v91 += 4 * *(unsigned __int8 *)(v95 + 1) + 8;
            v92 = v91;
            --v94;
          }
          while ( v94 );
        }
        v96 = (_DWORD *)ExAllocatePool2(256LL, v92, 538994003LL);
        v55 = v96;
        if ( !v96 )
          goto LABEL_74;
        *v96 = *((_DWORD *)Token + 200);
        RtlCopySidAndAttributesArray(
          *((_DWORD *)Token + 200),
          *((_QWORD *)Token + 99),
          v91,
          (__int64)(v96 + 2),
          (char *)v96 + (unsigned int)(16 * *((_DWORD *)Token + 200)) + 24,
          &v126,
          (ULONG *)&v126);
LABEL_71:
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        KeLeaveCriticalRegion();
        *TokenInformation = v55;
        return 0;
      case TokenAppContainerSid:
        v34 = KeGetCurrentThread();
        --v34->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v35 = *((_QWORD *)Token + 98);
        if ( v35 )
          v36 = 4 * *(unsigned __int8 *)(v35 + 1) + 16;
        else
          v36 = 8;
        v37 = ExAllocatePool2(256LL, v36, 538994003LL);
        v38 = (char *)v37;
        if ( !v37 )
          goto LABEL_74;
        if ( !v35 )
          goto LABEL_50;
        v46 = (void *)*((_QWORD *)Token + 98);
        goto LABEL_65;
      case TokenAppContainerNumber:
        v17 = KeGetCurrentThread();
        --v17->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v18 = *((_QWORD *)Token + 135);
        if ( v18 )
          LODWORD(v3) = *(_DWORD *)(v18 + 40);
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        KeLeaveCriticalRegion();
        *(_DWORD *)TokenInformation = v3;
        return 0;
      case TokenUserClaimAttributes:
      case TokenDeviceClaimAttributes:
        *TokenInformation = 0LL;
        v97 = KeGetCurrentThread();
        --v97->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v98 = *((_QWORD *)Token + 137);
        if ( v98
          && ((v99 = *(__int128 **)(v98 + 576)) != 0LL || TokenInformationClass != TokenUserClaimAttributes)
          && ((v100 = *(__int128 **)(v98 + 584)) != 0LL || TokenInformationClass != TokenDeviceClaimAttributes) )
        {
          if ( TokenInformationClass == TokenUserClaimAttributes )
            v100 = v99;
          AuthzBasepQueryClaimAttributesToken(v100, 0LL, 0, &v127);
          v101 = v127;
        }
        else
        {
          DWORD2(v124) = 0;
          *(_QWORD *)&v124 = (char *)&v123 + 8;
          v100 = &v123;
          v101 = 16;
          *((_QWORD *)&v123 + 1) = (char *)&v123 + 8;
          *((_QWORD *)&v125[0] + 1) = v125;
          *(_QWORD *)&v125[0] = v125;
        }
        v102 = (_OWORD *)ExAllocatePool2(256LL, v101, 538994003LL);
        v103 = v102;
        if ( !v102 )
          goto LABEL_74;
        v104 = AuthzBasepQueryClaimAttributesToken(v100, v102, v101, &v127);
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        KeLeaveCriticalRegion();
        if ( v104 >= 0 )
          *TokenInformation = v103;
        else
          ExFreePoolWithTag(v103, 0);
        return v104;
      case TokenDeviceGroups:
        v105 = KeGetCurrentThread();
        --v105->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v106 = (int *)*((_QWORD *)Token + 137);
        if ( v106 && (v107 = *v106) != 0 )
        {
          v108 = 16 * v107 + 8;
          v109 = (__int64 *)*((_QWORD *)v106 + 1);
          v110 = v107;
          do
          {
            v111 = *v109;
            v109 += 2;
            v108 += 4 * *(unsigned __int8 *)(v111 + 1) + 8;
            --v110;
          }
          while ( v110 );
        }
        else
        {
          v107 = 0;
          v108 = 24;
        }
        v38 = (char *)ExAllocatePool2(256LL, v108, 538994003LL);
        if ( !v38 )
          goto LABEL_74;
        *(_OWORD *)v38 = 0LL;
        *((_QWORD *)v38 + 2) = 0LL;
        *(_DWORD *)v38 = v107;
        if ( v107 )
          RtlCopySidAndAttributesArray(
            **((_DWORD **)Token + 137),
            *(_QWORD *)(*((_QWORD *)Token + 137) + 8LL),
            v108,
            (__int64)(v38 + 8),
            &v38[16 * v107 + 8],
            &v126,
            (ULONG *)&v126);
        goto LABEL_51;
      case TokenProcessTrustLevel:
        v112 = KeGetCurrentThread();
        --v112->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v35 = *((_QWORD *)Token + 138);
        if ( v35 )
          v36 = 4 * *(unsigned __int8 *)(v35 + 1) + 16;
        else
          v36 = 8;
        v37 = ExAllocatePool2(256LL, v36, 538994003LL);
        v38 = (char *)v37;
        if ( !v37 )
          goto LABEL_74;
        if ( !v35 )
          goto LABEL_50;
        v46 = (void *)*((_QWORD *)Token + 138);
LABEL_65:
        v35 = v37 + 8;
        RtlCopySid(v36 - 8, (PSID)(v37 + 8), v46);
LABEL_50:
        *(_QWORD *)v38 = v35;
LABEL_51:
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        KeLeaveCriticalRegion();
        *TokenInformation = v38;
        return 0;
      case TokenBnoIsolation:
        v113 = KeGetCurrentThread();
        --v113->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v114 = *((_QWORD *)Token + 144);
        v115 = 16LL;
        if ( v114 )
          v115 = *(unsigned __int16 *)(v114 + 42) + 16LL;
        v84 = ExAllocatePool2(256LL, v115, 538994003LL);
        v28 = (_QWORD *)v84;
        if ( !v84 )
        {
LABEL_74:
          ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
          KeLeaveCriticalRegion();
          return -1073741670;
        }
        if ( *((_QWORD *)Token + 144) )
        {
          *(_BYTE *)(v84 + 8) = 1;
          *(_QWORD *)v84 = v84 + 16;
          memmove(
            (void *)(v84 + 16),
            *(const void **)(*((_QWORD *)Token + 144) + 48LL),
            *(unsigned __int16 *)(*((_QWORD *)Token + 144) + 42LL));
        }
        else
        {
          *(_BYTE *)(v84 + 8) = 0;
LABEL_147:
          *(_QWORD *)v84 = 0LL;
        }
LABEL_40:
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        KeLeaveCriticalRegion();
        *TokenInformation = v28;
        break;
      case TokenIsLessPrivilegedAppContainer:
        if ( (*((_DWORD *)Token + 50) & 0x4000) != 0 )
          LODWORD(v3) = !SepCanTokenMatchAllPackageSid((__int64)Token);
        *(_DWORD *)TokenInformation = v3;
        return 0;
      default:
        return -1073741821;
    }
  }
  return 0;
}
