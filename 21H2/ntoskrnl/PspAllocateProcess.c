/*
 * XREFs of PspAllocateProcess @ 0x1406D6638
 * Callers:
 *     NtCreateUserProcess @ 0x14060A1D0 (NtCreateUserProcess.c)
 *     PsCreateMinimalProcess @ 0x1407C6284 (PsCreateMinimalProcess.c)
 *     PspCreateProcess @ 0x1407CE460 (PspCreateProcess.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402056A0 (ObfReferenceObjectWithTag.c)
 *     PoEnergyEstimationEnabled @ 0x140205710 (PoEnergyEstimationEnabled.c)
 *     KeUnstackDetachProcess @ 0x1402075C0 (KeUnstackDetachProcess.c)
 *     PsIsProtectedProcess @ 0x140250290 (PsIsProtectedProcess.c)
 *     PsIsSystemProcess @ 0x14025C0F0 (PsIsSystemProcess.c)
 *     KeStackAttachProcess @ 0x14025C110 (KeStackAttachProcess.c)
 *     KeQueryAffinityProcess @ 0x14025C840 (KeQueryAffinityProcess.c)
 *     PsGetProcessServerSilo @ 0x14025CA80 (PsGetProcessServerSilo.c)
 *     KeQuerySystemTimeUnsafe @ 0x140278EC8 (KeQuerySystemTimeUnsafe.c)
 *     ExInitializePushLock @ 0x140278EE0 (ExInitializePushLock.c)
 *     KeQueryMaximumGroupCount @ 0x140278EF0 (KeQueryMaximumGroupCount.c)
 *     KeQuerySystemTimePrecise @ 0x140278F00 (KeQuerySystemTimePrecise.c)
 *     RtlWow64GetEquivalentMachineCHPE @ 0x14027B5F0 (RtlWow64GetEquivalentMachineCHPE.c)
 *     ExReleaseRundownProtection_0 @ 0x14027C4F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14027C9B0 (ExAcquireRundownProtection_0.c)
 *     PsReferencePartitionSafe @ 0x1402AC004 (PsReferencePartitionSafe.c)
 *     PsIsProtectedProcessLight @ 0x1402BB580 (PsIsProtectedProcessLight.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     KeFirstGroupAffinityEx @ 0x1402C2670 (KeFirstGroupAffinityEx.c)
 *     PspUnlockProcessExclusive @ 0x1402CB978 (PspUnlockProcessExclusive.c)
 *     PspWow64PickBestNtdll @ 0x1402CE2E4 (PspWow64PickBestNtdll.c)
 *     MmGetDefaultPagePriority @ 0x1402D47AC (MmGetDefaultPagePriority.c)
 *     KeQueryActiveGroupCount @ 0x1402E2F50 (KeQueryActiveGroupCount.c)
 *     KeQueryUnbiasedInterruptTime @ 0x1402E9880 (KeQueryUnbiasedInterruptTime.c)
 *     PspLockProcessExclusive @ 0x1402E98B0 (PspLockProcessExclusive.c)
 *     KeIsUserCetAllowed @ 0x1402E98D8 (KeIsUserCetAllowed.c)
 *     KeSelectNodeForAffinity @ 0x1402ECD60 (KeSelectNodeForAffinity.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     ObfDereferenceObjectWithTag @ 0x14034B140 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObject @ 0x14034B230 (ObfReferenceObject.c)
 *     PsIsHostSilo @ 0x140354A80 (PsIsHostSilo.c)
 *     KeSetCpuSetsProcess @ 0x1403C5FB4 (KeSetCpuSetsProcess.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     ZwOpenKey @ 0x1403FA5E0 (ZwOpenKey.c)
 *     memmove @ 0x140413F40 (memmove.c)
 *     memset @ 0x140414200 (memset.c)
 *     KeSecureProcess @ 0x140513A40 (KeSecureProcess.c)
 *     PspInitializeProcessLock @ 0x140580D80 (PspInitializeProcessLock.c)
 *     PsReferencePartition @ 0x1405842F8 (PsReferencePartition.c)
 *     PspApplyComponentFilterOptions @ 0x1405CF994 (PspApplyComponentFilterOptions.c)
 *     SeDeleteCodeIntegrityOriginClaimMembers @ 0x1405D0028 (SeDeleteCodeIntegrityOriginClaimMembers.c)
 *     SeGetCodeIntegrityOriginClaimForFileObject @ 0x1405D004C (SeGetCodeIntegrityOriginClaimForFileObject.c)
 *     PsQueryProcessAttributes @ 0x140600F24 (PsQueryProcessAttributes.c)
 *     PspRundownSingleProcess @ 0x140604738 (PspRundownSingleProcess.c)
 *     ObInitProcess @ 0x140607644 (ObInitProcess.c)
 *     PspUpdateCreateInfo @ 0x14060CB24 (PspUpdateCreateInfo.c)
 *     PspSetupUserProcessAddressSpace @ 0x14061177C (PspSetupUserProcessAddressSpace.c)
 *     PspPrepareSystemDllInitBlock @ 0x1406119C8 (PspPrepareSystemDllInitBlock.c)
 *     PsWow64GetProcessNtdllType @ 0x140611C4C (PsWow64GetProcessNtdllType.c)
 *     PspMapSiloSharedDataView @ 0x140611C68 (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x140611CA0 (MmMapApiSetView.c)
 *     MmCreatePeb @ 0x140611D98 (MmCreatePeb.c)
 *     PspWritePebAffinityInfo @ 0x140612654 (PspWritePebAffinityInfo.c)
 *     ObCloseHandle @ 0x14061AB80 (ObCloseHandle.c)
 *     MmSecureVirtualMemory @ 0x14061FD90 (MmSecureVirtualMemory.c)
 *     MmGetSectionInformation @ 0x140620F30 (MmGetSectionInformation.c)
 *     SeSinglePrivilegeCheck @ 0x140627640 (SeSinglePrivilegeCheck.c)
 *     PsWow64GetProcessMachine @ 0x140648700 (PsWow64GetProcessMachine.c)
 *     PsWow64IsMachineSupported @ 0x14064E890 (PsWow64IsMachineSupported.c)
 *     SeQueryInformationToken @ 0x140656BD0 (SeQueryInformationToken.c)
 *     PspAttachSession @ 0x1406835F8 (PspAttachSession.c)
 *     PspDetachSession @ 0x140683654 (PspDetachSession.c)
 *     SeQuerySessionIdToken @ 0x140692F80 (SeQuerySessionIdToken.c)
 *     PspAssignProcessQuotaBlock @ 0x1406AD8B4 (PspAssignProcessQuotaBlock.c)
 *     PspDetectComplusILImage @ 0x1406AEBE4 (PspDetectComplusILImage.c)
 *     PspReadIFEONodeOptions @ 0x1406AECB8 (PspReadIFEONodeOptions.c)
 *     PspReadIFEOPerfOptions @ 0x1406AED10 (PspReadIFEOPerfOptions.c)
 *     RtlQueryImageFileKeyOption @ 0x1406AEF00 (RtlQueryImageFileKeyOption.c)
 *     RtlAcquirePrivilege @ 0x1406B118C (RtlAcquirePrivilege.c)
 *     PspSelectNodeForProcess @ 0x1406B24D8 (PspSelectNodeForProcess.c)
 *     PspSetProcessPriorityClass @ 0x1406B3F80 (PspSetProcessPriorityClass.c)
 *     PoEnergyContextInitialize @ 0x1406B47BC (PoEnergyContextInitialize.c)
 *     PspSetupReservedUserMappings @ 0x1406B599C (PspSetupReservedUserMappings.c)
 *     PspHardenMitigationOptions @ 0x1406B7E5C (PspHardenMitigationOptions.c)
 *     PspInheritQuota @ 0x1406B8EE0 (PspInheritQuota.c)
 *     PspApplyWin32kFilterOptions @ 0x1406BA47C (PspApplyWin32kFilterOptions.c)
 *     RtlOpenImageFileOptionsKey @ 0x1406BA4E0 (RtlOpenImageFileOptionsKey.c)
 *     RtlReleasePrivilege @ 0x1406BABEC (RtlReleasePrivilege.c)
 *     PspApplyIFEOPerfOptions @ 0x1406BEDD4 (PspApplyIFEOPerfOptions.c)
 *     MmCreateProcessAddressSpace @ 0x1406D04E4 (MmCreateProcessAddressSpace.c)
 *     ObCreateObject @ 0x1406D4AE0 (ObCreateObject.c)
 *     LpcInitializeProcess @ 0x1406D6260 (LpcInitializeProcess.c)
 *     MmGetSessionSchedulingGroupByProcess @ 0x1406D6290 (MmGetSessionSchedulingGroupByProcess.c)
 *     KeInitializeProcess @ 0x1406D62BC (KeInitializeProcess.c)
 *     PspInitializeProcessSecurity @ 0x1406D6400 (PspInitializeProcessSecurity.c)
 *     PspApplyMitigationOptions @ 0x1406D8A1C (PspApplyMitigationOptions.c)
 *     PspInheritMitigationOptions @ 0x1406D9554 (PspInheritMitigationOptions.c)
 *     MmNewProcessInitialized @ 0x1406D9630 (MmNewProcessInitialized.c)
 *     SmProcessCreateNotification @ 0x1406D967C (SmProcessCreateNotification.c)
 *     PspInheritMitigationAuditOptions @ 0x1406D96CC (PspInheritMitigationAuditOptions.c)
 *     PspReadIFEOMitigationOptions @ 0x1406D97B4 (PspReadIFEOMitigationOptions.c)
 *     PspReadIFEOMitigationAuditOptions @ 0x1406D983C (PspReadIFEOMitigationAuditOptions.c)
 *     PspComputeQuantumAndPriority @ 0x1406D9A54 (PspComputeQuantumAndPriority.c)
 *     MmInitializeProcessAddressSpace @ 0x1407114D4 (MmInitializeProcessAddressSpace.c)
 *     SeIsTokenAssignableToProcess @ 0x14071694C (SeIsTokenAssignableToProcess.c)
 *     PspInitializeFullProcessImageName @ 0x140718754 (PspInitializeFullProcessImageName.c)
 *     MmIsSessionLeaderProcess @ 0x140781940 (MmIsSessionLeaderProcess.c)
 *     MmInitializeHandBuiltProcess @ 0x1407CF004 (MmInitializeHandBuiltProcess.c)
 *     MmInitializeHandBuiltProcess2 @ 0x1407D0EC4 (MmInitializeHandBuiltProcess2.c)
 *     MmGetImageSectionBasedAddress @ 0x1408C4550 (MmGetImageSectionBasedAddress.c)
 *     MmGetSectionStrongImageReference @ 0x1408D7F28 (MmGetSectionStrongImageReference.c)
 *     PspSetProcessAffinitySafe @ 0x1409085C4 (PspSetProcessAffinitySafe.c)
 *     ExCreateHandle @ 0x14094C630 (ExCreateHandle.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PspAllocateProcess(
        __int64 a1,
        char a2,
        volatile signed __int32 *a3,
        char a4,
        char a5,
        char a6,
        void *a7,
        void *a8,
        int a9,
        char a10,
        __int64 a11,
        int a12,
        PVOID a13,
        __int64 a14,
        _QWORD *a15)
{
  int v16; // r15d
  __int64 v18; // r13
  unsigned int v19; // ebx
  __int64 result; // rax
  unsigned int v21; // r14d
  int MaximumGroupCount; // eax
  int v23; // ecx
  unsigned int v24; // r12d
  char *v25; // r15
  char *v26; // rcx
  char v27; // al
  int v28; // r12d
  int v29; // r8d
  __int64 Flink; // rcx
  char *v31; // rcx
  int v32; // eax
  PEPROCESS v33; // r14
  int v34; // edx
  int DefaultPagePriority; // r8d
  __int64 v36; // r8
  int v37; // r9d
  int SectionInformation; // r14d
  void *v39; // rax
  unsigned __int64 v40; // rax
  PVOID v41; // rcx
  char v42; // r8
  int v43; // ebx
  __int16 v44; // cx
  int v45; // eax
  __int16 EquivalentMachineCHPE; // ax
  unsigned __int16 v47; // di
  int v48; // ecx
  HANDLE *v49; // r12
  int v50; // eax
  int v51; // r14d
  NTSTATUS v52; // eax
  unsigned int v53; // edi
  PVOID PoolWithTag; // rax
  int v55; // r12d
  _WORD *v56; // r10
  int v57; // eax
  __int16 v58; // r11
  _QWORD *v59; // rax
  unsigned int v60; // edi
  KPROCESSOR_MODE v61; // al
  __int16 v62; // r14
  bool v63; // sf
  unsigned __int16 v64; // di
  volatile signed __int32 *v65; // rdi
  PEPROCESS v66; // r12
  ULONG v67; // r14d
  char v68; // r12
  int v69; // edi
  int v70; // eax
  __int64 v71; // rdx
  PEPROCESS v72; // rdx
  unsigned __int64 v73; // r8
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 SessionSchedulingGroupByProcess; // rax
  __int64 v79; // rcx
  char v80; // r8
  _DWORD *v81; // r14
  _DWORD *v82; // rcx
  __int64 v83; // rax
  char v84; // al
  _BYTE *v85; // r9
  unsigned int v86; // r8d
  int inited; // eax
  __int64 v88; // r9
  int v89; // edi
  __int16 v90; // r11
  int v91; // r11d
  unsigned int v92; // edi
  unsigned __int64 v93; // rax
  __int64 ProcessServerSilo; // rax
  PEPROCESS v95; // r12
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // rdx
  int v99; // edi
  __int64 v100; // rdi
  PVOID v101; // rax
  PVOID v102; // r12
  int v103; // eax
  __int64 ImageSectionBasedAddress; // rax
  __int64 v105; // rcx
  _DWORD *v106; // r9
  bool IsProtectedProcess; // di
  bool IsProtectedProcessLight; // al
  char v109; // di
  PEPROCESS v110; // rcx
  __int64 v111; // rax
  __int16 v112; // cx
  struct _KTHREAD *v113; // rdi
  __int64 v114; // rax
  __int64 v115; // r8
  _DWORD *v116; // r9
  __int64 v117; // r8
  unsigned int ProcessNtdllType; // eax
  __int64 v119; // r8
  __int64 v120; // rcx
  __int64 v121; // rdx
  __int64 v122; // r8
  __int64 v123; // r9
  ULONGLONG UnbiasedInterruptTime; // rax
  _QWORD *v125; // rcx
  int v126[2]; // [rsp+20h] [rbp-748h]
  int v128; // [rsp+78h] [rbp-6F0h]
  char v129; // [rsp+7Ch] [rbp-6ECh] BYREF
  char v130; // [rsp+7Dh] [rbp-6EBh] BYREF
  char v131[2]; // [rsp+7Eh] [rbp-6EAh] BYREF
  PEPROCESS Process; // [rsp+80h] [rbp-6E8h]
  ULONG NumberOfBytes; // [rsp+88h] [rbp-6E0h] BYREF
  unsigned int NumberOfBytes_4; // [rsp+8Ch] [rbp-6DCh]
  int v135; // [rsp+90h] [rbp-6D8h]
  int v136; // [rsp+94h] [rbp-6D4h]
  ULONG v137; // [rsp+98h] [rbp-6D0h] BYREF
  ULONG v138; // [rsp+9Ch] [rbp-6CCh] BYREF
  int v139; // [rsp+A0h] [rbp-6C8h]
  ULONG v140; // [rsp+A4h] [rbp-6C4h]
  __int64 v141; // [rsp+A8h] [rbp-6C0h]
  PVOID Object; // [rsp+B0h] [rbp-6B8h]
  volatile signed __int32 *v143; // [rsp+B8h] [rbp-6B0h]
  int v144; // [rsp+C0h] [rbp-6A8h]
  PVOID TokenInformation; // [rsp+C4h] [rbp-6A4h] BYREF
  ULONG SessionId; // [rsp+CCh] [rbp-69Ch] BYREF
  int v147; // [rsp+D0h] [rbp-698h]
  int v148; // [rsp+D4h] [rbp-694h]
  int v149; // [rsp+D8h] [rbp-690h]
  _KPROCESS *v150; // [rsp+E0h] [rbp-688h]
  PVOID v151; // [rsp+E8h] [rbp-680h]
  PVOID v152; // [rsp+F0h] [rbp-678h]
  __int64 v153; // [rsp+F8h] [rbp-670h]
  ULONG v154; // [rsp+100h] [rbp-668h] BYREF
  int v155; // [rsp+104h] [rbp-664h]
  int v156; // [rsp+108h] [rbp-660h]
  int v157; // [rsp+10Ch] [rbp-65Ch]
  PVOID Address; // [rsp+110h] [rbp-658h]
  __int64 v159; // [rsp+118h] [rbp-650h]
  PACCESS_TOKEN Token; // [rsp+120h] [rbp-648h]
  __int128 v161; // [rsp+128h] [rbp-640h] BYREF
  unsigned __int64 v162; // [rsp+138h] [rbp-630h]
  struct _KTHREAD *CurrentThread; // [rsp+140h] [rbp-628h]
  int v164; // [rsp+148h] [rbp-620h] BYREF
  HANDLE Handle; // [rsp+150h] [rbp-618h] BYREF
  __int64 v166; // [rsp+158h] [rbp-610h]
  PVOID v167; // [rsp+160h] [rbp-608h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+168h] [rbp-600h] BYREF
  PVOID v169; // [rsp+170h] [rbp-5F8h] BYREF
  PVOID P; // [rsp+178h] [rbp-5F0h]
  unsigned __int64 *v171; // [rsp+180h] [rbp-5E8h]
  HANDLE KeyHandle; // [rsp+188h] [rbp-5E0h] BYREF
  __int128 v173; // [rsp+190h] [rbp-5D8h] BYREF
  __int64 v174; // [rsp+1A0h] [rbp-5C8h]
  __int64 v175; // [rsp+1A8h] [rbp-5C0h]
  __int64 v176; // [rsp+1B0h] [rbp-5B8h]
  __int64 v177[2]; // [rsp+1C0h] [rbp-5A8h] BYREF
  __int64 v178; // [rsp+1D0h] [rbp-598h]
  _QWORD *v179; // [rsp+1D8h] [rbp-590h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+1E0h] [rbp-588h] BYREF
  OBJECT_ATTRIBUTES v181; // [rsp+210h] [rbp-558h] BYREF
  __int128 v182; // [rsp+240h] [rbp-528h] BYREF
  __int64 v183; // [rsp+250h] [rbp-518h]
  __m128i v184; // [rsp+260h] [rbp-508h] BYREF
  __int64 v185; // [rsp+270h] [rbp-4F8h]
  __int128 v186; // [rsp+280h] [rbp-4E8h] BYREF
  __int64 v187; // [rsp+290h] [rbp-4D8h]
  __int128 v188; // [rsp+2A0h] [rbp-4C8h] BYREF
  __int64 v189; // [rsp+2B0h] [rbp-4B8h]
  __int128 v190; // [rsp+2C0h] [rbp-4A8h] BYREF
  __int64 v191; // [rsp+2D0h] [rbp-498h]
  __int128 v192; // [rsp+2E0h] [rbp-488h] BYREF
  __int64 v193; // [rsp+2F0h] [rbp-478h]
  __m128i v194; // [rsp+300h] [rbp-468h] BYREF
  __int64 v195; // [rsp+310h] [rbp-458h]
  __int128 v196; // [rsp+320h] [rbp-448h] BYREF
  __int64 v197; // [rsp+330h] [rbp-438h]
  _DWORD v198[20]; // [rsp+340h] [rbp-428h] BYREF
  __m128i v199; // [rsp+390h] [rbp-3D8h] BYREF
  __int64 v200; // [rsp+3A0h] [rbp-3C8h]
  __int128 v201; // [rsp+3A8h] [rbp-3C0h] BYREF
  __int64 v202; // [rsp+3B8h] [rbp-3B0h]
  struct _KAPC_STATE ApcState; // [rsp+3C0h] [rbp-3A8h] BYREF
  __int128 v204; // [rsp+3F0h] [rbp-378h] BYREF
  __int128 v205; // [rsp+400h] [rbp-368h]
  _OWORD v206[11]; // [rsp+410h] [rbp-358h] BYREF
  _DWORD v207[136]; // [rsp+4C0h] [rbp-2A8h] BYREF
  unsigned int v208[6]; // [rsp+6E0h] [rbp-88h] BYREF
  _WORD v209[20]; // [rsp+6F8h] [rbp-70h] BYREF

  v16 = (int)a3;
  v143 = a3;
  Process = (PEPROCESS)a1;
  v175 = a1;
  v151 = a7;
  Token = a8;
  v18 = a11;
  v176 = a11;
  v167 = a13;
  v178 = a14;
  v179 = a15;
  v164 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v161 = 0LL;
  KeyHandle = 0LL;
  memset(v206, 0, 0xA8uLL);
  v19 = 0;
  v199 = 0LL;
  v200 = 0LL;
  v201 = 0LL;
  v202 = 0LL;
  v131[0] = 0;
  memset(&v181, 0, sizeof(v181));
  Handle = 0LL;
  Object = 0LL;
  v130 = 0;
  LOWORD(v137) = 0;
  NumberOfBytes = 0;
  memset(v198, 0, 0x48uLL);
  TokenInformation = 0LL;
  v177[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  v150 = CurrentThread->ApcState.Process;
  v166 = 0LL;
  v141 = 0LL;
  P = 0LL;
  v140 = 0;
  v155 = 0;
  v136 = 0;
  v152 = 0LL;
  v149 = 0;
  v148 = 0;
  LOWORD(v135) = 0;
  v139 = 0;
  v157 = 0;
  v144 = 0;
  Address = 0LL;
  v156 = 0;
  v174 = 0LL;
  memset(v207, 0, 0x218uLL);
  v128 = a9;
  if ( (a9 & 0x800) != 0 )
  {
    v19 = 1024;
    if ( (a9 & 0x2000) != 0 )
    {
      v19 = 66560;
      if ( (a9 & 0x4000) != 0 )
        v19 = 197632;
    }
  }
  v159 = a1 & -(__int64)((a9 & 0x100) != 0);
  if ( a11 && (*(_DWORD *)(a11 + 4) & 0x2000) != 0 )
  {
    if ( (a1 & -(__int64)((a9 & 0x100) != 0)) != 0 )
      return 3221225520LL;
    v166 = KeNodeBlock[*(unsigned __int16 *)(a11 + 250)];
    v141 = v166;
    v159 = 0LL;
  }
  else if ( a1 )
  {
    v159 = a1 & -(__int64)((a9 & 0x100) != 0);
    if ( (*(_DWORD *)(a1 + 1120) & 0x200000) != 0 )
    {
      v159 = a1;
      v136 = 0x200000;
    }
  }
  if ( a11 && (*(_DWORD *)(a11 + 4) & 0x40000) != 0 )
    v19 |= 0x1000u;
  v204 = 0LL;
  v205 = 0LL;
  v169 = 0LL;
  v21 = 2624;
  NumberOfBytes_4 = 0;
  v153 = 0LL;
  if ( !PsDisableDiskCounters )
  {
    v21 = 2664;
    v19 |= 0x200u;
    v153 = 2624LL;
  }
  if ( PoEnergyEstimationEnabled() )
  {
    NumberOfBytes_4 = (v21 + 7) & 0xFFFFFFF8;
    v21 = NumberOfBytes_4 + 480;
    v19 |= 0x2000u;
    v16 = (int)v143;
  }
  MaximumGroupCount = KeQueryMaximumGroupCount();
  LODWORD(v143) = MaximumGroupCount;
  v24 = 0;
  if ( (unsigned __int16)MaximumGroupCount > 1u )
  {
    v24 = (v21 + 7) & 0xFFFFFFF8;
    v21 = 16 * (unsigned __int16)MaximumGroupCount + v24;
  }
  *(_QWORD *)v126 = 0LL;
  LOBYTE(v23) = a2;
  result = ObCreateObject(v23, (int)PsProcessType, v16, a2);
  if ( (int)result >= 0 )
  {
    v25 = (char *)Object;
    ObfReferenceObjectWithTag(Object, 0x72437350u);
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
    memset(Object, 0, v21);
    LpcInitializeProcess(Object);
    ExInitializePushLock((PKSPIN_LOCK)Object + 139);
    PspInitializeProcessLock((__int64)Object);
    *((_QWORD *)Object + 189) = (char *)Object + 1504;
    *((_QWORD *)v25 + 188) = v25 + 1504;
    *((_QWORD *)v25 + 277) = v25 + 2208;
    *((_QWORD *)v25 + 276) = v25 + 2208;
    *((_QWORD *)v25 + 307) = v25 + 2448;
    *((_QWORD *)v25 + 306) = v25 + 2448;
    v25[2170] = a4;
    v25[2168] = a5;
    v25[2169] = a6;
    *((_QWORD *)v25 + 283) = 0LL;
    *((_QWORD *)v25 + 321) = 0LL;
    *((_QWORD *)v25 + 320) = 0LL;
    *((_QWORD *)v25 + 323) = 0LL;
    *((_QWORD *)v25 + 322) = 0LL;
    if ( (v19 & 0x400) != 0 )
      *((_DWORD *)v25 + 543) |= 1u;
    v147 = 32;
    if ( (v128 & 0x8000) != 0 )
      *((_DWORD *)v25 + 543) |= 0x20u;
    if ( v24 )
    {
      *((_DWORD *)v25 + 543) |= 0x80u;
      v26 = &v25[v24];
      *((_QWORD *)v25 + 297) = v26;
      *((_QWORD *)v25 + 298) = &v26[8 * (unsigned int)v143];
    }
    v27 = a10;
    if ( (a10 & 1) != 0 )
      *((_DWORD *)v25 + 543) |= 0x1000u;
    if ( (v27 & 4) != 0 )
      *((_DWORD *)v25 + 543) |= 0x800000u;
    if ( (v27 & 8) != 0 )
      *((_DWORD *)v25 + 543) |= 0x8000000u;
    v28 = v128;
    v29 = 512;
    Flink = (__int64)v150[1].Header.WaitListHead.Flink | 2;
    if ( (v128 & 0x200) != 0 )
      Flink = (__int64)v150[1].Header.WaitListHead.Flink;
    *((_QWORD *)v25 + 169) = Flink;
    if ( (v19 & 0x200) != 0 )
      *((_QWORD *)v25 + 279) = &v25[v153];
    if ( (v19 & 0x2000) != 0 )
    {
      v31 = &v25[NumberOfBytes_4];
      *((_QWORD *)v25 + 285) = v31;
      PoEnergyContextInitialize(v31);
    }
    if ( v18 && (v29 & *(_DWORD *)(v18 + 4)) != 0 )
    {
      v32 = *(_DWORD *)(v18 + 316);
      v33 = Process;
    }
    else
    {
      v33 = Process;
      if ( Process )
        v32 = Process[1].ActiveProcessors.Bitmap[9];
      else
        v32 = 5;
    }
    v177[1] = (__int64)(v25 + 1528);
    *((_DWORD *)v25 + 382) = v32;
    *((_DWORD *)v25 + 501) = 259;
    if ( v33 )
    {
      v34 = (HIDWORD(v33[1].DirectoryTableBase) >> 27) & 7;
      DefaultPagePriority = (LODWORD(v33[1].DirectoryTableBase) >> 12) & 7;
      *((_QWORD *)v25 + 168) = v33[1].Header.WaitListHead.Flink;
    }
    else
    {
      DefaultPagePriority = MmGetDefaultPagePriority();
    }
    v143 = (volatile signed __int32 *)(v25 + 1124);
    *((_DWORD *)v25 + 281) = *((_DWORD *)v25 + 281) & 0xC7FFFFFF | (v34 << 27);
    v153 = (__int64)(v25 + 1120);
    *((_DWORD *)v25 + 280) = (DefaultPagePriority << 12) | *((_DWORD *)v25 + 280) & 0xFFFF8FFF;
    if ( v167 )
    {
      if ( !PsReferencePartitionSafe((__int64)v167) )
      {
        SectionInformation = -1073740640;
LABEL_176:
        PspRundownSingleProcess((__int64)v25, 0);
        ObfDereferenceObjectWithTag(v25, 0x72437350u);
LABEL_177:
        if ( P )
          ExFreePoolWithTag(P, 0x73437350u);
        SeDeleteCodeIntegrityOriginClaimMembers();
        return (unsigned int)SectionInformation;
      }
    }
    else
    {
      v167 = PspSystemPartition;
      PsReferencePartition((__int64)PspSystemPartition);
    }
    *((_QWORD *)v25 + 315) = v36;
    if ( !v37 )
    {
      v152 = v151;
      if ( v151 )
      {
        if ( (v128 & 0x1000) != 0 )
        {
LABEL_57:
          SectionInformation = -1073741776;
          goto LABEL_176;
        }
        ObfReferenceObject(v151);
      }
      else if ( v33 )
      {
        if ( a12 )
          goto LABEL_57;
        if ( PsIsSystemProcess((__int64)v33) )
        {
          SectionInformation = -1073741811;
          goto LABEL_176;
        }
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&v33[1].ProfileListHead.Blink) )
        {
          v39 = (void *)v33[1].Affinity.Bitmap[17];
          v151 = v39;
          if ( v39 )
            ObfReferenceObject(v39);
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v33[1].ProfileListHead.Blink);
        }
        if ( !v151 )
        {
          SectionInformation = -1073741558;
          goto LABEL_176;
        }
        v40 = v33[1].AffinityPadding[10];
        if ( v40 )
        {
          v19 |= 0x4000u;
          v135 = *(unsigned __int16 *)(v40 + 8);
          HIDWORD(TokenInformation) = *(_DWORD *)(v40 + 12);
        }
        if ( (v33[1].DirectoryTableBase & 0x2000000000000LL) != 0 )
        {
          v128 |= 8u;
          a9 = v28 | 8;
        }
      }
    }
    v171 = (unsigned __int64 *)(v25 + 1304);
    v41 = v151;
    *((_QWORD *)v25 + 163) = v151;
    LOWORD(NumberOfBytes_4) = 0;
    if ( v18 )
    {
      *((_QWORD *)v25 + 270) = *(_QWORD *)(v18 + 464);
      SectionInformation = MmGetSectionInformation((__int64)v41, 4, v18 + 48);
      if ( SectionInformation < 0 )
        goto LABEL_176;
      v42 = *(_BYTE *)(v18 + 99);
      v43 = v19 | (32
                 * (v42 & 4 | (4
                             * (v42 & 2 | ((*(_DWORD *)(v18 + 112) & 1 | (2
                                                                        * (*(_DWORD *)(v18 + 112) & 2 | (2 * (*(_DWORD *)(v18 + 112) & 0xF8))))) << 11)))));
      v149 = *(unsigned __int16 *)(v18 + 86);
      v148 = *(unsigned __int16 *)(v18 + 84);
      v44 = *(_WORD *)(v18 + 96);
      if ( (v43 & 0x100) != 0 && v44 == 332 && (v42 & 1) != 0 )
        v45 = 0x8000;
      else
        v45 = 0;
      v19 = v45 | v43;
      EquivalentMachineCHPE = RtlWow64GetEquivalentMachineCHPE(v44);
      v47 = EquivalentMachineCHPE;
      if ( (*(_WORD *)(v18 + 92) & *(_WORD *)(v18 + 10)) != 0 )
      {
        v48 = 3;
LABEL_82:
        SectionInformation = -1073741701;
LABEL_83:
        PspUpdateCreateInfo(v48, v18, 0LL);
        goto LABEL_176;
      }
      if ( (v19 & 0x8000) == 0 )
      {
        if ( (unsigned int)PsWow64IsMachineSupported(EquivalentMachineCHPE) )
        {
          v19 |= 0x4000u;
          LOWORD(v135) = v47;
        }
        if ( (v19 & 0x8000) == 0
          && (v47 < MEMORY[0xFFFFF7800000002C] || v47 > MEMORY[0xFFFFF7800000002E])
          && (v19 & 0x4000) == 0 )
        {
          v48 = 4;
          goto LABEL_82;
        }
      }
      if ( v152 )
      {
        LOWORD(NumberOfBytes_4) = *(_WORD *)(v18 + 94);
        v49 = (HANDLE *)(v18 + 192);
        v50 = RtlOpenImageFileOptionsKey((unsigned __int16 *)(v18 + 232), 0LL, (HANDLE *)(v18 + 192));
        if ( v50 < 0 )
        {
          if ( v50 == -1073741772 )
            *(_BYTE *)(v18 + 8) |= 0x40u;
          *v49 = 0LL;
        }
        ObfReferenceObjectWithTag(*(PVOID *)(v18 + 176), 0x72437350u);
        *((_QWORD *)v25 + 180) = *(_QWORD *)(v18 + 176);
        if ( (v19 & 0x4000) != 0 )
        {
          v51 = v128;
        }
        else
        {
          SectionInformation = PspDetectComplusILImage(v18, &a9);
          if ( SectionInformation < 0 )
            goto LABEL_176;
          v51 = a9;
          LOWORD(v128) = a9;
          if ( v47 == 332 && (a9 & 8) == 0 )
          {
            if ( (unsigned int)PsWow64IsMachineSupported(332) )
            {
              v135 = 332;
LABEL_105:
              v19 |= 0x4000u;
              goto LABEL_108;
            }
            if ( (unsigned int)PsWow64IsMachineSupported(452) )
            {
              LOWORD(v135) = 452;
              goto LABEL_105;
            }
            v51 |= 8u;
            LOWORD(v128) = v51;
            a9 = v51;
          }
        }
LABEL_108:
        if ( *v49 )
        {
          if ( *(char *)(v18 + 8) >= 0 )
          {
            v52 = RtlQueryImageFileKeyOption(*v49, L"Debugger", 1, &v137, 2u, &NumberOfBytes);
            if ( v52 == -2147483643 || v52 >= 0 && NumberOfBytes == 2 && (_WORD)v137 )
            {
              SectionInformation = -1073741767;
              v48 = 5;
              goto LABEL_83;
            }
          }
          v138 = 0;
          if ( RtlQueryImageFileKeyOption(*v49, L"UseLargePages", 4, &v138, 4u, 0LL) >= 0 )
          {
            if ( v138 )
            {
              v51 |= 0x10u;
              LOWORD(v128) = v51;
              a9 = v51;
              if ( (v19 & 0x4000) == 0 )
              {
                ObjectAttributes.Length = 48;
                ObjectAttributes.RootDirectory = *v49;
                ObjectAttributes.Attributes = 576;
                ObjectAttributes.ObjectName = (PUNICODE_STRING)&PspLargePageDLLKeyName;
                *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                if ( ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes) >= 0 )
                {
                  v138 = 0;
                  if ( RtlQueryImageFileKeyOption(KeyHandle, L"ntdll.dll", 4, &v138, 4u, 0LL) >= 0 && v138 )
                  {
                    v51 |= 0x20u;
                    LOWORD(v128) = v51;
                    a9 = v51;
                  }
                  ObCloseHandle(KeyHandle, 0);
                }
              }
            }
          }
          if ( !v159 )
          {
            PspReadIFEONodeOptions((__int64)v25, *v49);
            v166 = v141;
          }
          v154 = 0;
          if ( RtlQueryImageFileKeyOption(*v49, L"ForceWakeCharge", 4, &v154, 4u, 0LL) >= 0 && v154 )
            v136 |= 0x40u;
          if ( RtlQueryImageFileKeyOption(*v49, L"AllowedCpuSets", 3, 0LL, 0, &NumberOfBytes) == -2147483643 )
          {
            v53 = NumberOfBytes;
            if ( NumberOfBytes <= 0xA0 && (NumberOfBytes & 7) == 0 )
            {
              PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, 0x73437350u);
              P = PoolWithTag;
              if ( !PoolWithTag )
              {
LABEL_132:
                SectionInformation = -1073741801;
                goto LABEL_176;
              }
              if ( RtlQueryImageFileKeyOption(*v49, L"AllowedCpuSets", 3, (ULONG *)PoolWithTag, v53, &NumberOfBytes) >= 0
                && (NumberOfBytes & 7) == 0 )
              {
                v19 |= 0x200000u;
                v140 = NumberOfBytes >> 3;
              }
            }
          }
          v181.Length = 48;
          v181.RootDirectory = *v49;
          v181.Attributes = 576;
          v181.ObjectName = (PUNICODE_STRING)&PspPerfOptionsKeyName;
          *(_OWORD *)&v181.SecurityDescriptor = 0LL;
          if ( ZwOpenKey(&Handle, 1u, &v181) >= 0 )
          {
            PspReadIFEOPerfOptions(Handle, (__int64)&v204);
            ObCloseHandle(Handle, 0);
          }
        }
LABEL_143:
        v55 = v155 | 0x20000;
        if ( (v51 & 8) == 0 )
          v55 = v155;
        if ( (v19 & 0x4000) != 0 )
        {
          v56 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x50776F57u);
          *((_QWORD *)v25 + 176) = v56;
          if ( !v56 )
            goto LABEL_132;
          v57 = HIDWORD(TokenInformation);
          v58 = v135;
          if ( !HIDWORD(TokenInformation) )
            v57 = PspWow64PickBestNtdll(v18);
          v56[4] = v58;
          *(_DWORD *)(*((_QWORD *)v25 + 176) + 12LL) = v57;
          v59 = (_QWORD *)*((_QWORD *)v25 + 176);
          if ( v59 )
            *v59 = 1LL;
        }
        SectionInformation = SeQueryInformationToken(Token, TokenIsAppContainer, &TokenInformation);
        if ( SectionInformation < 0 )
          goto LABEL_176;
        v60 = 0;
        v61 = a2;
        if ( a2 )
        {
          if ( v18 && (*(_DWORD *)(v18 + 4) & 0x100) != 0 && *(_BYTE *)(v18 + 248) == 4 )
          {
            v208[0] = 14;
            v60 = 1;
          }
          if ( a12 )
            v208[v60++] = 3;
          v62 = v128;
          if ( (v128 & 0x30) != 0 )
            v208[v60++] = 4;
          if ( (v128 & 0x80u) != 0 && !(unsigned int)MmIsSessionLeaderProcess(v150) )
            v208[v60++] = 10;
          if ( (v128 & 0x8400) != 0 )
            v208[v60++] = 7;
          if ( v60 )
          {
            v63 = (int)RtlAcquirePrivilege(v208, v60, a12 != 0, &v169) < 0;
            v61 = a2;
            if ( !v63 )
              v19 |= 0x10u;
          }
          else
          {
            v61 = a2;
          }
        }
        else
        {
          v62 = v128;
        }
        if ( (v62 & 0x8400) != 0 && !SeSinglePrivilegeCheck(SeTcbPrivilege, v61) )
          goto LABEL_173;
        if ( v159 )
        {
          KeQueryAffinityProcess(v159, v206, 0LL, (__int64)v209);
          KeFirstGroupAffinityEx((__int64)&v161, v206);
          v141 = KeNodeBlock[(unsigned __int16)v209[WORD4(v161)]];
        }
        else
        {
          if ( v166 )
          {
            v64 = *(_WORD *)(v166 + 144);
          }
          else if ( Process )
          {
            if ( (Process[1].DirectoryTableBase & 0x100000) != 0 )
            {
              v136 |= 0x100000u;
              v141 = KeNodeBlock[Process->IdealGlobalNode];
              v64 = *(_WORD *)(v141 + 144);
            }
            else
            {
              v141 = PspSelectNodeForProcess();
              v64 = *(_WORD *)(v141 + 144);
              if ( KeForceGroupAwareness && KeQueryActiveGroupCount() > 1u && !v64 )
              {
                v141 = 0LL;
                v64 = 1;
              }
            }
          }
          else
          {
            v64 = 0;
          }
          WORD4(v161) = v64;
          *(_QWORD *)&v161 = qword_140CFC848[v64];
          if ( !v141 )
            v141 = KeSelectNodeForAffinity((__int64)&v161);
          LOBYTE(v128) = a9;
          v25 = (char *)Object;
        }
        v65 = v143;
        *v143 |= v55;
        *(_DWORD *)v153 |= v136;
        v66 = Process;
        if ( Process )
        {
          DmaAdapter = 0LL;
          v67 = 0;
          SessionId = 0;
          v68 = 0;
          v129 = 0;
          if ( a12 )
          {
            if ( SeSinglePrivilegeCheck(SeAssignPrimaryTokenPrivilege, a2) )
              v19 |= 4u;
            SectionInformation = SeIsTokenAssignableToProcess(Token, &v129);
            if ( SectionInformation < 0 )
              goto LABEL_174;
            v69 = (v19 >> 2) & 1;
            v68 = v129;
            if ( !v129 && !v69 )
              goto LABEL_173;
            SectionInformation = SeQuerySessionIdToken(Token, &SessionId);
            if ( SectionInformation < 0 )
              goto LABEL_174;
            v70 = MmGetSessionIdEx((__int64)v150);
            v67 = SessionId;
            if ( SessionId != v70 )
            {
              if ( !v69 )
              {
LABEL_173:
                SectionInformation = -1073741727;
                goto LABEL_174;
              }
              if ( (v128 & 0x80u) != 0 )
              {
                SectionInformation = -1073741811;
                goto LABEL_174;
              }
              v19 |= 1u;
            }
          }
          else if ( !v152 )
          {
            v67 = MmGetSessionIdEx((__int64)Process);
            SessionId = v67;
            v19 |= v67 != (unsigned int)MmGetSessionIdEx((__int64)v150);
          }
          if ( (v19 & 1) != 0 )
          {
            SectionInformation = PspAttachSession(v67, (__int64)&ApcState, (_KPROCESS **)&DmaAdapter);
            if ( SectionInformation < 0 )
            {
              LOBYTE(v19) = v19 & 0xFE;
              goto LABEL_174;
            }
            *(_DWORD *)v153 |= 0x80u;
          }
          if ( !a12 || v68 )
          {
            v72 = Process;
            if ( v68 )
              v72 = v150;
            PspInheritQuota((__int64)v25, (__int64)v72);
          }
          else
          {
            SectionInformation = PspAssignProcessQuotaBlock(0LL, (__int64)v25, (__int64)Token);
            if ( SectionInformation < 0 )
            {
              if ( (v19 & 1) != 0 )
                PspDetachSession(DmaAdapter, (__int64)&ApcState);
              goto LABEL_174;
            }
          }
          v73 = PspMaximumWorkingSet;
          if ( (BYTE4(v204) & 1) != 0 )
            v73 = *((_QWORD *)&v205 + 1);
          v19 |= 32
               * (MmCreateProcessAddressSpace(
                    (__int64)v167,
                    v71,
                    v73,
                    BYTE4(v204) & 1,
                    *(unsigned __int16 *)(v141 + 146) + 1,
                    (__int64)v25) & 1);
          if ( (v19 & 1) != 0 )
            PspDetachSession(DmaAdapter, (__int64)&ApcState);
          if ( (v19 & 0x20) == 0 )
            goto LABEL_228;
          v66 = Process;
          v65 = v143;
        }
        else
        {
          PspInheritQuota((__int64)v25, 0LL);
          v25[912] = 1;
          SectionInformation = MmInitializeHandBuiltProcess(v75, v74, v76, v77, *(_QWORD *)v126);
          if ( SectionInformation < 0 )
            goto LABEL_174;
        }
        HIDWORD(TokenInformation) = v19;
        _InterlockedOr(v65, 0x40000u);
        v25 = (char *)Object;
        SessionSchedulingGroupByProcess = MmGetSessionSchedulingGroupByProcess((__int64)Object);
        SectionInformation = KeInitializeProcess(v79, 8, (__int64 *)&v161, v141, SessionSchedulingGroupByProcess, v80);
        if ( SectionInformation < 0 )
          goto LABEL_174;
        if ( v18 )
        {
          v139 = *(_DWORD *)(v18 + 416);
          v157 = *(_DWORD *)(v18 + 420);
          Address = *(PVOID *)(v18 + 440);
          v156 = *(_DWORD *)(v18 + 448);
          v174 = *(_QWORD *)(v18 + 208);
          v81 = *(_DWORD **)(v18 + 424);
          v144 = *(_DWORD *)(v18 + 432);
          if ( *(_QWORD *)(v18 + 176) && (int)SeGetCodeIntegrityOriginClaimForFileObject() >= 0 )
          {
            if ( !v207[0] && v81 && v144 == 524 )
            {
              v82 = v207;
              v83 = 4LL;
              do
              {
                *(_OWORD *)v82 = *(_OWORD *)v81;
                *((_OWORD *)v82 + 1) = *((_OWORD *)v81 + 1);
                *((_OWORD *)v82 + 2) = *((_OWORD *)v81 + 2);
                *((_OWORD *)v82 + 3) = *((_OWORD *)v81 + 3);
                *((_OWORD *)v82 + 4) = *((_OWORD *)v81 + 4);
                *((_OWORD *)v82 + 5) = *((_OWORD *)v81 + 5);
                *((_OWORD *)v82 + 6) = *((_OWORD *)v81 + 6);
                v82 += 32;
                *((_OWORD *)v82 - 1) = *((_OWORD *)v81 + 7);
                v81 += 32;
                --v83;
              }
              while ( v83 );
              *(_QWORD *)v82 = *(_QWORD *)v81;
              v82[2] = v81[2];
            }
            v81 = v207;
            v144 = 536;
          }
        }
        else
        {
          v81 = 0LL;
        }
        SectionInformation = PspInitializeProcessSecurity(
                               v66,
                               (__int64)v25,
                               (__int64)Token,
                               a12,
                               v139,
                               (v19 >> 11) & 1,
                               (v19 >> 12) & 1,
                               v157,
                               (__int64)v81,
                               v144,
                               (__int64)Address,
                               v156,
                               v174,
                               (_DWORD *)v178);
        if ( SectionInformation < 0 )
          goto LABEL_174;
        v25[1463] = 2;
        if ( v66 )
        {
          v84 = v25[1463];
          if ( ((HIBYTE(v66[1].ActiveProcessors.Bitmap[0]) - 1) & 0xFB) == 0 )
            v84 = HIBYTE(v66[1].ActiveProcessors.Bitmap[0]);
          v25[1463] = v84;
          v85 = v18 ? *(_BYTE **)(v18 + 296) : 0LL;
          v86 = v18 ? *(_DWORD *)(v18 + 292) : 0;
          inited = ObInitProcess(
                     (struct _EX_RUNDOWN_REF *)((unsigned __int64)v66 & -(__int64)((a9 & 4) != 0)),
                     (_KPROCESS *)v25,
                     v86,
                     v85);
        }
        else
        {
          *((_QWORD *)v25 + 174) = v150[1].AffinityPadding[8];
          inited = MmInitializeHandBuiltProcess2((ULONG_PTR)v25);
        }
        SectionInformation = inited;
        if ( inited < 0 )
          goto LABEL_174;
        if ( (v204 & 7) != 0 )
          PspApplyIFEOPerfOptions((__int64)v25, (unsigned int *)&v204, a2, v88);
        if ( (v19 & 0x200000) != 0 )
          KeSetCpuSetsProcess((__int64)v25, v140, (char *)P);
        if ( v18 )
        {
          if ( (*(_DWORD *)(v18 + 4) & 0x100) != 0 )
          {
            LOBYTE(v88) = a2;
            SectionInformation = PspSetProcessPriorityClass((__int64)v25, *(_BYTE *)(v18 + 248), 0LL, v88);
            if ( SectionInformation < 0 )
              goto LABEL_174;
          }
        }
        v25[640] = PspComputeQuantumAndPriority((_DWORD)v25, 0, (unsigned int)&v130, 0, 0LL);
        v25[641] = v130;
        SectionInformation = 0;
        v139 = 0;
        PspReadIFEOMitigationOptions(v18, &v199);
        v184 = v199;
        v185 = v200;
        v186 = PspSystemMitigationOptions;
        v187 = qword_140CFC9E0;
        PspInheritMitigationOptions(&v186, &v184, &v199);
        PspReadIFEOMitigationAuditOptions(v18, &v201);
        v188 = v201;
        v189 = v202;
        v190 = PspSystemMitigationAuditOptions;
        v191 = qword_140CFCB80;
        PspInheritMitigationAuditOptions(&v190, &v188, &v201);
        v89 = (HIWORD(v199.m128i_i64[0]) & 3) << 16;
        if ( v18 )
        {
          if ( (*(_DWORD *)(v18 + 4) & 0x10000) != 0 )
          {
            v192 = *(_OWORD *)(v18 + 360);
            v193 = *(_QWORD *)(v18 + 376);
            v194 = v199;
            v195 = v200;
            PspInheritMitigationOptions(&v194, &v192, &v199);
          }
          if ( (*(_DWORD *)(v18 + 4) & 0x8000000) != 0 )
          {
            v182 = *(_OWORD *)(v18 + 488);
            v183 = *(_QWORD *)(v18 + 504);
            v196 = v201;
            v197 = v202;
            PspInheritMitigationAuditOptions(&v196, &v182, &v201);
          }
        }
        if ( (_DWORD)TokenInformation )
          LOWORD(v89) = v89 | 4;
        v90 = v89 | 0x100;
        if ( (v89 & 4) == 0 )
          v90 = v89;
        if ( (v90 & 0xFF00) != 0 )
          PspHardenMitigationOptions(&v199);
        if ( !KeIsUserCetAllowed() )
          v199.m128i_i64[1] = v199.m128i_i64[1] & 0xCFFFFFFFFFFFFFFFuLL | 0x2000000000000000LL;
        if ( (NumberOfBytes_4 & 0x4000) == 0 || (v19 & 0x40000) == 0 )
          v147 = 0;
        v92 = v91 | ((NumberOfBytes_4 & 0x4000) != 0 ? 8 : 0) | ((unsigned __int16)NumberOfBytes_4 >> 4) & 2 | ((v19 & 0x180) != 0) | v147 | ((v19 & 0x100000 | (v19 >> 1) & 0x7C00000) >> 2);
        LODWORD(v143) = v19 & 0x400;
        if ( (v19 & 0x400) != 0 )
        {
          v199.m128i_i64[1] = v199.m128i_i64[1] & 0xCFFFFFFFFFFFFFFCuLL | 0x2000000000000002LL;
          if ( (a10 & 2) != 0 )
            v93 = v199.m128i_i64[0] & 0xFFFFFCFFFFCCFFFFuLL | 0x20000220000LL;
          else
            v93 = v199.m128i_i64[0] & 0xFFFFFCFFFFCCFFFFuLL | 0x20000110000LL;
          v199.m128i_i64[0] = v93;
        }
        if ( !v152 && Process && (HIDWORD(Process[2].ReadyListHead.Blink) & 0x4000) == 0 )
          v199.m128i_i64[1] = v199.m128i_i64[1] & 0xCFFFFFFFFFFFFFFFuLL | 0x2000000000000000LL;
        ProcessServerSilo = PsGetProcessServerSilo((__int64)v25);
        if ( !PsIsHostSilo(ProcessServerSilo) )
          v199.m128i_i64[1] = v199.m128i_i64[1] & 0xCFFFFFFFFFFFFFFFuLL | 0x2000000000000000LL;
        if ( (v19 & 0x4000) != 0 )
          v199.m128i_i64[1] = v199.m128i_i64[1] & 0xCFFFFFFFFFFFFFFFuLL | 0x2000000000000000LL;
        v95 = Process;
        PspApplyMitigationOptions((_DWORD)v25, (_DWORD)Process, (unsigned int)&v199, (unsigned int)&v201, v92);
        if ( v18 )
        {
          PspApplyWin32kFilterOptions((__int64)v25, v18);
          PspApplyComponentFilterOptions(v97, v96);
          *(__m128i *)(v18 + 360) = v199;
          *(_QWORD *)(v18 + 376) = v200;
          *(_OWORD *)(v18 + 488) = v201;
          *(_QWORD *)(v18 + 504) = v202;
        }
        PsQueryProcessAttributes((struct _KPROCESS *)v25, 0LL, (__int64)v131);
        v98 = ((_DWORD)TokenInformation != 0) | 2u;
        if ( (a9 & 0x20000) == 0 )
          v98 = (_DWORD)TokenInformation != 0;
        SmProcessCreateNotification(v25, v98);
        if ( v95 && v95 != PsInitialSystemProcess && (HIDWORD(v95[2].Header.WaitListHead.Flink) & 0x2000000) != 0 )
          *((_DWORD *)v25 + 543) |= 0x2000000u;
        if ( (a9 & 0x80u) != 0
          && !(unsigned int)MmIsSessionLeaderProcess(v150)
          && !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, a2) )
        {
          goto LABEL_173;
        }
        v99 = (int)v143;
        if ( (_DWORD)v143 || v152 )
        {
          SectionInformation = PspInitializeFullProcessImageName(v18, v25);
          if ( SectionInformation >= 0 )
          {
            if ( (v19 & 0x10000) != 0 )
            {
              v103 = MmInitializeProcessAddressSpace((ULONG_PTR)v25, (v19 >> 17) & 1);
              v102 = v151;
            }
            else
            {
              v102 = v151;
              v103 = MmInitializeProcessAddressSpace((ULONG_PTR)v25, 0);
            }
            SectionInformation = v103;
            if ( v103 >= 0 )
            {
              if ( v18 )
              {
                ImageSectionBasedAddress = MmGetImageSectionBasedAddress(v102);
                v105 = *((_QWORD *)v25 + 164);
                if ( ImageSectionBasedAddress != v105 )
                  *(_QWORD *)(v18 + 48) += v105 - ImageSectionBasedAddress;
              }
              v139 = SectionInformation;
              if ( !v99 )
                LOWORD(v19) = v19 | 2;
              LOWORD(v19) = (4 * (a9 & 0x10 | 2)) | v19;
              goto LABEL_321;
            }
          }
        }
        else
        {
          if ( !v95 )
            goto LABEL_321;
          *((_QWORD *)v25 + 164) = v95[1].Affinity.Bitmap[18];
          SectionInformation = MmInitializeProcessAddressSpace((ULONG_PTR)v25, (v19 >> 11) & 1);
          if ( SectionInformation >= 0 )
          {
            LOWORD(v19) = WORD2(TokenInformation) | (4 * (a9 & 0x10)) | 2;
            v100 = *(unsigned __int16 *)(v95[1].ActiveProcessors.Bitmap[2] + 2);
            v101 = ExAllocatePoolWithTag(NonPagedPoolNx, v100 + 16, 0x61506553u);
            *((_QWORD *)v25 + 184) = v101;
            if ( !v101 )
            {
LABEL_228:
              SectionInformation = -1073741670;
              goto LABEL_174;
            }
            memmove(v101, (const void *)v95[1].ActiveProcessors.Bitmap[2], v100 + 16);
            *(_QWORD *)(*((_QWORD *)v25 + 184) + 8LL) = *((_QWORD *)v25 + 184) + 16LL;
            *((_DWORD *)v25 + 330) = v95[1].Affinity.Bitmap[19];
            if ( (a9 & 0x1000) != 0 )
            {
              *v171 = 0LL;
              HalPutDmaAdapter((PADAPTER_OBJECT)v151);
            }
LABEL_321:
            if ( (v19 & 0x10) != 0 )
              RtlReleasePrivilege(v169);
            if ( (unsigned __int16)PsWow64GetProcessMachine((__int64)v25) == 332 )
              *((_DWORD *)v25 + 158) |= 1u;
            v140 = v19 & 8;
            if ( (v19 & 8) != 0 )
            {
              if ( v18 )
              {
                SectionInformation = PspSetupReservedUserMappings(
                                       (_KPROCESS *)v25,
                                       (__int64)&ApcState,
                                       (_QWORD *)v18,
                                       v106);
                if ( SectionInformation < 0 )
                  goto LABEL_176;
              }
            }
            LODWORD(v143) = v19 & 2;
            if ( (v19 & 2) != 0 )
            {
              *(_QWORD *)&v173 = 0LL;
              *((_QWORD *)&v173 + 1) = -1LL;
              IsProtectedProcess = PsIsProtectedProcess((__int64)v25);
              IsProtectedProcessLight = PsIsProtectedProcessLight((__int64)v25);
              v109 = BYTE3(v173) & 0x88 | ((v19 & 0x40) != 0) | (2
                                                               * (IsProtectedProcess | (2
                                                                                      * ((16 * IsProtectedProcessLight) | ((v19 & 0x80) != 0))))) & 0xCF | (16 * (((_DWORD)TokenInformation != 0 ? 2 : 0) | v131[0] & 1));
              BYTE3(v173) = v109;
              if ( v152 )
              {
                SectionInformation = MmCreatePeb(v25, (__int64)&v173, (_QWORD *)v25 + 170, (__int64)&v161);
                if ( SectionInformation < 0 )
                {
                  *((_QWORD *)v25 + 170) = 0LL;
                  goto LABEL_176;
                }
                if ( (_QWORD)v161 )
                {
                  _InterlockedAnd((volatile signed __int32 *)v153, 0xFFCFFFFF);
                  v25 = (char *)Object;
                  PspSetProcessAffinitySafe((_DWORD)Object, 1, 0, (unsigned int)&v161, (__int64)&v164);
                }
              }
              else
              {
                v110 = Process;
                Address = (PVOID)Process[1].AffinityPadding[4];
                *((_QWORD *)v25 + 170) = Address;
                if ( (v19 & 0x800) != 0 )
                {
LABEL_347:
                  if ( (v19 & 8) != 0 && v18 )
                  {
                    SectionInformation = PspSetupUserProcessAddressSpace(
                                           (__int64)v110,
                                           (_KPROCESS *)v25,
                                           (__int64)&ApcState,
                                           v18);
                  }
                  else if ( (_DWORD)v143 && (v19 & 0x800) == 0 )
                  {
                    SectionInformation = 0;
                    KeStackAttachProcess((PRKPROCESS)v25, &ApcState);
                    v113 = CurrentThread;
                    PspWritePebAffinityInfo((__int64)CurrentThread, (__int64)v25, v115, v116);
                    if ( (v19 & 8) != 0 )
                    {
                      SectionInformation = MmMapApiSetView((__int64)v25);
                      if ( SectionInformation >= 0 )
                      {
                        SectionInformation = PspMapSiloSharedDataView((__int64)v25);
                        if ( SectionInformation >= 0 )
                        {
                          SectionInformation = PspPrepareSystemDllInitBlock(0LL, 0LL, v117);
                          if ( SectionInformation >= 0 )
                          {
                            if ( *((_QWORD *)v25 + 176) )
                            {
                              ProcessNtdllType = PsWow64GetProcessNtdllType((__int64)v25);
                              SectionInformation = PspPrepareSystemDllInitBlock(ProcessNtdllType, 0LL, v119);
                            }
                          }
                        }
                      }
                    }
                    KeUnstackDetachProcess(&ApcState);
LABEL_351:
                    MmNewProcessInitialized(v25);
                    if ( SectionInformation < 0 )
                      goto LABEL_176;
                    PspLockProcessExclusive((__int64)v25, (__int64)v113);
                    v114 = ExCreateHandle(PspCidTable, v25);
                    *((_QWORD *)v25 + 136) = v114;
                    if ( !v114 )
                    {
                      PspUnlockProcessExclusive((__int64)v25, (__int64)v113);
                      SectionInformation = -1073741670;
                      goto LABEL_176;
                    }
                    if ( (v19 & 0x1000) != 0 )
                    {
                      SectionInformation = MmGetSectionStrongImageReference(0LL, 0LL, *((_QWORD *)v25 + 163), v177);
                      v120 = (__int64)v25;
                      if ( SectionInformation < 0 )
                      {
LABEL_365:
                        PspUnlockProcessExclusive(v120, (__int64)v113);
                        goto LABEL_176;
                      }
                      SectionInformation = KeSecureProcess(
                                             (_KPROCESS *)v25,
                                             **(_QWORD **)(v18 + 392),
                                             *((_QWORD *)v25 + 170),
                                             *((_DWORD **)v25 + 136),
                                             v177[0],
                                             *((_QWORD *)v25 + 164),
                                             *(struct _MDL **)(v18 + 392),
                                             *(unsigned int *)(v18 + 408));
                      if ( SectionInformation < 0 )
                      {
                        v120 = (__int64)v25;
                        goto LABEL_365;
                      }
                    }
                    if ( KeQuerySystemTimeUnsafe() )
                    {
                      KeQuerySystemTimePrecise((__int64 *)v25 + 141, v121, v122, v123);
                    }
                    else
                    {
                      v25 = (char *)Object;
                      *((_QWORD *)Object + 141) = MEMORY[0xFFFFF78000000014];
                    }
                    *((_QWORD *)v25 + 288) = MEMORY[0xFFFFF78000000008];
                    UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
                    v125 = Object;
                    *((_QWORD *)Object + 289) = UnbiasedInterruptTime;
                    v125[291] = *((_QWORD *)v25 + 288);
                    *v179 = v125;
                    SectionInformation = v139;
                    goto LABEL_177;
                  }
                  v113 = CurrentThread;
                  goto LABEL_351;
                }
                LOBYTE(v173) = 1;
                KeStackAttachProcess((PRKPROCESS)v25, &ApcState);
                if ( MmSecureVirtualMemory(Address, 0x7C8uLL, 4u) )
                  *(_OWORD *)Address = v173;
                else
                  SectionInformation = -1073741503;
                if ( SectionInformation >= 0 )
                {
                  v111 = *((_QWORD *)v25 + 176);
                  if ( v111 )
                  {
                    v112 = *(_WORD *)(v111 + 8);
                    if ( v112 == 332 || v112 == 452 )
                    {
                      v171 = *(unsigned __int64 **)v111;
                      if ( MmSecureVirtualMemory(v171, 0x480uLL, 4u) )
                      {
                        v162 = 0xFFFFFFFF00000001uLL;
                        BYTE3(v162) = v109;
                        *v171 = v162;
                      }
                      else
                      {
                        SectionInformation = -1073741503;
                      }
                    }
                  }
                }
                KeUnstackDetachProcess(&ApcState);
                if ( SectionInformation < 0 )
                  goto LABEL_176;
              }
            }
            v110 = Process;
            goto LABEL_347;
          }
        }
LABEL_174:
        if ( (v19 & 0x10) != 0 )
          RtlReleasePrivilege(v169);
        goto LABEL_176;
      }
    }
    else if ( v41 )
    {
      SectionInformation = MmGetSectionInformation((__int64)v41, 4, (__int64)v198);
      if ( SectionInformation < 0 )
        goto LABEL_176;
      v19 |= 32
           * (HIBYTE(v198[12]) & 4 | (4
                                    * (HIBYTE(v198[12]) & 2 | ((v198[16] & 1 | (2
                                                                              * (v198[16] & 2 | (2 * (v198[16] & 0xF8))))) << 11))));
      LOWORD(NumberOfBytes_4) = HIWORD(v198[11]);
      v149 = HIWORD(v198[9]);
      v148 = LOWORD(v198[9]);
      if ( !v152 )
      {
        v155 = 8;
        v19 |= 0x800u;
      }
    }
    LOBYTE(v51) = v128;
    goto LABEL_143;
  }
  return result;
}
