/*
 * XREFs of NtSetInformationToken @ 0x1406ED790
 * Callers:
 *     <none>
 * Callees:
 *     AuthzBasepSetSecurityAttributesToken @ 0x1402506CC (AuthzBasepSetSecurityAttributesToken.c)
 *     SepLocateTokenIntegrity @ 0x14025222C (SepLocateTokenIntegrity.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegion @ 0x1402CBAC0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402CBB00 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402CC2B0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402CC670 (ExAcquireResourceSharedLite.c)
 *     KeEnterCriticalRegion @ 0x1402D19A0 (KeEnterCriticalRegion.c)
 *     SepRemoveAceFromTokenDefaultDacl @ 0x14031D324 (SepRemoveAceFromTokenDefaultDacl.c)
 *     SepLinkLogonSessions @ 0x14032C264 (SepLinkLogonSessions.c)
 *     RtlEqualSid @ 0x1403459F0 (RtlEqualSid.c)
 *     RtlSubAuthorityCountSid @ 0x140348290 (RtlSubAuthorityCountSid.c)
 *     RtlSubAuthoritySid @ 0x1403482A0 (RtlSubAuthoritySid.c)
 *     Feature_RelaxTcbForUWP__private_ReportDeviceUsage @ 0x1403F825C (Feature_RelaxTcbForUWP__private_ReportDeviceUsage.c)
 *     memset @ 0x140413800 (memset.c)
 *     SeCaptureAcl @ 0x1405DBC10 (SeCaptureAcl.c)
 *     SeReleaseAcl @ 0x1405DBD4C (SeReleaseAcl.c)
 *     SeReleaseLuidAndAttributesArray @ 0x1405DD318 (SeReleaseLuidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x1405DD560 (SeCaptureSidAndAttributesArray.c)
 *     SeCaptureSid @ 0x1405DE46C (SeCaptureSid.c)
 *     SeReleaseSid @ 0x1405DE570 (SeReleaseSid.c)
 *     SeSinglePrivilegeCheck @ 0x140627A60 (SeSinglePrivilegeCheck.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x1406355DC (SepDereferenceLowBoxNumberEntry.c)
 *     SepDereferenceCachedHandlesEntry @ 0x140635720 (SepDereferenceCachedHandlesEntry.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 *     SepIdAssignableAsOwner @ 0x1406817CC (SepIdAssignableAsOwner.c)
 *     SepAppendDefaultDacl @ 0x1406996E8 (SepAppendDefaultDacl.c)
 *     SepFreeDefaultDacl @ 0x140699748 (SepFreeDefaultDacl.c)
 *     SepExpandDynamic @ 0x140699794 (SepExpandDynamic.c)
 *     SeSetSessionIdToken @ 0x14069D5A0 (SeSetSessionIdToken.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x14069F338 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SeSetVirtualizationToken @ 0x1406A1878 (SeSetVirtualizationToken.c)
 *     SepReleaseTokenSecurityAttributesAndOperationsInformation @ 0x1406EE99C (SepReleaseTokenSecurityAttributesAndOperationsInformation.c)
 *     SepShouldSetDelinkFlags @ 0x1406EEA8C (SepShouldSetDelinkFlags.c)
 *     SepCaptureTokenSecurityAttributesAndOperationsInformation @ 0x1406EEAEC (SepCaptureTokenSecurityAttributesAndOperationsInformation.c)
 *     SeSetMandatoryPolicyToken @ 0x1406EF250 (SeSetMandatoryPolicyToken.c)
 *     SepStopReferencingLogonSession @ 0x1406F0290 (SepStopReferencingLogonSession.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BCF0 (ExRaiseDatatypeMisalignment.c)
 *     SeSetPrivateNameSpaceToken @ 0x14091C8B8 (SeSetPrivateNameSpaceToken.c)
 *     SepAppendPrimaryGroup @ 0x14091CB14 (SepAppendPrimaryGroup.c)
 *     SepFreePrimaryGroup @ 0x14091CB80 (SepFreePrimaryGroup.c)
 *     SepModifyTokenPolicyCounter @ 0x14091CBE0 (SepModifyTokenPolicyCounter.c)
 *     SepCaptureAuditPolicy @ 0x140920B44 (SepCaptureAuditPolicy.c)
 *     SepReleaseAuditPolicy @ 0x14092103C (SepReleaseAuditPolicy.c)
 *     SepIdAssignableAsGroup @ 0x140921118 (SepIdAssignableAsGroup.c)
 *     SepRemoveTokenLogonSession @ 0x140923C20 (SepRemoveTokenLogonSession.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

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
  char *v16; // rsi
  __int32 v17; // ebx
  __int32 v18; // ebx
  __int32 v19; // ebx
  __int32 v20; // ebx
  int v21; // ebx
  int v22; // ebx
  int v23; // ebx
  NTSTATUS v24; // ebx
  int v25; // eax
  _QWORD *v26; // rdx
  char v27; // bl
  int v28; // edx
  int v29; // r8d
  int v30; // r9d
  struct _ERESOURCE *v31; // rcx
  _QWORD *v32; // r8
  char *v33; // rbx
  _OWORD *v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rdx
  int v37; // ebx
  struct _ERESOURCE **v38; // r15
  ULONG v39; // ebx
  char *v40; // rcx
  PVOID v41; // rbx
  unsigned int v42; // edx
  __int64 v43; // r8
  __int64 v44; // r9
  char *v45; // rcx
  __int64 v46; // rcx
  ACL *v47; // r14
  struct _DMA_ADAPTER *v48; // rcx
  unsigned int v49; // r12d
  _QWORD *v50; // rbx
  __int64 v51; // rax
  unsigned int v52; // ebx
  PADAPTER_OBJECT v53; // rsi
  char v54; // al
  struct _DMA_ADAPTER *v55; // rbx
  struct _DMA_ADAPTER *v56; // rbx
  int v57; // eax
  unsigned int v58; // eax
  __int32 v59; // ebx
  __int32 v60; // ebx
  __int32 v61; // ebx
  __int32 v62; // ebx
  int v63; // ebx
  int v64; // ebx
  ULONG v65; // ebx
  int v66; // r14d
  PVOID v67; // rbx
  bool v68; // r12
  int *v69; // rdx
  _DWORD *v70; // rbx
  _QWORD *v71; // rdx
  int v72; // eax
  unsigned int v73; // eax
  void *v74; // r13
  _WORD *v75; // rbx
  int v76; // ecx
  ULONG v77; // r12d
  char *v78; // rbx
  PSID *TokenIntegrity; // rax
  int v80; // r13d
  ULONG v81; // eax
  int v82; // edx
  ULONG v83; // eax
  int v84; // eax
  void *v85; // rcx
  void *v86; // rcx
  __int64 v87; // rdx
  __int64 v88; // rdx
  signed __int32 v89[8]; // [rsp+0h] [rbp-118h] BYREF
  PVOID *Object; // [rsp+20h] [rbp-F8h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-F0h]
  __int64 v92; // [rsp+30h] [rbp-E8h]
  PVOID Token; // [rsp+50h] [rbp-C8h] BYREF
  NTSTATUS v94; // [rsp+58h] [rbp-C0h]
  char v95; // [rsp+5Ch] [rbp-BCh]
  char v96; // [rsp+5Dh] [rbp-BBh]
  unsigned int v97; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v99; // [rsp+68h] [rbp-B0h] BYREF
  __int64 v100; // [rsp+70h] [rbp-A8h] BYREF
  PSID Sid1; // [rsp+78h] [rbp-A0h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+80h] [rbp-98h]
  PVOID P; // [rsp+88h] [rbp-90h] BYREF
  _OWORD *v104; // [rsp+90h] [rbp-88h] BYREF
  PSID Sid; // [rsp+98h] [rbp-80h]
  unsigned int v106; // [rsp+A0h] [rbp-78h] BYREF
  ULONG v107; // [rsp+A4h] [rbp-74h]
  ULONG v108; // [rsp+A8h] [rbp-70h] BYREF
  ULONG v109; // [rsp+ACh] [rbp-6Ch]
  __int64 v110; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v111; // [rsp+B8h] [rbp-60h] BYREF
  __int64 v112; // [rsp+C0h] [rbp-58h] BYREF
  int v113; // [rsp+C8h] [rbp-50h]
  ULONG v114; // [rsp+CCh] [rbp-4Ch]
  ULONG v115; // [rsp+D0h] [rbp-48h]
  ULONG v116; // [rsp+D4h] [rbp-44h]
  int v117; // [rsp+D8h] [rbp-40h]
  void *v118; // [rsp+E0h] [rbp-38h]
  PSID *v119; // [rsp+E8h] [rbp-30h]
  void *v120; // [rsp+F0h] [rbp-28h]

  v8 = 0;
  v95 = 0;
  v97 = 0;
  v106 = 0;
  Sid1 = 0LL;
  v100 = 0LL;
  v99 = 0LL;
  v111 = 0LL;
  v112 = 0LL;
  LODWORD(v110) = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v96 = PreviousMode;
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
  v16 = (char *)Token;
  DmaAdapter = (PADAPTER_OBJECT)Token;
  if ( result >= 0 )
  {
    if ( TokenInformationClass <= TokenVirtualizationAllowed )
    {
      if ( TokenInformationClass != TokenVirtualizationAllowed )
      {
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
                if ( v21 )
                {
                  v22 = v21 - 2;
                  if ( v22 )
                  {
                    v23 = v22 - 1;
                    if ( v23 )
                    {
                      if ( v23 == 2 )
                      {
                        if ( TokenInformationLength != 8 )
                        {
LABEL_25:
                          v24 = -1073741820;
LABEL_93:
                          v48 = (struct _DMA_ADAPTER *)v16;
                          goto LABEL_94;
                        }
                        v120 = *(void **)TokenInformation;
                        v25 = SepLinkLogonSessions((__int64)Token, v120, PreviousMode);
LABEL_54:
                        v24 = v25;
                        goto LABEL_93;
                      }
                      return -1073741811;
                    }
                    if ( TokenInformationLength != 8 )
                      goto LABEL_25;
                    v118 = *(void **)TokenInformation;
                    if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                    {
                      KeEnterCriticalRegion();
                      ExAcquireResourceExclusiveLite(*((PERESOURCE *)v16 + 6), 1u);
                      _InterlockedOr(v89, 0);
                      v26 = Token;
                      if ( !*((_QWORD *)Token + 28) )
                        *((_QWORD *)Token + 28) = v118;
LABEL_31:
                      v26[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                      _InterlockedOr(v89, 0);
                      ExReleaseResourceLite(*((PERESOURCE *)v16 + 6));
                      KeLeaveCriticalRegion();
                      v24 = 0;
LABEL_32:
                      v16 = (char *)Token;
                      goto LABEL_93;
                    }
                    goto LABEL_52;
                  }
                  v104 = 0LL;
                  if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                    goto LABEL_52;
                  KeEnterCriticalRegion();
                  ExAcquireResourceSharedLite(*((PERESOURCE *)v16 + 6), 1u);
                  v27 = v16[119];
                  ExReleaseResourceLite(*((PERESOURCE *)v16 + 6));
                  KeLeaveCriticalRegion();
                  if ( !v27 )
                  {
                    if ( !TokenInformation )
                    {
                      KeEnterCriticalRegion();
                      ExAcquireResourceExclusiveLite(*((PERESOURCE *)v16 + 6), 1u);
                      _InterlockedOr(v89, 0);
                      v16[119] = 1;
                      *((_QWORD *)Token + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                      _InterlockedOr(v89, 0);
                      v31 = (struct _ERESOURCE *)*((_QWORD *)v16 + 6);
LABEL_48:
                      ExReleaseResourceLite(v31);
                      KeLeaveCriticalRegion();
                      v16 = (char *)Token;
                      goto LABEL_49;
                    }
                    LOBYTE(v28) = PreviousMode;
                    v24 = SepCaptureAuditPolicy(
                            (_DWORD)TokenInformation,
                            v28,
                            v29,
                            v30,
                            (_DWORD)Object,
                            (_DWORD)HandleInformation,
                            (__int64)&v104);
                    v94 = v24;
                    if ( v24 < 0 )
                      goto LABEL_93;
                    KeEnterCriticalRegion();
                    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v16 + 6), 1u);
                    _InterlockedOr(v89, 0);
                    v16[119] = 2;
                    v32 = Token;
                    v33 = (char *)Token + 88;
                    v34 = v104;
                    *(_OWORD *)((char *)Token + 88) = *v104;
                    *((_QWORD *)v33 + 2) = *((_QWORD *)v34 + 2);
                    *((_DWORD *)v33 + 6) = *((_DWORD *)v34 + 6);
                    *((_WORD *)v33 + 14) = *((_WORD *)v34 + 14);
                    v33[30] = *((_BYTE *)v34 + 30);
                    v32[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                    _InterlockedOr(v89, 0);
                    ExReleaseResourceLite(*((PERESOURCE *)v16 + 6));
                    KeLeaveCriticalRegion();
                    LOBYTE(v35) = 1;
                    SepModifyTokenPolicyCounter(v33, v35);
                    HalPutDmaAdapter((PADAPTER_OBJECT)Token);
                    LOBYTE(v36) = PreviousMode;
                    SepReleaseAuditPolicy(v104, v36);
                    return 0;
                  }
                }
                else
                {
                  if ( TokenInformationLength != 4 )
                    goto LABEL_25;
                  v37 = *(_DWORD *)TokenInformation;
                  v113 = *(_DWORD *)TokenInformation;
                  if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                    goto LABEL_52;
                  if ( !v37 )
                  {
                    KeEnterCriticalRegion();
                    v38 = (struct _ERESOURCE **)(v16 + 48);
                    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v16 + 6), 1u);
                    _InterlockedOr(v89, 0);
                    v16 = (char *)Token;
                    if ( (*((_DWORD *)Token + 50) & 0x20) == 0 )
                    {
                      if ( SeTokenLeakTracking )
                        SepRemoveTokenLogonSession(Token);
                      v24 = SepStopReferencingLogonSession(v16);
                      v94 = v24;
                      if ( v24 < 0 )
                        goto LABEL_93;
                    }
                    _InterlockedOr(v89, 0);
                    v31 = *v38;
                    goto LABEL_48;
                  }
                }
                v24 = -1073741811;
                goto LABEL_93;
              }
              if ( TokenInformationLength == 4 )
              {
                v39 = *(_DWORD *)TokenInformation;
                v114 = *(_DWORD *)TokenInformation;
                if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                {
                  v25 = SeSetSessionIdToken(v16, v39);
                  goto LABEL_54;
                }
                goto LABEL_52;
              }
LABEL_91:
              HalPutDmaAdapter((PADAPTER_OBJECT)Token);
              return -1073741820;
            }
            if ( TokenInformationLength < 8 )
              goto LABEL_91;
            v40 = *(char **)TokenInformation;
            v99 = (__int64)v40;
            if ( v40 )
            {
              v24 = SeCaptureAcl(v40, PreviousMode, v14, v15, PagedPool, (int)HandleInformation, (PVOID *)&v99, &v97);
              v94 = v24;
            }
            else
            {
              v97 = 0;
              v24 = 0;
              v94 = 0;
            }
            if ( v24 < 0 )
              goto LABEL_93;
            KeEnterCriticalRegion();
            ExAcquireResourceExclusiveLite(*((PERESOURCE *)v16 + 6), 1u);
            _InterlockedOr(v89, 0);
            v41 = Token;
            v42 = v97 + 8 + 4 * *(unsigned __int8 *)(*((_QWORD *)Token + 21) + 1LL);
            v97 = v42;
            if ( v42 <= *((_DWORD *)Token + 34) )
            {
              v94 = SepExpandDynamic((__int64)Token, v42);
              if ( v94 >= 0 )
              {
                v45 = (char *)*((_QWORD *)v41 + 23);
                if ( !v45
                  || (v94 = SeCaptureAcl(v45, 0, v43, v44, PagedPool, (int)HandleInformation, (PVOID *)&v111, &v106),
                      v94 >= 0) )
                {
                  SepFreeDefaultDacl((__int64)v41);
                  v47 = (ACL *)v99;
                  if ( v99 )
                    SepAppendDefaultDacl((__int64)v41, (unsigned __int16 *)v99);
                  SeTokenDefaultDaclChangedAuditAlarm(v46, (__int64)v41, (__int64)TokenHandle, (ACL *)v111, v47);
                  *((_QWORD *)v41 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                  _InterlockedOr(v89, 0);
                  ExReleaseResourceLite(*((PERESOURCE *)v16 + 6));
                  KeLeaveCriticalRegion();
                  HalPutDmaAdapter((PADAPTER_OBJECT)Token);
                  if ( v99 )
                    SeReleaseAcl((void *)v99, PreviousMode);
                  if ( v111 )
                    SeReleaseAcl((void *)v111, 0);
                  return 0;
                }
              }
              _InterlockedOr(v89, 0);
              ExReleaseResourceLite(*((PERESOURCE *)v16 + 6));
              KeLeaveCriticalRegion();
              HalPutDmaAdapter((PADAPTER_OBJECT)Token);
              if ( v99 )
                SeReleaseAcl((void *)v99, PreviousMode);
              return v94;
            }
            else
            {
              _InterlockedOr(v89, 0);
              ExReleaseResourceLite(*((PERESOURCE *)v16 + 6));
              KeLeaveCriticalRegion();
              HalPutDmaAdapter((PADAPTER_OBJECT)Token);
              if ( v99 )
                SeReleaseAcl((void *)v99, PreviousMode);
              return -1073741671;
            }
          }
          else
          {
            if ( TokenInformationLength < 8 )
              goto LABEL_91;
            v100 = *(_QWORD *)TokenInformation;
            v24 = SeCaptureSid((char *)v100, PreviousMode, v14, v15, (int)Object, 1, (PSID *)&v100);
            v94 = v24;
            v48 = (struct _DMA_ADAPTER *)v16;
            if ( v24 < 0 )
            {
LABEL_94:
              HalPutDmaAdapter(v48);
              return v24;
            }
            if ( (unsigned __int8)SepIdAssignableAsGroup(v16, v100) )
            {
              v49 = 4 * *(unsigned __int8 *)(v100 + 1) + 8;
              v97 = v49;
              KeEnterCriticalRegion();
              ExAcquireResourceExclusiveLite(*((PERESOURCE *)v16 + 6), 1u);
              _InterlockedOr(v89, 0);
              v50 = Token;
              v51 = *((_QWORD *)Token + 23);
              if ( v51 )
              {
                v49 += *(unsigned __int16 *)(v51 + 2);
                v97 = v49;
              }
              if ( v49 <= *((_DWORD *)Token + 34) )
              {
                v94 = SepExpandDynamic((__int64)Token, v97);
                if ( v94 >= 0 )
                {
                  SepFreePrimaryGroup(v50);
                  SepAppendPrimaryGroup(v50, v100);
                  v50[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                  _InterlockedOr(v89, 0);
                  ExReleaseResourceLite(*((PERESOURCE *)v16 + 6));
                  KeLeaveCriticalRegion();
                }
                else
                {
                  _InterlockedOr(v89, 0);
                  ExReleaseResourceLite(*((PERESOURCE *)v16 + 6));
                  KeLeaveCriticalRegion();
                  v8 = v94;
                }
              }
              else
              {
                _InterlockedOr(v89, 0);
                ExReleaseResourceLite(*((PERESOURCE *)v16 + 6));
                KeLeaveCriticalRegion();
                v8 = -1073741671;
              }
              v16 = (char *)Token;
            }
            else
            {
              v8 = -1073741733;
            }
            HalPutDmaAdapter((PADAPTER_OBJECT)v16);
            SeReleaseSid((void *)v100, PreviousMode, 1);
            return v8;
          }
        }
        else
        {
          if ( TokenInformationLength < 8 )
            goto LABEL_91;
          Sid1 = *(PSID *)TokenInformation;
          v24 = SeCaptureSid((char *)Sid1, PreviousMode, v14, v15, (int)Object, 1, &Sid1);
          v94 = v24;
          if ( v24 < 0 )
            goto LABEL_93;
          v52 = 0;
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite(*((PERESOURCE *)v16 + 6), 1u);
          _InterlockedOr(v89, 0);
          v53 = DmaAdapter;
          while ( 1 )
          {
            if ( v52 >= HIDWORD(v53[7].DmaOperations) )
            {
              _InterlockedOr(v89, 0);
              v56 = DmaAdapter;
              ExReleaseResourceLite(*(PERESOURCE *)&DmaAdapter[3].Version);
              KeLeaveCriticalRegion();
              HalPutDmaAdapter(v56);
              SeReleaseSid(Sid1, PreviousMode, 1);
              return -1073741734;
            }
            if ( RtlEqualSid(Sid1, *((PSID *)&v53[9].DmaOperations->Size + 2 * v52)) )
              break;
            ++v52;
          }
          if ( SepIdAssignableAsOwner((__int64)v53, v52) )
          {
            *(_DWORD *)&v53[9].Version = v52;
            v54 = 1;
            v95 = 1;
            v94 = 0;
          }
          else
          {
            v94 = -1073741734;
            v54 = v95;
          }
          if ( v54 )
          {
            Sid = (PSID)(ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement));
            v53[3].DmaOperations = (_DMA_OPERATIONS *)Sid;
          }
          _InterlockedOr(v89, 0);
          v55 = DmaAdapter;
          ExReleaseResourceLite(*(PERESOURCE *)&DmaAdapter[3].Version);
          KeLeaveCriticalRegion();
          HalPutDmaAdapter(v55);
          SeReleaseSid(Sid1, PreviousMode, 1);
          return v94;
        }
      }
      if ( TokenInformationLength != 4 )
        goto LABEL_25;
      v107 = *(_DWORD *)TokenInformation;
      if ( SeSinglePrivilegeCheck(SeCreateTokenPrivilege, PreviousMode) )
      {
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite(*((PERESOURCE *)v16 + 6), 1u);
        _InterlockedOr(v89, 0);
        v26 = Token;
        v57 = *((_DWORD *)Token + 50);
        if ( v107 )
          v58 = v57 | 0x200;
        else
          v58 = v57 & 0xFFFFFDFF;
        *((_DWORD *)Token + 50) = v58;
        goto LABEL_31;
      }
LABEL_52:
      v24 = -1073741727;
      goto LABEL_93;
    }
    v59 = TokenInformationClass - 24;
    if ( !v59 )
    {
      if ( TokenInformationLength != 4 )
        goto LABEL_25;
      v117 = *(_DWORD *)TokenInformation;
      SeSetVirtualizationToken((__int64)Token, v117);
LABEL_49:
      v24 = 0;
      goto LABEL_93;
    }
    v60 = v59 - 1;
    if ( v60 )
    {
      v61 = v60 - 1;
      if ( !v61 )
      {
        if ( TokenInformationLength != 4 )
          goto LABEL_25;
        v109 = *(_DWORD *)TokenInformation;
        if ( !v109 || SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
        {
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite(*((PERESOURCE *)v16 + 6), 1u);
          _InterlockedOr(v89, 0);
          v71 = Token;
          v72 = *((_DWORD *)Token + 50);
          if ( v109 )
            v73 = v72 | 0x1000;
          else
            v73 = v72 & 0xFFFFEFFF;
          *((_DWORD *)Token + 50) = v73;
          v71[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
          _InterlockedOr(v89, 0);
          ExReleaseResourceLite(*((PERESOURCE *)v16 + 6));
          KeLeaveCriticalRegion();
          v24 = 0;
          goto LABEL_32;
        }
        goto LABEL_52;
      }
      v62 = v61 - 1;
      if ( !v62 )
      {
        if ( TokenInformationLength != 4 )
          goto LABEL_25;
        v108 = *(_DWORD *)TokenInformation;
        if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
        {
          if ( v16[204] )
          {
            v24 = -1073741525;
            goto LABEL_93;
          }
          v25 = SeSetMandatoryPolicyToken(v16, &v108);
          goto LABEL_54;
        }
        goto LABEL_52;
      }
      v63 = v62 - 12;
      if ( !v63 )
      {
        P = 0LL;
        if ( !TokenInformation || TokenInformationLength < 0x10 )
          goto LABEL_25;
        LOBYTE(v13) = PreviousMode;
        v66 = SepCaptureTokenSecurityAttributesAndOperationsInformation(TokenInformation, v13, &P);
        if ( v66 >= 0 )
        {
          Feature_RelaxTcbForUWP__private_ReportDeviceUsage();
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
            v66 = -1073741727;
          v94 = v66;
          if ( v66 >= 0 )
          {
            v67 = P;
            v68 = (unsigned __int8)SepShouldSetDelinkFlags(*((_QWORD *)P + 1), *(_QWORD *)P) != 0;
            KeEnterCriticalRegion();
            ExAcquireResourceExclusiveLite(*((PERESOURCE *)v16 + 6), 1u);
            _InterlockedOr(v89, 0);
            v69 = (int *)*((_QWORD *)v67 + 1);
            v70 = Token;
            v94 = AuthzBasepSetSecurityAttributesToken(*((_QWORD *)Token + 97), v69, *(_QWORD *)P);
            if ( v94 >= 0 && v68 )
              v70[50] |= 0x20000u;
            *((_QWORD *)v70 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
            _InterlockedOr(v89, 0);
            ExReleaseResourceLite(*((PERESOURCE *)v16 + 6));
            KeLeaveCriticalRegion();
            SepReleaseTokenSecurityAttributesAndOperationsInformation(P);
            v24 = v94;
            goto LABEL_32;
          }
          SepReleaseTokenSecurityAttributesAndOperationsInformation(P);
        }
        v24 = v66;
        goto LABEL_93;
      }
      v64 = v63 - 3;
      if ( !v64 )
      {
        if ( TokenInformationLength != 4 )
          goto LABEL_25;
        v65 = *(_DWORD *)TokenInformation;
        v116 = *(_DWORD *)TokenInformation;
        if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
        {
          v25 = SeSetPrivateNameSpaceToken(v16, v65);
          goto LABEL_54;
        }
        goto LABEL_52;
      }
      if ( v64 != 3 )
        return -1073741811;
      if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
      {
        if ( TokenInformationLength != 4 )
          goto LABEL_25;
        v115 = *(_DWORD *)TokenInformation;
        if ( !v115 && (*((_DWORD *)v16 + 50) & 0x80000) != 0 )
        {
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite(*((PERESOURCE *)v16 + 6), 1u);
          _InterlockedOr(v89, 0);
          *((_DWORD *)v16 + 50) &= ~0x80000u;
          *((_QWORD *)Token + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
          _InterlockedOr(v89, 0);
          ExReleaseResourceLite(*((PERESOURCE *)v16 + 6));
          KeLeaveCriticalRegion();
          v16 = (char *)Token;
        }
        HalPutDmaAdapter((PADAPTER_OBJECT)v16);
        return 0;
      }
      goto LABEL_52;
    }
    if ( TokenInformationLength < 0x10 )
      goto LABEL_25;
    v25 = SeCaptureSidAndAttributesArray(
            (char *)TokenInformation,
            1u,
            PreviousMode,
            0LL,
            0,
            (int)HandleInformation,
            v92,
            (PVOID *)&v112,
            (unsigned int *)&v110);
    v94 = v25;
    if ( v25 < 0 )
      goto LABEL_54;
    v74 = (void *)v112;
    v75 = *(_WORD **)v112;
    if ( *(_DWORD *)(*(_QWORD *)v112 + 2LL) == *(_DWORD *)((char *)SeUntrustedMandatorySid + 2)
      && v75[3] == *((_WORD *)SeUntrustedMandatorySid + 3) )
    {
      v76 = *RtlSubAuthorityCountSid(*(PSID *)v112);
      if ( !(_BYTE)v76 )
      {
        v77 = 0;
        goto LABEL_161;
      }
      v77 = *RtlSubAuthoritySid(v75, v76 - 1);
      if ( v77 <= 0x4000 )
      {
LABEL_161:
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite(*((PERESOURCE *)v16 + 6), 1u);
        _InterlockedOr(v89, 0);
        v78 = (char *)Token;
        TokenIntegrity = (PSID *)SepLocateTokenIntegrity((__int64)Token);
        v119 = TokenIntegrity;
        if ( !TokenIntegrity )
        {
          v24 = -1073740730;
LABEL_193:
          _InterlockedOr(v89, 0);
          ExReleaseResourceLite(*((PERESOURCE *)v16 + 6));
          KeLeaveCriticalRegion();
          HalPutDmaAdapter((PADAPTER_OBJECT)Token);
          SeReleaseLuidAndAttributesArray((void *)v112, PreviousMode);
          return v24;
        }
        Sid = *TokenIntegrity;
        v80 = *RtlSubAuthorityCountSid(Sid);
        if ( (_BYTE)v80 )
        {
          v81 = *RtlSubAuthoritySid(Sid, v80 - 1);
          v82 = v80;
        }
        else
        {
          v81 = 0;
          v82 = 0;
        }
        if ( v77 <= v81 )
        {
          if ( (_BYTE)v80 )
            v83 = *RtlSubAuthoritySid(Sid, v82 - 1);
          else
            v83 = 0;
          if ( v77 < v83 )
            *((_DWORD *)v78 + 50) &= ~0x1000u;
        }
        else
        {
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          {
            v24 = -1073741727;
            goto LABEL_193;
          }
          if ( v78[204] )
          {
            v24 = -1073741525;
            goto LABEL_193;
          }
        }
        v84 = *((unsigned __int8 *)*v119 + 1);
        if ( (_BYTE)v84 )
        {
          *RtlSubAuthoritySid(*v119, v84 - 1) = v77;
          if ( v77 < 0x3000 )
          {
            *((_QWORD *)v78 + 9) &= 0xFFFFFFEEDFE9F97BuLL;
            *((_QWORD *)v78 + 10) &= 0xFFFFFFEEDFE9F97BuLL;
          }
          if ( v77 >= 0x2000 )
          {
            if ( (*((_DWORD *)v78 + 50) & 0x4000) != 0 )
            {
              SepRemoveAceFromTokenDefaultDacl((__int64)v78, *((_QWORD *)v78 + 98));
              *((_DWORD *)v78 + 50) &= ~0x4000u;
              v85 = (void *)*((_QWORD *)v78 + 98);
              if ( v85 )
              {
                ExFreePoolWithTag(v85, 0);
                *((_QWORD *)v78 + 98) = 0LL;
              }
              v86 = (void *)*((_QWORD *)v78 + 99);
              if ( v86 )
              {
                ExFreePoolWithTag(v86, 0);
                *((_QWORD *)v78 + 99) = 0LL;
                *((_DWORD *)v78 + 200) = 0;
                memset(v78 + 808, 0, 0x110uLL);
              }
              v87 = *((_QWORD *)v78 + 135);
              if ( v87 )
              {
                SepDereferenceLowBoxNumberEntry(*((_DWORD *)v78 + 30), v87);
                *((_QWORD *)v78 + 135) = 0LL;
              }
              v88 = *((_QWORD *)v78 + 136);
              if ( v88 )
              {
                SepDereferenceCachedHandlesEntry(*((_QWORD *)v78 + 27), v88);
                *((_QWORD *)v78 + 136) = 0LL;
              }
            }
            *((_DWORD *)v78 + 50) |= 0x2000u;
          }
          else
          {
            *((_QWORD *)v78 + 9) &= 0x202800000uLL;
            *((_QWORD *)v78 + 10) &= 0x202800000uLL;
            *((_DWORD *)v78 + 50) &= ~0x2000u;
          }
          *((_QWORD *)v78 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
          v24 = 0;
        }
        else
        {
          v24 = -1073741811;
        }
        goto LABEL_193;
      }
    }
    HalPutDmaAdapter((PADAPTER_OBJECT)v16);
    SeReleaseLuidAndAttributesArray(v74, PreviousMode);
    return -1073740730;
  }
  return result;
}
