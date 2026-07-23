/*
 * XREFs of SeQueryInformationToken @ 0x1406CF990
 * Callers:
 *     RtlpQueryLowBoxId @ 0x14025A448 (RtlpQueryLowBoxId.c)
 *     RtlCheckTokenCapability @ 0x140586670 (RtlCheckTokenCapability.c)
 *     CmpBuildAdminInformation @ 0x1405D9BE0 (CmpBuildAdminInformation.c)
 *     AlpcpCheckConnectionSecurity @ 0x1405DEB24 (AlpcpCheckConnectionSecurity.c)
 *     EtwpBuildProcessEvent @ 0x140602610 (EtwpBuildProcessEvent.c)
 *     EtwpPsProvTraceProcess @ 0x140602CDC (EtwpPsProvTraceProcess.c)
 *     SeQuerySigningPolicyWorker @ 0x140603818 (SeQuerySigningPolicyWorker.c)
 *     ObpLookupObjectName @ 0x140641640 (ObpLookupObjectName.c)
 *     CmpVEExecuteParseLogic @ 0x1406498B0 (CmpVEExecuteParseLogic.c)
 *     RtlIsSandboxedToken @ 0x140652B50 (RtlIsSandboxedToken.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14065CC90 (PspAllocateAndQueryNotificationChannel.c)
 *     SeTokenIsElevated @ 0x1406865C0 (SeTokenIsElevated.c)
 *     SepCheckCapabilities @ 0x14068AA90 (SepCheckCapabilities.c)
 *     PiDqOpenUserObjectRegKey @ 0x14068C868 (PiDqOpenUserObjectRegKey.c)
 *     PsIsProcessAppContainer @ 0x140690804 (PsIsProcessAppContainer.c)
 *     CmpIsSystemEntity @ 0x1406CF8B0 (CmpIsSystemEntity.c)
 *     PspAllocateProcess @ 0x140703F08 (PspAllocateProcess.c)
 *     NtCompareTokens @ 0x14070E3A0 (NtCompareTokens.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140718990 (ObpVerifyCreatorAccessCheck.c)
 *     ObpCaptureBoundaryDescriptor @ 0x140718B6C (ObpCaptureBoundaryDescriptor.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x140778E88 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     CmpCreateRegistryProcessToken @ 0x140798BF0 (CmpCreateRegistryProcessToken.c)
 *     RtlpIsAppContainer @ 0x140914C78 (RtlpIsAppContainer.c)
 *     EtwpAcquireTokenAccessInformation @ 0x140933BAC (EtwpAcquireTokenAccessInformation.c)
 * Callees:
 *     SepTokenPrivilegeCount @ 0x140202A20 (SepTokenPrivilegeCount.c)
 *     SepCanTokenMatchAllPackageSid @ 0x14024DF44 (SepCanTokenMatchAllPackageSid.c)
 *     SepConvertTokenPrivileges @ 0x140252034 (SepConvertTokenPrivileges.c)
 *     SepConvertTokenPrivilegesToLuidAndAttributes @ 0x140252060 (SepConvertTokenPrivilegesToLuidAndAttributes.c)
 *     SepCopyTokenIntegrity @ 0x1402521FC (SepCopyTokenIntegrity.c)
 *     KeLeaveCriticalRegion @ 0x1402CBAC0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402CBB00 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402CC670 (ExAcquireResourceSharedLite.c)
 *     RtlSubAuthorityCountSid @ 0x140348290 (RtlSubAuthorityCountSid.c)
 *     RtlSubAuthoritySid @ 0x1403482A0 (RtlSubAuthoritySid.c)
 *     Feature_PPLEnforcement__private_ReportDeviceUsage @ 0x1403F81F4 (Feature_PPLEnforcement__private_ReportDeviceUsage.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     SepCopyTokenAccessInformation @ 0x1405DBD68 (SepCopyTokenAccessInformation.c)
 *     RtlCopySidAndAttributesArray @ 0x1405DC280 (RtlCopySidAndAttributesArray.c)
 *     SepGetTokenAccessInformationBufferSize @ 0x1405DC348 (SepGetTokenAccessInformationBufferSize.c)
 *     RtlCopySid @ 0x140654560 (RtlCopySid.c)
 *     SeQuerySessionIdToken @ 0x1406773C0 (SeQuerySessionIdToken.c)
 *     AuthzBasepQueryClaimAttributesToken @ 0x14068865C (AuthzBasepQueryClaimAttributesToken.c)
 *     RtlIsElevatedRid @ 0x1406ED2B0 (RtlIsElevatedRid.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall SeQueryInformationToken(
        PACCESS_TOKEN Token,
        TOKEN_INFORMATION_CLASS TokenInformationClass,
        PVOID *TokenInformation)
{
  char *v3; // rdi
  struct _KTHREAD *CurrentThread; // rax
  ULONG v8; // r15d
  _SID_AND_ATTRIBUTES *PoolWithTag; // rax
  _SID_AND_ATTRIBUTES *v10; // rdi
  NTSTATUS result; // eax
  struct _KTHREAD *v12; // rax
  unsigned int v13; // ecx
  ULONG v14; // edi
  ULONG v15; // eax
  __int64 v16; // r8
  __int64 *v17; // rdx
  __int64 v18; // rax
  char *v19; // rax
  void *v20; // rsi
  struct _KTHREAD *v21; // rax
  unsigned int v22; // eax
  unsigned int v23; // r15d
  _SID_AND_ATTRIBUTES *v24; // rax
  struct _KTHREAD *v25; // rax
  int v26; // esi
  int v27; // r15d
  int v28; // eax
  unsigned int v29; // r9d
  unsigned int v30; // r12d
  __int64 *v31; // r11
  __int64 *v32; // rdx
  unsigned int v33; // eax
  __int64 v34; // r8
  unsigned int v35; // r13d
  __int64 v36; // r10
  __int64 v37; // rax
  unsigned int v38; // r9d
  __int64 v39; // r12
  unsigned int v40; // r13d
  int v41; // r10d
  int v42; // r11d
  int v43; // r15d
  __int64 *v44; // rdx
  __int64 v45; // r8
  __int64 v46; // rsi
  __int64 v47; // rax
  _QWORD *v48; // rax
  unsigned int v49; // r15d
  char *v50; // rax
  char *v51; // rsi
  char *v52; // rcx
  char *v53; // rax
  __int64 v54; // rcx
  ULONG v55; // r12d
  struct _KTHREAD *v56; // rax
  unsigned int TokenAccessInformationBufferSize; // r15d
  char *v58; // rax
  char *v59; // rsi
  struct _KTHREAD *v60; // rax
  unsigned int v61; // r15d
  _SID_AND_ATTRIBUTES *v62; // rax
  struct _KTHREAD *v63; // rax
  char *v64; // rdi
  unsigned int v65; // r15d
  char *v66; // rax
  struct _KTHREAD *v67; // rax
  int v68; // ecx
  struct _KTHREAD *v69; // rax
  unsigned int v70; // r15d
  _SID_AND_ATTRIBUTES *v71; // rax
  struct _KTHREAD *v72; // rax
  __int64 v73; // rax
  SIZE_T v74; // r15
  char *v75; // rax
  void *v76; // rcx
  _OWORD *v77; // rax
  _DWORD *v78; // rax
  _DWORD *v79; // rax
  int v80; // edx
  _DWORD *v81; // r12
  struct _KTHREAD *v82; // rcx
  unsigned int v83; // r15d
  bool v84; // si
  BOOLEAN IsElevatedRid; // al
  _DWORD *v86; // rax
  _SID_AND_ATTRIBUTES *v87; // rax
  struct _KTHREAD *v88; // rax
  __int64 v89; // rax
  int v90; // edx
  struct _KTHREAD *v91; // rax
  __int64 v92; // rax
  struct _KTHREAD *v93; // rax
  unsigned int v94; // ecx
  ULONG v95; // edi
  ULONG v96; // eax
  __int64 *v97; // rdx
  __int64 v98; // r8
  __int64 v99; // rax
  char *v100; // rax
  struct _KTHREAD *v101; // rax
  __int64 v102; // r12
  __int128 *v103; // rax
  __int128 *v104; // r12
  unsigned int v105; // r15d
  _OWORD *v106; // rax
  void *v107; // rdi
  NTSTATUS v108; // esi
  struct _KTHREAD *v109; // rax
  unsigned int *v110; // rdx
  unsigned int v111; // r15d
  ULONG v112; // edi
  ULONG v113; // eax
  __int64 *v114; // rdx
  __int64 v115; // r8
  __int64 v116; // rax
  struct _KTHREAD *v117; // rax
  unsigned int v118; // r15d
  char *v119; // rax
  char *v120; // rdi
  struct _KTHREAD *v121; // rax
  __int64 v122; // rax
  SIZE_T v123; // r15
  int v124; // esi
  unsigned int v125; // eax
  PSID RemainingSidArea; // [rsp+80h] [rbp-49h] BYREF
  int v127; // [rsp+88h] [rbp-41h] BYREF
  int v128; // [rsp+8Ch] [rbp-3Dh] BYREF
  int v129; // [rsp+90h] [rbp-39h] BYREF
  int v130; // [rsp+94h] [rbp-35h] BYREF
  int v131; // [rsp+98h] [rbp-31h] BYREF
  int v132; // [rsp+9Ch] [rbp-2Dh] BYREF
  int v133; // [rsp+A0h] [rbp-29h] BYREF
  int v134; // [rsp+A4h] [rbp-25h] BYREF
  __int128 v135; // [rsp+A8h] [rbp-21h] BYREF
  __int128 v136; // [rsp+B8h] [rbp-11h]
  __int128 v137; // [rsp+C8h] [rbp-1h] BYREF
  PSID Sid[9]; // [rsp+D8h] [rbp+Fh]
  int v139; // [rsp+130h] [rbp+67h] BYREF
  SIZE_T NumberOfBytes; // [rsp+138h] [rbp+6Fh] BYREF
  int v141; // [rsp+148h] [rbp+7Fh] BYREF

  v3 = 0LL;
  LODWORD(NumberOfBytes) = 0;
  v127 = 0;
  v135 = 0LL;
  v136 = 0LL;
  v137 = 0LL;
  if ( TokenInformationClass == TokenVirtualizationEnabled )
  {
LABEL_136:
    v125 = *((_DWORD *)Token + 50);
    if ( TokenInformationClass == TokenVirtualizationAllowed )
    {
      *(_DWORD *)TokenInformation = (v125 >> 9) & 1;
      return 0;
    }
    else if ( TokenInformationClass == TokenVirtualizationEnabled )
    {
      *(_DWORD *)TokenInformation = (v125 >> 10) & 1;
      return 0;
    }
    else if ( TokenInformationClass == TokenUIAccess )
    {
      *(_DWORD *)TokenInformation = (v125 >> 12) & 1;
      return 0;
    }
    else if ( TokenInformationClass == TokenIsAppContainer )
    {
      *(_DWORD *)TokenInformation = (v125 >> 14) & 1;
      return 0;
    }
    else
    {
      if ( TokenInformationClass == TokenHasRestrictions )
        *(_BYTE *)TokenInformation = (*((_DWORD *)Token + 50) & 0x810) != 0;
      else
        *(_DWORD *)TokenInformation = HIWORD(v125) & 1;
      return 0;
    }
  }
  switch ( TokenInformationClass )
  {
    case TokenUser:
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v8 = 4 * *(unsigned __int8 *)(**((_QWORD **)Token + 19) + 1LL) + 24;
      PoolWithTag = (_SID_AND_ATTRIBUTES *)ExAllocatePoolWithTag(PagedPool, v8, 0x20206553u);
      v10 = PoolWithTag;
      if ( !PoolWithTag )
        goto LABEL_4;
      RtlCopySidAndAttributesArray(
        1u,
        *((PSID_AND_ATTRIBUTES *)Token + 19),
        v8,
        PoolWithTag,
        &PoolWithTag[1],
        &RemainingSidArea,
        (PULONG)&RemainingSidArea);
      goto LABEL_7;
    case TokenGroups:
      v12 = KeGetCurrentThread();
      --v12->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v13 = *((_DWORD *)Token + 31);
      v14 = 16 * v13 - 8;
      v15 = v14;
      if ( v13 > 1 )
      {
        v16 = v13 - 1;
        v17 = (__int64 *)(*((_QWORD *)Token + 19) + 16LL);
        do
        {
          v18 = *v17;
          v17 += 2;
          v14 += 4 * *(unsigned __int8 *)(v18 + 1) + 8;
          v15 = v14;
          --v16;
        }
        while ( v16 );
      }
      v19 = (char *)ExAllocatePoolWithTag(PagedPool, v15, 0x20206553u);
      v20 = v19;
      if ( !v19 )
        goto LABEL_4;
      *(_DWORD *)v19 = *((_DWORD *)Token + 31) - 1;
      RtlCopySidAndAttributesArray(
        *((_DWORD *)Token + 31) - 1,
        (PSID_AND_ATTRIBUTES)(*((_QWORD *)Token + 19) + 16LL),
        v14,
        (PSID_AND_ATTRIBUTES)(v19 + 8),
        &v19[16 * *((_DWORD *)Token + 31) - 32 + 24],
        &RemainingSidArea,
        (PULONG)&RemainingSidArea);
      ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
      KeLeaveCriticalRegion();
      result = 0;
      *TokenInformation = v20;
      return result;
    case TokenPrivileges:
      v21 = KeGetCurrentThread();
      --v21->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v22 = SepTokenPrivilegeCount((__int64)Token);
      if ( v22 <= 1 )
        v23 = 16;
      else
        v23 = 12 * v22 + 4;
      v24 = (_SID_AND_ATTRIBUTES *)ExAllocatePoolWithTag(PagedPool, v23, 0x20206553u);
      v10 = v24;
      if ( !v24 )
        goto LABEL_4;
      SepConvertTokenPrivileges((__int64)Token, v24);
      goto LABEL_7;
    case TokenOwner:
      v60 = KeGetCurrentThread();
      --v60->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v61 = 4 * *(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)Token + 19) + 16LL * *((unsigned int *)Token + 36)) + 1LL)
          + 16;
      v62 = (_SID_AND_ATTRIBUTES *)ExAllocatePoolWithTag(PagedPool, v61, 0x20206553u);
      v10 = v62;
      if ( !v62 )
        goto LABEL_4;
      v62->Sid = &v62->Attributes;
      RtlCopySid(v61 - 8, &v62->Attributes, *(PSID *)(*((_QWORD *)Token + 19) + 16LL * *((unsigned int *)Token + 36)));
      goto LABEL_7;
    case TokenPrimaryGroup:
      v69 = KeGetCurrentThread();
      --v69->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v70 = 4 * *(unsigned __int8 *)(*((_QWORD *)Token + 21) + 1LL) + 16;
      v71 = (_SID_AND_ATTRIBUTES *)ExAllocatePoolWithTag(PagedPool, v70, 0x20206553u);
      v10 = v71;
      if ( !v71 )
        goto LABEL_4;
      v71->Sid = &v71->Attributes;
      RtlCopySid(v70 - 8, &v71->Attributes, *((PSID *)Token + 21));
      goto LABEL_7;
    case TokenDefaultDacl:
      v72 = KeGetCurrentThread();
      --v72->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v73 = *((_QWORD *)Token + 23);
      v74 = 8LL;
      if ( v73 )
        v74 = *(unsigned __int16 *)(v73 + 2) + 8LL;
      v75 = (char *)ExAllocatePoolWithTag(PagedPool, v74, 0x20206553u);
      v59 = v75;
      if ( !v75 )
        goto LABEL_4;
      v76 = v75 + 8;
      if ( !*((_QWORD *)Token + 23) )
        goto LABEL_131;
      *(_QWORD *)v75 = v76;
      memmove(v76, *((const void **)Token + 23), *(unsigned __int16 *)(*((_QWORD *)Token + 23) + 2LL));
      goto LABEL_43;
    case TokenSource:
      v77 = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x20206553u);
      if ( !v77 )
        return -1073741670;
      *v77 = *(_OWORD *)Token;
      *TokenInformation = v77;
      return 0;
    case TokenType:
      v78 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x20206553u);
      if ( !v78 )
        return -1073741670;
      *v78 = *((_DWORD *)Token + 48);
      *TokenInformation = v78;
      return 0;
    case TokenImpersonationLevel:
      if ( *((_DWORD *)Token + 48) != 2 )
        return -1073741821;
      v86 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x20206553u);
      if ( !v86 )
        return -1073741670;
      *v86 = *((_DWORD *)Token + 49);
      *TokenInformation = v86;
      return 0;
    case TokenStatistics:
      v87 = (_SID_AND_ATTRIBUTES *)ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x20206553u);
      v10 = v87;
      if ( !v87 )
        return -1073741670;
      v87->Sid = (PSID)*((_QWORD *)Token + 2);
      *(_QWORD *)&v87->Attributes = *((_QWORD *)Token + 3);
      v87[1].Attributes = *((_DWORD *)Token + 48);
      *(&v87[1].Attributes + 1) = *((_DWORD *)Token + 49);
      v87[1].Sid = (PSID)*((_QWORD *)Token + 5);
      v88 = KeGetCurrentThread();
      --v88->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      LODWORD(v10[2].Sid) = *((_DWORD *)Token + 34);
      v89 = *((_QWORD *)Token + 23);
      v90 = *((_DWORD *)Token + 34) - 4 * *(unsigned __int8 *)(*((_QWORD *)Token + 21) + 1LL) - 8;
      if ( v89 )
        v90 -= *(unsigned __int16 *)(v89 + 2);
      HIDWORD(v10[2].Sid) = v90;
      HIDWORD(v10[2].Sid) = *((_DWORD *)Token + 35);
      v10[2].Attributes = *((_DWORD *)Token + 31) - 1;
      *(&v10[2].Attributes + 1) = SepTokenPrivilegeCount((__int64)Token);
      v10[3].Sid = (PSID)*((_QWORD *)Token + 7);
LABEL_7:
      ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
      KeLeaveCriticalRegion();
      result = 0;
      *TokenInformation = v10;
      return result;
    case TokenSessionId:
      SeQuerySessionIdToken(Token, (PULONG)TokenInformation);
      return 0;
    case TokenGroupsAndPrivileges:
      v25 = KeGetCurrentThread();
      v26 = 0;
      v27 = 0;
      --v25->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v28 = SepTokenPrivilegeCount((__int64)Token);
      v29 = *((_DWORD *)Token + 31);
      v127 = v28;
      LODWORD(NumberOfBytes) = 12 * v28;
      v139 = 16 * v29;
      v30 = 16 * v29;
      if ( v29 < 2 )
      {
        if ( !v29 )
          goto LABEL_26;
        v31 = (__int64 *)*((_QWORD *)Token + 19);
        v36 = 0LL;
        goto LABEL_25;
      }
      v31 = (__int64 *)*((_QWORD *)Token + 19);
      v32 = v31;
      v33 = ((v29 - 2) >> 1) + 1;
      v34 = v33;
      v35 = 2 * v33;
      v36 = 2LL * v33;
      do
      {
        v37 = *v32;
        v32 += 4;
        v26 += (4 * *(unsigned __int8 *)(v37 + 1) + 15) & 0xFFFFFFF8;
        v27 += (4 * *(unsigned __int8 *)(*(v32 - 2) + 1) + 15) & 0xFFFFFFF8;
        --v34;
      }
      while ( v34 );
      if ( v35 < v29 )
LABEL_25:
        v30 = v139 + ((4 * *(unsigned __int8 *)(v31[2 * v36] + 1) + 15) & 0xFFFFFFF8);
LABEL_26:
      v38 = *((_DWORD *)Token + 32);
      v39 = v27 + v26 + v30;
      v40 = 16 * v38;
      v41 = 0;
      v42 = 0;
      v43 = 16 * v38;
      if ( v38 < 2 )
      {
        if ( v38 )
        {
          v48 = (_QWORD *)*((_QWORD *)Token + 20);
          v46 = 0LL;
          goto LABEL_31;
        }
      }
      else
      {
        RemainingSidArea = (PSID)*((_QWORD *)Token + 20);
        v44 = (__int64 *)RemainingSidArea;
        v45 = ((v38 - 2) >> 1) + 1;
        v141 = 2 * v45;
        v46 = 2 * v45;
        do
        {
          v47 = *v44;
          v44 += 4;
          v41 += (4 * *(unsigned __int8 *)(v47 + 1) + 15) & 0xFFFFFFF8;
          v42 += (4 * *(unsigned __int8 *)(*(v44 - 2) + 1) + 15) & 0xFFFFFFF8;
          --v45;
        }
        while ( v45 );
        if ( v141 < v38 )
        {
          v48 = RemainingSidArea;
LABEL_31:
          v43 = v40 + ((4 * *(unsigned __int8 *)(v48[2 * v46] + 1LL) + 15) & 0xFFFFFFF8);
        }
      }
      v49 = v42 + v41 + v43;
      v50 = (char *)ExAllocatePoolWithTag(PagedPool, v49 + (unsigned int)v39 + (_DWORD)NumberOfBytes + 56, 0x20206553u);
      v51 = v50;
      if ( v50 )
      {
        v52 = v50 + 56;
        *((_QWORD *)v50 + 6) = *((_QWORD *)Token + 3);
        *((_DWORD *)v50 + 1) = v39;
        *(_DWORD *)v50 = *((_DWORD *)Token + 31);
        *((_QWORD *)v50 + 1) = v50 + 56;
        *((_DWORD *)v50 + 5) = v49;
        *((_DWORD *)v50 + 4) = *((_DWORD *)Token + 32);
        if ( *((_DWORD *)Token + 32) )
          v3 = &v52[(v39 + 7) & 0xFFFFFFFFFFFFFFF8uLL];
        *((_QWORD *)v50 + 3) = v3;
        *((_DWORD *)v50 + 9) = NumberOfBytes;
        *((_DWORD *)v50 + 8) = v127;
        v53 = &v52[(unsigned int)v39 + (unsigned __int64)v49];
        v54 = (unsigned int)v139;
        v55 = v39 - v139;
        *((_QWORD *)v51 + 5) = v53;
        RtlCopySidAndAttributesArray(
          *((_DWORD *)Token + 31),
          *((PSID_AND_ATTRIBUTES *)Token + 19),
          v55,
          (PSID_AND_ATTRIBUTES)(v51 + 56),
          &v51[v54 + 56],
          &RemainingSidArea,
          (PULONG)&RemainingSidArea);
        if ( *((_DWORD *)v51 + 4) )
          RtlCopySidAndAttributesArray(
            *((_DWORD *)Token + 32),
            *((PSID_AND_ATTRIBUTES *)Token + 20),
            v49 - v40,
            *((PSID_AND_ATTRIBUTES *)v51 + 3),
            (PSID)(*((_QWORD *)v51 + 3) + v40),
            &RemainingSidArea,
            (PULONG)&RemainingSidArea);
        SepConvertTokenPrivilegesToLuidAndAttributes(Token, *((_QWORD *)v51 + 5));
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        KeLeaveCriticalRegion();
        result = 0;
        *TokenInformation = v51;
      }
      else
      {
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        KeLeaveCriticalRegion();
        return -1073741670;
      }
      return result;
    case TokenElevationType:
      v79 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x20206553u);
      if ( !v79 )
        return -1073741670;
      v80 = *(_DWORD *)(*((_QWORD *)Token + 27) + 32LL);
      if ( (v80 & 4) != 0 )
      {
        *v79 = 3;
      }
      else
      {
        LOBYTE(v3) = (v80 & 2) != 0;
        *v79 = (_DWORD)v3 + 1;
      }
      *TokenInformation = v79;
      return 0;
    case TokenElevation:
      v81 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x20206553u);
      if ( !v81 )
        return -1073741670;
      v82 = KeGetCurrentThread();
      --v82->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v83 = *((_DWORD *)Token + 31);
      v84 = (*((_QWORD *)Token + 8) & 0x1120160684LL) != 0;
      if ( v83 )
      {
        do
        {
          if ( v84 )
            break;
          IsElevatedRid = RtlIsElevatedRid((PSID_AND_ATTRIBUTES)(*((_QWORD *)Token + 19) + 16LL * (unsigned int)v3));
          LODWORD(v3) = (_DWORD)v3 + 1;
          v84 = IsElevatedRid;
        }
        while ( (unsigned int)v3 < v83 );
      }
      ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
      KeLeaveCriticalRegion();
      *v81 = v84;
      result = 0;
      *TokenInformation = v81;
      return result;
    case TokenHasRestrictions:
    case TokenVirtualizationAllowed:
    case TokenUIAccess:
    case TokenIsAppContainer:
    case TokenPrivateNameSpace:
      goto LABEL_136;
    case TokenAccessInformation:
      v56 = KeGetCurrentThread();
      v134 = 0;
      v133 = 0;
      v132 = 0;
      --v56->KernelApcDisable;
      v131 = 0;
      v130 = 0;
      v129 = 0;
      v128 = 0;
      v141 = 0;
      v139 = 0;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      TokenAccessInformationBufferSize = SepGetTokenAccessInformationBufferSize(
                                           (__int64)Token,
                                           0,
                                           0LL,
                                           &v127,
                                           &v134,
                                           &v133,
                                           &v132,
                                           &v131,
                                           (unsigned int *)&v130,
                                           &v129,
                                           &v128,
                                           (unsigned int *)&v141,
                                           &v139);
      v58 = (char *)ExAllocatePoolWithTag(PagedPool, TokenAccessInformationBufferSize, 0x20206553u);
      v59 = v58;
      if ( !v58 )
        goto LABEL_4;
      SepCopyTokenAccessInformation(
        (__int64)Token,
        (__int64)v58,
        TokenAccessInformationBufferSize,
        v127,
        v134,
        v133,
        v132,
        v131,
        v130,
        v129,
        v128,
        v141,
        v139,
        0,
        0LL);
      goto LABEL_43;
    case TokenIntegrityLevel:
      v67 = KeGetCurrentThread();
      *(_OWORD *)Sid = 0LL;
      --v67->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      SepCopyTokenIntegrity((__int64)Token);
      v68 = *RtlSubAuthorityCountSid(Sid[0]);
      if ( (_BYTE)v68 )
        LODWORD(v3) = *RtlSubAuthoritySid(Sid[0], v68 - 1);
      *(_DWORD *)TokenInformation = (_DWORD)v3;
      ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
      KeLeaveCriticalRegion();
      return 0;
    case TokenCapabilities:
      v93 = KeGetCurrentThread();
      --v93->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v94 = *((_DWORD *)Token + 200);
      v95 = 16 * v94 + 24;
      v96 = v95;
      if ( v94 )
      {
        v97 = (__int64 *)*((_QWORD *)Token + 99);
        v98 = v94;
        do
        {
          v99 = *v97;
          v97 += 2;
          v95 += 4 * *(unsigned __int8 *)(v99 + 1) + 8;
          v96 = v95;
          --v98;
        }
        while ( v98 );
      }
      v100 = (char *)ExAllocatePoolWithTag(PagedPool, v96, 0x20206553u);
      v59 = v100;
      if ( !v100 )
        goto LABEL_4;
      *(_DWORD *)v100 = *((_DWORD *)Token + 200);
      RtlCopySidAndAttributesArray(
        *((_DWORD *)Token + 200),
        *((PSID_AND_ATTRIBUTES *)Token + 99),
        v95,
        (PSID_AND_ATTRIBUTES)(v100 + 8),
        &v100[16 * *((_DWORD *)Token + 200) + 24],
        &RemainingSidArea,
        (PULONG)&RemainingSidArea);
      goto LABEL_43;
    case TokenAppContainerSid:
      v63 = KeGetCurrentThread();
      --v63->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v64 = (char *)*((_QWORD *)Token + 98);
      if ( v64 )
        v65 = 4 * (unsigned __int8)v64[1] + 16;
      else
        v65 = 8;
      v66 = (char *)ExAllocatePoolWithTag(PagedPool, v65, 0x20206553u);
      v59 = v66;
      if ( !v66 )
        goto LABEL_4;
      if ( v64 )
      {
        v64 = v66 + 8;
        RtlCopySid(v65 - 8, v66 + 8, *((PSID *)Token + 98));
      }
      goto LABEL_52;
    case TokenAppContainerNumber:
      v91 = KeGetCurrentThread();
      --v91->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v92 = *((_QWORD *)Token + 135);
      if ( v92 )
        LODWORD(v3) = *(_DWORD *)(v92 + 40);
      ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
      KeLeaveCriticalRegion();
      result = 0;
      *(_DWORD *)TokenInformation = (_DWORD)v3;
      return result;
    case TokenUserClaimAttributes:
    case TokenDeviceClaimAttributes:
      *TokenInformation = 0LL;
      v101 = KeGetCurrentThread();
      --v101->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v102 = *((_QWORD *)Token + 137);
      if ( v102
        && ((v103 = *(__int128 **)(v102 + 576)) != 0LL || TokenInformationClass != TokenUserClaimAttributes)
        && ((v104 = *(__int128 **)(v102 + 584)) != 0LL || TokenInformationClass != TokenDeviceClaimAttributes) )
      {
        if ( TokenInformationClass == TokenUserClaimAttributes )
          v104 = v103;
        AuthzBasepQueryClaimAttributesToken(v104, 0LL, 0, &NumberOfBytes);
        v105 = NumberOfBytes;
      }
      else
      {
        DWORD2(v136) = 0;
        *(_QWORD *)&v136 = (char *)&v135 + 8;
        v104 = &v135;
        v105 = 16;
        *((_QWORD *)&v135 + 1) = (char *)&v135 + 8;
        *((_QWORD *)&v137 + 1) = &v137;
        *(_QWORD *)&v137 = &v137;
      }
      v106 = ExAllocatePoolWithTag(PagedPool, v105, 0x20206553u);
      v107 = v106;
      if ( !v106 )
        goto LABEL_4;
      v108 = AuthzBasepQueryClaimAttributesToken(v104, v106, v105, &NumberOfBytes);
      ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
      KeLeaveCriticalRegion();
      if ( v108 >= 0 )
        *TokenInformation = v107;
      else
        ExFreePoolWithTag(v107, 0);
      return v108;
    case TokenDeviceGroups:
      v109 = KeGetCurrentThread();
      --v109->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v110 = (unsigned int *)*((_QWORD *)Token + 137);
      if ( v110 && (v111 = *v110) != 0 )
      {
        v112 = 16 * v111 + 8;
      }
      else
      {
        v111 = 0;
        v112 = 24;
      }
      v113 = v112;
      if ( v111 )
      {
        v114 = (__int64 *)*((_QWORD *)v110 + 1);
        v115 = v111;
        do
        {
          v116 = *v114;
          v114 += 2;
          v112 += 4 * *(unsigned __int8 *)(v116 + 1) + 8;
          v113 = v112;
          --v115;
        }
        while ( v115 );
      }
      v59 = (char *)ExAllocatePoolWithTag(PagedPool, v113, 0x20206553u);
      if ( !v59 )
        goto LABEL_4;
      *(_OWORD *)v59 = 0LL;
      *((_QWORD *)v59 + 2) = 0LL;
      *(_DWORD *)v59 = v111;
      if ( v111 )
        RtlCopySidAndAttributesArray(
          **((_DWORD **)Token + 137),
          *(PSID_AND_ATTRIBUTES *)(*((_QWORD *)Token + 137) + 8LL),
          v112,
          (PSID_AND_ATTRIBUTES)(v59 + 8),
          &v59[16 * v111 + 8],
          &RemainingSidArea,
          (PULONG)&RemainingSidArea);
      goto LABEL_43;
    case TokenProcessTrustLevel:
      v117 = KeGetCurrentThread();
      --v117->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v64 = (char *)*((_QWORD *)Token + 138);
      if ( v64 )
        v118 = 4 * (unsigned __int8)v64[1] + 16;
      else
        v118 = 8;
      v119 = (char *)ExAllocatePoolWithTag(PagedPool, v118, 0x20206553u);
      v59 = v119;
      if ( !v119 )
        goto LABEL_4;
      if ( v64 )
      {
        v120 = v119 + 8;
        RtlCopySid(v118 - 8, v119 + 8, *((PSID *)Token + 138));
        *(_QWORD *)v59 = v120;
      }
      else
      {
LABEL_52:
        *(_QWORD *)v59 = v64;
      }
      goto LABEL_43;
    case TokenBnoIsolation:
      v121 = KeGetCurrentThread();
      --v121->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v122 = *((_QWORD *)Token + 144);
      v123 = 16LL;
      if ( v122 )
        v123 = *(unsigned __int16 *)(v122 + 42) + 16LL;
      v75 = (char *)ExAllocatePoolWithTag(PagedPool, v123, 0x20206553u);
      v59 = v75;
      if ( v75 )
      {
        if ( *((_QWORD *)Token + 144) )
        {
          v75[8] = 1;
          *(_QWORD *)v75 = v75 + 16;
          memmove(
            v75 + 16,
            *(const void **)(*((_QWORD *)Token + 144) + 48LL),
            *(unsigned __int16 *)(*((_QWORD *)Token + 144) + 42LL));
        }
        else
        {
          v75[8] = 0;
LABEL_131:
          *(_QWORD *)v75 = 0LL;
        }
LABEL_43:
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        KeLeaveCriticalRegion();
        result = 0;
        *TokenInformation = v59;
      }
      else
      {
LABEL_4:
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        KeLeaveCriticalRegion();
        return -1073741670;
      }
      return result;
    case TokenIsLessPrivilegedAppContainer:
      if ( (*((_DWORD *)Token + 50) & 0x4000) == 0 || (v124 = 1, SepCanTokenMatchAllPackageSid((__int64)Token)) )
        v124 = 0;
      *(_DWORD *)TokenInformation = v124;
      return 0;
    case TokenIsAppSilo:
      Feature_PPLEnforcement__private_ReportDeviceUsage();
      return -1073741821;
    default:
      return -1073741821;
  }
}
