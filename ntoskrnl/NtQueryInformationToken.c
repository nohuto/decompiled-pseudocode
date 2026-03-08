/*
 * XREFs of NtQueryInformationToken @ 0x1406D6780
 * Callers:
 *     RtlGetAppContainerNamedObjectPath @ 0x1405A7A70 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1409B9D5C (RtlpGetTokenNamedObjectPath.c)
 * Callees:
 *     SepTokenPrivilegeCount @ 0x140247150 (SepTokenPrivilegeCount.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140247394 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     AuthzBasepQuerySecurityAttributesToken @ 0x1402475E0 (AuthzBasepQuerySecurityAttributesToken.c)
 *     SepReferenceTokenByHandle @ 0x140247A20 (SepReferenceTokenByHandle.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14025D790 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     SepConvertTokenPrivileges @ 0x140298F88 (SepConvertTokenPrivileges.c)
 *     SepConvertTokenPrivilegesToLuidAndAttributes @ 0x140298FAC (SepConvertTokenPrivilegesToLuidAndAttributes.c)
 *     SepDeReferenceLogonSessionDirect @ 0x1402BE52C (SepDeReferenceLogonSessionDirect.c)
 *     SeQueryMandatoryPolicyToken @ 0x1402E7580 (SeQueryMandatoryPolicyToken.c)
 *     SepIsSandboxedToken @ 0x1402E9EFC (SepIsSandboxedToken.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     SepCopyTokenIntegrity @ 0x14030FED0 (SepCopyTokenIntegrity.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     SepSidInTokenSidHash @ 0x14033DEA0 (SepSidInTokenSidHash.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     RtlCopySidAndAttributesArray @ 0x1406D47D0 (RtlCopySidAndAttributesArray.c)
 *     RtlCopySid @ 0x1406D4890 (RtlCopySid.c)
 *     RtlIsElevatedRid @ 0x140743CF0 (RtlIsElevatedRid.c)
 *     SepCopyTokenAccessInformation @ 0x14077104C (SepCopyTokenAccessInformation.c)
 *     SepGetTokenAccessInformationBufferSize @ 0x1407712D0 (SepGetTokenAccessInformationBufferSize.c)
 *     SepReferenceLogonSessionSilo @ 0x140773DF8 (SepReferenceLogonSessionSilo.c)
 *     AuthzBasepQueryClaimAttributesToken @ 0x14077BBD4 (AuthzBasepQueryClaimAttributesToken.c)
 *     ObInsertObjectEx @ 0x1407BB7C0 (ObInsertObjectEx.c)
 *     SepDuplicateToken @ 0x1407BCF00 (SepDuplicateToken.c)
 *     NtClose @ 0x1407C00E0 (NtClose.c)
 *     SeSinglePrivilegeCheck @ 0x1407C9A00 (SeSinglePrivilegeCheck.c)
 *     ExRaiseAccessViolation @ 0x1408713F0 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryInformationToken(
        HANDLE TokenHandle,
        TOKEN_INFORMATION_CLASS TokenInformationClass,
        PVOID TokenInformation,
        ULONG TokenInformationLength,
        PULONG ReturnLength)
{
  __int64 v5; // r12
  __int64 v9; // rdi
  KPROCESSOR_MODE PreviousMode; // r14
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  PULONG v14; // r15
  __int64 v15; // rcx
  NTSTATUS result; // eax
  bool v17; // zf
  PVOID v18; // rbx
  _DWORD *v19; // rcx
  struct _KTHREAD *v20; // rax
  PVOID v21; // r13
  unsigned int v22; // r14d
  char *v23; // rbx
  const void **v24; // r12
  unsigned int v25; // ecx
  unsigned int v26; // r15d
  unsigned int v27; // eax
  struct _ERESOURCE *v28; // rcx
  struct _KTHREAD *v29; // rax
  unsigned int *v30; // rbx
  int v31; // edx
  __int64 v32; // rax
  struct _KTHREAD *v33; // rax
  int v34; // edi
  struct _KTHREAD *v35; // rax
  ULONG v36; // r8d
  struct _ERESOURCE *v37; // rcx
  struct _KTHREAD *v38; // rax
  unsigned int v39; // ecx
  struct _KTHREAD *v40; // rax
  __int64 v41; // rax
  unsigned int v42; // eax
  char *v43; // rcx
  unsigned int v44; // r13d
  struct _KTHREAD *v45; // rax
  char v46; // r8
  PSID v47; // r9
  unsigned __int8 *v48; // rcx
  char *v49; // rdx
  unsigned int v50; // r13d
  struct _KTHREAD *v51; // rax
  __int64 v52; // rcx
  char *v53; // rdx
  struct _KTHREAD *v54; // rax
  __int64 v55; // rdx
  unsigned int v56; // eax
  struct _KTHREAD *v57; // rax
  unsigned int v58; // ecx
  struct _KTHREAD *v59; // rax
  _QWORD *v60; // r14
  __int64 v61; // rax
  unsigned int v62; // ebx
  __int128 *v63; // r13
  struct _KTHREAD *v64; // rax
  _DWORD *v65; // rcx
  unsigned int v66; // ebx
  struct _ERESOURCE *v67; // rcx
  struct _KTHREAD *v68; // rax
  PVOID v69; // rdi
  unsigned int v70; // eax
  unsigned int v71; // ebx
  _DWORD *v72; // r8
  int v73; // ecx
  struct _KTHREAD *v74; // rax
  __int64 v75; // rax
  unsigned int v76; // r11d
  ULONG v77; // r8d
  struct _KTHREAD *v78; // rax
  PVOID v79; // r14
  unsigned __int8 IsElevatedRid; // bl
  unsigned int v81; // r15d
  struct _KTHREAD *v82; // rax
  int v83; // r11d
  unsigned int v84; // ecx
  unsigned int v85; // r10d
  unsigned int v86; // r8d
  __int64 v87; // rdx
  __int64 v88; // r9
  unsigned int v89; // r14d
  unsigned int v90; // r13d
  unsigned int v91; // ecx
  unsigned int v92; // ecx
  char *v93; // r9
  __int64 v94; // r15
  __int64 v95; // rdi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v97; // ecx
  ULONG v98; // r8d
  __int64 v99; // rdx
  __int64 v100; // r9
  struct _KTHREAD *v101; // rax
  unsigned int v102; // ebx
  __int64 v103; // rax
  int v104; // r12d
  PVOID v105; // r15
  NTSTATUS inserted; // ebx
  void *v107; // rcx
  struct _KTHREAD *v108; // rax
  PSID v109; // rdi
  char v110; // r14
  unsigned int TokenAccessInformationBufferSize; // eax
  int v112; // eax
  _QWORD *v113; // rbx
  NTSTATUS v114; // r14d
  struct _KTHREAD *v115; // rax
  unsigned int v116; // ecx
  ULONG v117; // r8d
  __int64 v118; // rdx
  __int64 v119; // r9
  struct _KTHREAD *v120; // rax
  unsigned int v121; // ecx
  unsigned int v122; // r8d
  __int64 v123; // r9
  unsigned int v124; // eax
  __int64 v125; // rdx
  __int64 v126; // r9
  __int64 v127; // rdx
  __int64 v128; // r9
  __int64 v129; // r9
  struct _KTHREAD *v130; // rax
  struct _KTHREAD *v131; // rax
  PVOID v132; // rbx
  __int64 v133; // rax
  __int64 v134; // rdx
  __int64 v135; // r9
  struct _KTHREAD *v136; // rax
  PVOID v137; // rbx
  __int64 v138; // rdx
  PSID DestinationSid; // [rsp+20h] [rbp-188h]
  __int64 v140; // [rsp+80h] [rbp-128h] BYREF
  PVOID Object; // [rsp+88h] [rbp-120h] BYREF
  PSID SourceSid; // [rsp+90h] [rbp-118h] BYREF
  __int64 v143; // [rsp+98h] [rbp-110h] BYREF
  int v144; // [rsp+A0h] [rbp-108h] BYREF
  NTSTATUS SecurityAttributesToken; // [rsp+A4h] [rbp-104h]
  int v146; // [rsp+A8h] [rbp-100h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp-F8h] BYREF
  int v148; // [rsp+B8h] [rbp-F0h]
  int v149; // [rsp+BCh] [rbp-ECh] BYREF
  int v150; // [rsp+C0h] [rbp-E8h] BYREF
  int v151; // [rsp+C4h] [rbp-E4h] BYREF
  int v152; // [rsp+C8h] [rbp-E0h] BYREF
  PVOID v153; // [rsp+D0h] [rbp-D8h] BYREF
  _QWORD *v154; // [rsp+D8h] [rbp-D0h] BYREF
  int v155; // [rsp+E0h] [rbp-C8h] BYREF
  int v156; // [rsp+E4h] [rbp-C4h] BYREF
  unsigned int v157; // [rsp+E8h] [rbp-C0h]
  int v158; // [rsp+ECh] [rbp-BCh]
  __int128 v159; // [rsp+F0h] [rbp-B8h] BYREF
  __int128 v160; // [rsp+100h] [rbp-A8h]
  __int128 v161; // [rsp+110h] [rbp-98h] BYREF
  int v162[2]; // [rsp+120h] [rbp-88h]
  char *v163; // [rsp+128h] [rbp-80h]
  __int128 v164; // [rsp+130h] [rbp-78h] BYREF
  _DWORD v165[2]; // [rsp+140h] [rbp-68h] BYREF
  __int64 v166; // [rsp+148h] [rbp-60h]
  __int64 v167; // [rsp+150h] [rbp-58h]
  int v168; // [rsp+158h] [rbp-50h]
  int v169; // [rsp+15Ch] [rbp-4Ch]
  __int128 v170; // [rsp+160h] [rbp-48h]
  __int128 v171; // [rsp+170h] [rbp-38h]

  v5 = TokenInformationLength;
  v9 = 0LL;
  Object = 0LL;
  v144 = 0;
  v156 = 0;
  v155 = 0;
  *(_QWORD *)v162 = 0LL;
  v146 = 0;
  v164 = 0LL;
  v143 = 0LL;
  v171 = 0LL;
  v159 = 0LL;
  v160 = 0LL;
  v161 = 0LL;
  LOBYTE(v140) = 0;
  SourceSid = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (_DWORD)v5 )
    {
      v11 = (unsigned __int64)TokenInformation;
      if ( ((unsigned __int8)TokenInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v12 = (unsigned __int64)TokenInformation + v5 - 1;
      if ( (unsigned __int64)TokenInformation > v12 || v12 >= 0x7FFFFFFF0000LL )
        ExRaiseAccessViolation();
      v13 = (v12 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        *(_BYTE *)v11 = *(_BYTE *)v11;
        v11 = (v11 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v11 != v13 );
    }
    v14 = ReturnLength;
    v15 = (__int64)ReturnLength;
    if ( (unsigned __int64)ReturnLength >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v15 = *(_DWORD *)v15;
  }
  else
  {
    v14 = ReturnLength;
  }
  if ( TokenInformationClass == TokenType )
  {
    result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, (__int64)TokenHandle, &Object, &v140, &SourceSid);
    if ( result < 0 )
      return result;
    *v14 = 4;
    if ( (unsigned int)v5 >= 4 )
    {
      v19 = Object;
      *(_DWORD *)TokenInformation = *((_DWORD *)Object + 48);
LABEL_32:
      ObfDereferenceObjectWithTag(v19, 0x74726853u);
      return 0;
    }
    goto LABEL_60;
  }
  if ( TokenInformationClass != TokenUser )
  {
    switch ( TokenInformationClass )
    {
      case TokenGroups:
        result = SepReferenceTokenByHandle(
                   TokenHandle,
                   8u,
                   PreviousMode,
                   (__int64)TokenHandle,
                   &Object,
                   &v140,
                   &SourceSid);
        if ( result >= 0 )
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          v30 = (unsigned int *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v97 = v30[31];
          v98 = 16 * v97 - 8;
          if ( v97 > 1 )
          {
            v99 = *((_QWORD *)v30 + 19) + 16LL;
            v100 = v97 - 1;
            do
            {
              v98 += 4 * *(unsigned __int8 *)(*(_QWORD *)v99 + 1LL) + 8;
              v99 += 16LL;
              --v100;
            }
            while ( v100 );
          }
          *v14 = v98;
          if ( (unsigned int)v5 >= v98 )
          {
            *(_DWORD *)TokenInformation = v30[31] - 1;
            RtlCopySidAndAttributesArray(
              v30[31] - 1,
              *((_QWORD *)v30 + 19) + 16LL,
              v98,
              (__int64)TokenInformation + 8,
              (char *)TokenInformation + 16 * v30[31] - 8,
              &v143,
              (ULONG *)&v143);
            goto LABEL_49;
          }
          goto LABEL_58;
        }
        return result;
      case TokenPrivileges:
        result = SepReferenceTokenByHandle(
                   TokenHandle,
                   8u,
                   PreviousMode,
                   (__int64)TokenHandle,
                   &Object,
                   &v140,
                   &SourceSid);
        if ( result >= 0 )
        {
          v68 = KeGetCurrentThread();
          --v68->KernelApcDisable;
          v69 = Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v70 = SepTokenPrivilegeCount((__int64)v69);
          if ( v70 <= 1 )
            v71 = 16;
          else
            v71 = 12 * v70 + 4;
          *v14 = v71;
          if ( (unsigned int)v5 >= v71 )
          {
            SepConvertTokenPrivileges((__int64)v69, TokenInformation);
            v28 = (struct _ERESOURCE *)*((_QWORD *)v69 + 6);
            goto LABEL_50;
          }
          v37 = (struct _ERESOURCE *)*((_QWORD *)v69 + 6);
          goto LABEL_59;
        }
        return result;
      case TokenOwner:
        result = SepReferenceTokenByHandle(
                   TokenHandle,
                   8u,
                   PreviousMode,
                   (__int64)TokenHandle,
                   &Object,
                   &v140,
                   &SourceSid);
        if ( result >= 0 )
        {
          v57 = KeGetCurrentThread();
          --v57->KernelApcDisable;
          v30 = (unsigned int *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v58 = 4 * *(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)v30 + 19) + 16LL * v30[36]) + 1LL) + 16;
          *v14 = v58;
          if ( (unsigned int)v5 < v58 )
            goto LABEL_58;
          *(_QWORD *)TokenInformation = (char *)TokenInformation + 8;
          RtlCopySid(v58 - 8, (char *)TokenInformation + 8, *(PSID *)(*((_QWORD *)v30 + 19) + 16LL * v30[36]));
          goto LABEL_49;
        }
        return result;
      case TokenPrimaryGroup:
        result = SepReferenceTokenByHandle(
                   TokenHandle,
                   8u,
                   PreviousMode,
                   (__int64)TokenHandle,
                   &Object,
                   &v140,
                   &SourceSid);
        if ( result >= 0 )
        {
          v38 = KeGetCurrentThread();
          --v38->KernelApcDisable;
          v30 = (unsigned int *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v39 = 4 * *(unsigned __int8 *)(*((_QWORD *)v30 + 21) + 1LL) + 16;
          *v14 = v39;
          if ( (unsigned int)v5 < v39 )
            goto LABEL_58;
          *(_QWORD *)TokenInformation = (char *)TokenInformation + 8;
          RtlCopySid(v39 - 8, (char *)TokenInformation + 8, *((PSID *)v30 + 21));
          goto LABEL_49;
        }
        return result;
      case TokenDefaultDacl:
        result = SepReferenceTokenByHandle(
                   TokenHandle,
                   8u,
                   PreviousMode,
                   (__int64)TokenHandle,
                   &Object,
                   &v140,
                   &SourceSid);
        if ( result >= 0 )
        {
          v144 = 8;
          v40 = KeGetCurrentThread();
          --v40->KernelApcDisable;
          v30 = (unsigned int *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v41 = *((_QWORD *)v30 + 23);
          if ( v41 )
            v42 = *(unsigned __int16 *)(v41 + 2) + 8;
          else
            v42 = v144;
          *v14 = v42;
          if ( (unsigned int)v5 >= v42 )
          {
            v43 = (char *)TokenInformation + 8;
            if ( *((_QWORD *)v30 + 23) )
            {
              *(_QWORD *)TokenInformation = v43;
              memmove(v43, *((const void **)v30 + 23), *(unsigned __int16 *)(*((_QWORD *)v30 + 23) + 2LL));
            }
            else
            {
              *(_QWORD *)TokenInformation = 0LL;
            }
            goto LABEL_49;
          }
          goto LABEL_58;
        }
        return result;
      case TokenSource:
        result = SepReferenceTokenByHandle(
                   TokenHandle,
                   0x10u,
                   PreviousMode,
                   (__int64)TokenHandle,
                   &Object,
                   &v140,
                   &SourceSid);
        if ( result >= 0 )
        {
          *v14 = 16;
          if ( (unsigned int)v5 < 0x10 )
            goto LABEL_60;
          v19 = Object;
          *(_OWORD *)TokenInformation = *(_OWORD *)Object;
          goto LABEL_32;
        }
        return result;
      case TokenImpersonationLevel:
        result = SepReferenceTokenByHandle(
                   TokenHandle,
                   8u,
                   PreviousMode,
                   (__int64)TokenHandle,
                   &Object,
                   &v140,
                   &SourceSid);
        if ( result >= 0 )
        {
          v19 = Object;
          if ( *((_DWORD *)Object + 48) != 2 )
          {
            ObfDereferenceObjectWithTag(Object, 0x74726853u);
            return -1073741821;
          }
          *v14 = 4;
          if ( (unsigned int)v5 < 4 )
            goto LABEL_61;
          *(_DWORD *)TokenInformation = v19[49];
          goto LABEL_32;
        }
        return result;
      case TokenStatistics:
        result = SepReferenceTokenByHandle(
                   TokenHandle,
                   8u,
                   PreviousMode,
                   (__int64)TokenHandle,
                   &Object,
                   &v140,
                   &SourceSid);
        if ( result >= 0 )
        {
          *v14 = 56;
          if ( (unsigned int)v5 < 0x38 )
            goto LABEL_60;
          v29 = KeGetCurrentThread();
          --v29->KernelApcDisable;
          v30 = (unsigned int *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v148 = 0;
          *(_QWORD *)TokenInformation = *((_QWORD *)v30 + 2);
          *((_QWORD *)TokenInformation + 1) = *((_QWORD *)v30 + 3);
          *((_QWORD *)TokenInformation + 2) = *((_QWORD *)v30 + 5);
          *((_DWORD *)TokenInformation + 6) = v30[48];
          *((_DWORD *)TokenInformation + 7) = v30[49];
          *((_DWORD *)TokenInformation + 8) = v30[34];
          v31 = v30[34] - 4 * *(unsigned __int8 *)(*((_QWORD *)v30 + 21) + 1LL) - 8;
          v148 = v31;
          v32 = *((_QWORD *)v30 + 23);
          if ( v32 )
          {
            v31 -= *(unsigned __int16 *)(v32 + 2);
            v148 = v31;
          }
          *((_DWORD *)TokenInformation + 9) = v31;
          *((_DWORD *)TokenInformation + 10) = v30[31] - 1;
          *((_DWORD *)TokenInformation + 11) = SepTokenPrivilegeCount((__int64)v30);
          *((_QWORD *)TokenInformation + 6) = *((_QWORD *)v30 + 7);
          goto LABEL_49;
        }
        return result;
      case TokenRestrictedSids:
        result = SepReferenceTokenByHandle(
                   TokenHandle,
                   8u,
                   PreviousMode,
                   (__int64)TokenHandle,
                   &Object,
                   &v140,
                   &SourceSid);
        if ( result >= 0 )
        {
          v35 = KeGetCurrentThread();
          --v35->KernelApcDisable;
          v30 = (unsigned int *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v36 = 16 * v30[32] + 8;
          if ( v30[32] )
          {
            v127 = *((_QWORD *)v30 + 20);
            v128 = v30[32];
            do
            {
              v36 += 4 * *(unsigned __int8 *)(*(_QWORD *)v127 + 1LL) + 8;
              v127 += 16LL;
              --v128;
            }
            while ( v128 );
          }
          *v14 = v36;
          if ( (unsigned int)v5 >= v36 )
          {
            *(_DWORD *)TokenInformation = v30[32];
            RtlCopySidAndAttributesArray(
              v30[32],
              *((_QWORD *)v30 + 20),
              v36,
              (__int64)TokenInformation + 8,
              (char *)TokenInformation + 16 * v30[32] + 8,
              &v143,
              (ULONG *)&v143);
            goto LABEL_49;
          }
          goto LABEL_58;
        }
        return result;
      case TokenSessionId:
        result = SepReferenceTokenByHandle(
                   TokenHandle,
                   8u,
                   PreviousMode,
                   (__int64)TokenHandle,
                   &Object,
                   &v140,
                   &SourceSid);
        if ( result >= 0 )
        {
          *v14 = 4;
          if ( (unsigned int)v5 < 4 )
            goto LABEL_60;
          v33 = KeGetCurrentThread();
          --v33->KernelApcDisable;
          v18 = Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v34 = *((_DWORD *)v18 + 30);
          ExReleaseResourceLite(*((PERESOURCE *)v18 + 6));
          KeLeaveCriticalRegion();
          *(_DWORD *)TokenInformation = v34;
          *v14 = 4;
          goto LABEL_28;
        }
        return result;
      case TokenGroupsAndPrivileges:
        result = SepReferenceTokenByHandle(
                   TokenHandle,
                   8u,
                   PreviousMode,
                   (__int64)TokenHandle,
                   &Object,
                   &v140,
                   &SourceSid);
        if ( result >= 0 )
        {
          v82 = KeGetCurrentThread();
          --v82->KernelApcDisable;
          v30 = (unsigned int *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v146 = SepTokenPrivilegeCount((__int64)v30);
          v83 = 12 * v146;
          v84 = v30[31];
          v85 = 16 * v84;
          v86 = 16 * v84;
          if ( v84 )
          {
            v87 = *((_QWORD *)v30 + 19);
            v88 = v84;
            do
            {
              v86 += (4 * *(unsigned __int8 *)(*(_QWORD *)v87 + 1LL) + 15) & 0xFFFFFFF8;
              v87 += 16LL;
              --v88;
            }
            while ( v88 );
          }
          v89 = 16 * v30[32];
          v90 = v89;
          v91 = v89;
          if ( v30[32] )
          {
            v125 = *((_QWORD *)v30 + 20);
            v126 = v30[32];
            do
            {
              v90 += (4 * *(unsigned __int8 *)(*(_QWORD *)v125 + 1LL) + 15) & 0xFFFFFFF8;
              v91 = v90;
              v125 += 16LL;
              --v126;
            }
            while ( v126 );
          }
          v92 = v91 + v83 + v86 + 56;
          *v14 = v92;
          if ( (unsigned int)v5 >= v92 )
          {
            *((_QWORD *)TokenInformation + 6) = *((_QWORD *)v30 + 3);
            *((_DWORD *)TokenInformation + 1) = v86;
            *(_DWORD *)TokenInformation = v30[31];
            v93 = (char *)TokenInformation + 56;
            *((_QWORD *)TokenInformation + 1) = (char *)TokenInformation + 56;
            *((_DWORD *)TokenInformation + 5) = v90;
            *((_DWORD *)TokenInformation + 4) = v30[32];
            if ( v30[32] )
            {
              v94 = (__int64)&v93[(v86 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL];
              *((_QWORD *)TokenInformation + 3) = v94;
            }
            else
            {
              *((_QWORD *)TokenInformation + 3) = 0LL;
              v94 = *(_QWORD *)v162;
            }
            *((_DWORD *)TokenInformation + 9) = v83;
            *((_DWORD *)TokenInformation + 8) = v146;
            v95 = (__int64)&v93[v90 + v86];
            *((_QWORD *)TokenInformation + 5) = v95;
            RtlCopySidAndAttributesArray(
              v30[31],
              *((_QWORD *)v30 + 19),
              v86 - v85,
              (__int64)v93,
              &v93[v85],
              &v143,
              (ULONG *)&v143);
            if ( v94 )
              RtlCopySidAndAttributesArray(
                v30[32],
                *((_QWORD *)v30 + 20),
                v90 - v89,
                v94,
                (char *)(v94 + v89),
                &v143,
                (ULONG *)&v143);
            SepConvertTokenPrivilegesToLuidAndAttributes(v30, v95);
            goto LABEL_49;
          }
          goto LABEL_58;
        }
        return result;
      case TokenSandBoxInert:
        result = SepReferenceTokenByHandle(
                   TokenHandle,
                   8u,
                   PreviousMode,
                   (__int64)TokenHandle,
                   &Object,
                   &v140,
                   &SourceSid);
        if ( result >= 0 )
        {
          *v14 = 4;
          if ( (unsigned int)v5 < 4 )
            return -1073741789;
          v19 = Object;
          *(_DWORD *)TokenInformation = (*((_DWORD *)Object + 50) & 0x40) != 0;
          goto LABEL_32;
        }
        return result;
      case TokenAuditPolicy:
        if ( !SeSinglePrivilegeCheck(SeSecurityPrivilege, PreviousMode) )
          return -1073741727;
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, v129, &Object, &v140, &SourceSid);
        if ( result >= 0 )
        {
          *v14 = 30;
          if ( (unsigned int)v5 < 0x1E )
            goto LABEL_60;
          v130 = KeGetCurrentThread();
          --v130->KernelApcDisable;
          v30 = (unsigned int *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          *(_OWORD *)TokenInformation = *(_OWORD *)(v30 + 22);
          *((_QWORD *)TokenInformation + 2) = *((_QWORD *)v30 + 13);
          *((_DWORD *)TokenInformation + 6) = v30[28];
          *((_WORD *)TokenInformation + 14) = *((_WORD *)v30 + 58);
          goto LABEL_49;
        }
        return result;
      case TokenOrigin:
        result = SepReferenceTokenByHandle(
                   TokenHandle,
                   8u,
                   PreviousMode,
                   (__int64)TokenHandle,
                   &Object,
                   &v140,
                   &SourceSid);
        if ( result >= 0 )
        {
          *v14 = 8;
          if ( (unsigned int)v5 < 8 )
            goto LABEL_60;
          v19 = Object;
          *(_QWORD *)TokenInformation = *((_QWORD *)Object + 28);
          goto LABEL_32;
        }
        return result;
      case TokenElevationType:
        result = SepReferenceTokenByHandle(
                   TokenHandle,
                   8u,
                   PreviousMode,
                   (__int64)TokenHandle,
                   &Object,
                   &v140,
                   &SourceSid);
        if ( result >= 0 )
        {
          *v14 = 4;
          if ( (unsigned int)v5 < 4 )
            goto LABEL_60;
          v72 = Object;
          v73 = *(_DWORD *)(*((_QWORD *)Object + 27) + 32LL);
          if ( (v73 & 4) != 0 )
          {
            *(_DWORD *)TokenInformation = 3;
          }
          else if ( (v73 & 2) != 0 )
          {
            *(_DWORD *)TokenInformation = 2;
          }
          else
          {
            *(_DWORD *)TokenInformation = 1;
          }
          v19 = v72;
          goto LABEL_32;
        }
        return result;
      case TokenLinkedToken:
        v154 = 0LL;
        Handle = 0LL;
        v153 = 0LL;
        v165[1] = 0;
        v169 = 0;
        result = SepReferenceTokenByHandle(
                   TokenHandle,
                   8u,
                   PreviousMode,
                   (__int64)TokenHandle,
                   &Object,
                   &v140,
                   &SourceSid);
        if ( result < 0 )
          return result;
        *v14 = 8;
        if ( (_DWORD)v5 != 8 )
        {
          ObfDereferenceObjectWithTag(Object, 0x74726853u);
          return -1073741820;
        }
        if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          v104 = 1;
        else
          v104 = 2;
        v105 = Object;
        inserted = SepReferenceLogonSessionSilo(
                     *((_QWORD *)Object + 27) + 16LL,
                     *(_QWORD *)(*((_QWORD *)Object + 27) + 160LL),
                     &v154);
        if ( inserted < 0 )
          goto LABEL_186;
        v165[0] = 48;
        v166 = 0LL;
        v112 = 0;
        if ( !PreviousMode )
          v112 = 512;
        v168 = v112;
        v167 = 0LL;
        v170 = 0LL;
        v113 = v154;
        v114 = SepDuplicateToken(v154[6], (unsigned int)v165, 0, v104, 1, 0, 0, (__int64)&v153);
        SepDeReferenceLogonSessionDirect(v113);
        if ( v114 < 0 )
        {
          ObfDereferenceObjectWithTag(v105, 0x74726853u);
          return v114;
        }
        inserted = ObInsertObjectEx(v153, 0LL, 0, 0LL, (__int64)&Handle);
        if ( inserted < 0 )
        {
LABEL_186:
          v107 = v105;
          goto LABEL_187;
        }
        *(_QWORD *)TokenInformation = Handle;
        v19 = v105;
        goto LABEL_32;
      case TokenElevation:
        *v14 = 4;
        if ( (_DWORD)v5 != 4 )
          return -1073741820;
        result = SepReferenceTokenByHandle(
                   TokenHandle,
                   8u,
                   PreviousMode,
                   (__int64)TokenHandle,
                   &Object,
                   &v140,
                   &SourceSid);
        if ( result < 0 )
          return result;
        v78 = KeGetCurrentThread();
        --v78->KernelApcDisable;
        v79 = Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        IsElevatedRid = (*((_QWORD *)v79 + 8) & 0x1120160684LL) != 0;
        v81 = *((_DWORD *)v79 + 31);
        if ( v81 )
        {
          do
          {
            if ( IsElevatedRid )
              break;
            IsElevatedRid = RtlIsElevatedRid(*((_QWORD *)v79 + 19) + 16LL * (unsigned int)v9);
            LODWORD(v9) = v9 + 1;
          }
          while ( (unsigned int)v9 < v81 );
        }
        ExReleaseResourceLite(*((PERESOURCE *)v79 + 6));
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        *(_DWORD *)TokenInformation = IsElevatedRid;
        goto LABEL_51;
      case TokenHasRestrictions:
        result = SepReferenceTokenByHandle(
                   TokenHandle,
                   8u,
                   PreviousMode,
                   (__int64)TokenHandle,
                   &Object,
                   &v140,
                   &SourceSid);
        if ( result < 0 )
          return result;
        *v14 = 1;
        if ( !(_DWORD)v5 )
          goto LABEL_60;
        v19 = Object;
        *(_BYTE *)TokenInformation = (*((_DWORD *)Object + 50) & 0x810) != 0;
        goto LABEL_32;
      case TokenAccessInformation:
        LODWORD(Handle) = 0;
        LODWORD(v154) = 0;
        LODWORD(v153) = 0;
        v152 = 0;
        v151 = 0;
        v150 = 0;
        v149 = 0;
        result = SepReferenceTokenByHandle(
                   TokenHandle,
                   8u,
                   PreviousMode,
                   (__int64)TokenHandle,
                   &Object,
                   &v140,
                   &SourceSid);
        if ( result < 0 )
          return result;
        v108 = KeGetCurrentThread();
        --v108->KernelApcDisable;
        v30 = (unsigned int *)Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v109 = SourceSid;
        v110 = v140;
        TokenAccessInformationBufferSize = SepGetTokenAccessInformationBufferSize(
                                             (_DWORD)v30,
                                             (unsigned __int8)v140,
                                             (_DWORD)SourceSid,
                                             (unsigned int)&v146,
                                             (__int64)&v156,
                                             (__int64)&Handle,
                                             (__int64)&v155,
                                             (__int64)&v154,
                                             (__int64)&v153,
                                             (__int64)&v152,
                                             (__int64)&v151,
                                             (__int64)&v150,
                                             (__int64)&v149);
        *v14 = TokenAccessInformationBufferSize;
        if ( (unsigned int)v5 < TokenAccessInformationBufferSize )
          goto LABEL_58;
        SepCopyTokenAccessInformation(
          (_DWORD)v30,
          (_DWORD)TokenInformation,
          v5,
          v146,
          v156,
          (_DWORD)Handle,
          v155,
          (_DWORD)v154,
          (_DWORD)v153,
          v152,
          v151,
          v150,
          v149,
          v110,
          (__int64)v109);
        goto LABEL_49;
      case TokenVirtualizationAllowed:
      case TokenVirtualizationEnabled:
      case TokenUIAccess:
      case TokenIsAppContainer:
      case TokenIsRestricted:
      case TokenPrivateNameSpace:
      case MaxTokenInfoClass:
      case TokenAppContainerNumber|TokenAuditPolicy:
        result = SepReferenceTokenByHandle(
                   TokenHandle,
                   8u,
                   PreviousMode,
                   (__int64)TokenHandle,
                   &Object,
                   &v140,
                   &SourceSid);
        if ( result < 0 )
          return result;
        *v14 = 4;
        if ( (unsigned int)v5 < 4 )
          goto LABEL_60;
        switch ( TokenInformationClass )
        {
          case TokenVirtualizationAllowed:
            v18 = Object;
            LODWORD(v9) = (*((_DWORD *)Object + 50) >> 9) & 1;
            break;
          case TokenVirtualizationEnabled:
            v18 = Object;
            LODWORD(v9) = (*((_DWORD *)Object + 50) >> 10) & 1;
            break;
          case TokenUIAccess:
            v18 = Object;
            LODWORD(v9) = (*((_DWORD *)Object + 50) >> 12) & 1;
            break;
          case TokenIsRestricted:
            v18 = Object;
            LOBYTE(v9) = (*((_DWORD *)Object + 50) & 0x18) != 0;
            break;
          case TokenPrivateNameSpace:
            v18 = Object;
            if ( (*((_DWORD *)Object + 50) & 0x10000) == 0 )
              break;
            goto LABEL_172;
          case MaxTokenInfoClass:
            v18 = Object;
            LODWORD(v9) = SepIsSandboxedToken(Object, PreviousMode);
            break;
          default:
            v17 = TokenInformationClass == (TokenAppContainerNumber|TokenAuditPolicy);
            v18 = Object;
            if ( !v17 )
            {
              if ( (*((_DWORD *)Object + 50) & 0x4000) == 0 )
                break;
LABEL_172:
              LODWORD(v9) = 1;
              break;
            }
            LODWORD(v9) = (unsigned __int8)SepSidInTokenSidHash(
                                             (_DWORD *)Object + 202,
                                             0LL,
                                             (unsigned __int8 *)SeAppSiloSid,
                                             0,
                                             1,
                                             0);
            break;
        }
        *(_DWORD *)TokenInformation = v9;
LABEL_28:
        v19 = v18;
        break;
      case TokenIntegrityLevel:
        result = SepReferenceTokenByHandle(
                   TokenHandle,
                   8u,
                   PreviousMode,
                   (__int64)TokenHandle,
                   &Object,
                   &v140,
                   &SourceSid);
        if ( result < 0 )
          return result;
        v54 = KeGetCurrentThread();
        --v54->KernelApcDisable;
        v30 = (unsigned int *)Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        SepCopyTokenIntegrity((__int64)v30, (__int64)&v164);
        v55 = v164;
        v56 = 4 * *(unsigned __int8 *)(v164 + 1) + 24;
        *v14 = v56;
        if ( (unsigned int)v5 < v56 )
          goto LABEL_58;
        RtlCopySidAndAttributesArray(
          1u,
          (__int64)&v164,
          4 * *(unsigned __int8 *)(v55 + 1) + 8,
          (__int64)TokenInformation,
          (char *)TokenInformation + 16,
          &v143,
          (ULONG *)&v143);
        goto LABEL_49;
      case TokenMandatoryPolicy:
        result = SepReferenceTokenByHandle(
                   TokenHandle,
                   8u,
                   PreviousMode,
                   (__int64)TokenHandle,
                   &Object,
                   &v140,
                   &SourceSid);
        if ( result < 0 )
          return result;
        *v14 = 4;
        if ( (unsigned int)v5 < 4 )
          goto LABEL_60;
        inserted = SeQueryMandatoryPolicyToken((__int64)Object, TokenInformation);
        SecurityAttributesToken = inserted;
LABEL_187:
        ObfDereferenceObjectWithTag(v107, 0x74726853u);
        return inserted;
      case TokenLogonSid:
        result = SepReferenceTokenByHandle(
                   TokenHandle,
                   8u,
                   PreviousMode,
                   (__int64)TokenHandle,
                   &Object,
                   &v140,
                   &SourceSid);
        if ( result < 0 )
          return result;
        v120 = KeGetCurrentThread();
        --v120->KernelApcDisable;
        v30 = (unsigned int *)Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v121 = 0;
        v122 = v30[31];
        if ( !v122 )
          goto LABEL_210;
        v123 = *((_QWORD *)v30 + 19);
        while ( (*(_DWORD *)(v123 + 16LL * v121 + 8) & 0xC0000000) != 0xC0000000 )
        {
          if ( ++v121 >= v122 )
            goto LABEL_210;
        }
        v9 = *(_QWORD *)(v123 + 16LL * v121);
LABEL_210:
        if ( !v9 )
        {
          ExReleaseResourceLite(*((PERESOURCE *)v30 + 6));
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          ObfDereferenceObjectWithTag(Object, 0x74726853u);
          return -1073741275;
        }
        v124 = 4 * *(unsigned __int8 *)(*(_QWORD *)(16LL * v121 + *((_QWORD *)v30 + 19)) + 1LL) + 32;
        *v14 = v124;
        if ( (unsigned int)v5 < v124 )
        {
LABEL_58:
          v37 = (struct _ERESOURCE *)*((_QWORD *)v30 + 6);
          goto LABEL_59;
        }
        *(_DWORD *)TokenInformation = 1;
        RtlCopySidAndAttributesArray(
          1u,
          *((_QWORD *)v30 + 19) + 16LL * v121,
          4 * *(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)v30 + 19) + 16LL * v121) + 1LL) + 8,
          (__int64)TokenInformation + 8,
          (char *)TokenInformation + 24,
          &v143,
          (ULONG *)&v143);
LABEL_49:
        v28 = (struct _ERESOURCE *)*((_QWORD *)v30 + 6);
        goto LABEL_50;
      case TokenCapabilities:
        result = SepReferenceTokenByHandle(
                   TokenHandle,
                   8u,
                   PreviousMode,
                   (__int64)TokenHandle,
                   &Object,
                   &v140,
                   &SourceSid);
        if ( result < 0 )
          return result;
        v115 = KeGetCurrentThread();
        --v115->KernelApcDisable;
        v30 = (unsigned int *)Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v116 = v30[200];
        v117 = 16 * v116 + 8;
        if ( v116 )
        {
          v118 = *((_QWORD *)v30 + 99);
          v119 = v116;
          do
          {
            v117 += 4 * *(unsigned __int8 *)(*(_QWORD *)v118 + 1LL) + 8;
            v118 += 16LL;
            --v119;
          }
          while ( v119 );
        }
        *v14 = v117;
        if ( (unsigned int)v5 < v117 )
          goto LABEL_58;
        *(_DWORD *)TokenInformation = v30[200];
        RtlCopySidAndAttributesArray(
          v30[200],
          *((_QWORD *)v30 + 99),
          v117,
          (__int64)TokenInformation + 8,
          (char *)TokenInformation + 16 * v30[200] + 8,
          &v143,
          (ULONG *)&v143);
        goto LABEL_49;
      case TokenAppContainerSid:
        v50 = 8;
        result = SepReferenceTokenByHandle(
                   TokenHandle,
                   8u,
                   PreviousMode,
                   (__int64)TokenHandle,
                   &Object,
                   &v140,
                   &SourceSid);
        if ( result < 0 )
          return result;
        v51 = KeGetCurrentThread();
        --v51->KernelApcDisable;
        v30 = (unsigned int *)Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v52 = *((_QWORD *)v30 + 98);
        if ( v52 )
          v50 = 4 * *(unsigned __int8 *)(v52 + 1) + 16;
        *v14 = v50;
        if ( (unsigned int)v5 < v50 )
          goto LABEL_58;
        v53 = (char *)TokenInformation + 8;
        if ( !v52 )
          v53 = 0LL;
        *(_QWORD *)TokenInformation = v53;
        if ( v53 )
          RtlCopySid(v50 - 8, v53, *((PSID *)v30 + 98));
        goto LABEL_49;
      case TokenAppContainerNumber:
        result = SepReferenceTokenByHandle(
                   TokenHandle,
                   8u,
                   PreviousMode,
                   (__int64)TokenHandle,
                   &Object,
                   &v140,
                   &SourceSid);
        if ( result < 0 )
          return result;
        *v14 = 4;
        if ( (unsigned int)v5 < 4 )
          goto LABEL_60;
        v131 = KeGetCurrentThread();
        --v131->KernelApcDisable;
        v132 = Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v133 = *((_QWORD *)v132 + 135);
        if ( v133 )
          LODWORD(v9) = *(_DWORD *)(v133 + 40);
        ExReleaseResourceLite(*((PERESOURCE *)v132 + 6));
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        *(_DWORD *)TokenInformation = v9;
        goto LABEL_51;
      case TokenUserClaimAttributes:
      case TokenDeviceClaimAttributes:
        result = SepReferenceTokenByHandle(
                   TokenHandle,
                   8u,
                   PreviousMode,
                   (__int64)TokenHandle,
                   &Object,
                   &v140,
                   &SourceSid);
        if ( result < 0 )
          return result;
        v59 = KeGetCurrentThread();
        --v59->KernelApcDisable;
        v60 = Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v61 = v60[137];
        if ( v61
          && (*(_QWORD *)(v61 + 576) || TokenInformationClass != TokenUserClaimAttributes)
          && ((v63 = *(__int128 **)(v61 + 584)) != 0LL || TokenInformationClass != TokenDeviceClaimAttributes) )
        {
          if ( TokenInformationClass == TokenUserClaimAttributes )
            v63 = *(__int128 **)(v61 + 576);
          AuthzBasepQueryClaimAttributesToken(v63, 0LL, 0LL, &v144);
          v62 = v144;
        }
        else
        {
          v62 = 16;
          *(_QWORD *)&v160 = (char *)&v159 + 8;
          *((_QWORD *)&v159 + 1) = (char *)&v159 + 8;
          DWORD2(v160) = 0;
          *((_QWORD *)&v161 + 1) = &v161;
          *(_QWORD *)&v161 = &v161;
          v63 = &v159;
        }
        *v14 = v62;
        if ( (unsigned int)v5 < v62 )
          goto LABEL_111;
        SecurityAttributesToken = AuthzBasepQueryClaimAttributesToken(v63, TokenInformation, (unsigned int)v5, &v144);
        goto LABEL_122;
      case TokenDeviceGroups:
        result = SepReferenceTokenByHandle(
                   TokenHandle,
                   8u,
                   PreviousMode,
                   (__int64)TokenHandle,
                   &Object,
                   &v140,
                   &SourceSid);
        if ( result < 0 )
          return result;
        v74 = KeGetCurrentThread();
        --v74->KernelApcDisable;
        v30 = (unsigned int *)Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v75 = *((_QWORD *)v30 + 137);
        if ( v75 && (v76 = *(_DWORD *)v75) != 0 )
        {
          v77 = 16 * v76 + 8;
        }
        else
        {
          v76 = 0;
          v77 = 24;
        }
        if ( v76 )
        {
          v134 = *(_QWORD *)(v75 + 8);
          v135 = v76;
          do
          {
            v77 += 4 * *(unsigned __int8 *)(*(_QWORD *)v134 + 1LL) + 8;
            v134 += 16LL;
            --v135;
          }
          while ( v135 );
        }
        *v14 = v77;
        if ( (unsigned int)v5 < v77 )
          goto LABEL_58;
        *(_OWORD *)TokenInformation = 0LL;
        *((_QWORD *)TokenInformation + 2) = 0LL;
        *(_DWORD *)TokenInformation = v76;
        if ( v76 )
          RtlCopySidAndAttributesArray(
            v76,
            *(_QWORD *)(*((_QWORD *)v30 + 137) + 8LL),
            v77,
            (__int64)TokenInformation + 8,
            (char *)TokenInformation + 16 * v76 + 8,
            &v143,
            (ULONG *)&v143);
        goto LABEL_49;
      case TokenSecurityAttributes:
        result = SepReferenceTokenByHandle(
                   TokenHandle,
                   8u,
                   PreviousMode,
                   (__int64)TokenHandle,
                   &Object,
                   &v140,
                   &SourceSid);
        if ( result < 0 )
          return result;
        v64 = KeGetCurrentThread();
        --v64->KernelApcDisable;
        v60 = Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v65 = (_DWORD *)v60[97];
        if ( v65 )
        {
          LODWORD(DestinationSid) = 0;
          AuthzBasepQuerySecurityAttributesToken(v65, 0LL, 0LL, 0LL, (size_t)DestinationSid, &v144);
          v66 = v144;
        }
        else
        {
          v66 = 16;
        }
        *v14 = v66;
        if ( (unsigned int)v5 < v66 )
          goto LABEL_111;
        LODWORD(DestinationSid) = v5;
        SecurityAttributesToken = AuthzBasepQuerySecurityAttributesToken(
                                    (_DWORD *)v60[97],
                                    0LL,
                                    0LL,
                                    TokenInformation,
                                    (size_t)DestinationSid,
                                    &v144);
LABEL_122:
        v67 = (struct _ERESOURCE *)v60[6];
LABEL_123:
        ExReleaseResourceLite(v67);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        ObfDereferenceObjectWithTag(Object, 0x74726853u);
        return SecurityAttributesToken;
      case TokenProcessTrustLevel:
        v44 = 8;
        result = SepReferenceTokenByHandle(
                   TokenHandle,
                   8u,
                   PreviousMode,
                   (__int64)TokenHandle,
                   &Object,
                   &v140,
                   &SourceSid);
        if ( result < 0 )
          return result;
        v45 = KeGetCurrentThread();
        --v45->KernelApcDisable;
        v30 = (unsigned int *)Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v46 = v140;
        v47 = SourceSid;
        if ( (_BYTE)v140 )
          v48 = (unsigned __int8 *)SourceSid;
        else
          v48 = (unsigned __int8 *)*((_QWORD *)v30 + 138);
        if ( v48 )
          v44 = 4 * v48[1] + 16;
        *v14 = v44;
        if ( (unsigned int)v5 < v44 )
          goto LABEL_58;
        v49 = (char *)TokenInformation + 8;
        if ( !v48 )
          v49 = 0LL;
        *(_QWORD *)TokenInformation = v49;
        if ( v49 )
        {
          if ( !v46 )
            v47 = (PSID)*((_QWORD *)v30 + 138);
          RtlCopySid(v44 - 8, v49, v47);
        }
        goto LABEL_49;
      case TokenSingletonAttributes:
        result = SepReferenceTokenByHandle(
                   TokenHandle,
                   8u,
                   PreviousMode,
                   (__int64)TokenHandle,
                   &Object,
                   &v140,
                   &SourceSid);
        if ( result < 0 )
          return result;
        v136 = KeGetCurrentThread();
        --v136->KernelApcDisable;
        v137 = Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        SecurityAttributesToken = SepInternalQuerySecurityAttributesTokenEx(
                                    (__int64)v137,
                                    v138,
                                    0LL,
                                    0,
                                    1,
                                    (__int64)TokenInformation,
                                    v5,
                                    (__int64)v14);
        v67 = (struct _ERESOURCE *)*((_QWORD *)v137 + 6);
        goto LABEL_123;
      case TokenBnoIsolation:
        result = SepReferenceTokenByHandle(
                   TokenHandle,
                   8u,
                   PreviousMode,
                   (__int64)TokenHandle,
                   &Object,
                   &v140,
                   &SourceSid);
        if ( result < 0 )
          return result;
        v101 = KeGetCurrentThread();
        --v101->KernelApcDisable;
        v60 = Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v102 = 16;
        v103 = v60[144];
        if ( v103 )
          v102 = *(unsigned __int16 *)(v103 + 42) + 16;
        *v14 = v102;
        if ( (unsigned int)v5 < v102 )
        {
LABEL_111:
          v37 = (struct _ERESOURCE *)v60[6];
          goto LABEL_59;
        }
        if ( v60[144] )
        {
          *((_BYTE *)TokenInformation + 8) = 1;
          *(_QWORD *)TokenInformation = (char *)TokenInformation + 16;
          memmove(
            (char *)TokenInformation + 16,
            *(const void **)(v60[144] + 48LL),
            *(unsigned __int16 *)(v60[144] + 42LL));
        }
        else
        {
          *((_BYTE *)TokenInformation + 8) = 0;
          *(_QWORD *)TokenInformation = 0LL;
        }
        v28 = (struct _ERESOURCE *)v60[6];
        goto LABEL_50;
      default:
        return -1073741821;
    }
    goto LABEL_32;
  }
  result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, (__int64)TokenHandle, &Object, &v140, &SourceSid);
  if ( result >= 0 )
  {
    v20 = KeGetCurrentThread();
    --v20->KernelApcDisable;
    v21 = Object;
    ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
    v22 = 4 * *(unsigned __int8 *)(**((_QWORD **)v21 + 19) + 1LL) + 24;
    *v14 = v22;
    if ( (unsigned int)v5 >= v22 )
    {
      v23 = (char *)TokenInformation + 16;
      v24 = (const void **)*((_QWORD *)v21 + 19);
      v158 = 0;
      v163 = (char *)TokenInformation + 16;
      v157 = v22;
      while ( !(_DWORD)v9 )
      {
        v25 = 4 * *((unsigned __int8 *)*v24 + 1) + 8;
        v26 = (4 * *((unsigned __int8 *)*v24 + 1) + 11) & 0xFFFFFFFC;
        if ( v25 > v22 )
          goto LABEL_43;
        v22 -= v26;
        v157 = v22;
        *(_QWORD *)TokenInformation = v23;
        *((_DWORD *)TokenInformation + 2) = *((_DWORD *)v24 + 2);
        v27 = 4 * *((unsigned __int8 *)*v24 + 1) + 8;
        if ( v27 <= v25 )
          memmove(v23, *v24, v27);
        v23 += v26;
        v163 = v23;
        LODWORD(v9) = 1;
        v158 = 1;
      }
      v143 = __PAIR64__(HIDWORD(v23), v22);
LABEL_43:
      v28 = (struct _ERESOURCE *)*((_QWORD *)v21 + 6);
LABEL_50:
      ExReleaseResourceLite(v28);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
LABEL_51:
      v19 = Object;
      goto LABEL_32;
    }
    v37 = (struct _ERESOURCE *)*((_QWORD *)v21 + 6);
LABEL_59:
    ExReleaseResourceLite(v37);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
LABEL_60:
    v19 = Object;
LABEL_61:
    ObfDereferenceObjectWithTag(v19, 0x74726853u);
    return -1073741789;
  }
  return result;
}
