NTSTATUS __stdcall NtSetInformationToken(
        HANDLE TokenHandle,
        TOKEN_INFORMATION_CLASS TokenInformationClass,
        PVOID TokenInformation,
        ULONG TokenInformationLength)
{
  NTSTATUS v8; // edi
  char PreviousMode; // r15
  __int64 v10; // rcx
  ACCESS_MASK v11; // edx
  NTSTATUS result; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  PERESOURCE *v16; // rsi
  __int32 v17; // ebx
  __int32 v18; // ebx
  __int32 v19; // ebx
  __int32 v20; // ebx
  int v21; // ebx
  int v22; // ebx
  struct _KTHREAD *v23; // rax
  char v24; // bl
  int v25; // edx
  int v26; // r8d
  int v27; // r9d
  struct _KTHREAD *v28; // rax
  struct _ERESOURCE *v29; // rcx
  NTSTATUS v30; // ebx
  PERESOURCE *v31; // rcx
  __int32 v32; // ebx
  __int32 v33; // ebx
  __int32 v34; // ebx
  __int32 v35; // ebx
  int v36; // eax
  ULONG v37; // ebx
  struct _KTHREAD *v38; // rax
  PVOID v39; // r15
  int v40; // ebx
  int v41; // r14d
  PVOID v42; // rbx
  bool v43; // si
  struct _KTHREAD *v44; // rax
  PERESOURCE *v45; // r13
  int *v46; // rdx
  _DWORD *v47; // rbx
  ULONG v48; // ebx
  int v49; // ebx
  struct _KTHREAD *v50; // rax
  PVOID v51; // rbx
  _QWORD *v52; // rdx
  char *v53; // rcx
  struct _KTHREAD *v54; // rax
  PERESOURCE *v55; // rsi
  PVOID v56; // rbx
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // r9
  char *v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // r14
  void *v63; // r13
  unsigned __int16 *v64; // rbx
  int v65; // ecx
  int v66; // ecx
  ULONG v67; // r12d
  struct _KTHREAD *v68; // rax
  _QWORD *v69; // rbx
  PSID *TokenIntegrity; // rax
  PSID *v71; // rsi
  PSID v72; // r13
  int v73; // ecx
  ULONG v74; // eax
  int v75; // eax
  int v76; // eax
  void *v77; // rcx
  void *v78; // rcx
  __int64 v79; // rdx
  struct _KTHREAD *v80; // rax
  _QWORD *v81; // rdx
  int v82; // eax
  unsigned int v83; // eax
  struct _KTHREAD *CurrentThread; // rax
  int v85; // eax
  struct _KTHREAD *v86; // rax
  _QWORD *v87; // r8
  char *v88; // rbx
  _OWORD *v89; // rcx
  __int64 v90; // rdx
  __int64 v91; // rdx
  unsigned int v92; // esi
  struct _KTHREAD *v93; // rax
  PERESOURCE *v94; // r13
  _QWORD *v95; // rbx
  __int64 v96; // rax
  unsigned int v97; // ebx
  struct _KTHREAD *v98; // rax
  char v99; // al
  int v100; // ebx
  struct _KTHREAD *v101; // rax
  PERESOURCE *v102; // rbx
  ULONG v103; // ebx
  signed __int32 v104[8]; // [rsp+0h] [rbp-118h] BYREF
  PVOID *Object; // [rsp+20h] [rbp-F8h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-F0h]
  __int64 v107; // [rsp+30h] [rbp-E8h]
  PVOID Token; // [rsp+50h] [rbp-C8h] BYREF
  NTSTATUS v109; // [rsp+58h] [rbp-C0h]
  char v110; // [rsp+5Ch] [rbp-BCh]
  char v111; // [rsp+5Dh] [rbp-BBh]
  unsigned int v112; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v114; // [rsp+68h] [rbp-B0h] BYREF
  __int64 v115; // [rsp+70h] [rbp-A8h] BYREF
  PSID Sid1; // [rsp+78h] [rbp-A0h] BYREF
  PVOID v117; // [rsp+80h] [rbp-98h] BYREF
  _OWORD *v118; // [rsp+88h] [rbp-90h] BYREF
  unsigned int v119; // [rsp+90h] [rbp-88h] BYREF
  ULONG v120; // [rsp+94h] [rbp-84h]
  ULONG v121; // [rsp+98h] [rbp-80h] BYREF
  ULONG v122; // [rsp+9Ch] [rbp-7Ch]
  __int64 v123; // [rsp+A0h] [rbp-78h] BYREF
  PVOID P; // [rsp+A8h] [rbp-70h] BYREF
  __int64 v125; // [rsp+B0h] [rbp-68h] BYREF
  PERESOURCE *v126; // [rsp+B8h] [rbp-60h]
  PVOID v127; // [rsp+C0h] [rbp-58h]
  ULONG v128; // [rsp+C8h] [rbp-50h]
  ULONG v129; // [rsp+CCh] [rbp-4Ch]
  ULONG v130; // [rsp+D0h] [rbp-48h]
  ULONG v131; // [rsp+D4h] [rbp-44h]
  ULONG v132; // [rsp+D8h] [rbp-40h]
  __int64 v133; // [rsp+E0h] [rbp-38h]
  void *v134; // [rsp+E8h] [rbp-30h]
  struct _KTHREAD *v135; // [rsp+F0h] [rbp-28h]

  v8 = 0;
  v110 = 0;
  v112 = 0;
  v119 = 0;
  Sid1 = 0LL;
  v115 = 0LL;
  v114 = 0LL;
  P = 0LL;
  v125 = 0LL;
  LODWORD(v123) = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v111 = PreviousMode;
  if ( PreviousMode && TokenInformationLength )
  {
    if ( ((unsigned __int8)TokenInformation & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)TokenInformation + TokenInformationLength > 0x7FFFFFFF0000LL
      || (char *)TokenInformation + TokenInformationLength < TokenInformation )
    {
      MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  if ( (unsigned int)TokenInformationClass > TokenChildProcessFlags )
    return -1073741821;
  v10 = 0x24800F8B5070LL;
  if ( !_bittest64(&v10, TokenInformationClass) )
    return -1073741821;
  v11 = 128;
  if ( TokenInformationClass == TokenSessionId )
  {
    v11 = 384;
  }
  else if ( TokenInformationClass == TokenLinkedToken )
  {
    v11 = 136;
  }
  Token = 0LL;
  result = ObReferenceObjectByHandle(TokenHandle, v11, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &Token, 0LL);
  v16 = (PERESOURCE *)Token;
  v127 = Token;
  if ( result < 0 )
    return result;
  if ( TokenInformationClass > TokenVirtualizationAllowed )
  {
    v32 = TokenInformationClass - 24;
    if ( !v32 )
    {
      if ( TokenInformationLength == 4 )
      {
        v132 = *(_DWORD *)TokenInformation;
        SeSetVirtualizationToken(Token, v132);
        v30 = 0;
        goto LABEL_28;
      }
      goto LABEL_130;
    }
    v33 = v32 - 1;
    if ( v33 )
    {
      v34 = v33 - 1;
      if ( !v34 )
      {
        if ( TokenInformationLength != 4 )
          goto LABEL_130;
        v122 = *(_DWORD *)TokenInformation;
        if ( v122 && !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          goto LABEL_135;
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
        _InterlockedOr(v104, 0);
        v81 = Token;
        v85 = *((_DWORD *)Token + 50);
        if ( v122 )
          v83 = v85 | 0x1000;
        else
          v83 = v85 & 0xFFFFEFFF;
        goto LABEL_128;
      }
      v35 = v34 - 1;
      if ( v35 )
      {
        v40 = v35 - 12;
        if ( !v40 )
        {
          v117 = 0LL;
          if ( TokenInformation && TokenInformationLength >= 0x10 )
          {
            LOBYTE(v13) = PreviousMode;
            v41 = SepCaptureTokenSecurityAttributesAndOperationsInformation(TokenInformation, v13, &v117);
            if ( v41 >= 0 )
            {
              if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                v41 = -1073741727;
              v109 = v41;
              if ( v41 >= 0 )
              {
                v42 = v117;
                v43 = (unsigned __int8)SepShouldSetDelinkFlags(*((_QWORD *)v117 + 1), *(_QWORD *)v117) != 0;
                v44 = KeGetCurrentThread();
                --v44->KernelApcDisable;
                v45 = (PERESOURCE *)Token;
                ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
                _InterlockedOr(v104, 0);
                v46 = (int *)*((_QWORD *)v42 + 1);
                v47 = Token;
                v109 = AuthzBasepSetSecurityAttributesToken(*((_QWORD *)Token + 97), v46, *(_QWORD *)v117);
                if ( v109 >= 0 && v43 )
                  v47[50] |= 0x20000u;
                *((_QWORD *)v47 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                _InterlockedOr(v104, 0);
                ExReleaseResourceLite(v45[6]);
                KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
                SepReleaseTokenSecurityAttributesAndOperationsInformation(v117);
                v30 = v109;
                goto LABEL_27;
              }
              SepReleaseTokenSecurityAttributesAndOperationsInformation(v117);
            }
            v30 = v41;
            goto LABEL_28;
          }
          goto LABEL_130;
        }
        v100 = v40 - 3;
        if ( !v100 )
        {
          if ( TokenInformationLength != 4 )
            goto LABEL_130;
          v103 = *(_DWORD *)TokenInformation;
          v131 = *(_DWORD *)TokenInformation;
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
            goto LABEL_135;
          v36 = SeSetPrivateNameSpaceToken(v16, v103);
          goto LABEL_40;
        }
        if ( v100 == 3 )
        {
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
            goto LABEL_135;
          if ( TokenInformationLength == 4 )
          {
            v130 = *(_DWORD *)TokenInformation;
            if ( !v130 && ((_DWORD)v16[25] & 0x80000) != 0 )
            {
              v101 = KeGetCurrentThread();
              --v101->KernelApcDisable;
              v102 = (PERESOURCE *)Token;
              ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
              _InterlockedOr(v104, 0);
              *((_DWORD *)v16 + 50) &= ~0x80000u;
              *((_QWORD *)Token + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
              _InterlockedOr(v104, 0);
              ExReleaseResourceLite(v102[6]);
              KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
              v16 = (PERESOURCE *)Token;
            }
            ObfDereferenceObject(v16);
            return 0;
          }
          goto LABEL_130;
        }
        return -1073741811;
      }
      if ( TokenInformationLength != 4 )
        goto LABEL_130;
      v121 = *(_DWORD *)TokenInformation;
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
        goto LABEL_135;
      if ( *((_BYTE *)v16 + 204) )
      {
        v30 = -1073741525;
        goto LABEL_28;
      }
      v36 = SeSetMandatoryPolicyToken(v16, &v121);
LABEL_40:
      v30 = v36;
      goto LABEL_28;
    }
    if ( TokenInformationLength < 0x10 )
      goto LABEL_130;
    v36 = SeCaptureSidAndAttributesArray(
            (char *)TokenInformation,
            1u,
            PreviousMode,
            0LL,
            0,
            (int)HandleInformation,
            v107,
            (PVOID *)&v125,
            (unsigned int *)&v123);
    v109 = v36;
    if ( v36 < 0 )
      goto LABEL_40;
    v63 = (void *)v125;
    v64 = *(unsigned __int16 **)v125;
    v65 = *(_DWORD *)(*(_QWORD *)v125 + 2LL) - *(_DWORD *)((char *)SeUntrustedMandatorySid + 2);
    if ( !v65 )
      v65 = v64[3] - *((unsigned __int16 *)SeUntrustedMandatorySid + 3);
    if ( !v65 )
    {
      v66 = *RtlSubAuthorityCountSid(*(PSID *)v125);
      if ( !(_BYTE)v66 )
      {
        v67 = 0;
LABEL_93:
        v68 = KeGetCurrentThread();
        --v68->KernelApcDisable;
        v126 = (PERESOURCE *)Token;
        ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
        _InterlockedOr(v104, 0);
        v69 = Token;
        TokenIntegrity = (PSID *)SepLocateTokenIntegrity((__int64)Token);
        v71 = TokenIntegrity;
        if ( TokenIntegrity )
        {
          v72 = *TokenIntegrity;
          v73 = *RtlSubAuthorityCountSid(*TokenIntegrity);
          if ( (_BYTE)v73 )
            v74 = *RtlSubAuthoritySid(v72, v73 - 1);
          else
            v74 = 0;
          if ( v67 <= v74 )
          {
LABEL_99:
            v75 = *((unsigned __int8 *)*v71 + 1);
            if ( (_BYTE)v75 )
            {
              *RtlSubAuthoritySid(*v71, v75 - 1) = v67;
              if ( v67 < 0x3000 )
              {
                v69[9] &= 0xFFFFFFEEDFE9F97BuLL;
                v69[10] &= 0xFFFFFFEEDFE9F97BuLL;
              }
              v76 = *((_DWORD *)v69 + 50);
              if ( v67 < 0x2000 )
              {
                v69[9] &= 0x202800000uLL;
                v69[10] &= 0x202800000uLL;
                *((_DWORD *)v69 + 50) = v76 & 0xFFFFDFFF;
              }
              else
              {
                if ( (v76 & 0x4000) != 0 )
                {
                  SepRemoveAceFromTokenDefaultDacl((__int64)v69, (_WORD *)v69[98]);
                  *((_DWORD *)v69 + 50) &= ~0x4000u;
                  v77 = (void *)v69[98];
                  if ( v77 )
                  {
                    ExFreePoolWithTag(v77, 0);
                    v69[98] = 0LL;
                  }
                  v78 = (void *)v69[99];
                  if ( v78 )
                  {
                    ExFreePoolWithTag(v78, 0);
                    v69[99] = 0LL;
                    *((_DWORD *)v69 + 200) = 0;
                    memset(v69 + 101, 0, 0x110uLL);
                  }
                  v79 = v69[135];
                  if ( v79 )
                  {
                    SepDereferenceLowBoxNumberEntry(*((unsigned int *)v69 + 30), v79);
                    v69[135] = 0LL;
                  }
                  if ( v69[136] )
                  {
                    SepDereferenceCachedHandlesEntry(v69[27]);
                    v69[136] = 0LL;
                  }
                }
                *((_DWORD *)v69 + 50) |= 0x2000u;
              }
              v69[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
              v30 = 0;
            }
            else
            {
              v30 = -1073741811;
            }
            goto LABEL_114;
          }
          if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          {
            if ( !*((_BYTE *)v69 + 204) )
              goto LABEL_99;
            v30 = -1073741525;
          }
          else
          {
            v30 = -1073741727;
          }
        }
        else
        {
          v30 = -1073740730;
        }
LABEL_114:
        _InterlockedOr(v104, 0);
        ExReleaseResourceLite(v126[6]);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        ObfDereferenceObject(Token);
        SeReleaseLuidAndAttributesArray((void *)v125, PreviousMode);
        return v30;
      }
      v67 = *RtlSubAuthoritySid(v64, v66 - 1);
      if ( v67 <= 0x4000 )
        goto LABEL_93;
    }
    ObfDereferenceObject(v16);
    SeReleaseLuidAndAttributesArray(v63, PreviousMode);
    return -1073740730;
  }
  if ( TokenInformationClass == TokenVirtualizationAllowed )
  {
    if ( TokenInformationLength != 4 )
      goto LABEL_130;
    v120 = *(_DWORD *)TokenInformation;
    if ( !SeSinglePrivilegeCheck(SeCreateTokenPrivilege, PreviousMode) )
      goto LABEL_135;
    v80 = KeGetCurrentThread();
    --v80->KernelApcDisable;
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
    _InterlockedOr(v104, 0);
    v81 = Token;
    v82 = *((_DWORD *)Token + 50);
    if ( v120 )
      v83 = v82 | 0x200;
    else
      v83 = v82 & 0xFFFFFDFF;
LABEL_128:
    *((_DWORD *)Token + 50) = v83;
    v81[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
    _InterlockedOr(v104, 0);
    v29 = (struct _ERESOURCE *)*((_QWORD *)Token + 6);
    goto LABEL_26;
  }
  v17 = TokenInformationClass - 4;
  if ( v17 )
  {
    v18 = v17 - 1;
    if ( v18 )
    {
      v19 = v18 - 1;
      if ( v19 )
      {
        v20 = v19 - 6;
        if ( v20 )
        {
          v21 = v20 - 2;
          if ( !v21 )
          {
            if ( TokenInformationLength == 4 )
            {
              v37 = *(_DWORD *)TokenInformation;
              v128 = *(_DWORD *)TokenInformation;
              if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
              {
                if ( v37 )
                {
                  v30 = -1073741811;
                  goto LABEL_28;
                }
                v38 = KeGetCurrentThread();
                --v38->KernelApcDisable;
                v39 = Token;
                ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
                _InterlockedOr(v104, 0);
                v16 = (PERESOURCE *)Token;
                if ( (*((_DWORD *)Token + 50) & 0x20) == 0 )
                {
                  if ( HIDWORD(NlsMbOemCodePageTag) )
                    SepRemoveTokenLogonSession(Token);
                  v30 = SepStopReferencingLogonSession(v16);
                  v109 = v30;
                  if ( v30 < 0 )
                    goto LABEL_28;
                }
                _InterlockedOr(v104, 0);
                v29 = (struct _ERESOURCE *)*((_QWORD *)v39 + 6);
                goto LABEL_26;
              }
              goto LABEL_135;
            }
            goto LABEL_130;
          }
          v22 = v21 - 2;
          if ( !v22 )
          {
            v118 = 0LL;
            if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
            {
              v23 = KeGetCurrentThread();
              --v23->KernelApcDisable;
              ExAcquireResourceSharedLite(v16[6], 1u);
              v24 = *((_BYTE *)v16 + 118);
              ExReleaseResourceLite(v16[6]);
              KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
              if ( v24 )
              {
                v30 = -1073741811;
                goto LABEL_27;
              }
              if ( !TokenInformation )
              {
                v28 = KeGetCurrentThread();
                --v28->KernelApcDisable;
                ExAcquireResourceExclusiveLite(v16[6], 1u);
                _InterlockedOr(v104, 0);
                *((_BYTE *)v16 + 118) = 1;
                *((_QWORD *)Token + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                _InterlockedOr(v104, 0);
                v29 = v16[6];
LABEL_26:
                ExReleaseResourceLite(v29);
                KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
                v30 = 0;
LABEL_27:
                v16 = (PERESOURCE *)Token;
LABEL_28:
                v31 = v16;
LABEL_29:
                ObfDereferenceObject(v31);
                return v30;
              }
              LOBYTE(v25) = PreviousMode;
              v30 = SepCaptureAuditPolicy(
                      (_DWORD)TokenInformation,
                      v25,
                      v26,
                      v27,
                      (_DWORD)Object,
                      (_DWORD)HandleInformation,
                      (__int64)&v118);
              v109 = v30;
              if ( v30 < 0 )
                goto LABEL_27;
              v86 = KeGetCurrentThread();
              --v86->KernelApcDisable;
              ExAcquireResourceExclusiveLite(v16[6], 1u);
              _InterlockedOr(v104, 0);
              *((_BYTE *)v16 + 118) = 2;
              v87 = Token;
              v88 = (char *)Token + 88;
              v89 = v118;
              *(_OWORD *)((char *)Token + 88) = *v118;
              *((_QWORD *)v88 + 2) = *((_QWORD *)v89 + 2);
              *((_DWORD *)v88 + 6) = *((_DWORD *)v89 + 6);
              *((_WORD *)v88 + 14) = *((_WORD *)v89 + 14);
              v87[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
              _InterlockedOr(v104, 0);
              ExReleaseResourceLite(v16[6]);
              KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
              LOBYTE(v90) = 1;
              SepModifyTokenPolicyCounter(v88, v90);
              ObfDereferenceObject(Token);
              LOBYTE(v91) = PreviousMode;
              SepReleaseAuditPolicy(v118, v91);
              return 0;
            }
LABEL_135:
            v30 = -1073741727;
            goto LABEL_28;
          }
          v49 = v22 - 1;
          if ( !v49 )
          {
            if ( TokenInformationLength == 8 )
            {
              v133 = *(_QWORD *)TokenInformation;
              if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
              {
                v50 = KeGetCurrentThread();
                --v50->KernelApcDisable;
                v51 = Token;
                ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
                _InterlockedOr(v104, 0);
                v52 = Token;
                if ( !*((_QWORD *)Token + 28) )
                  *((_QWORD *)Token + 28) = v133;
                v52[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                _InterlockedOr(v104, 0);
                v29 = (struct _ERESOURCE *)*((_QWORD *)v51 + 6);
                goto LABEL_26;
              }
              goto LABEL_135;
            }
LABEL_130:
            v30 = -1073741820;
            goto LABEL_28;
          }
          if ( v49 == 2 )
          {
            if ( TokenInformationLength != 8 )
              goto LABEL_130;
            v134 = *(void **)TokenInformation;
            v36 = SepLinkLogonSessions((__int64)Token, v134, PreviousMode);
            goto LABEL_40;
          }
          return -1073741811;
        }
        if ( TokenInformationLength == 4 )
        {
          v48 = *(_DWORD *)TokenInformation;
          v129 = *(_DWORD *)TokenInformation;
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
            goto LABEL_135;
          v36 = SeSetSessionIdToken(v16, v48);
          goto LABEL_40;
        }
LABEL_162:
        ObfDereferenceObject(Token);
        return -1073741820;
      }
      if ( TokenInformationLength < 8 )
        goto LABEL_162;
      v53 = *(char **)TokenInformation;
      v114 = (__int64)v53;
      if ( v53 )
      {
        v30 = SeCaptureAcl(v53, PreviousMode, v14, v15, 1, (int)HandleInformation, (PVOID *)&v114, &v112);
        v109 = v30;
      }
      else
      {
        v112 = 0;
        v30 = 0;
        v109 = 0;
      }
      if ( v30 < 0 )
        goto LABEL_28;
      v54 = KeGetCurrentThread();
      --v54->KernelApcDisable;
      v55 = (PERESOURCE *)Token;
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
      _InterlockedOr(v104, 0);
      v56 = Token;
      v57 = v112 + 8 + 4 * *(unsigned __int8 *)(*((_QWORD *)Token + 21) + 1LL);
      v112 = v57;
      if ( (unsigned int)v57 > *((_DWORD *)Token + 34) )
      {
        _InterlockedOr(v104, 0);
        ExReleaseResourceLite(v55[6]);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        ObfDereferenceObject(Token);
        if ( v114 )
          SeReleaseAcl((void *)v114, PreviousMode);
        return -1073741671;
      }
      else
      {
        v109 = SepExpandDynamic(Token, v57);
        if ( v109 >= 0 )
        {
          v60 = (char *)*((_QWORD *)v56 + 23);
          if ( !v60 || (v109 = SeCaptureAcl(v60, 0, v58, v59, 1, (int)HandleInformation, &P, &v119), v109 >= 0) )
          {
            SepFreeDefaultDacl(v56);
            v62 = v114;
            if ( v114 )
              SepAppendDefaultDacl(v56, v114);
            SeTokenDefaultDaclChangedAuditAlarm(v61, v56, TokenHandle, P, v62);
            *((_QWORD *)v56 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
            _InterlockedOr(v104, 0);
            ExReleaseResourceLite(v55[6]);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            ObfDereferenceObject(Token);
            if ( v114 )
              SeReleaseAcl((void *)v114, PreviousMode);
            if ( P )
              ExFreePoolWithTag(P, 0);
            return 0;
          }
        }
        _InterlockedOr(v104, 0);
        ExReleaseResourceLite(v55[6]);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        ObfDereferenceObject(Token);
        if ( v114 )
          SeReleaseAcl((void *)v114, PreviousMode);
        return v109;
      }
    }
    else
    {
      if ( TokenInformationLength < 8 )
        goto LABEL_162;
      v115 = *(_QWORD *)TokenInformation;
      v30 = SeCaptureSid((char *)v115, PreviousMode, v14, v15, (int)Object, 1, (PSID *)&v115);
      v109 = v30;
      v31 = v16;
      if ( v30 < 0 )
        goto LABEL_29;
      if ( (unsigned __int8)SepIdAssignableAsGroup(v16, v115) )
      {
        v92 = 4 * *(unsigned __int8 *)(v115 + 1) + 8;
        v112 = v92;
        v93 = KeGetCurrentThread();
        --v93->KernelApcDisable;
        v94 = (PERESOURCE *)Token;
        ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
        _InterlockedOr(v104, 0);
        v95 = Token;
        v96 = *((_QWORD *)Token + 23);
        if ( v96 )
        {
          v92 += *(unsigned __int16 *)(v96 + 2);
          v112 = v92;
        }
        if ( v92 <= *((_DWORD *)Token + 34) )
        {
          v109 = SepExpandDynamic(Token, v112);
          if ( v109 >= 0 )
          {
            SepFreePrimaryGroup(v95);
            SepAppendPrimaryGroup(v95, v115);
            v95[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
            _InterlockedOr(v104, 0);
            ExReleaseResourceLite(v94[6]);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          }
          else
          {
            _InterlockedOr(v104, 0);
            ExReleaseResourceLite(v94[6]);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            v8 = v109;
          }
        }
        else
        {
          _InterlockedOr(v104, 0);
          ExReleaseResourceLite(v94[6]);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          v8 = -1073741671;
        }
        v16 = (PERESOURCE *)Token;
      }
      else
      {
        v8 = -1073741733;
      }
      ObfDereferenceObject(v16);
      SeReleaseSid((void *)v115, PreviousMode, 1);
      return v8;
    }
  }
  else
  {
    if ( TokenInformationLength < 8 )
      goto LABEL_162;
    Sid1 = *(PSID *)TokenInformation;
    v30 = SeCaptureSid((char *)Sid1, PreviousMode, v14, v15, (int)Object, 1, &Sid1);
    v109 = v30;
    if ( v30 < 0 )
      goto LABEL_28;
    v97 = 0;
    v98 = KeGetCurrentThread();
    --v98->KernelApcDisable;
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
    _InterlockedOr(v104, 0);
    while ( 1 )
    {
      if ( v97 >= *((_DWORD *)v16 + 31) )
      {
        _InterlockedOr(v104, 0);
        ExReleaseResourceLite(v16[6]);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        ObfDereferenceObject(v16);
        SeReleaseSid(Sid1, PreviousMode, 1);
        return -1073741734;
      }
      if ( RtlEqualSid(Sid1, (&v16[19]->SystemResourcesList.Flink)[2 * v97]) )
        break;
      ++v97;
    }
    if ( SepIdAssignableAsOwner((__int64)v16, v97) )
    {
      *((_DWORD *)v16 + 36) = v97;
      v99 = 1;
      v110 = 1;
      v109 = 0;
    }
    else
    {
      v109 = -1073741734;
      v99 = v110;
    }
    if ( v99 )
    {
      v126 = (PERESOURCE *)(ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement));
      v16[7] = (PERESOURCE)v126;
    }
    _InterlockedOr(v104, 0);
    ExReleaseResourceLite(v16[6]);
    v135 = KeGetCurrentThread();
    KeLeaveCriticalRegionThread((__int64)v135);
    ObfDereferenceObject(v16);
    SeReleaseSid(Sid1, PreviousMode, 1);
    return v109;
  }
}
